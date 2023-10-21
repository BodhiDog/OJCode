#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 10;
struct Edge
{
	int x, y, d;
	bool operator<(const Edge &oth) const
	{
		return d < oth.d;
	}
} edge[M];
struct
{
	int to, nxt;
} e[M];
struct
{
	int val, fa, son, dep, top, sz;
} t[M];
int head[M], tot, n, m, fa[M], ptot;
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void kruskal()
{
	tot = 0;
	memset(head, 0, sizeof(head));
	int i, x, y;
	for (i = 1; i <= ptot; ++i)
	{
		t[i] = {0, 0, 0, 0, 0, 0};
	}
	ptot = n;
	for (i = 1; i <= n; ++i)
	{
		fa[i] = i;
	}
	for (i = 1; i <= m; ++i)
	{
		x = find(edge[i].x), y = find(edge[i].y);
		if (x != y)
		{
			++ptot;
			t[ptot].val = edge[i].d;
			fa[ptot] = fa[x] = fa[y] = ptot;
			add(ptot, x);
			add(ptot, y);
		}
	}
}
void dfs1(int x, int fa)
{
	t[x].fa = fa;
	t[x].dep = t[fa].dep + 1;
	t[x].sz = 1;
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		dfs1(to, x);
		if (t[to].sz > t[t[x].son].sz)
		{
			t[x].son = to;
		}
	}
}
void dfs2(int x, int top)
{
	t[x].top = top;
	if (!t[x].son)
	{
		return;
	}
	dfs2(t[x].son, top);
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		if (to != t[x].son)
		{
			dfs2(to, to);
		}
	}
}
int lca(int x, int y)
{
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep < t[t[y].top].dep)
		{
			swap(x, y);
		}
		x = t[t[x].top].fa;
	}
	return t[x].dep > t[y].dep ? y : x;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, q, x, y;
	bool flag = false;
	while (cin >> n >> m)
	{
		if (flag)
		{
			cout << '\n';
		}
		flag = true;
		for (i = 1; i <= m; ++i)
		{
			cin >> edge[i].x >> edge[i].y >> edge[i].d;
		}
		sort(edge + 1, edge + m + 1);
		kruskal();
		for (i = ptot; i >= 1; --i)
		{
			if (!t[i].dep)
			{
				dfs1(i, 0);
				dfs2(i, i);
			}
		}
		cin >> q;
		while (q--)
		{
			cin >> x >> y;
			cout << t[lca(x, y)].val << '\n';
		}
	}
	return 0;
}
