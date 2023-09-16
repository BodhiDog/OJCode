// 每个结点不一定都会使用，所以不会爆空间
#include <bits/stdc++.h>
using namespace std;

const int R = 3e5 + 10;
struct
{
	int son[2], val;
} t[R * 40];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int tot, root[R], a[R];
void update(int &k, int l, int r, int p, int v)
{
	if (!k)
	{
		k = ++tot;
	}
	t[k].val += v;
	if (l == r)
	{
		return;
	}
	int mid = (l + r) >> 1;
	if (p <= mid)
	{
		update(lc(k), l, mid, p, v);
	}
	else
	{
		update(rc(k), mid + 1, r, p, v);
	}
}
int query(int k, int l, int r, int x, int y)
{
	if (!k)
	{
		return 0;
	}
	if (x <= l && y >= r)
	{
		return t[k].val;
	}
	int mid = (l + r) >> 1, res = 0;
	if (x <= mid)
	{
		res = query(lc(k), l, mid, x, y);
	}
	if (y > mid)
	{
		res += query(rc(k), mid + 1, r, x, y);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, l, r, c, x;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		update(root[a[j]], 1, n, j, 1);
	}
	char op;
	while (m--)
	{
		cin >> op;
		if (op == '1')
		{
			cin >> l >> r >> c;
			cout << query(root[c], 1, n, l, r) << '\n';
		}
		else
		{
			cin >> x;
			update(root[a[x]], 1, n, x, -1);
			update(root[a[x + 1]], 1, n, x + 1, -1);
			update(root[a[x]], 1, n, x + 1, 1);
			update(root[a[x + 1]], 1, n, x, 1);
			swap(a[x], a[x + 1]);
		}
	}
	return 0;
}
