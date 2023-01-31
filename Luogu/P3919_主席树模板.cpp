#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
int a[R], root[R], tot, vtot;
struct Node
{
	int l, r, val;
} tree[R << 5];
void build(int &k, int l, int r)
{
	k = ++tot;
	if (l == r)
	{
		tree[k].val = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(tree[k].l, l, mid);
	build(tree[k].r, mid + 1, r);
}
void update(int &k, int prek, int l, int r, int pos, int val)
{
	k = ++tot;
	tree[k] = tree[prek];
	if (l == r)
	{
		tree[k].val = val;
		return;
	}
	int mid = (l + r) >> 1;
	if (pos <= mid)
		update(tree[k].l, tree[prek].l, l, mid, pos, val);
	else
		update(tree[k].r, tree[prek].r, mid + 1, r, pos, val);
}
int query(int k, int l, int r, int pos)
{
	if (l == r)
		return tree[k].val;
	int mid = (l + r) >> 1;
	if (pos <= mid)
		return query(tree[k].l, l, mid, pos);
	else
		return query(tree[k].r, mid + 1, r, pos);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int ver, t, pos, val;
	int n, m;
	cin >> n >> m;
	for (int j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	build(root[0], 1, n);
	for (int nowver = 1; nowver <= m; ++nowver)
	{
		cin >> ver >> t;
		if (t == 1)
		{
			cin >> pos >> val;
			update(root[nowver], root[ver], 1, n, pos, val);
		}
		else
		{
			cin >> pos;
			cout << query(root[ver], 1, n, pos) << '\n';
			root[nowver] = root[ver];
		}
	}
	return 0;
}