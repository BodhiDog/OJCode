#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int l, r, val;
	bool tag;
} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
void pushup(int k)
{
	t[k].val = t[lc(k)].val + t[rc(k)].val;
}
#define edit(k) t[k].tag ^= 1, t[k].val = (t[k].r - t[k].l + 1) - t[k].val
void pushdown(int k)
{
	if (t[k].tag)
	{
		edit(lc(k));
		edit(rc(k));
	}
	t[k].tag = false;
}
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
		return;
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
}
void update(int k, int x, int y)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		edit(k);
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
		return t[k].val;
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	int res = 0;
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
	int n, m, j, l, r;
	char c;
	cin >> n >> m;
	build(1, 1, n);
	while (m--)
	{
		cin >> c >> l >> r;
		if (c == '0')
			update(1, l, r);
		else
			cout << query(1, l, r) << '\n';
	}
	return 0;
}
