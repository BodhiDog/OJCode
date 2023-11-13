#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct
{
	int l, r;
	ll add, cov, res; // cov=-1表示没有覆盖
} seg[R * 4];
struct
{
	int sz, fa, son, dep, dfn, top;
	ll val;
} t[R];
struct
{
	int to, nxt, id;
	ll len;
} e[R * 2];
int head[R], tot, tme, edge_to_node[R];
ll a[R];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) seg[k].res = max(seg[lc(k)].res, seg[rc(k)].res)
void edit(int k, ll cov, ll add)
{
	if (cov != -1)
	{
		seg[k].res = seg[k].cov = cov;
		seg[k].add = 0;
	}
	if (add)
	{
		seg[k].res += add;
		seg[k].add += add;
	}
}
void pushdown(int k)
{
	edit(lc(k), seg[k].cov, seg[k].add);
	edit(rc(k), seg[k].cov, seg[k].add);
	seg[k].cov = -1;
	seg[k].add = 0;
}
void build(int k, int l, int r)
{
	seg[k].cov = -1;
	seg[k].l = l, seg[k].r = r;
	if (l == r)
	{
		seg[k].res = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, ll cov, ll add)
{
	if (x <= seg[k].l && seg[k].r <= y)
	{
		edit(k, cov, add);
		return;
	}
	pushdown(k);
	int mid = (seg[k].l + seg[k].r) >> 1;
	if (x <= mid)
	{
		update(lc(k), x, y, cov, add);
	}
	if (y > mid)
	{
		update(rc(k), x, y, cov, add);
	}
	pushup(k);
}
ll query(int k, int x, int y)
{
	if (x <= seg[k].l && seg[k].r <= y)
	{
		return seg[k].res;
	}
	pushdown(k);
	int mid = (seg[k].l + seg[k].r) >> 1;
	ll res = -1;
	if (x <= mid)
	{
		res = query(lc(k), x, y);
	}
	if (y > mid)
	{
		res = max(res, query(rc(k), x, y));
	}
	return res;
}
void add(int &x, int &y, ll &w, int &id)
{
	e[++tot] = {.to = y, .nxt = head[x], .id = id, .len = w};
	head[x] = tot;
}
void dfs1(int x, int fa)
{
	t[x].fa = fa;
	t[x].dep = t[fa].dep + 1;
	t[x].sz = 1;
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		if (to != fa)
		{
			edge_to_node[e[i].id] = to;
			t[to].val = e[i].len;
			dfs1(to, x);
			t[x].sz += t[to].sz;
			if (t[t[x].son].sz < t[to].sz)
			{
				t[x].son = to;
			}
		}
	}
}
void dfs2(int x, int top)
{
	t[x].top = top;
	a[t[x].dfn = ++tme] = t[x].val;
	if (!t[x].son)
	{
		return;
	}
	dfs2(t[x].son, top);
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		if (to != t[x].fa && to != t[x].son)
		{
			dfs2(to, to);
		}
	}
}
void chainupdate(int x, int y, ll cov, ll add)
{
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep < t[t[y].top].dep)
		{
			swap(x, y);
		}
		update(1, t[t[x].top].dfn, t[x].dfn, cov, add);
		x = t[t[x].top].fa;
	}
	if (t[x].dep > t[y].dep)
	{
		swap(x, y);
	}
	if (x != y) // 因为修改的是x.dfn+1到y.dfn，所以要避免x==y的情况！！！（感谢https://www.luogu.com.cn/discuss/688254的Hack）
	{
		update(1, t[x].dfn + 1, t[y].dfn, cov, add); // LCA不应该被修改，因为LCA对应的边不在要修改的边上！！！
	}
}
ll chainquery(int x, int y)
{
	ll res = -1;
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep < t[t[y].top].dep)
		{
			swap(x, y);
		}
		res = max(res, query(1, t[t[x].top].dfn, t[x].dfn));
		x = t[t[x].top].fa;
	}
	if (t[x].dep > t[y].dep)
	{
		swap(x, y);
	}
	if (x != y) // 因为查询的是x.dfn+1到y.dfn，所以要避免x==y的情况！！！
	{
		res = max(res, query(1, t[x].dfn + 1, t[y].dfn)); // LCA不应该被查询，因为LCA对应的边不在要查询的边上！！！
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, x, y, i, k;
	ll w;
	string op;
	cin >> n;
	for (i = 1; i < n; ++i)
	{
		cin >> x >> y >> w;
		add(x, y, w, i);
		add(y, x, w, i);
	}
	dfs1(1, 0);
	dfs2(1, 1);
	build(1, 1, n);
	while (true)
	{
		cin >> op;
		if (op == "Stop")
		{
			break;
		}
		else if (op[1] == 'h') // Change
		{
			cin >> k >> w;
			update(1, t[edge_to_node[k]].dfn, t[edge_to_node[k]].dfn, w, 0);
		}
		else if (op[1] == 'o') // Cover
		{
			cin >> x >> y >> w;
			chainupdate(x, y, w, 0);
		}
		else if (op[1] == 'd') // Add
		{
			cin >> x >> y >> w;
			chainupdate(x, y, -1, w);
		}
		else // Max
		{
			cin >> x >> y;
			cout << chainquery(x, y) << '\n';
		}
	}
	return 0;
}
