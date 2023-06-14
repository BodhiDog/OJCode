#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int a[R], sz[R], top[R], son[R], dep[R], fa[R], dfn[R], tme, val[R];
// nfd:time->x
// dfn:x->time
class Segment
{
public:
	struct
	{
		int l, r, val; // lr是时间戳
	} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) t[k].val = max(t[lc(k)].val, t[rc(k)].val)
	void clear(int n)
	{
		for (int j = 0; j <= (n << 2); ++j)
			t[j].l = t[j].r = t[j].val = 0;
	}
	// 线段树
	void build(int k, int l, int r)
	{
		t[k].l = l, t[k].r = r;
		if (l == r)
		{
			t[k].val = val[l];
			return;
		}
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
		pushup(k);
	}
	void update(int k, int x, int val)
	{
		if (t[k].l == t[k].r)
		{
			t[k].val = val;
			return;
		}
		int mid = (t[k].l + t[k].r) >> 1;
		if (x <= mid)
			update(lc(k), x, val);
		else
			update(rc(k), x, val);
		pushup(k);
	}
	int query(int k, int x, int y)
	{
		if (t[k].l >= x && t[k].r <= y)
		{
			return t[k].val;
		}
		int mid = (t[k].l + t[k].r) >> 1, res = 0;
		if (x <= mid)
			res = query(lc(k), x, y);
		if (y > mid)
			res = max(res, query(rc(k), x, y));
		return res;
	}
} seg;
// 树剖
struct Edge
{
	int to, next, len, id;
} e[R * 2];
int head[R], tot;
void add(int x, int y, int w, int d)
{
	e[++tot] = {
		.to = y,
		.next = head[x],
		.len = w,
		.id = d};
	head[x] = tot;
}
void clear(int n)
{
	tot = 0;
	for (int j = 1; j <= (n << 1); ++n)
		head[j] = e[j].next = e[j].to = e[j].len = 0;
}
void dfs1(int x, int f)
{
	fa[x] = f;
	dep[x] = dep[f] + 1;
	sz[x] = 1;
	int to, j, maxsz = -1;
	for (j = head[x]; j; j = e[j].next)
	{
		to = e[j].to;
		if (to != f)
		{
			a[to] = e[j].len;
			dfs1(to, x);
			sz[x] += sz[to];
			if (sz[to] > maxsz)
			{
				maxsz = sz[to];
				son[x] = to;
			}
		}
	}
}
void dfs2(int x, int tp)
{
	top[x] = tp;
	dfn[x] = ++tme;
	val[tme] = a[x];
	if (!son[x])
		return;
	int j, to;
	dfs2(son[x], tp);
	for (j = head[x]; j; j = e[j].next)
	{
		to = e[j].to;
		if (to != fa[x] && to != son[x])
		{
			dfs2(to, to);
		}
	}
}
struct Qry
{
	int x, y;
} q[R];
void update(int edgeid, int val)
{
	int x = q[edgeid].x, y = q[edgeid].y;
	if (fa[x] == y) // 注意，fa是dfs1的时候填上的，所以映射的是原结点编号而不是dfn编号！
	{
		seg.update(1, dfn[x], val);
	}
	else
	{
		seg.update(1, dfn[y], val);
	}
}
int query(int x, int y)
{
	if (x == y)
		return 0;
	int res = 0;
	while (top[x] != top[y])
	{
		if (dep[top[x]] < dep[top[y]])
			swap(x, y);
		res = max(res, seg.query(1, dfn[top[x]], dfn[x]));
		x = fa[top[x]];
	}
	if (dep[x] > dep[y])
		swap(x, y);
	res = max(res, seg.query(1, dfn[x] + 1, dfn[y]));
	return res;
}
// void print(int x) // DEBUG
// {
// 	cout << dfn[x] << ' ' << seg.query(1, dfn[x], dfn[x]) << '\n';
// 	for (int j = head[x]; j; j = e[j].next)
// 	{
// 		if (e[j].to != fa[x])
// 			print(e[j].to);
// 	}
// }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, x, y, val, j;
	char s[10];
	cin >> n;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y >> val;
		add(x, y, val, j);
		add(y, x, val, j);
		q[j] = {.x = x, .y = y};
	}
	dfs1(1, 0);
	dfs2(1, 1);
	seg.build(1, 1, n);
	while (true)
	{
		cin >> s;
		if (s[0] == 'D')
			break;
		cin >> x >> y;
		if (s[0] == 'C')
		{
			update(x, y);
		}
		else // Q
		{
			cout << query(x, y) << '\n';
		}
	}
	return 0;
}
