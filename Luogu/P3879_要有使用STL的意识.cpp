// 用set也可以
#include <bits/stdc++.h>
using namespace std;

map<string, vector<int>> mp;
bool cnt[10010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, i, j;
	string s;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> l;
		while (l--)
		{
			cin >> s;
			mp[s].push_back(i);
		}
	}
	cin >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> s;
		memset(cnt, 0, sizeof(cnt));
		for (int x : mp[s])
		{
			if (!cnt[x])
			{
				cout << x << ' ';
				cnt[x] = true;
			}
		}
		cout << '\n';
	}
	return 0;
}
