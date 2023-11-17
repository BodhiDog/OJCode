#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int l, r, maxpos;
} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) t[k].maxpos = max(t[lc(k)].maxpos, t[rc(k)].maxpos)
int x, a[R], lst[R];
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		lst[a[l]] = l;
		t[k].maxpos = lst[a[l] ^ x];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
int query(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		return t[k].maxpos;
	}
	int mid = (t[k].l + t[k].r) >> 1, res = 0;
	if (x <= mid)
	{
		res = query(lc(k), x, y);
	}
	if (y > mid)
	{
		res = max(res, query(rc(k), x, y));
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, l, r;
	cin >> n >> m >> x;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	build(1, 1, n);
	while (m--)
	{
		cin >> l >> r;
		cout << (query(1, l, r) >= l ? "yes\n" : "no\n");
	}
	return 0;
}
