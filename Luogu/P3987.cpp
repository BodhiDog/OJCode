// 好久之前就想做的题QwQ
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 5e5 + 10;
struct
{
	int lc, rc, val;
	unsigned int key, sz;
} t[R * 100];
#define lc(k) t[k].lc
#define rc(k) t[k].rc
#define pushup(k) t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1
#define lowbit(x) (x & (-x))
vector<int> val[R];
ll bit[R];
int a[R], n, temp[R], tempsz, root[R], tot;
void update(int p, ll val)
{
	while (p <= n)
	{
		bit[p] += val;
		p += lowbit(p);
	}
}
ll query(int p)
{
	ll res = 0;
	while (p > 0)
	{
		res += bit[p];
		p -= lowbit(p);
	}
	return res;
}
int newnode(int val, unsigned int key)
{
	t[++tot] = {.lc = 0, .rc = 0, .val = val, .key = key, .sz = 1};
	return tot;
}
int build(int l, int r, int dep)
{
	if (l > r)
	{
		return 0;
	}
	int mid = (l + r) >> 1, k = newnode(temp[mid], dep);
	lc(k) = build(l, mid - 1, dep + 1); // 注意线段树和平衡树的不同：线段树是[l,mid][mid+1,r]，而平衡树是[l,mid-1][mid,mid][mid+1,r]！！！
	rc(k) = build(mid + 1, r, dep + 1);
	pushup(k);
	return k;
}
void split(int k, int val, int &x, int &y)
{
	if (!k)
	{
		x = y = 0;
		return;
	}
	if (t[k].val <= val)
	{
		x = k;
		split(rc(k), val, rc(x), y);
	}
	else
	{
		y = k;
		split(lc(k), val, x, lc(y));
	}
	pushup(k);
}
int merge(int x, int y)
{
	if (!x || !y)
	{
		return x | y;
	}
	if (t[x].key < t[y].key)
	{
		rc(x) = merge(rc(x), y);
		pushup(x);
		return x;
	}
	else
	{
		lc(y) = merge(x, lc(y));
		pushup(y);
		return y;
	}
}
void dfs(int k, int x)
{
	if (!k)
	{
		return;
	}
	dfs(lc(k), x);
	if (a[t[k].val] % x == 0)
	{
		update(t[k].val, -a[t[k].val]);
		a[t[k].val] /= x;
		update(t[k].val, a[t[k].val]);
	}
	if (a[t[k].val] % x == 0)
	{
		temp[++tempsz] = t[k].val;
	}
	dfs(rc(k), x);
}
void div(int l, int r, int x)
{
	int a, b, c;
	split(root[x], l - 1, a, b);
	split(b, r, b, c);
	tempsz = 0;
	dfs(b, x);
	root[x] = merge(merge(a, build(1, tempsz, 0)), c);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, j, maxa = -1, op, l, r, x;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		maxa = max(maxa, a[i]);
		update(i, a[i]);
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j * j <= a[i]; ++j) // 是<=a[i]！！！
		{
			if (a[i] % j == 0)
			{
				val[j].push_back(i);
				if (j * j != a[i])
				{
					val[a[i] / j].push_back(i);
				}
			}
		}
	}
	for (i = 1; i <= maxa; ++i)
	{
		tempsz = 0;
		for (int x : val[i])
		{
			temp[++tempsz] = x;
		}
		root[i] = build(1, tempsz, 0);
	}
	while (m--)
	{
		cin >> op >> l >> r;
		if (op == 1)
		{
			cin >> x;
			if (x != 1)
			{
				div(l, r, x);
			}
		}
		else
		{
			cout << query(r) - query(l - 1) << '\n';
		}
	}
	return 0;
}
