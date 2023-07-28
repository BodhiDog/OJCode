#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
struct Node
{
	int son[2], l, r, lsum, rsum, sum, tot;
} t[R * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int a[R], root, tot;
void pushup(int k)
{
	t[k].tot = t[lc(k)].tot + t[rc(k)].tot;
	t[k].lsum = max(t[lc(k)].lsum, t[lc(k)].tot + t[rc(k)].lsum);
	t[k].rsum = max(t[rc(k)].rsum, t[lc(k)].rsum + t[rc(k)].tot);
	t[k].sum = max(max(t[lc(k)].sum, t[rc(k)].sum), t[lc(k)].rsum + t[rc(k)].lsum);
}
void build(int &k, int l, int r)
{
	k = ++tot;
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].lsum = t[k].rsum = t[k].sum = t[k].tot = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
Node query(int k, int x, int y)
{
	if (x <= t[k].l && y >= t[k].r)
		return t[k];
	int mid = (t[k].l + t[k].r) >> 1;
	if (y <= mid)
		return query(lc(k), x, y);
	else if (x > mid)
		return query(rc(k), x, y);
	else
	{
		Node l = query(lc(k), x, y),
			 r = query(rc(k), x, y),
			 res;
		res.lsum = max(l.lsum, l.tot + r.lsum);
		res.rsum = max(r.rsum, l.rsum + r.tot);
		res.tot = l.tot + r.tot;
		res.sum = max(max(l.sum, r.sum), l.rsum + r.lsum);
		return res;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, r;
	cin >> n;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	cin >> m;
	while (m--)
	{
		cin >> l >> r;
		cout << query(root, l, r).sum << '\n';
	}
	return 0;
}
