#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
using ll = long long;
struct
{
	int son[2], l, r;
	ll val, tag;
} t[R * 2]; // 动态开点2倍就够
ll a[R];
int root, tot;
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define len(k) (t[k].r - t[k].l + 1)
#define pushup(k) t[k].val = t[lc(k)].val + t[rc(k)].val
void edit(int k, ll v)
{
	t[k].val += ll(len(k)) * v;
	t[k].tag += v;
}
void pushdown(int k)
{
	if (t[k].tag)
	{
		if (lc(k))
			edit(lc(k), t[k].tag);
		if (rc(k))
			edit(rc(k), t[k].tag);
		t[k].tag = 0;
	}
}
void build(int &k, int l, int r)
{
	k = ++tot;
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].val = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, ll v)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		edit(k, v);
		return;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y, v);
	if (y > mid)
		update(rc(k), x, y, v);
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
		res += query(rc(k), x, y);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, l, r, f;
	char op;
	ll k;
	cin >> n >> f;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	while (f--)
	{
		cin >> op;
		if (op == '1')
		{
			cin >> l >> r >> k;
			update(root, l, r, k);
		}
		else if (op == '2')
		{
			cin >> k;
			update(root, 1, 1, k);
		}
		else if (op == '3')
		{
			cin >> k;
			update(root, 1, 1, -k);
		}
		else if (op == '4')
		{
			cin >> l >> r;
			cout << query(root, l, r) << '\n';
		}
		else
			cout << query(root, 1, 1) << '\n';
	}
	return 0;
}
