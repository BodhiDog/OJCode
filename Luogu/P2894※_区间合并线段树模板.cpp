#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
struct
{
	int l, r, lsum, rsum, sum; // 所有sum维护0的个数
	int tag;				   // 0NULL1住人2退房
} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define len(k) (t[k].r - t[k].l + 1)
void pushup(int k)
{
	t[k].lsum = (t[lc(k)].sum == len(lc(k)) ? t[lc(k)].sum + t[rc(k)].lsum : t[lc(k)].lsum);
	t[k].rsum = (t[rc(k)].sum == len(rc(k)) ? t[rc(k)].sum + t[lc(k)].rsum : t[rc(k)].rsum); // 注意细节，别写错了！！！
	t[k].sum = max(max(t[lc(k)].sum, t[rc(k)].sum), t[lc(k)].rsum + t[rc(k)].lsum);
}
void pushdown(int k)
{
	if (t[k].tag == 0)
		return;
	t[lc(k)].tag = t[rc(k)].tag = t[k].tag;
	if (t[k].tag == 1)
	{
		t[lc(k)].lsum = t[lc(k)].rsum = t[lc(k)].sum = t[rc(k)].lsum = t[rc(k)].rsum = t[rc(k)].sum = 0;
	}
	else
	{
		t[lc(k)].lsum = t[lc(k)].rsum = t[lc(k)].sum = len(lc(k));
		t[rc(k)].lsum = t[rc(k)].rsum = t[rc(k)].sum = len(rc(k));
	}
	t[k].tag = 0;
}
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	t[k].lsum = t[k].rsum = t[k].sum = len(k);
	if (l == r)
		return;
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
}
void update(int k, int x, int y, int op)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		t[k].lsum = t[k].rsum = t[k].sum = (op == 1 ? 0 : len(k));
		t[k].tag = op;
		return;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y, op);
	if (y > mid)
		update(rc(k), x, y, op);
	pushup(k);
}
int query(int k, int len)
{
	if (t[k].l == t[k].r)
		return t[k].l;
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	if (t[lc(k)].sum >= len)
		return query(lc(k), len);
	if (t[lc(k)].rsum + t[rc(k)].lsum >= len)
		return t[lc(k)].r - t[lc(k)].rsum + 1;
	else
		return query(rc(k), len);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, left;
	char op;
	cin >> n >> m;
	build(1, 1, n);
	while (m--)
	{
		cin >> op >> x;
		if (op == '1')
		{
			if (t[1].sum >= x)
			{
				left = query(1, x);
				cout << left << '\n';
				update(1, left, left + x - 1, 1);
			}
			else
				cout << "0\n";
		}
		else
		{
			cin >> y;
			update(1, x, x + y - 1, 2);
		}
	}
	return 0;
}
