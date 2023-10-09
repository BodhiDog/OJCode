#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R =  5e5 + 10;
struct Judge
{
	int id;
	ll tme;
	bool operator<(const Judge &oth) const
	{
		if (tme == oth.tme)
		{
			return id > oth.id;
		}
		else
		{
			return tme > oth.tme;
		}
	}
};
priority_queue<Judge> q;
vector<ll> ans[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j;
	ll t;
	Judge temp;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		q.push({i, 0});
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> t;
		temp = q.top();
		q.pop();
		temp.tme += t;
		ans[temp.id].push_back(i);
		q.push(temp);
	}
	for (i = 1; i <= n; ++i)
	{
		if (ans[i].empty())
		{
			cout << "0\n";
		}
		else
		{
			sort(ans[i].begin(), ans[i].end());
			for (ll x : ans[i])
			{
				cout << x << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}
