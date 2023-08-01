#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10, M = 5e4 + 10;
struct Edge
{
	int u, v, w;
	bool operator<(const Edge &s) const { return w > s.w; }
} e[M];
struct TreeNode
{
	int fa, top, sz, dep, val, son;
} tn[N + M];
struct
{
	int fa[N + M];
	int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
} dsu;
vector<int> son[N + M];
int tot, n, m;
bool vis[N + M];
void build()
{
	int i, x, y;
	tot = n;
	for (i = 1; i <= n; ++i)
		dsu.fa[i] = i;
	sort(e + 1, e + m + 1);
	for (i = 1; i <= m; ++i)
	{
		x = dsu.find(e[i].u), y = dsu.find(e[i].v);
		if (x != y)
		{
			tn[++tot].val = e[i].w;
			dsu.fa[tot] = dsu.fa[x] = dsu.fa[y] = tot;
			son[tot].push_back(x), son[tot].push_back(y); // 单向存边即可，因为tot一定是作为旧结点的父亲的
		}
	}
}
void dfs1(int x, int f)
{
	tn[x].fa = f;
	tn[x].dep = tn[f].dep + 1;
	tn[x].sz = 1;
	vis[x] = true;
	for (int to : son[x])
	{
		dfs1(to, x);
		tn[x].sz += tn[to].sz;
		if (tn[to].sz > tn[tn[x].son].sz)
			tn[x].son = to;
	}
}
void dfs2(int x, int top)
{
	tn[x].top = top;
	if (!tn[x].son)
		return;
	dfs2(tn[x].son, top);
	for (int to : son[x])
		if (to != tn[x].son)
			dfs2(to, to);
}
int lca(int x, int y)
{
	while (tn[x].top != tn[y].top)
	{
		if (tn[tn[x].top].dep < tn[tn[y].top].dep)
			swap(x, y);
		x = tn[tn[x].top].fa;
	}
	return tn[x].dep < tn[y].dep ? x : y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int q, x, y, z, i;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> z;
		e[i] = {.u = x, .v = y, .w = z};
	}
	build();
	for (int root = tot; root >= 1; --root)
	// 注意这里：由于新的结点一定是父亲，所以想要先遍历父亲结点就需要逆向循环（如果正向则需要开一个变量存root点所在树的根结点）
	{
		if (!vis[root])
		{
			dfs1(root, 0);
			dfs2(root, root);
		}
	}
	cin >> q;
	while (q--)
	{
		cin >> x >> y;
		if (dsu.find(x) != dsu.find(y))
			cout << "-1\n";
		else
			cout << tn[lca(x, y)].val << '\n';
	}
	return 0;
}
