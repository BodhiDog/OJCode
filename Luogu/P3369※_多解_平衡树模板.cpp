// FHQ Treap
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

//Splay
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int root;
class Splay
{
public:
	struct
	{
		int val, son[2], fa, sz;
	} spl[R];
#define lc(x) spl[x].son[0]
#define rc(x) spl[x].son[1]
#define fa(x) spl[x].fa
	int tot;
	int crt(int val, int fa)
	{
		spl[++tot].sz = 1;
		spl[tot].fa = fa;
		spl[tot].val = val;
		return tot;
	}
	void pushup(int k) { spl[k].sz = spl[lc(k)].sz + spl[rc(k)].sz + 1; }
	int lrson(int x, int y) { return spl[y].son[1] == x; } // 是一个左儿子返回0，右儿子返回1，对应son[0]/son[1]

	void connect(int x, int f, int k)
	{
		spl[f].son[k] = x;
		spl[x].fa = f;
	}
	void rotate(int x) // 这仅是一次旋转
	{
		int f = spl[x].fa, ff = spl[f].fa, lr = lrson(x, f);
		connect(spl[x].son[lr ^ 1], f, lr);
		connect(x, ff, lrson(f, ff));
		connect(f, x, lr ^ 1);
		pushup(f), pushup(x);
	}
	void splay(int x, int tofa)
	{
		if (!tofa)
			root = x;
		int f, ff;
		while (spl[x].fa != tofa)
		{
			f = spl[x].fa, ff = spl[f].fa;
			if (ff != tofa)
				(lrson(x, f) ^ lrson(f, ff)) ? rotate(x) : rotate(f);
			rotate(x);
		}
	}
	void delnode(int x)
	{
		splay(x, 0);
		if (rc(x))
		{
			int p = rc(x);
			while (lc(p))
				p = lc(p);
			splay(p, x);
			connect(lc(x), p, 0);
			spl[root = p].fa = 0;
			pushup(root);
		}
		else
			spl[root = spl[x].son[0]].fa = 0;
	}

	void insert(int x, int &k = root, int fa = 0)
	{
		if (!k)
			k = crt(x, fa), splay(k, 0);
		else if (x < spl[k].val)
			insert(x, spl[k].son[0], k);
		else
			insert(x, spl[k].son[1], k);
	}
	void del(int val, int k = root)
	{
		if (val == spl[k].val)
			delnode(k);
		else if (val < spl[k].val)
			del(val, spl[k].son[0]);
		else
			del(val, spl[k].son[1]);
	}
	int rank(int v)
	{
		int k = root, res = 1, pre = 0; // res默认是1！！！（编号1~n）
		while (k)
		{
			if (v <= spl[k].val)
			{
				pre = k;
				k = spl[k].son[0];
			}
			else
			{
				res += spl[lc(k)].sz + 1;
				k = rc(k);
			}
		}
		if (pre)
			splay(pre, 0);
		return res;
	}
	int kth(int x)
	{
		int k = root;
		while (k)
		{
			if (spl[lc(k)].sz + 1 == x)
			{
				splay(k, 0);
				break;
			}
			else if (spl[lc(k)].sz >= x)
				k = lc(k);
			else
			{
				x -= spl[lc(k)].sz + 1;
				k = rc(k);
			}
		}
		return spl[k].val;
	}
	int pre(int x) { return kth(rank(x) - 1); }	 // 由于找到的一定是连续几个相等的数中最靠近树的左边的，所以是rank(x)-1
	int succ(int x) { return kth(rank(x + 1)); } // 可能有多个相同的数，如果写成rank(x)+1则返回的可能是相同的数
} spl;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, opt, x;
	cin >> n;
	while (n--)
	{
		cin >> opt >> x;
		if (opt == 1)
			spl.insert(x);
		else if (opt == 2)
			spl.del(x);
		else if (opt == 3)
			cout << spl.rank(x) << '\n';
		else if (opt == 4)
			cout << spl.kth(x) << '\n';
		else if (opt == 5)
			cout << spl.pre(x) << '\n';
		else if (opt == 6)
			cout << spl.succ(x) << '\n';
	}
	return 0;
}
