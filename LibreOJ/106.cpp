#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
int n, a[R];
struct Node
{
	int l, r, val, key, size;
} tree[R * 40];
mt19937 rd(2333);
int tot, root; // 每次操作后都要更新root
class FHQ
{
public:
	int root;
	int create(int val)
	{
		tree[++tot].key = rd();
		tree[tot].val = val;
		tree[tot].size = 1;
		return tot;
	}
	void pushup(int k)
	{
		tree[k].size = tree[tree[k].l].size + tree[tree[k].r].size + 1;
	}
	void split(int k, int val, int &x, int &y)
	{
		if (k == 0)
		{
			x = y = 0;
			return;
		}
		if (tree[k].val <= val)
		{
			x = k;
			split(tree[k].r, val, tree[k].r, y);
		}
		else
		{
			y = k;
			split(tree[k].l, val, x, tree[k].l);
		}
		pushup(k);
	}
	int merge(int x, int y)
	{
		if (x == 0 || y == 0)
			return (x == 0 ? y : x);
		if (tree[x].key > tree[y].key)
		{
			tree[x].r = merge(tree[x].r, y);
			pushup(x);
			return x;
		}
		else
		{
			tree[y].l = merge(x, tree[y].l);
			pushup(y);
			return y;
		}
	}
	int x, y, z;
	void insert(int val)
	{
		split(root, val, x, y);
		root = merge(merge(x, create(val)), y);
	}
	void del(int val)
	{
		split(root, val, x, y);
		split(x, val - 1, x, z);
		if (tree[z].size)
		{
			z = merge(tree[z].l, tree[z].r);
			root = merge(merge(x, z), y);
		}
	}
	int rankx(int val)
	{
		split(root, val - 1, x, y);
		int res = tree[x].size + 1;
		root = merge(x, y);
		return res;
	}
	int kth(int k)
	{
		x = root;
		while (x)
		{
			if (tree[tree[x].l].size + 1 == k)
				return tree[x].val;
			if (tree[tree[x].l].size >= k)
				x = tree[x].l;
			else
			{
				k = k - (tree[tree[x].l].size + 1);
				x = tree[x].r;
			}
		}
		return -1;
	}
	int pre(int val)
	{
		split(root, val - 1, x, y);
		if (tree[x].size == 0)
		{
			return -2147483647;
		}
		z = x;
		while (tree[z].r)
			z = tree[z].r;
		root = merge(x, y);
		return tree[z].val;
	}
	int succ(int val)
	{
		split(root, val, x, y);
		if (tree[y].size == 0)
		{
			return 2147483647;
		}
		z = y;
		while (tree[z].l)
			z = tree[z].l;
		root = merge(x, y);
		return tree[z].val;
	}
} t[R * 20];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define mid ((l + r) >> 1)
void build(int k, int l, int r)
{
	for (int i = l; i <= r; ++i)
	{
		t[k].insert(a[i]);
	}
	if (l == r)
	{
		return;
	}
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
}
int rankx(int k, int l, int r, int x, int y, int v)
{
	if (x <= l && y >= r)
	{
		return t[k].rankx(v) - 1;
	}
	int res = 0;
	if (x <= mid)
	{
		res = rankx(lc(k), l, mid, x, y, v);
	}
	if (y > mid)
	{
		res += rankx(rc(k), mid + 1, r, x, y, v);
	}
	return res;
}
int kth(int x, int y, int k)
{
	int res = 0, l = -1e8, r = 1e8;
	while (l <= r)
	{
		if (rankx(1, 1, n, x, y, mid) + 1 <= k)
		{
			res = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return res;
}
void update(int k, int l, int r, int p, int v)
{
	t[k].del(a[p]);
	t[k].insert(v);
	if (l == r)
	{
		return;
	}
	if (p <= mid)
	{
		update(lc(k), l, mid, p, v);
	}
	else
	{
		update(rc(k), mid + 1, r, p, v);
	}
}
int pre(int k, int l, int r, int x, int y, int v)
{
	if (x <= l && y >= r)
	{
		return t[k].pre(v);
	}
	int res = -2147483647;
	if (x <= mid)
	{
		res = pre(lc(k), l, mid, x, y, v);
	}
	if (y > mid)
	{
		res = max(pre(rc(k), mid + 1, r, x, y, v), res);
	}
	return res;
}
int succ(int k, int l, int r, int x, int y, int v)
{
	if (x <= l && y >= r)
	{
		return t[k].succ(v);
	}
	int res = 2147483647;
	if (x <= mid)
	{
		res = succ(lc(k), l, mid, x, y, v);
	}
	if (y > mid)
	{
		res = min(succ(rc(k), mid + 1, r, x, y, v), res);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, l, r, k, p;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	build(1, 1, n);
	char op;
	while (m--)
	{
		cin >> op >> l >> r;
		if (op == '1')
		{
			cin >> k;
			cout << rankx(1, 1, n, l, r, k) + 1 << '\n';
		}
		else if (op == '2')
		{
			cin >> k;
			cout << kth(l, r, k) << '\n';
		}
		else if (op == '3')
		{
			p = l, k = r;
			update(1, 1, n, p, k);
			a[p] = k;
		}
		else if (op == '4')
		{
			cin >> k;
			cout << pre(1, 1, n, l, r, k) << '\n';
		}
		else
		{
			cin >> k;
			cout << succ(1, 1, n, l, r, k) << '\n';
		}
	}
	return 0;
}