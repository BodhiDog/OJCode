#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Edge
{
	int to, len;
};
vector<Edge> son[R];
int dis[R];
void dfs(int x, int fa)
{
	int to;
	for (Edge y : son[x])
	{
		to = y.to;
		if (to != fa)
		{
			dis[to] = dis[x] ^ y.len;
			dfs(to, x);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, x, y, len;
	cin >> n;
	for (i = 1; i < n; ++i)
	{
		cin >> x >> y >> len;
		son[x].push_back({y, len});
		son[y].push_back({x, len});
	}
	dfs(1, 0);
	cin >> m;
	while (m--)
	{
		cin >> x >> y;
		cout << (dis[x] ^ dis[y]) << '\n';
	}
	return 0;
}
