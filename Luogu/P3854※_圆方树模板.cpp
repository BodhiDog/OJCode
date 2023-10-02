#include <bits/stdc++.h>
using namespace std;

const int N = 2e4 + 10;
struct
{
	int dep, top, fa, sz, son;
} t[N * 2];
vector<int> son[N], newson[N * 2];
int dfn[N], low[N], tme, sta[N], top, tot;
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int to : son[x])
	{
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
			if (low[to] >= dfn[x])
			{
				++tot;
				while (sta[top] != to)
				{
					newson[tot].push_back(sta[top]);
					newson[sta[top]].push_back(tot);
					--top;
				}
				newson[tot].push_back(sta[top]);
				newson[sta[top]].push_back(tot);
				--top;
				newson[tot].push_back(x);
				newson[x].push_back(tot);
			}
		}
		else
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
}
void dfs1(int x, int f)
{
	t[x].dep = t[f].dep + 1;
	t[x].fa = f;
	t[x].sz = 1;
	for (int to : newson[x])
	{
		if (to != f)
		{
			dfs1(to, x);
			t[x].sz += t[to].sz;
			if (t[to].sz > t[t[x].son].sz)
			{
				t[x].son = to;
			}
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
	for (int to : newson[x])
	{
		if (to != t[x].fa && to != t[x].son)
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
#define dis(x, y) t[x].dep + t[y].dep - 2 * t[lca(x, y)].dep
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, q, x, y, j;
	cin >> n >> m;
	tot = n;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
		son[y].push_back(x);
	}
	tarjan(1);
	dfs1(1, 0);
	dfs2(1, 1);
	cin >> q;
	while (q--)
	{
		cin >> x >> y >> m;
		if (dis(x, y) == dis(x, m) + dis(y, m))
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}
