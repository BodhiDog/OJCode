#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
struct Node
{
	int l, r, val;
	Node()
	{
		val = INT_MAX;
	}
} t[N * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
int a[N];
void build(int k, int l, int r)
{
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].val = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	t[k].val = (t[lc(k)].val & t[rc(k)].val);
}
int query(int k, int x, int y)
{
	if (x <= t[k].l && t[k].r <= y)
	{
		return t[k].val;
	}
	int mid = (t[k].l + t[k].r) >> 1, res = -1;
	if (x <= mid)
	{
		res = query(lc(k), x, y);
	}
	if (y > mid)
	{
		res &= query(rc(k), x, y);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, q, i, k, l, r, ans;
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		build(1, 1, n);
		cin >> q;
		while (q--)
		{
			cin >> l >> k;
			if (a[l] < k)
			{
				cout << "-1 ";
			}
			else
			{
				r = l;
				for (i = 18; i >= 0; --i)
				{
					if (query(1, l, r + pow(2, i)) >= k)
					{
						r = r + pow(2, i);
					}
				}
				cout << min(r, n) << ' ';
			}
		}
		cout << '\n';
		for (i = 1; i <= (n << 2); ++i)
		{
			t[i].val = INT_MAX;
		}
	}
	return 0;
}
