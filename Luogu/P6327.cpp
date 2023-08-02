#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct
{
	int son[2], l, r;
	double sinsum, cossum; // cos区间修改时用
	long long tag;
} t[R * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int a[R], root, tot;
void pushup(int k)
{
	t[k].sinsum = t[lc(k)].sinsum + t[rc(k)].sinsum;
	t[k].cossum = t[lc(k)].cossum + t[rc(k)].cossum;
}
void edit(int k, long long v)
{
	t[k].tag += v;
	double s = sin(v), c = cos(v),
		   backups = t[k].sinsum, backupc = t[k].cossum;
	t[k].sinsum = c * backups + s * backupc;
	t[k].cossum = c * backupc - s * backups;
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
		t[k].sinsum = sin(a[l]);
		t[k].cossum = cos(a[l]);
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y, int v)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		edit(k, v);
		return;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
	{
		update(lc(k), x, y, v);
	}
	if (y > mid)
	{
		update(rc(k), x, y, v);
	}
	pushup(k);
}
double query(int k, int x, int y)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		return t[k].sinsum;
	}
	pushdown(k);
	int mid = (t[k].l + t[k].r) >> 1;
	double res = 0;
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
	int n, m, j, l, r, v;
	char op;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	build(root, 1, n);
	cin >> m;
	while (m--)
	{
		cin >> op >> l >> r;
		if (op == '1')
		{
			cin >> v;
			update(root, l, r, v);
		}
		else
		{
			cout << fixed << setprecision(1) << query(root, l, r) << '\n';
		}
	}
	return 0;
}
