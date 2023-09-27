#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> p[2];
int n;
ll m, a[45];
void dfs1(int x, ll tot)
{
	if (x == n / 2 + 1)
	{
		p[0].push_back(tot);
		return;
	}
	if (tot + a[x] <= m)
	{
		dfs1(x + 1, tot + a[x]);
	}
	dfs1(x + 1, tot);
}
void dfs2(int x, ll tot)
{
	if (x == n + 1)
	{
		p[1].push_back(tot);
		return;
	}
	if (tot + a[x] <= m)
	{
		dfs2(x + 1, tot + a[x]);
	}
	dfs2(x + 1, tot);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	dfs1(1, 0);
	dfs2(n / 2 + 1, 0);
	sort(p[0].begin(), p[0].end());
	for (ll x : p[1])
	{
		ans += upper_bound(p[0].begin(), p[0].end(), m - x) - p[0].begin();
	}
	cout << ans <<'\n';
	return 0;
}