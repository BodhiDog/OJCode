#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Node
{
	int son[2], l, r, tot[2], sum[2], lsum[2], rsum[2], cvtag;
	bool revtag;
	// cvtag -1NULL,0to0,1to1
	// revtag truereverse
	Node()
	{
		son[0] = son[1] = l = r = tot[0] = tot[1] = sum[0] = sum[1] = lsum[0] = lsum[1] = rsum[0] = rsum[1] = cvtag = 0;
		revtag = false;
	}
} t[R * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define len(k) (t[k].r - t[k].l + 1)
int root, tot, a[R];
void pushup(int k)
{
	// tot
	t[k].tot[0] = t[lc(k)].tot[0] + t[rc(k)].tot[0];
	t[k].tot[1] = t[lc(k)].tot[1] + t[rc(k)].tot[1];
	// lsum
	t[k].lsum[0] = (t[lc(k)].tot[1] ? t[lc(k)].lsum[0] : t[lc(k)].tot[0] + t[rc(k)].lsum[0]);
	t[k].lsum[1] = (t[lc(k)].tot[0] ? t[lc(k)].lsum[1] : t[lc(k)].tot[1] + t[rc(k)].lsum[1]);
	// 没有1就说明全是0
	// rsum
	t[k].rsum[0] = (t[rc(k)].tot[1] ? t[rc(k)].rsum[0] : t[lc(k)].rsum[0] + t[rc(k)].tot[0]);
	t[k].rsum[1] = (t[rc(k)].tot[0] ? t[rc(k)].rsum[1] : t[lc(k)].rsum[1] + t[rc(k)].tot[1]);
	// sum
	t[k].sum[0] = max(max(t[lc(k)].sum[0], t[rc(k)].sum[0]), t[lc(k)].rsum[0] + t[rc(k)].lsum[0]);
	t[k].sum[1] = max(max(t[lc(k)].sum[1], t[rc(k)].sum[1]), t[lc(k)].rsum[1] + t[rc(k)].lsum[1]);
}
void edit(int k, int op)
{
	if (op == 0) // cover0
	{
		t[k].cvtag = 0;
		t[k].revtag = false; // 千万别忘清空reverse标记！！！
		t[k].tot[0] = len(k), t[k].tot[1] = 0;
		t[k].sum[0] = len(k), t[k].sum[1] = 0;
		t[k].lsum[0] = len(k), t[k].lsum[1] = 0;
		t[k].rsum[0] = len(k), t[k].rsum[1] = 0;
	}
	else if (op == 1) // cover1
	{
		t[k].cvtag = 1;
		t[k].revtag = false;; // 千万别忘清空reverse标记！！！
		t[k].tot[0] = 0, t[k].tot[1] = len(k);
		t[k].sum[0] = 0, t[k].sum[1] = len(k);
		t[k].lsum[0] = 0, t[k].lsum[1] = len(k);
		t[k].rsum[0] = 0, t[k].rsum[1] = len(k);
	}
	else // reverse
	{
		t[k].revtag ^= 1;
		swap(t[k].tot[0], t[k].tot[1]);
		swap(t[k].sum[0], t[k].sum[1]);
		swap(t[k].lsum[0], t[k].lsum[1]);
		swap(t[k].rsum[0], t[k].rsum[1]);
	}
}
void pushdown(int k) // cover优先
{
	if (t[k].cvtag != -1)
	{
		if (lc(k))
			edit(lc(k), t[k].cvtag);
		if (rc(k))
			edit(rc(k), t[k].cvtag);
		t[k].cvtag = -1;
	}
	if (t[k].revtag)
	{
		if (lc(k))
			edit(lc(k), 2);
		if (rc(k))
			edit(rc(k), 2);
		t[k].revtag = false;
	}
}
void build(int &k, int l, int r)
{
	k = ++tot;
	t[k].l = l, t[k].r = r, t[k].cvtag = -1;
	if (l == r)
	{
		t[k].tot[a[l]] = t[k].sum[a[l]] = t[k].lsum[a[l]] = t[k].rsum[a[l]] = 1;
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, int op)
{
	pushdown(k);
	if (x <= t[k].l && y >= t[k].r)
	{
		edit(k, op);
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y, op);
	if (y > mid)
		update(rc(k), x, y, op);
	pushup(k);
}
Node query(int k, int x, int y)
{
	pushdown(k);
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
		// tot
		res.tot[0] = lres.tot[0] + rres.tot[0];
		res.tot[1] = lres.tot[1] + rres.tot[1];
		// lsum
		res.lsum[0] = (lres.tot[1] ? lres.lsum[0] : lres.tot[0] + rres.lsum[0]);
		res.lsum[1] = (lres.tot[0] ? lres.lsum[1] : lres.tot[1] + rres.lsum[1]);
		// rsum
		res.rsum[0] = (rres.tot[1] ? rres.rsum[0] : lres.rsum[0] + rres.tot[0]);
		res.rsum[1] = (rres.tot[0] ? rres.rsum[1] : lres.rsum[1] + rres.tot[1]);
		// sum
		res.sum[0] = max(max(lres.sum[0], rres.sum[0]), lres.rsum[0] + rres.lsum[0]);
		res.sum[1] = max(max(lres.sum[1], rres.sum[1]), lres.rsum[1] + rres.lsum[1]);
		return res;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, r, op;
	cin >> n >> m;
	for (int j = 0; j < n; ++j)
		cin >> a[j];
	build(root, 0, n - 1);
	while (m--)
	{
		cin >> op >> l >> r;
		if (op <= 2)
			update(root, l, r, op);
		else if (op == 3)
			cout << query(root, l, r).tot[1] << '\n';
		else
			cout << query(root, l, r).sum[1] << '\n';
	}
	return 0;
}
