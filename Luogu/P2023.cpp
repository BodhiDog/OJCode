#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int P;
using ll = long long;
ll a[R];
struct Node
{
	int l, r;
	ll val, mult, add;
	Node() { mult = 1; }
} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define len(k) ll(t[k].r - t[k].l + 1)
#define pushup(k) t[k].val = (t[lc(k)].val + t[rc(k)].val) % P
void edit(int k, ll mult, ll add)
{
	if (mult == 1)
	{
		t[k].val = (t[k].val + len(k) * add % P) % P;
		t[k].add = (t[k].add + add) % P;
	}
	else
	{
		t[k].val = (t[k].val * mult % P + len(k) * add % P) % P;
		t[k].mult = t[k].mult * mult % P;
		t[k].add = (t[k].add * mult % P + add) % P;
	}
}
void pushdown(int k)
{
	edit(lc(k), t[k].mult, t[k].add);
	edit(rc(k), t[k].mult, t[k].add);
	t[k].mult = 1, t[k].add = 0;
}
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].val = a[l] % P;
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, ll mult, ll add)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		edit(k, mult, add);
		return;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y, mult, add);
	if (y > mid)
		update(rc(k), x, y, mult, add);
	pushup(k);
}
ll query(int k, int x, int y)
{
	if (x <= t[k].l && y >= t[k].r)
		return t[k].val;
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	ll res = 0;
	if (x <= mid)
		res = query(lc(k), x, y);
	if (y > mid)
		res = (res + query(rc(k), x, y)) % P;
	return res % P;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, r, j;
	ll c;
	char op;
	cin >> n >> P;
	for (j = 1; j <= n; ++j)
		cin >> a[j];
	build(1, 1, n);
	cin >> m;
	while (m--)
	{
		cin >> op >> l >> r;
		switch (op)
		{
		case '1':
			cin >> c;
			c %= P;
			update(1, l, r, c, 0);
			break;
		case '2':
			cin >> c;
			c %= P;
			update(1, l, r, 1, c);
			break;
		default:
			cout << query(1, l, r) << '\n';
			break;
		}
	}
	return 0;
}
