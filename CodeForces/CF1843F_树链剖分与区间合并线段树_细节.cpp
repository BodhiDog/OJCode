#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct
{
	int dfn, top, sz, son, fa, dep, val;
} t[R];
struct
{
	int x, y, k;
} q[R];
struct Node
{
	int lmax, rmax, lmin, rmin, maxres, minres, tot;
	Node operator+(const Node &rson) const
	{
		Node res = {0, 0, 0, 0, 0, 0, 0};
		res.lmax = max(lmax, tot + rson.lmax);
		res.lmin = min(lmin, tot + rson.lmin);
		res.rmax = max(rson.rmax, rmax + rson.tot);
		res.rmin = min(rson.rmin, rmin + rson.tot);
		res.maxres = max({maxres, rson.maxres, rmax + rson.lmax});
		res.minres = min({minres, rson.minres, rmin + rson.lmin});
		res.tot = tot + rson.tot;
		return res; // 记得返回值！！！
	}
} seg[R * 4];
vector<int> son[R];
int tme, a[R], n;
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
void build(int k, int l, int r)
{
	if (l == r)
	{
		if (a[l] == 1)
		{
			seg[k] = {1, 1, 0, 0, 1, 0, 1};
		}
		else
		{
			seg[k] = {0, 0, -1, -1, 0, -1, -1};
		}
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	seg[k] = seg[lc(k)] + seg[rc(k)];
}
Node query(int k, int l, int r, int x, int y)
{
	if (x <= l && r <= y)
	{
		return seg[k];
	}
	int mid = (l + r) >> 1;
	Node res = {0, 0, 0, 0, 0, 0, 0};
	if (x <= mid)
	{
		res = query(lc(k), l, mid, x, y);
	}
	if (y > mid)
	{
		res = res + query(rc(k), mid + 1, r, x, y);
	}
	return res;
}
Node rev(Node k)
{
	swap(k.lmax, k.rmax);
	swap(k.lmin, k.rmin);
	return k;
}
void dfs1(int x, int fa)
{
	t[x].fa = fa;
	t[x].sz = 1;
	t[x].dep = t[fa].dep + 1;
	for (int to : son[x])
	{
		dfs1(to, x);
		t[x].sz += t[to].sz;
		if (t[t[x].son].sz < t[to].sz)
		{
			t[x].son = to;
		}
	}
}
void dfs2(int x, int top)
{
	a[t[x].dfn = ++tme] = t[x].val;
	t[x].top = top;
	if (!t[x].son)
	{
		return;
	}
	dfs2(t[x].son, top);
	for (int to : son[x])
	{
		if (to != t[x].son)
		{
			dfs2(to, to);
		}
	}
}
pair<int, int> chainquery(int x, int y)
{
	Node l, r, res;						 // x左y右
	l = r = res = {0, 0, 0, 0, 0, 0, 0}; // l和r必须分离开存，因为涉及到在序列中间部分插入段。l存的是x跳的部分，r存的是y跳的部分，两者连接起来是一条完整的链
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep > t[t[y].top].dep) // 应该让x跳
		{
			l = l + rev(query(1, 1, n, t[t[x].top].dfn, t[x].dfn));
			x = t[t[x].top].fa;
		}
		else
		{
			r = query(1, 1, n, t[t[y].top].dfn, t[y].dfn) + r;
			y = t[t[y].top].fa;
		}
	}
	if (t[x].dep >= t[y].dep)
	{
		l = l + rev(query(1, 1, n, t[y].dfn, t[x].dfn));
	}
	else
	{
		r = query(1, 1, n, t[x].dfn, t[y].dfn) + r;
	}
	res = l + r;
	return make_pair(res.minres, res.maxres);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	pair<int, int> res;
	int T, m, qtot, i, fa, x, y, k;
	char op;
	cin >> T;
	while (T--)
	{
		memset(a, 0, sizeof(a));
		for (i = 1; i <= n; ++i)
		{
			t[i] = {0, 0, 0, 0, 0, 0, 0};
			son[i].clear();
		}
		for (i = 1; i <= n * 4; ++i)
		{
			seg[i] = {0, 0, 0, 0, 0, 0, 0};
		}
		qtot = tme = 0;
		t[n = 1].val = 1;

		cin >> m;
		for (i = 1; i <= m; ++i)
		{
			cin >> op;
			if (op == '+')
			{
				++n;
				cin >> fa >> x;
				son[fa].push_back(n);
				t[n].val = x;
			}
			else
			{
				++qtot;
				cin >> q[qtot].x >> q[qtot].y >> q[qtot].k;
			}
		}
		dfs1(1, 0);
		dfs2(1, 1);
		build(1, 1, n);
		for (i = 1; i <= qtot; ++i)
		{
			x = q[i].x, y = q[i].y, k = q[i].k;
			res = chainquery(x, y);
			if (k == 0 || (res.first <= k && k <= res.second))
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
	}
	return 0;
}
