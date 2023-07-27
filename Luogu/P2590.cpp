#include <bits/stdc++.h>
using namespace std;

const int R = 3e4 + 10;
struct
{
	int fa, dep, dfn, sz, top, son, val;
} t[R];
int cnt, dfn_to_id[R];
vector<int> son[R];
class Seg
{
public:
	struct Node
	{
		int son[2], l, r, tag, val[2]; // 0sum,1max
		Node() { val[1] = INT_MIN; }
	} seg[R * 2];
	int root, tot;
#define lc(k) seg[k].son[0]
#define rc(k) seg[k].son[1]
	void pushup(int k)
	{
		seg[k].val[0] = seg[lc(k)].val[0] + seg[rc(k)].val[0];
		seg[k].val[1] = max(seg[lc(k)].val[1], seg[rc(k)].val[1]);
	}
	void build(int &k, int l, int r)
	{
		k = ++tot;
		seg[k].l = l, seg[k].r = r;
		if (l == r)
		{
			seg[k].val[0] = seg[k].val[1] = t[dfn_to_id[l]].val;
			return;
		}
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
		pushup(k);
	}
	void update(int k, int p, int v)
	{
		if (seg[k].l == seg[k].r)
		{
			seg[k].val[0] = seg[k].val[1] = v;
			return;
		}
		int mid = (seg[k].l + seg[k].r) >> 1;
		if (p <= mid)
			update(lc(k), p, v);
		else
			update(rc(k), p, v);
		pushup(k);
	}
	int query(int k, int x, int y, int op) // 0sum,1max
	{
		if (x <= seg[k].l && y >= seg[k].r)
			return seg[k].val[op];
		int mid = (seg[k].l + seg[k].r) >> 1,
			res = (op ? INT_MIN : 0);
		if (x <= mid)
			res = query(lc(k), x, y, op);
		if (y > mid)
			res = (op ? max(res, query(rc(k), x, y, op)) : res + query(rc(k), x, y, op));
		return res;
	}
} seg;
void dfs1(int x, int f)
{
	t[x].fa = f;
	t[x].dep = t[f].dep + 1;
	t[x].sz = 1;
	for (int to : son[x])
		if (to != f)
		{
			dfs1(to, x);
			t[x].sz += t[to].sz;
			if (t[to].sz > t[t[x].son].sz)
				t[x].son = to;
		}
}
void dfs2(int x, int top)
{
	t[x].dfn = ++cnt;
	t[x].top = top;
	dfn_to_id[cnt] = x;
	if (!t[x].son)
		return;
	dfs2(t[x].son, top);
	for (int to : son[x])
		if (to != t[x].fa && to != t[x].son)
			dfs2(to, to);
}
void update(int x, int v) { seg.update(seg.root, t[x].dfn, v); }
int querysum(int x, int y)
{
	int res = 0;
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep < t[t[y].top].dep)
			swap(x, y);
		res += seg.query(seg.root, t[t[x].top].dfn, t[x].dfn, 0);
		x = t[t[x].top].fa;
	}
	if (t[x].dep > t[y].dep)
		swap(x, y);
	res += seg.query(seg.root, t[x].dfn, t[y].dfn, 0);
	return res;
}
int querymax(int x, int y)
{
	int res = INT_MIN;
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep < t[t[y].top].dep)
			swap(x, y);
		res = max(res, seg.query(seg.root, t[t[x].top].dfn, t[x].dfn, 1));
		x = t[t[x].top].fa;
	}
	if (t[x].dep > t[y].dep)
		swap(x, y);
	res = max(res, seg.query(seg.root, t[x].dfn, t[y].dfn, 1));
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, x, y, j;
	char op[10];
	cin >> n;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
		son[y].push_back(x);
	}
	for (j = 1; j <= n; ++j)
		cin >> t[j].val;
	dfs1(1, 0);
	dfs2(1, 1);
	seg.build(seg.root, 1, n);
	cin >> q;
	while (q--)
	{
		cin >> op >> x >> y;
		if (op[1] == 'H')
			update(x, y);
		else if (op[1] == 'M')
			cout << querymax(x, y) << '\n';
		else
			cout << querysum(x, y) << '\n';
	}
	return 0;
}
