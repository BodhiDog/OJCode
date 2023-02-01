#include <bits/stdc++.h>
using namespace std;

const int R = 5e5 + 10, K = 20;
vector<int> v[R];
int dep[R], f[R][K], log2_[R];
void dfs(int x, int fa)
{
	dep[x] = dep[fa] + 1;
	f[x][0] = fa;
	int sz = v[x].size(), to;
	for (register int j = 0; j < sz; ++j)
	{
		to = v[x][j];
		if (to != fa)
		{
			dfs(to, x);
		}
	}
}
inline int lca(int x, int y)
{
	if (dep[x] < dep[y])
	{
		swap(x, y); // 保证x的深度>大于y的深度
	}
	while (dep[x] > dep[y])
	{
		x = f[x][log2_[dep[x] - dep[y]]];
	}
	if (x == y)
	{
		return x;
	}
	for (register int j = K - 1; j >= 0; --j)
	{
		if (f[x][j] != f[y][j])
		{
			x = f[x][j];
			y = f[y][j];
		}
	}
	return f[x][0];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, root, x, y;
	register int i, j;
	cin >> n >> m >> root;
	for (j = 2; j <= n; ++j)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(root, 0);
	log2_[1] = 0;
	for (j = 2; j <= n; ++j)
	{
		log2_[j] = log2_[j / 2] + 1;
	}
	for (j = 1; j < K; ++j) // dfs时已经将j=0的情况处理过了
	{
		for (i = 1; i <= n; ++i)
		{
			f[i][j] = f[f[i][j - 1]][j - 1];
		}
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		cout << lca(x, y) << "\n";
	}
	return 0;
}