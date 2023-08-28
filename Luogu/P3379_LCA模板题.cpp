// 树链剖分
#include <bits/stdc++.h>
using namespace std;

const int R = 5e5 + 10;
struct Edge
{
	int to, next;
} e[R * 2];
int head[R * 2], ecnt, sz[R], son[R], top[R], dep[R], fa[R], tme;
void add(int x, int y)
{
	e[++ecnt] = {.to = y, .next = head[x]};
	head[x] = ecnt;
}
void dfs1(int x, int f)
{
	dep[x] = dep[f] + 1;
	fa[x] = f;
	sz[x] = 1;
	for (int i = head[x], to, maxsz = -1; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != f)
		{
			dfs1(to, x);
			sz[x] += sz[to];
			if (maxsz < sz[to])
			{
				maxsz = sz[to];
				son[x] = to;
			}
		}
	}
}
void dfs2(int x, int s)
{
	top[x] = s;
	if (!son[x])
		return;
	dfs2(son[x], s);
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != fa[x] && to != son[x])
			dfs2(to, to);
	}
}
int lca(int x, int y)
{
	while (top[x] != top[y])
	{
		if (dep[top[x]] < dep[top[y]])
			swap(x, y);
		x = fa[top[x]];
	}
	return dep[x] > dep[y] ? y : x;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, s, x, y;
	cin >> n >> m >> s;
	for (int j = 1; j < n; ++j)
	{
		cin >> x >> y;
		add(x, y), add(y, x);
	}
	dfs1(s, 0);
	dfs2(s, s);
	while (m--)
	{
		cin >> x >> y;
		cout << lca(x, y) << '\n';
	}
	return 0;
}

// 倍增
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