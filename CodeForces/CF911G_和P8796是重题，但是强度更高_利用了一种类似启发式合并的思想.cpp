#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
int tot, root[110];
int ans[R], s[R];
struct
{
	int l, r, pos, key, sz;
} tree[R];
mt19937 rd;
int crt(int pos)
{
	tree[++tot].pos = pos;
	tree[tot].key = rd();
	tree[tot].sz = 1;
	return tot;
}
void pushup(int k) { tree[k].sz = tree[tree[k].l].sz + tree[tree[k].r].sz + 1; }
void split(int k, int val, int &x, int &y)
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	if (tree[k].pos <= val)
	{
		x = k;
		split(tree[x].r, val, tree[x].r, y);
	}
	else
	{
		y = k;
		split(tree[y].l, val, x, tree[y].l);
	}
	pushup(k);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	if (tree[x].key < tree[y].key)
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
int mix(int x, int y)
{
	if (!x || !y)
		return x + y;
	int a, b;
	if (tree[x].sz < tree[y].sz) // 这里就需要用到sz了，经实测，这种把小树混合到大树中的方法能使程序更快，也就是启发式合并思想
		swap(x, y);
	split(y, tree[x].pos, a, b);
	tree[x].l = mix(tree[x].l, a);
	tree[x].r = mix(tree[x].r, b);
	return x;
}
void dfs(int &val, int k)
{
	if (tree[k].l)
		dfs(val, tree[k].l);
	ans[tree[k].pos] = val;
	if (tree[k].r)
		dfs(val, tree[k].r);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, r, x, y, xa, xb, xc, ya, yb, yc;
	cin >> n;
	int j;
	for (j = 1; j <= n; ++j)
	{
		cin >> x;
		root[x] = merge(root[x], crt(j));
	}
	cin >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> l >> r >> x >> y;
		split(root[x], l - 1, xa, xb);
		split(xb, r, xb, xc);
		root[x] = merge(xa, xc);
		split(root[y], l - 1, ya, yb);
		split(yb, r, yb, yc);
		root[y] = merge(merge(ya, mix(yb, xb)), yc);
	}
	for (x = 1; x <= 100; ++x)
		if (root[x])
			dfs(x, root[x]);
	for (j = 1; j <= n; ++j)
		cout << ans[j] << ' ';
	cout << '\n';
	return 0;
}