#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int a[R], P;
#define lc (k << 1)
#define rc (k << 1 | 1)
#define swap(x, y) x ^= y, y ^= x, x ^= y
struct
{
	int l, r, tag;
	long long val;
} s[R << 2];
int org[R];
void pushup(int k) { s[k].val = (s[lc].val + s[rc].val) % P; }
void pushdown(int k)
{
	if (s[k].tag)
	{
		s[lc].val += s[k].tag * (s[lc].r - s[lc].l + 1) % P;
		s[lc].tag += s[k].tag;
		s[rc].val += s[k].tag * (s[rc].r - s[rc].l + 1) % P;
		s[rc].tag += s[k].tag;
		s[k].tag = 0;
	}
}
void build(int k, int l, int r)
{
	s[k].l = l, s[k].r = r;
	if (l == r)
	{
		s[k].val = a[l] % P;
		return;
	}
	int mid = (l + r) >> 1;
	build(lc, l, mid);
	build(rc, mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, int val)
{
	if (s[k].l >= x && s[k].r <= y)
	{
		s[k].tag += val;
		s[k].val += val * (s[k].r - s[k].l + 1) % P;
		s[k].val %= P;
		return;
	}
	pushdown(k);
	int mid = (s[k].l + s[k].r) >> 1;
	if (x <= mid)
		update(lc, x, y, val);
	if (y > mid)
		update(rc, x, y, val);
	pushup(k);
}
int query(int k, int x, int y)
{
	if (s[k].l >= x && s[k].r <= y)
		return s[k].val % P;
	pushdown(k);
	int mid = (s[k].l + s[k].r) >> 1, res = 0;
	if (x <= mid)
		res += query(lc, x, y);
	if (y > mid)
		res += query(rc, x, y);
	return res % P;
}
vector<int> v[R];
int dfn[R], sz[R], top[R], tme, fa[R], dep[R], son[R];
void dfs1(int x, int f) // 求父子关系，深度，求子树大小，标重儿子
{
	fa[x] = f;
	dep[x] = dep[f] + 1;
	sz[x] = 1;
	int to, msz = -1;
	for (int j = 0; j < v[x].size(); ++j)
	{
		to = v[x][j];
		if (to != f)
		{
			dfs1(to, x);
			sz[x] += sz[to];
			if (sz[to] > msz)
			{
				msz = sz[to];
				son[x] = to;
			}
		}
	}
}
void dfs2(int x, int start)
{
	dfn[x] = ++tme;
	top[x] = start;
	a[dfn[x]] = org[x];
	if (!son[x])
		return;
	dfs2(son[x], start); // 优先访问重儿子
	int to;
	for (int j = 0; j < v[x].size(); ++j)
	{
		to = v[x][j];
		if (to == son[x] || to == fa[x])
			continue;
		dfs2(to, to); // to是一个轻儿子，重链都是以轻儿子为开头的
	}
}
void cupdate(int x, int y, int val)
{
	val %= P;
	while (top[x] != top[y])
	{
		if (dep[top[x]] < dep[top[y]])
			swap(x, y);
		update(1, dfn[top[x]], dfn[x], val);
		x = fa[top[x]];
	}
	if (dep[x] > dep[y])
		swap(x, y);
	update(1, dfn[x], dfn[y], val);
}
int cquery(int x, int y)
{
	int res = 0;
	while (top[x] != top[y])
	{
		if (dep[top[x]] < dep[top[y]])
			swap(x, y);
		res += query(1, dfn[top[x]], dfn[x]);
		res %= P;
		x = fa[top[x]];
	}
	if (dep[x] > dep[y])
		swap(x, y);
	res += query(1, dfn[x], dfn[y]);
	return res % P;
}
void tupdate(int x, int val) { update(1, dfn[x], dfn[x] + sz[x] - 1, val); }
int tquery(int x) { return query(1, dfn[x], dfn[x] + sz[x] - 1); }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, root, x, y, z, opt;
	cin >> n >> m >> root >> P;
	int j;
	for (j = 1; j <= n; ++j)
	{
		cin >> org[j];
		org[j] %= P;
	}
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		v[x].push_back(y), v[y].push_back(x);
	}
	dfs1(root, 0);
	dfs2(root, root);
	build(1, 1, n);
	for (j = 1; j <= m; ++j)
	{
		cin >> opt;
		if (opt == 1)
		{
			cin >> x >> y >> z;
			cupdate(x, y, z);
		}
		else if (opt == 2)
		{
			cin >> x >> y;
			cout << cquery(x, y) << '\n';
		}
		else if (opt == 3)
		{
			cin >> x >> z;
			tupdate(x, z);
		}
		else
		{
			cin >> x;
			cout << tquery(x) << '\n';
		}
	}
	return 0;
}