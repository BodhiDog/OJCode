#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) t[k].val = max(t[lc(k)].val, t[rc(k)].val)
#define R 10010
int max(int x, int y)
{
	return x > y ? x : y;
}
int a[R], sz[R], top[R], son[R], dep[R], fa[R], dfn[R], tme, val[R];
// nfd:time->x
// dfn:x->time
struct
{
	int l, r, val; // lr是时间戳
} t[R * 4];
void segclear(int n)
{
	for (int j = 0; j <= (n << 2); ++j)
	{
		t[j].l = t[j].r = t[j].val = 0;
	}
}
// 线段树
void segbuild(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].val = val[l];
		return;
	}
	int mid = (l + r) >> 1;
	segbuild(lc(k), l, mid);
	segbuild(rc(k), mid + 1, r);
	pushup(k);
}
void segupdate(int k, int x, int val)
{
	if (t[k].l == t[k].r)
	{
		t[k].val = val;
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
	{
		segupdate(lc(k), x, val);
	}
	else
	{
		segupdate(rc(k), x, val);
	}
	pushup(k);
}
int segquery(int k, int x, int y)
{
	if (t[k].l >= x && t[k].r <= y)
	{
		return t[k].val;
	}
	int mid = (t[k].l + t[k].r) >> 1, res = 0;
	if (x <= mid)
	{
		res = segquery(lc(k), x, y);
	}
	if (y > mid)
	{
		res = max(res, segquery(rc(k), x, y));
	}
	return res;
}
// 树剖
struct Edge
{
	int to, nxt, len, id;
} e[R * 2];
int head[R], tot;
void add(int x, int y, int w, int d)
{
	e[++tot].to = y;
	e[tot].nxt = head[x];
	e[tot].len = w;
	e[tot].id = d;
	head[x] = tot;
}
void clear(int n)
{
	segclear(n);
	tot = tme = 0;
	for (int j = 1; j <= n; ++j)
	{
		head[j] = 0;
	}
	for (int j = 1; j <= (n << 1); ++j)
	{
		e[j].nxt = e[j].to = e[j].len = 0;
	}
}
void dfs1(int x, int f)
{
	fa[x] = f;
	dep[x] = dep[f] + 1;
	sz[x] = 1;
	int to, j, maxsz = -1;
	for (j = head[x]; j; j = e[j].nxt)
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
	{
		return;
	}
	dfs2(son[x], tp);
	int j, to;
	for (j = head[x]; j; j = e[j].nxt)
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
		segupdate(1, dfn[x], val);
	}
	else
	{
		segupdate(1, dfn[y], val);
	}
}
int query(int x, int y)
{
	if (x == y)
	{
		return 0;
	}
	int res = 0;
	while (top[x] != top[y])
	{
		if (dep[top[x]] < dep[top[y]])
		{
			int z = x;
			x = y;
			y = z;
		}
		res = max(res, segquery(1, dfn[top[x]], dfn[x]));
		x = fa[top[x]];
	}
	if (dep[x] > dep[y])
	{
		int z = x;
		x = y;
		y = z;
	}
	res = max(res, segquery(1, dfn[x] + 1, dfn[y]));
	return res;
}
int main()
{
	int T, n, x, y, val, j;
	char str[10];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		clear(n);
		for (j = 1; j < n; ++j)
		{
			scanf("%d%d%d", &x, &y, &val);
			add(x, y, val, j);
			add(y, x, val, j);
			q[j].x = x;
			q[j].y = y;
		}
		dfs1(1, 0);
		dfs2(1, 1);
		segbuild(1, 1, n);
		while (1)
		{
			scanf("%s", &str);
			if (str[0] == 'D')
			{
				break;
			}
			scanf("%d%d", &x, &y);
			if (str[0] == 'C')
			{
				update(x, y);
			}
			else // Q
			{
				printf("%d\n", query(x, y));
			}
		}
	}
	return 0;
}
