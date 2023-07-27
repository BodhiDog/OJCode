#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct
{
	int fa, dep, dfn, sz, top, son;
	ll val;
} t[R];
int cnt, dfn_to_id[R];
struct
{
	int to, next;
} e[R];
vector<int> son[R];
class Seg
{
public:
	struct Node
	{
		int son[2];
		ll l, r, tag, val;
	} seg[R * 2];
	int root, tot;
#define lc(k) seg[k].son[0]
#define rc(k) seg[k].son[1]
	void pushup(int k)
	{
		seg[k].val = seg[lc(k)].val + seg[rc(k)].val;
	}
	void edit(int k, ll v)
	{
		seg[k].tag += v;
		seg[k].val += (seg[k].r - seg[k].l + 1) * v;
	}
	void pushdown(int k)
	{
		if (seg[k].tag)
		{
			if (lc(k))
				edit(lc(k), seg[k].tag);
			if (rc(k))
				edit(rc(k), seg[k].tag);
			seg[k].tag = 0;
		}
	}
	void build(int &k, int l, int r)
	{
		k = ++tot;
		seg[k].l = l, seg[k].r = r;
		if (l == r)
		{
			seg[k].val = t[dfn_to_id[l]].val;
			return;
		}
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
		pushup(k);
	}
	void update(int k, int x, int y, ll v)
	{
		if (x <= seg[k].l && y >= seg[k].r)
		{
			edit(k, v);
			return;
		}
		pushdown(k);
		int mid = (seg[k].l + seg[k].r) >> 1;
		if (x <= mid)
			update(lc(k), x, y, v);
		if (y > mid)
			update(rc(k), x, y, v);
		pushup(k);
	}
	ll query(int k, int x, int y) // 0sum,1max
	{
		if (x <= seg[k].l && y >= seg[k].r)
			return seg[k].val;
		pushdown(k);
		int mid = (seg[k].l + seg[k].r) >> 1;
		ll res = 0;
		if (x <= mid)
			res = query(lc(k), x, y);
		if (y > mid)
			res += query(rc(k), x, y);
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
ll query(int x, int y)
{
	ll res = 0;
	while (t[x].top != t[y].top)
	{
		if (t[t[x].top].dep < t[t[y].top].dep)
			swap(x, y);
		res += seg.query(seg.root, t[t[x].top].dfn, t[x].dfn);
		x = t[t[x].top].fa;
	}
	if (t[x].dep > t[y].dep)
		swap(x, y);
	res += seg.query(seg.root, t[x].dfn, t[y].dfn);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, j;
	ll a;
	char op;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
		cin >> t[j].val;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
		son[y].push_back(x); // 坑人：题目中说是按照from->to的顺序输入，但实际上却不是
	}
	dfs1(1, 0);
	dfs2(1, 1);
	seg.build(seg.root, 1, n);
	while (m--)
	{
		cin >> op >> x;
		if (op == '1')
		{
			cin >> a;
			seg.update(seg.root, t[x].dfn, t[x].dfn, a);
		}
		else if (op == '2')
		{
			cin >> a;
			seg.update(seg.root, t[x].dfn, t[x].dfn + t[x].sz - 1, a);
		}
		else
			cout << query(1, x) << '\n';
	}
	return 0;
}
