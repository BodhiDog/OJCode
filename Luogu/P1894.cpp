#include <bits/stdc++.h>
using namespace std;

const int R = 210;
vector<int> son[R];
int r[R], vis[R];
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
	int n, m, i, j, e, y;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> e;
		while (e--)
		{
			cin >> y;
			son[i].push_back(y);
		}
	}
	int ans = 0;
	for (i = 1; i <= n; ++i)
	{
		ans += dfs(i, i);
	}
	cout << ans << '\n';
	return 0;
}
