#include <bits/stdc++.h>
using namespace std;

#define int unsigned
const int R = 1e6 + 10;
struct
{
	int lc, rc, res;
} t[R * 40];
struct
{
	int to, nxt;
} e[R];
#define lc(k) t[k].lc
#define rc(k) t[k].rc
int a[R], dep[R], maxdep, dfn[R], nfd[R], maxdfn[R], tme, tot, root[R], head[R], etot, fa[R];
inline int read()
{
	int res = 0;
	bool fh = true;
	char ch = getchar();
	while (!isdigit(ch))
	{
		if (ch == '-')
		{
			fh = false;
		}
		ch = getchar();
	}
	while (isdigit(ch))
	{
		res = (res << 1) + (res << 3) + (ch ^ 48);
		ch = getchar();
	}
	return fh ? res : -res;
}
inline void add(int x, int &y)
{
	e[++etot] = {y, head[x]};
	head[x] = etot;
}
void dfs(int x)
{
	dfn[x] = ++tme;
	nfd[tme] = x;
	maxdep = max(maxdep, dep[x] = dep[fa[x]] + 1);
	for (int i = head[x]; i; i = e[i].nxt)
	{
		dfs(e[i].to);
	}
	maxdfn[x] = tme;
}
void insert(int &oldk, int &k, int l, int r, int &x, int &val)
{
	k = ++tot;
	t[k] = t[oldk];
	t[k].res ^= val;
	if (l == r)
	{
		return;
	}
	int mid = (l + r) >> 1;
	if (x <= mid)
	{
		insert(lc(oldk), lc(k), l, mid, x, val);
	}
	else
	{
		insert(rc(oldk), rc(k), mid + 1, r, x, val);
	}
}
int query(int &oldk, int &k, int l, int &r, int &x, int y)
{
	if (x <= l && r <= y)
	{
		return t[oldk].res ^ t[k].res;
	}
	int mid = (l + r) >> 1, res = 0;
	if (x <= mid)
	{
		res = query(lc(oldk), lc(k), l, mid, x, y);
	}
	if (y > mid)
	{
		res ^= query(rc(oldk), rc(k), mid + 1, r, x, y);
	}
	return res;
}
signed main()
{
	int n = read(), m = read(), x, h, i;
	for (i = 1; i <= n; ++i)
	{
		a[i] = read();
	}
	for (i = 2; i <= n; ++i)
	{
		add(fa[i] = read(), i);
	}
	dfs(1);
	for (i = 1; i <= n; ++i)
	{
		insert(root[i - 1], root[i], 1, maxdep, dep[nfd[i]], a[nfd[i]]);
	}
	while (m--)
	{
		x = read(), h = read();
		printf("%.3f\n", query(root[dfn[x] - 1], root[maxdfn[x]], 1, maxdep, dep[x], dep[x] + h) * 0.001);
	}
	return 0;
}
