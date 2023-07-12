// 树上差分
#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
int fa[R][17], dep[R], lg[R], tot[R], ans;
vector<int> v[R];
void dfs(int x, int f)
{
	fa[x][0] = f;
	dep[x] = dep[f] + 1;
	for (int j = 0; j < v[x].size(); ++j)
		if (v[x][j] != f)
		{
			dfs(v[x][j], x);
			tot[x] += tot[v[x][j]];
		}
	ans = (ans > tot[x] ? ans : tot[x]);
}
int lca(int x, int y)
{
	if (dep[x] < dep[y])
		x ^= y, y ^= x, x ^= y; // swap
	while (dep[x] != dep[y])
		x = fa[x][lg[dep[x] - dep[y]]];
	if (x == y)
		return y;
	for (int i = 16; i >= 0; --i)
		if (fa[x][i] != fa[y][i])
			x = fa[x][i], y = fa[y][i];
	return fa[x][0];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, x, y;
	cin >> n >> k;
	int i, j;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		v[x].push_back(y), v[y].push_back(x);
	}
	// pre
	dfs(1, 0);
	for (j = 2; j <= n; ++j)
		lg[j] = lg[j / 2] + 1;
	for (i = 1; i < 17; ++i)
		for (j = 1; j <= n; ++j)
			fa[j][i] = fa[fa[j][i - 1]][i - 1];
	// qry
	int lc;
	for (j = 1; j <= k; ++j)
	{
		cin >> x >> y;
		lc = lca(x, y);
		++tot[x], ++tot[y], --tot[lc], --tot[fa[lc][0]];
	}
	dfs(1, 0);
	cout << ans << '\n';
	return 0;
}

// 树链剖分
#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
class Segment
{
public:
	struct
	{
		int l, r, res, tag;
	} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) t[k].res = max(t[lc(k)].res, t[rc(k)].res)

	void pushdown(int k)
	{
		if (t[k].tag)
		{
			t[lc(k)].res += t[k].tag;
			t[rc(k)].res += t[k].tag;
			t[lc(k)].tag += t[k].tag;
			t[rc(k)].tag += t[k].tag;
			t[k].tag = 0; // 别忘清标记！！！
		}
	}
	void build(int k, int l, int r)
	{
		t[k] = {.l = l, .r = r};
		if (l == r)
			return;
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
	}
	void update(int k, int x, int y) //+1，忽略
	{
		if (x <= t[k].l && y >= t[k].r)
		{
			t[k].res += 1;
			t[k].tag += 1;
			return;
		}
		pushdown(k);
		int mid = (t[k].l + t[k].r) >> 1;
		if (x <= mid)
			update(lc(k), x, y);
		if (y > mid)
			update(rc(k), x, y);
		pushup(k);
	}
	int query(int k, int x, int y)
	{
		if (x <= t[k].l && y >= t[k].r)
			return t[k].res;
		pushdown(k);
		int mid = (t[k].l + t[k].r) >> 1;
		int res = 0;
		if (x <= mid)
			res = query(lc(k), x, y);
		if (y > mid)
			res = max(res, query(rc(k), x, y));
		return res;
	}
} seg;
struct Edge
{
	int to, next;
} e[R * 2];
int head[R * 2], tot;
void add(int x, int y)
{
	e[++tot] = {.to = y, .next = head[x]};
	head[x] = tot;
}
int dfn[R], tme, fa[R], dep[R], sz[R], top[R], son[R];
void dfs1(int x, int f)
{
	fa[x] = f;
	sz[x] = 1;
	dep[x] = dep[f] + 1;
	int maxsz = -1;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != f)
		{
			dfs1(to, x);
			sz[x] += sz[to];
			if (maxsz < sz[to])
			{
				son[x] = to;
				maxsz = sz[to];
			}
		}
	}
}
void dfs2(int x, int s)
{
	dfn[x] = ++tme;
	top[x] = s;
	// 初始值均为0，就不存在a数组赋值了
	if (!son[x])
		return;
	dfs2(son[x], s);
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != fa[x] && to != son[x])
			dfs2(to, to);
	}
}
void update(int x, int y) //+1，忽略
{
	int res = 0;
	while (top[x] != top[y])
	{
		if (dep[top[x]] < dep[top[y]])
			swap(x, y);
		seg.update(1, dfn[top[x]], dfn[x]);
		x = fa[top[x]];
	}
	if (dep[x] > dep[y])
		swap(x, y);
	seg.update(1, dfn[x], dfn[y]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, x, y;
	cin >> n >> k;
	for (int j = 1; j < n; ++j)
	{
		cin >> x >> y;
		add(x, y), add(y, x);
	}
	seg.build(1, 1, n);
	dfs1(1, 0);
	dfs2(1, 1);
	while (k--)
	{
		cin >> x >> y;
		update(x, y);
	}
	cout << seg.query(1, 1, n) << '\n';
	return 0;
}
