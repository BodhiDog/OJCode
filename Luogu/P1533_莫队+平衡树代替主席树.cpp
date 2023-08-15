#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 10, M = 5e4 + 10;
struct
{
	int son[2], val, sz;
	unsigned int key;
} t[N];
struct Qry
{
	int l, r, k, id;
} q[M];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
mt19937 rd(2333);
int tot, root, a[N], belong[N], ans[M];
void pushup(int x)
{
	t[x].sz = t[lc(x)].sz + t[rc(x)].sz + 1;
}
int add(int x)
{
	++tot;
	t[tot] = {.val = x, .sz = 1, .key = rd()};
	return tot;
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
void insert(int x)
{
	int a, b;
	split(root, x - 1, a, b);
	root = merge(merge(a, add(x)), b);
}
void del(int x)
{
	int a, b, c;
	split(root, x - 1, a, b);
	split(b, x, b, c);
	if (t[b].sz)
	{
		b = merge(lc(b), rc(b));
	}
	root = merge(merge(a, b), c);
}
int kth(int kk)
{
	int x = root;
	while (x)
	{
		if (t[lc(x)].sz + 1 == kk)
		{
			return t[x].val;
		}
		else if (t[lc(x)].sz >= kk)
		{
			x = lc(x);
		}
		else
		{
			kk = kk - t[lc(x)].sz - 1;
			x = rc(x);
		}
	}
	return -1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, l, r, sz;
	cin >> n >> m;
	sz = sqrt(n);
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		belong[j] = j / sz;
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r >> q[j].k;
		q[j].id = j;
	}
	sort(q + 1, q + m + 1, [](Qry &x, Qry &y)
		 { return belong[x.l] == belong[y.l] ? x.r < y.r : belong[x.l] < belong[y.l]; });
	l = 1;
	r = 0;
	for (j = 1; j <= m; ++j)
	{
		while (l > q[j].l)
			insert(a[--l]);
		while (r < q[j].r)
			insert(a[++r]);
		while (l < q[j].l)
			del(a[l++]);
		while (r > q[j].r)
			del(a[r--]);
		ans[q[j].id] = kth(q[j].k);
	}
	for (j = 1; j <= m; ++j)
	{
		cout << ans[j] << '\n';
	}
	return 0;
}
