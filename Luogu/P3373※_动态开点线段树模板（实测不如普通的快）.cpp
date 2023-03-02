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