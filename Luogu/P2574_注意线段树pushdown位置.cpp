#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int a[N];
struct Node
{
	int l, r, sum;
	bool tag;
} t[N * 4];
#define lc(k) k << 1
#define rc(k) k << 1 | 1
void pushup(int k)
{
	t[k].sum = t[lc(k)].sum + t[rc(k)].sum;
}
void pushdown(int k)
{
	if (t[k].tag)
	{
		t[lc(k)].sum = (t[lc(k)].r - t[lc(k)].l + 1) - t[lc(k)].sum;
		t[rc(k)].sum = (t[rc(k)].r - t[rc(k)].l + 1) - t[rc(k)].sum;
		t[lc(k)].tag ^= 1;
		t[rc(k)].tag ^= 1;
		t[k].tag = false;
	}
}
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].sum = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		t[k].tag ^= 1;
		t[k].sum = (t[k].r - t[k].l + 1) - t[k].sum;
		return;
	}
	pushdown(k); // pushdown必须写在判断之后，否则k*2会RE！因为叶子结点是不可能pushdown的！
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y);
	if (y > mid)
		update(rc(k), x, y);
	pushup(k);
}
int query(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		return t[k].sum;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1, res = 0;
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
	int n, m, x, y, op;
	char c;
	cin >> n >> m;
	for (int j = 1; j <= n; ++j)
	{
		cin >> c;
		a[j] = (c ^ 48);
	}
	build(1, 1, n);
	while (m--)
	{
		cin >> op >> x >> y;
		if (op == 0)
			update(1, x, y);
		else
			cout << query(1, x, y) << '\n';
	}
	return 0;
}