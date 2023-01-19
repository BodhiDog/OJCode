#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
int fa[R][17], dep[R], lg[R], tot[R], ans;
vector<int> v[R];
void dfs(int x, int f)
{
	fa[x][0] = f;
	dep[x] = dep[f] + 1;
	for (int j = 0; j < v[x].size(); ++j)
		if (v[x][j] != f)
		{
			dfs(v[x][j], x);
			tot[x] += tot[v[x][j]];
		}
	ans = (ans > tot[x] ? ans : tot[x]);
}
int lca(int x, int y)
{
	if (dep[x] < dep[y])
		x ^= y, y ^= x, x ^= y; // swap
	while (dep[x] != dep[y])
		x = fa[x][lg[dep[x] - dep[y]]];
	if (x == y)
		return y;
	for (int i = 16; i >= 0; --i)
		if (fa[x][i] != fa[y][i])
			x = fa[x][i], y = fa[y][i];
	return fa[x][0];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, x, y;
	cin >> n >> k;
	int i, j;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		v[x].push_back(y), v[y].push_back(x);
	}
	// pre
	dfs(1, 0);
	for (j = 2; j <= n; ++j)
		lg[j] = lg[j / 2] + 1;
	for (i = 1; i < 17; ++i)
		for (j = 1; j <= n; ++j)
			fa[j][i] = fa[fa[j][i - 1]][i - 1];
	// qry
	int lc;
	for (j = 1; j <= k; ++j)
	{
		cin >> x >> y;
		lc = lca(x, y);
		++tot[x], ++tot[y], --tot[lc], --tot[fa[lc][0]];
	}
	dfs(1, 0);
	cout << ans << '\n';
	return 0;
}