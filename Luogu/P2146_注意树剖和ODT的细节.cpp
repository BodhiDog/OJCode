// 线段树
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
class Segment
{
	struct
	{
		int l, r, val, tag;
	} t[R * 4];

public:
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
	void pushup(int k)
	{
		t[k].val = t[lc(k)].val + t[rc(k)].val;
	}
	void cover(int k, int val)
	{
		t[k].val = (t[k].r - t[k].l + 1) * val;
		t[k].tag = val;
	}
	void pushdown(int k)
	{
		if (t[k].tag != -1)
		{
			cover(lc(k), t[k].tag);
			cover(rc(k), t[k].tag);
			t[k].tag = -1;
		}
	}
	void build(int k, int l, int r)
	{
		t[k].tag = -1;
		t[k].val = 0;
		t[k].l = l, t[k].r = r;
		if (l == r)
		{
			return;
		}
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
		pushup(k);
	}
	void update(int k, int x, int y, int val)
	{
		if (x <= t[k].l && t[k].r <= y)
		{
			cover(k, val);
			return;
		}
		pushdown(k);
		int mid = (t[k].l + t[k].r) >> 1;
		if (x <= mid)
		{
			update(lc(k), x, y, val);
		}
		if (y > mid)
		{
			update(rc(k), x, y, val);
		}
		pushup(k);
	}
	int query(int k, int x, int y, int val)
	{
		if (x <= t[k].l && t[k].r <= y)
		{
			if (val == 0)
			{
				return (t[k].r - t[k].l + 1) - t[k].val;
			}
			else
			{
				return t[k].val;
			}
		}
		pushdown(k);
		int mid = (t[k].l + t[k].r) >> 1, res = 0;
		if (x <= mid)
		{
			res = query(lc(k), x, y, val);
		}
		if (y > mid)
		{
			res += query(rc(k), x, y, val);
		}
		return res;
	}
} seg;
struct
{
	int to, nxt;
} e[R];
struct
{
	int top, sz, son, dfn, fa;
} t[R];
int head[R], tot, tme;
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void dfs1(int x, int fa)
{
	t[x].fa = fa;
	t[x].sz = 1;
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		dfs1(to, x);
		t[x].sz += t[to].sz;
		if (t[to].sz > t[t[x].son].sz)
		{
			t[x].son = to;
		}
	}
}
void dfs2(int x, int top)
{
	t[x].top = top;
	t[x].dfn = ++tme;
	if (!t[x].son)
	{
		return;
	}
	dfs2(t[x].son, top);
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		if (to != t[x].son)
		{
			dfs2(to, to);
		}
	}
}
int install(int x)
{
	int res = 0, y = x;
	while (t[x].top != 1)
	{
		res += seg.query(1, t[t[x].top].dfn, t[x].dfn, 0);
		x = t[t[x].top].fa;
	}
	res += seg.query(1, 1, t[x].dfn, 0);
	x = y;
	while (t[x].top != 1)
	{
		seg.update(1, t[t[x].top].dfn, t[x].dfn, 1);
		x = t[t[x].top].fa;
	}
	seg.update(1, 1, t[x].dfn, 1);
	return res;
}
int uninstall(int x)
{
	int res = seg.query(1, t[x].dfn, t[x].dfn + t[x].sz - 1, 1);
	seg.update(1, t[x].dfn, t[x].dfn + t[x].sz - 1, 0);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, i, fa, x;
	cin >> n;
	for (i = 2; i <= n; ++i)
	{
		cin >> fa;
		++fa;
		add(fa, i);
	}
	dfs1(1, 0);
	dfs2(1, 1);
	seg.build(1, 1, n);
	cin >> q;
	string op;
	while (q--)
	{
		cin >> op >> x;
		++x;
		if (op[0] == 'i')
		{
			cout << install(x) << '\n';
		}
		else
		{
			cout << uninstall(x) << '\n';
		}
	}
	return 0;
}

// ODT
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
class ODT
{
public:
	struct Node
	{
		int l, r, val;
		bool operator<(const Node &oth) const
		{
			return l < oth.l;
		}
		Node(int a, int b = -1, int c = 0)
		{
			l = a, r = b, val = c;
		}
	};
	set<Node> s;
	auto split(int p)
	{
		auto it = s.lower_bound(Node(p));
		if (it != s.end() && it->l == p)
		{
			return it;
		}
		--it;
		int l = it->l, r = it->r, val = it->val;
		s.erase(it);
		s.insert(Node(l, p - 1, val));
		return s.insert(Node(p, r, val)).first;
	}
	void update(int l, int r, int val)
	{
		auto it2 = split(r + 1), it1 = split(l); // 注意是r+1和l！！！
		s.erase(it1, it2);
		s.insert(Node(l, r, val));
	}
	int query(int l, int r, int val)
	{
		auto it2 = split(r + 1), it1 = split(l);
		int res = 0;
		for (; it1 != it2; ++it1)
		{
			if (it1->val == val)
			{
				res += it1->r - it1->l + 1;
			}
		}
		return res;
	}
} odt;
struct
{
	int to, nxt;
} e[R];
struct
{
	int top, sz, son, dfn, fa;
} t[R];
int head[R], tot, tme;
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void dfs1(int x, int fa)
{
	t[x].fa = fa;
	t[x].sz = 1;
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		dfs1(to, x);
		t[x].sz += t[to].sz;
		if (t[to].sz > t[t[x].son].sz)
		{
			t[x].son = to;
		}
	}
}
void dfs2(int x, int top)
{
	t[x].top = top;
	t[x].dfn = ++tme;
	if (!t[x].son)
	{
		return;
	}
	dfs2(t[x].son, top);
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
		if (to != t[x].son)
		{
			dfs2(to, to);
		}
	}
}
int install(int x)
{
	int res = 0, y = x; // 必须要用y对x进行备份！！！否则x跳完之后就已经不能用了！！！
	while (t[x].top != 1)
	{
		res += odt.query(t[t[x].top].dfn, t[x].dfn, 0);
		x = t[t[x].top].fa;
	}
	res += odt.query(1, t[x].dfn, 0);
	x = y;
	while (t[x].top != 1)
	{
		odt.update(t[t[x].top].dfn, t[x].dfn, 1);
		x = t[t[x].top].fa;
	}
	odt.update(1, t[x].dfn, 1);
	return res;
}
int uninstall(int x)
{
	int res = odt.query(t[x].dfn, t[x].dfn + t[x].sz - 1, 1);
	odt.update(t[x].dfn, t[x].dfn + t[x].sz - 1, 0);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, i, fa, x;
	cin >> n;
	for (i = 2; i <= n; ++i)
	{
		cin >> fa;
		++fa;
		add(fa, i);
	}
	dfs1(1, 0);
	dfs2(1, 1);
	odt.s.insert(ODT::Node(1, n, 0));
	cin >> q;
	string op;
	while (q--)
	{
		cin >> op >> x;
		++x;
		if (op[0] == 'i')
		{
			cout << install(x) << '\n';
		}
		else
		{
			cout << uninstall(x) << '\n';
		}
	}
	return 0;
}
