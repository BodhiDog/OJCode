// 考虑题目所具有的特殊性质，例如本题中10^12最多开方6次就能到1，所以可以暴力单点修改
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
using ll = long long;
ll a[R];
struct
{
	int son[2];
	ll maxv, sum;
} t[R * 2];
int root, tot;
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
void pushup(int k)
{
	t[k].maxv = max(t[lc(k)].maxv, t[rc(k)].maxv);
	t[k].sum = t[lc(k)].sum + t[rc(k)].sum;
}
void build(int &k, int l, int r)
{
	k = ++tot;
	if (l == r)
	{
		t[k].maxv = t[k].sum = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int l, int r, int x, int y)
{
	if (l == r)
	{
		t[k].maxv = t[k].sum = sqrt(t[k].sum);
		return;
	}
	int mid = (l + r) >> 1;
	if (x <= mid && t[lc(k)].maxv > 1)
		update(lc(k), l, mid, x, y);
	if (y > mid && t[rc(k)].maxv > 1)
		update(rc(k), mid + 1, r, x, y);
	pushup(k);
}
ll query(int k, int l, int r, int x, int y)
{
	if (x <= l && y >= r)
		return t[k].sum;
	ll res = 0;
	int mid = (l + r) >> 1;
	if (x <= mid)
		res = query(lc(k), l, mid, x, y);
	if (y > mid)
		res += query(rc(k), mid + 1, r, x, y);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, j, l, r;
	char op;
	cin >> n;
	for (j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	cin >> q;
	while (q--)
	{
		cin >> op >> l >> r;
		if (l > r)
			swap(l, r);
		if (op == '0')
			update(root, 1, n, l, r);
		else
			cout << query(root, 1, n, l, r) << '\n';
	}
	return 0;
}
