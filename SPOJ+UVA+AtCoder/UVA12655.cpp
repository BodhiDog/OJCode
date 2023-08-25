#include <bits/stdc++.h>
using namespace std;

const int N = 2e4 + 10, M = 1e5 + 10;
struct Edge
{
	int x, y, w;
	bool operator<(const Edge &oth) const
	{
		return w > oth.w;
	}
} e[M];
struct
{
	int val, dep, fa, top, sz, son;
} p[N * 2];
vector<int> son[N * 2];
int n, m, fa[N * 2], tot;
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
void kruskal()
{
	int j, x, y;
	for (j = 1; j <= n; ++j)
	{
		fa[j] = j;
	}
	tot = n;
	sort(e + 1, e + m + 1);
	for (j = 1; j <= m; ++j)
	{
		x = find(e[j].x), y = find(e[j].y);
		if (x != y)
		{
			++tot;
			fa[tot] = fa[x] = fa[y] = tot;
			son[tot].push_back(x);
			son[tot].push_back(y);
			p[tot].val = e[j].w;
		}
	}
}
void dfs1(int x, int f)
{
	p[x].fa = f;
	p[x].dep = p[f].dep + 1;
	p[x].sz = 1;
	for (int to : son[x])
	{
		dfs1(to, x);
		p[x].sz += p[to].sz;
		if (p[to].sz > p[p[x].son].sz)
		{
			p[x].son = to;
		}
	}
}
void dfs2(int x, int top)
{
	p[x].top = top;
	if (!p[x].son)
	{
		return;
	}
	dfs2(p[x].son, top);
	for (int to : son[x])
	{
		if (to != p[x].son)
		{
			dfs2(to, to);
		}
	}
}
int lca(int x, int y)
{
	while (p[x].top != p[y].top)
	{
		if (p[p[x].top].dep < p[p[y].top].dep)
		{
			swap(x, y);
		}
		x = p[p[x].top].fa;
	}
	return p[x].dep < p[y].dep ? x : y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int s, j, x, y;
	while (cin >> n >> m >> s)
	{
		for (j = 1; j <= n * 2; ++j)
		{
			p[j] = {0, 0, 0, 0, 0, 0};
			son[j].clear();
		}
		for (j = 1; j <= m; ++j)
		{
			cin >> e[j].x >> e[j].y >> e[j].w;
		}
		kruskal();
		for (j = tot; j >= 1; --j)
		{
			if (!p[j].sz)
			{
				dfs1(tot, 0);
				dfs2(tot, tot);
			}
		}
		while (s--)
		{
			cin >> x >> y;
			cout << p[lca(x, y)].val << '\n';
		}
	}
	return 0;
}