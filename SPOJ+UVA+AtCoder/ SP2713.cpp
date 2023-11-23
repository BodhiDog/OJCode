#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct
{
	int l, r;
	ll sum, maxv;
} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
ll a[R];
void pushup(int k)
{
	t[k].sum = t[lc(k)].sum + t[rc(k)].sum;
	t[k].maxv = max(t[lc(k)].maxv, t[rc(k)].maxv);
}
void init(int n)
{
	int i;
	for (i = 1; i <= n * 4; ++i)
	{
		t[i] = {0, 0, 0, -1};
	}
}
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].sum = t[k].maxv = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int x, int y)
{
	if (t[k].maxv == 1)
	{
		return;
	}
	if (t[k].l == t[k].r)
	{
		t[k].sum = t[k].maxv = sqrt(t[k].sum);
		return;
	}
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
ll query(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		return t[k].sum;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	ll res = 0;
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
	int n = 0, m, i, op, x, y, cnt = 0;
	while (cin >> n)
	{
		++cnt;
		cout << "Case #" << cnt << ":\n";
		init(n);
		for (i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		build(1, 1, n);
		cin >> m;
		while (m--)
		{
			cin >> op >> x >> y;
			if (x > y)
			{
				swap(x, y);
			}
			if (op == 0)
			{
				update(1, x, y);
			}
			else
			{
				cout << query(1, x, y) << '\n';
			}
		}
		cout << '\n';
	}
	return 0;
}
