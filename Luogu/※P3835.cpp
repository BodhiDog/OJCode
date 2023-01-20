#include <bits/stdc++.h>
using namespace std;

const int R = 5e5 + 10;
struct
{
	int l, r, val, sz, key;
} tree[R * 50];
mt19937 rd;
int root[R], tot, vers;
int crt(int val = 0)
{
	tree[++tot] = {0, 0, val, 1, 0};
	tree[tot].key = rd();
	return tot;
}
#define lc tree[k].l
#define rc tree[k].r
void pushup(int k)
{
	tree[k].sz = tree[lc].sz + tree[rc].sz + 1;
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	int a = crt();
	if (tree[x].key < tree[y].key)
	{
		tree[a] = tree[x];
		tree[a].r = merge(tree[a].r, y);
	}
	else
	{
		tree[a] = tree[y];
		tree[a].l = merge(x, tree[a].l);
	}
	pushup(a);
	return a; // 两行代码都有,所以提到外边写
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
		x = crt();
		tree[x] = tree[k];
		split(tree[x].r, val, tree[x].r, y);
		pushup(x);
	}
	else
	{
		y = crt();
		tree[y] = tree[k];
		split(tree[y].l, val, x, tree[y].l);
		pushup(y);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, ver, opt, x;
	int a, b, c, k;
	cin >> n;
	for (int j = 1; j <= n; ++j)
	{
		cin >> ver >> opt >> x;
		root[j] = root[ver]; // 应先把这棵树复制出来,再在这棵新树上操作
		if (opt == 1)
		{
			split(root[j], x, a, b);
			root[j] = merge(merge(a, crt(x)), b);
		}
		else if (opt == 2)
		{
			split(root[j], x - 1, a, b);
			split(b, x, b, c);
			if (tree[b].sz == 0)
				continue;
			b = merge(tree[b].l, tree[b].r);
			root[j] = merge(merge(a, b), c);
		}
		else if (opt == 3)
		{
			split(root[j], x - 1, a, b);
			cout << tree[a].sz + 1 << '\n';
			root[j] = merge(a, b);
		}
		else if (opt == 4)
		{
			k = root[j];
			while (k)
			{
				if (tree[lc].sz + 1 == x)
					break;
				if (tree[lc].sz >= x)
					k = lc;
				else
				{
					x -= tree[lc].sz + 1;
					k = rc;
				}
			}
			cout << tree[k].val << '\n';
		}
		else if (opt == 5)
		{
			split(root[j], x - 1, a, b);
			if (a == 0)
			{
				cout << -INT_MAX << '\n';
				continue;
			}
			k = a;
			while (tree[k].r)
				k = rc;
			cout << tree[k].val << '\n';
			root[j] = merge(a, b);
		}
		else
		{
			split(root[j], x, a, b);
			if (b == 0)
			{
				cout << INT_MAX << '\n';
				continue;
			}
			k = b;
			while (tree[k].l)
				k = lc;
			cout << tree[k].val << '\n';
			root[j] = merge(a, b);
		}
	}
	return 0;
}