/*新的发现：
我们在合并的时候一定要按照分裂的顺序合并
比如：split(x,y),split(y,z)，就要按照merge(x,merge(y,z))或merge(merge(x,y),z)合并
即：后分先合，先分后合，按顺序合并
merge(merge(y, z), x)未按照顺序合并*/

#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int l, r, val, key, sz;
} tree[R];
int root, tot;
mt19937 rd;
int crt(int val)
{
	tree[++tot].val = val;
	tree[tot].key = rd();
	tree[tot].sz = 1;
	return tot;
}
void pushup(int k) { tree[k].sz = tree[tree[k].l].sz + tree[tree[k].r].sz + 1; }
void split(int k, int val, int &x, int &y) // 按值分裂
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
int x, y, z;
void insert(int val)
{
	split(root, val - 1, x, y);
	split(y, val, y, z);
	root = merge(x, merge(merge(y, crt(val)), z)); // 注意看，这里也是按照顺序再合并起来的
}
void del(int val)
{
	split(root, val - 1, x, y);
	split(y, val, y, z);
	y = merge(tree[y].l, tree[y].r);

	root = merge(merge(x, y), z);
	/*新的发现：
	我们在合并的时候一定要按照分裂的顺序合并
	比如：split(x,y),split(y,z)，就要按照merge(x,merge(y,z))或merge(merge(x,y),z)合并
	即：后分先合，先分后合，按顺序合并
	merge(merge(y, z), x)未按照顺序合并*/
}
int rank1(int val)
{
	split(root, val - 1, x, y);
	int res = tree[x].sz + 1;
	root = merge(x, y);
	return res;
}
int kth(int k)
{
	int res;
	x = root;
	while (x)
	{
		if (tree[tree[x].l].sz + 1 == k)
		{
			res = tree[x].val;
			break;
		}
		if (tree[tree[x].l].sz >= k)
			x = tree[x].l;
		else
		{
			k -= (tree[tree[x].l].sz + 1);
			x = tree[x].r;
		}
	}
	return res;
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
	int n, opt, x;
	cin >> n;
	int j;
	for (j = 1; j <= n; ++j)
	{
		cin >> opt >> x;
		if (opt == 1)
			insert(x);
		else if (opt == 2)
			del(x);
		else if (opt == 3)
			cout << rank1(x) << '\n';
		else if (opt == 4)
			cout << kth(x) << '\n';
		else if (opt == 5)
			cout << pre(x) << '\n';
		else
			cout << ext(x) << '\n';
	}
	return 0;
}