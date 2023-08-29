#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int son[2], x, val, sz;
	unsigned int key;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
mt19937 rd(2333);
int tot, root[R], fa[R]; // 结点x所在树的根结点为root[x]
int findroot(int x) { return x == root[x] ? x : root[x] = findroot(root[x]); }
int add(int x, int val)
{
	t[++tot] = {.x = x, .val = val, .sz = 1, .key = rd()};
	return tot;
}
void pushup(int k)
{
	t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1;
}
void split(int k, int val, int &x, int &y)
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	if (t[k].val <= val)
	{
		x = k;
		split(rc(k), val, rc(k), y);
	}
	else
	{
		y = k;
		split(lc(k), val, x, lc(y));
	}
	pushup(k);
}
int mix(int x, int y)
{
	if (!x || !y)
	{
		return x | y;
	}
	if (t[x].sz < t[y].sz)
	{
		swap(x, y);
	}
	int a, b;
	split(y, t[x].val, a, b);
	lc(x) = mix(lc(x), a);
	rc(x) = mix(rc(x), b);
	pushup(x);
	return x;
}
int kth(int x, int kk)
{
	while (x)
	{
		if (t[lc(x)].sz + 1 == kk)
		{
			return t[x].x;
		}
		else if (t[lc(x)].sz + 1 > kk)
		{
			x = lc(x);
		}
		else
		{
			kk -= t[lc(x)].sz + 1;
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
	int n, m, q, i, x, y, a, newroot;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a;
		root[i] = add(i, a);
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y;
		if (findroot(x) != findroot(y))
		{
			newroot = mix(root[x], root[y]);
			root[findroot(x)] = root[findroot(y)] = newroot;
		}
	}
	cin >> q;
	char op;
	while (q--)
	{
		cin >> op >> x >> y;
		if (op == 'B')
		{
			if (findroot(x) != findroot(y))
			{
				newroot = mix(root[x], root[y]);
				root[findroot(x)] = root[findroot(y)] = newroot;
			}
		}
		else
		{
			x = findroot(x);
			if (t[x].sz < y)
			{
				cout << "-1\n";
			}
			else
			{
				cout << kth(x, y) << '\n';
			}
		}
	}
	return 0;
}
