// 线段树
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct Node
{
	int lc, rc, l, r;
	ll sum, mult, add;
	Node() { mult = 1, add = 0; }
} t[R << 2];
int root, tot, p;
ll a[R];
#define lc(k) t[k].lc
#define rc(k) t[k].rc
void pushup(int k)
{
	t[k].sum = (t[lc(k)].sum + t[rc(k)].sum) % p;
}
void modify(int k, ll mult, ll add)
{
	add %= p, mult %= p;
	t[k].sum = ((t[k].sum * mult) % p + add * (t[k].r - t[k].l + 1) % p) % p; // 先乘
	t[k].mult = (t[k].mult * mult) % p;
	t[k].add = ((t[k].add * mult) % p + add) % p;
}
void pushdown(int k)
{
	modify(lc(k), t[k].mult, t[k].add);
	modify(rc(k), t[k].mult, t[k].add);
	t[k].add = 0, t[k].mult = 1;
}
void build(int &k, int l, int r)
{
	k = ++tot;
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].sum = a[l] % p;
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, ll val, int &opt)
{
	pushdown(k);
	if (t[k].l >= x && t[k].r <= y)
	{
		if (opt == 1)
			modify(k, val, 0);
		else
			modify(k, 1, val);
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y, val, opt);
	if (y > mid)
		update(rc(k), x, y, val, opt);
	pushup(k);
}
int query(int k, int x, int y)
{
	pushdown(k);
	if (t[k].l >= x && t[k].r <= y)
		return t[k].sum % p;
	int mid = (t[k].l + t[k].r) >> 1;
	int res = 0;
	if (x <= mid)
		res = query(lc(k), x, y) % p;
	if (y > mid)
		res = (res + query(rc(k), x, y) % p) % p;
	return res % p;
}
int main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int n, m, opt, l, r, x, y;
	ll k;
	cin >> n >> m >> p;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	while (m--)
	{
		cin >> opt >> x >> y;
		if (opt == 3)
			cout << query(root, x, y) << '\n';
		else
		{
			cin >> k;
			update(root, x, y, k, opt);
		}
	}
	return 0;
}

// 平衡树（线段树建树优化）
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
int M;
struct Node
{
	int son[2], sz, key; // 用节点深度代替了随机权
	ll res, org, mul, add;
} t[R];
#define lc(x) t[x].son[0]
#define rc(x) t[x].son[1]
int root, tot;
void edit(int x, ll mul, ll add)
{
	if (mul == 1)
	{
		t[x].org = (t[x].org + add) % M;
		t[x].res = (t[x].res + ll(t[lc(x)].sz + t[rc(x)].sz + 1) * add % M) % M;
		t[x].add = (t[x].add + add) % M;
	}
	else
	{
		t[x].org = (t[x].org * mul % M + add) % M;
		t[x].res = (t[x].res * mul % M + ll(t[lc(x)].sz + t[rc(x)].sz + 1) * add % M) % M;
		t[x].mul = t[x].mul * mul % M;
		t[x].add = (t[x].add * mul % M + add) % M;
	}
}
void pushdown(int x)
{
	if (lc(x))
		edit(lc(x), t[x].mul, t[x].add);
	if (rc(x))
		edit(rc(x), t[x].mul, t[x].add);
	t[x].mul = 1, t[x].add = 0;
}
void pushup(int x)
{
	t[x].sz = t[lc(x)].sz + t[rc(x)].sz + 1;
	t[x].res = (t[lc(x)].res + t[rc(x)].res + t[x].org) % M;
}
void split(int k, int sz, int &x, int &y)
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	pushdown(k);
	if (t[lc(k)].sz + 1 <= sz)
	{
		x = k;
		split(rc(k), sz - (t[lc(x)].sz + 1), rc(x), y);
	}
	else
	{
		y = k;
		split(lc(k), sz, x, lc(y));
	}
	pushup(k);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x | y;
	if (t[x].key < t[y].key)
	{
		pushdown(x);
		rc(x) = merge(rc(x), y);
		pushup(x);
		return x;
	}
	else
	{
		pushdown(y);
		lc(y) = merge(x, lc(y));
		pushup(y);
		return y;
	}
}
void segment_build(int k, int l, int r, int dep)
{
	int mid = (l + r) >> 1;
	t[k] = {.sz = r - l + 1,
			.key = dep,
			.mul = 1};
	if (mid != l)
	{
		segment_build(lc(k) = ++tot, l, mid - 1, dep + 1);
		t[k].res += t[lc(k)].res;
	}
	cin >> t[k].org;
	t[k].res += t[k].org;
	if (mid != r)
	{
		segment_build(rc(k) = ++tot, mid + 1, r, dep + 1);
		t[k].res += t[rc(k)].res;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, a, b, c;
	ll k;
	cin >> n >> m >> M;
	segment_build(root = tot = 1, 1, n, 1);
	char op;
	while (m--)
	{
		cin >> op >> x >> y;
		split(root, x - 1, a, b);
		split(b, y - x + 1, b, c);
		if (op == '1') // mul
		{
			cin >> k;
			edit(b, k, 0);
		}
		else if (op == '2') // add
		{
			cin >> k;
			edit(b, 1, k);
		}
		else
		{
			cout << t[b].res % M << '\n';
		}
		root = merge(merge(a, b), c);
	}
	return 0;
}