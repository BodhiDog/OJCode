#include <bits/stdc++.h>
using namespace std;

const int R = 5e5 + 10;
struct Node
{
	int son[2], l, r, tot, lsum, rsum, sum; // tot是所有数的和，sum是连续和
} t[R * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int root, tot, a[R];
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
		t[k].tot = t[k].lsum = t[k].rsum = t[k].sum = a[l];
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
		t[k].tot = t[k].lsum = t[k].rsum = t[k].sum = x;
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
		update(lc(k), p, x);
	else
		update(rc(k), p, x);
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
		Node lres = query(lc(k), x, y),
			 rres = query(rc(k), x, y),
			 res;
		res.tot = lres.tot + rres.tot;
		res.lsum = max(lres.lsum, lres.tot + rres.lsum);
		res.rsum = max(rres.rsum, lres.rsum + rres.tot);
		res.sum = max(max(lres.sum, rres.sum), lres.rsum + rres.lsum);
		return res;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, r, p, x;
	char op;
	cin >> n >> m;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	while (m--)
	{
		cin >> op;
		if (op == '1')
		{
			cin >> l >> r;
			if (l > r)
				swap(l, r);
			cout << query(root, l, r).sum << '\n';
		}
		else
		{
			cin >> p >> x;
			update(root, p, x);
		}
	}
	return 0;
}
