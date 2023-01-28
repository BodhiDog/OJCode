#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
int a[R];
struct Segt
{
	int l, r, mx, mu; // maxºÍmin
	Segt() { mx = -1, mu = INT_MAX; }
} tree[R * 4];
int tot;
void pushup(int k)
{
	tree[k].mu = min(tree[tree[k].l].mu, tree[tree[k].r].mu);
	tree[k].mx = max(tree[tree[k].l].mx, tree[tree[k].r].mx);
}
void build(int &k, int l, int r)
{
	k = ++tot;
	if (l == r)
	{
		tree[k].mx = tree[k].mu = a[l];
		return;
	}
	int mid = (l + r) >> 1;
	build(tree[k].l, l, mid);
	build(tree[k].r, mid + 1, r);
	pushup(k);
}
int querymax(int k, int l, int r, int x, int y)
{
	if (l >= x && r <= y)
		return tree[k].mx;
	int res = -1, mid = (l + r) >> 1;
	if (x <= mid)
		res = max(res, querymax(tree[k].l, l, mid, x, y));
	if (y > mid)
		res = max(res, querymax(tree[k].r, mid + 1, r, x, y));
	return res;
}
int querymin(int k, int l, int r, int x, int y)
{
	if (l >= x && r <= y)
		return tree[k].mu;
	int res = INT_MAX, mid = (l + r) >> 1;
	if (x <= mid)
		res = min(res, querymin(tree[k].l, l, mid, x, y));
	if (y > mid)
		res = min(res, querymin(tree[k].r, mid + 1, r, x, y));
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, c, j, root = 0;
	cin >> n >> m >> c;
	for (j = 1; j <= n; ++j)
		cin >> a[j];
	build(root, 1, n);
	bool flag = false;
	for (j = 1; j <= n - m + 1; ++j)
	{
		if (querymax(root, 1, n, j, j + m - 1) - querymin(root, 1, n, j, j + m - 1) <= c)
		{
			cout << j << '\n';
			flag = true;
		}
	}
	if (!flag)
		cout << "NONE\n";
	return 0;
}
