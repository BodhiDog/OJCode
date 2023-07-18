#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
int a[R];
struct
{
	int son[2], l, r, val;
} t[R * 2];
int root, tot;
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define pushup(k) t[k].val = max(t[lc(k)].val, t[rc(k)].val)
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
void update(int k, int p, int x)
{
	if (t[k].l == t[k].r)
	{
		t[k].val = max(t[k].val, x);
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
		update(lc(k), p, x);
	else
		update(rc(k), p, x);
	pushup(k);
}
int query(int k, int x, int y)
{
	if (x <= t[k].l && y >= t[k].r)
		return t[k].val;
	int mid = (t[k].l + t[k].r) >> 1;
	int res = 0;
	if (x <= mid)
		res = query(lc(k), x, y);
	if (y > mid)
		res = max(query(rc(k), x, y), res);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y;
	char op;
	cin >> n >> m;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	while (m--)
	{
		cin >> op >> x >> y;
		if (op == 'Q')
			cout << query(root, x, y) << '\n';
		else
			update(root, x, y);
	}
	return 0;
}
