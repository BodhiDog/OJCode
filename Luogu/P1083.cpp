#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
struct Node
{
	int son[2], val, tag;
	Node() { val = INT_MAX; }
} t[R * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define mid ((l + r) >> 1)
#define pushup(k) t[k].val = min(t[lc(k)].val, t[rc(k)].val)
int tot, root, a[R];
inline void edit(int &k, int &v)
{
	t[k].tag += v;
	t[k].val += v;
}
void pushdown(int k)
{
	if (t[k].tag)
	{
		edit(lc(k), t[k].tag);
		edit(rc(k), t[k].tag);
		t[k].tag = 0;
	}
}
void build(int &k, int l, int r)
{
	k = ++tot;
	if (l == r)
	{
		t[k].val = a[l];
		return;
	}
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	pushup(k);
}
void update(int k, int l, int r, int x, int y, int val)
{
	if (x <= l && y >= r)
	{
		edit(k, val);
		return;
	}
	pushdown(k);
	if (x <= mid)
	{
		update(lc(k), l, mid, x, y, val);
	}
	if (y > mid)
	{
		update(rc(k), mid + 1, r, x, y, val);
	}
	pushup(k);
}
int query(int k, int l, int r, int x, int y)
{
	if (x <= l && y >= r)
	{
		return t[k].val;
	}
	pushdown(k);
	int res = INT_MAX;
	if (x <= mid)
	{
		res = query(lc(k), l, mid, x, y);
	}
	if (y > mid)
	{
		res = min(query(rc(k), mid + 1, r, x, y), res);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, d, l, r;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	build(root, 1, n);
	for (j = 1; j <= m; ++j)
	{
		cin >> d >> l >> r;
		if (query(root, 1, n, l, r) < d)
		{
			cout << "-1\n"
				 << j << '\n';
			return 0;
		}
		else
		{
			update(root, 1, n, l, r, -d);
		}
	}
	cout << "0\n";
	return 0;
}
