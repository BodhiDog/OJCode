#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int l, r, res;
	bool revtag;
} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) t[k].res = t[lc(k)].res + t[rc(k)].res
void edit(int k)
{
	t[k].revtag ^= 1;
	t[k].res = (t[k].r - t[k].l + 1) - t[k].res;
}
void pushdown(int k)
{
	if (t[k].revtag)
	{
		edit(lc(k));
		edit(rc(k));
		t[k].revtag = false;
	}
}
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
}
void update(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		edit(k);
		return;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
	{
		update(lc(k), x, y);
	}
	if (y > mid)
	{
		update(rc(k), x, y);
	}
	pushup(k);
}
int query(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		return t[k].res;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1, res = 0;
	if (x <= mid)
	{
		res = query(lc(k), x, y);
	}
	if (y > mid)
	{
		res += query(rc(k), x, y);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, op, l, r;
	cin >> n >> m;
	build(1, 1, n);
	while (m--)
	{
		cin >> op >> l >> r;
		if (op == 0)
		{
			update(1, l, r);
		}
		else
		{
			cout << query(1, l, r) << '\n';
		}
	}
	return 0;
}
