#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 3e5 + 10;
struct Edge
{
	int x, y, len;
	bool operator<(const Edge &d) const { return len < d.len; }
} e[M];
struct
{
	int val, top, sz, son, dep, fa;
} t[N + M];
int n, m, fa[N + M], tot, root;
vector<int> son[N + M];
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
void build()
{
	int j, x, y;
	for (j = 1; j <= n; ++j)
		fa[j] = j;
	tot = n;
	sort(e + 1, e + m + 1);
	for (j = 1, x, y; j <= m; ++j)
	{
		x = find(e[j].x), y = find(e[j].y);
		if (x != y)
		{
			t[++tot].val = e[j].len;
			fa[tot] = fa[x] = fa[y] = tot;
			son[tot].push_back(x);
			son[tot].push_back(y);
		}
	}
}
void dfs1(int x, int f)
{
	t[x].sz = 1;
	t[x].dep = t[f].dep + 1;
	t[x].fa = f;
	for (int to : son[x])
	{
		dfs1(to, x);
		t[x].sz += t[to].sz;
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
		return;
	dfs2(t[x].son, top);
	for (int to : son[x])
	{
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
			swap(x, y);
		x = t[t[x].top].fa;
	}
	return t[x].dep < t[y].dep ? x : y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int j, x, y, q;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> e[j].x >> e[j].y >> e[j].len;
	}
	build();
	for (j = tot; j >= 1; --j)
	{
		if (!t[j].sz)
		{
			dfs1(j, 0);
			dfs2(j, j);
		}
	}
	cin >> q;
	while (q--)
	{
		cin >> x >> y;
		if (find(x) != find(y))
		{
			cout << "impossible\n";
		}
		else
		{
			cout << t[lca(x, y)].val << '\n';
		}
	}
	return 0;
}
