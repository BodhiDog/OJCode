#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
using ll = long long;
struct Node
{
	int l, r, key, sz;
	ll val, sum, tag;
	bool revtag;
} tree[R * 50];
int root[R], tot;
#define lc tree[k].l
#define rc tree[k].r
mt19937 rd;
stack<int> tc;
int crt(ll val = 0)
{
	if (!tc.empty()) // 垃圾回收
	{
		int t = tc.top();
		tc.pop();
		tree[t].key = rd();
		tree[t].val = tree[t].sum = val;
		tree[t].l = tree[t].r = tree[t].tag = 0;
		tree[t].revtag = false; // 垃圾处理
		tree[t].sz = 1;
		return t;
	}
	else
	{
		tree[++tot].key = rd();
		tree[tot].val = tree[tot].sum = val;
		tree[tot].sz = 1;
		return tot;
	}
}
void pushdown(int k)
{
	if (tree[k].revtag)
	{
		swap(lc, rc);
		tree[lc].revtag ^= 1;
		tree[rc].revtag ^= 1;
		tree[k].revtag = false;
	}
}
void pushup(int k)
{
	tree[k].sz = tree[lc].sz + tree[rc].sz + 1;
	tree[k].sum = tree[lc].sum + tree[rc].sum + tree[k].val;
}
void split(int k, int sz, int &x, int &y)
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	pushdown(k);
	int a = crt();
	tree[a] = tree[k];
	if (tree[lc].sz + 1 <= sz)
	{
		x = k;
		split(tree[a].r, sz - (tree[lc].sz + 1), tree[a].r, y);
	}
	else
	{
		y = k;
		split(tree[a].l, sz, x, tree[a].l);
	}
	pushup(a);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	pushdown(x), pushdown(y);
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
	return a;
}
int x, y, z;
void rev(int ver, int l, int r)
{
	split(root[ver], l - 1, x, y);
	split(y, r - l + 1, y, z);
	tree[y].revtag ^= 1;
	root[ver] = merge(merge(x, y), z);
}
ll query(int ver, int l, int r)
{
	split(root[ver], l - 1, x, y);
	split(y, r - l + 1, y, z);
	ll res = tree[y].sum;
	root[ver] = merge(merge(x, y), z);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, p, l, r, lastres = 0, ver, opt, a, b, c;
	ll x;
	cin >> n;
	for (int j = 1; j <= n; ++j)
	{
		cin >> ver >> opt;
		root[j] = root[ver];
		if (opt == 1)
		{
			cin >> p >> x;
			p ^= lastres, x ^= lastres;
			split(root[j], p, a, b);
			root[j] = merge(merge(a, crt(x)), b);
		}
		else if (opt == 2)
		{
			cin >> p;
			p ^= lastres;
			split(root[j], p - 1, a, b);
			split(b, 1, b, c);
			tc.push(b);
			root[j] = merge(a, c);
		}
		else if (opt == 3)
		{
			cin >> l >> r;
			l ^= lastres, r ^= lastres;
			rev(j, l, r);
		}
		else
		{
			cin >> l >> r;
			l ^= lastres, r ^= lastres;
			lastres = query(ver, l, r);
			cout << lastres << '\n';
		}
	}
	return 0;
}