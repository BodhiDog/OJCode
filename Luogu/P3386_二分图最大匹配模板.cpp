// DFS
#include <bits/stdc++.h>
using namespace std;

const int R = 510;
vector<int> son[R];
int vis[R], l[R], r[R];
int dfs(int x, int turn)
{
	if (vis[x] == turn)
	{
		return 0;
	}
	vis[x] = turn;
	for (int to : son[x])
	{
		if (r[to] == 0 || dfs(r[to], turn))
		{
			r[to] = x;
			return 1;
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, e, j, x, y;
	cin >> n >> m >> e;
	for (j = 1; j <= e; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
	}
	int ans = 0;
	for (j = 1; j <= n; ++j)
	{
		ans += dfs(j, j);
	}
	cout << ans << '\n';
	return 0;
}
