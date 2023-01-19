#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Node
{
	int l, r, val, key, size;
} tree[R];
mt19937 rd;
int tot, root; // 每次操作后都要更新root
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
int x, y, z; // 临时变量，干杂活，无实际含义
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
		z = merge(tree[z].l, tree[z].r); // 根节点不要了，把两个子树合并起来就相当于去掉根节点
		root = merge(merge(x, z), y);
	}
}
int rankx(int val)
{
	split(root, val - 1, x, y); // 注意是要将所有<val的树分到子树x上，而非<=
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
			k = k - (tree[tree[x].l].size + 1); // 注意减的是左子树的大小+1
			x = tree[x].r;
		}
	}
	return -1;
}
int pre(int val)
{
	split(root, val - 1, x, y);
	z = x;
	while (tree[z].r)
		z = tree[z].r;
	root = merge(x, y);
	return tree[z].val;
}
int ext(int val)
{
	split(root, val, x, y);
	z = y;
	while (tree[z].l)
		z = tree[z].l;
	root = merge(x, y);
	return tree[z].val;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, opt;
	cin >> n;
	while (n--)
	{
		cin >> opt >> x;
		if (opt == 1)
			insert(x);
		else if (opt == 2)
			del(x);
		else if (opt == 3)
			cout << rankx(x) << '\n';
		else if (opt == 4)
			cout << kth(x) << '\n';
		else if (opt == 5)
			cout << pre(x) << '\n';
		else
			cout << ext(x) << '\n';
	}
	return 0;
}
