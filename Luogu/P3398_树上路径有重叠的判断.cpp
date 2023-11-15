#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int fa, dep, top, son, sz;
} t[R];
vector<int> son[R];
void dfs1(int x, int fa)
{
	t[x].fa = fa;
	t[x].dep = t[fa].dep + 1;
	t[x].sz = 1;
	for (int to : son[x])
	{
		if (to != fa)
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
	for (int to : son[x])
	{
		if (to != t[x].son && to != t[x].fa)
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
int dis(int x, int y)
{
	return t[x].dep + t[y].dep - 2 * t[lca(x, y)].dep;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, i, x, y, u, v, lxy, luv;
	cin >> n >> q;
	for (i = 1; i < n; ++i)
	{
		cin >> x >> y;
		son[x].push_back(y);
		son[y].push_back(x);
	}
	dfs1(1, 0);
	dfs2(1, 1);
	while (q--)
	{
		cin >> x >> y >> u >> v;
		lxy = lca(x, y);
		luv = lca(u, v);
		if (dis(x, luv) + dis(luv, y) == dis(x, y) || dis(u, lxy) + dis(lxy, v) == dis(u, v)) // 结论：当之间存在公共路径时，必定有一对点的LCA在另一对点的路径上
		{
			cout << "Y\n";
		}
		else
		{
			cout << "N\n";
		}
	}
	return 0;
}
