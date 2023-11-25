#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int lc, rc, val, dis;
} t[R];
#define lc(k) t[k].lc
#define rc(k) t[k].rc
int fa[R];
int findfa(int x)
{
	return x == fa[x] ? x : fa[x] = findfa(fa[x]);
}
int merge(int x, int y)
{
	if (!x || !y)
	{
		return x | y;
	}
	if (t[x].val < t[y].val)
	{
		swap(x, y);
	}
	rc(x) = merge(rc(x), y);
	fa[rc(x)] = x;
	if (t[lc(x)].dis < t[rc(x)].dis)
	{
		swap(lc(x), rc(x));
	}
	t[x].dis = t[rc(x)].dis + 1;
	return x;
}
int update(int x)
{
	t[x].val /= 2;
	int k = merge(lc(x), rc(x));
	lc(x) = rc(x) = t[x].dis = 0;
	return fa[k] = fa[x] = merge(k, x);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, x, y, newx, newy;
	while (cin >> n)
	{
		for (i = 1; i <= n; ++i)
		{
			t[i] = {0, 0, 0, 0};
			cin >> t[i].val;
			fa[i] = i;
		}
		cin >> m;
		while (m--)
		{
			cin >> x >> y;
			x = findfa(x), y = findfa(y);
			if (x == y)
			{
				cout << "-1\n";
			}
			else
			{
				newx = update(x), newy = update(y);
				fa[newx] = fa[newy] = merge(newx, newy);
				cout << t[fa[newx]].val << '\n';
			}
		}
	}
	return 0;
}
