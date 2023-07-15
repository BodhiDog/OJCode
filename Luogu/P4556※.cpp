#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Node
{
	int son[2];
	pair<int, int> val; // first救济粮数量，second救济粮种类
} t[R * 70]; // 70≈n*logn*4
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int tot, root[R], ans[R]; // 对于每个原树的结点建立一棵线段树
struct Edge
{
	int to, next;
} e[R * 2];
int head[R * 2], ecnt, sz[R], son[R], top[R], dep[R], fa[R], tme;
pair<int, int> &max(pair<int, int> &x, pair<int, int> &y)
{
	if (x.first > y.first)
		return x;
	else if (x.first == y.first)
		return x.second < y.second ? x : y;
	else
		return y;
}
void pushup(int x) { t[x].val = max(t[lc(x)].val, t[rc(x)].val); }
void update(int &k, int l, int r, int p, int x) // p种类，x个数
{
	if (!k)
		k = ++tot;
	if (l == r)
	{
		t[k].val.first += x;
		t[k].val.second = p;
		return;
	}
	int mid = (l + r) >> 1;
	if (p <= mid)
		update(lc(k), l, mid, p, x);
	else
		update(rc(k), mid + 1, r, p, x);
	pushup(k);
}
void merge(int &x, int y, int l = 1, int r = R)
{
	if (!x || !y)
	{
		x = (x | y);
		return;
	}
	if (l == r)
	{
		t[x].val.first += t[y].val.first;
		return;
	}
	int mid = (l + r) >> 1;
	merge(lc(x), lc(y), l, mid);
	merge(rc(x), rc(y), mid + 1, r);
	pushup(x);
}
void dfs(int x)
{
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != fa[x])
		{
			dfs(to);
			merge(root[x], root[to]);
		}
	}
	if (t[root[x]].val.first)
		ans[x] = t[root[x]].val.second;
}
// LCA
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
	int n, m, x, y, z, i, ac;
	cin >> n >> m;
	for (i = 1; i < n; ++i)
	{
		cin >> x >> y;
		add(x, y), add(y, x);
	}
	dfs1(1, 0);
	dfs2(1, 1);
	while (m--)
	{
		cin >> x >> y >> z;
		update(root[x], 1, R, z, 1);
		update(root[y], 1, R, z, 1);
		ac = lca(x, y);
		update(root[ac], 1, R, z, -1);
		update(root[fa[ac]], 1, R, z, -1);
	}
	dfs(1);
	for (i = 1; i <= n; ++i)
		cout << ans[i] << '\n';
	return 0;
}
