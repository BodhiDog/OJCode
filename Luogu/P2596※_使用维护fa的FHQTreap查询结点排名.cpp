#include <bits/stdc++.h>
using namespace std;

const int R = 8e4 + 10;
struct Node
{
	int son[2], val, sz, fa;
	unsigned int key;
} t[R]; // 上为l，下为r
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define pushup(k) t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1
int tot, root, atot[R]; // a_to_treenodeid
mt19937 rd;
int crt(int val)
{
	t[++tot] = {
		.val = val,
		.sz = 1,
		.key = rd()};
	atot[val] = tot; // 这里记录编号映射到树上的结点号
	return tot;
}
void split(int k, int sz, int &x, int &y, int fax = 0, int fay = 0) // x和y的父亲分别是谁
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	if (t[lc(k)].sz + 1 <= sz)
	{
		x = k;
		t[x].fa = fax;
		split(rc(k), sz - (t[lc(k)].sz + 1), rc(x), y, x, fay);
	}
	else
	{
		y = k;
		t[y].fa = fay;
		split(lc(k), sz, x, lc(y), fax, y);
	}
	pushup(k);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x | y;
	if (t[x].key < t[y].key)
	{
		rc(x) = merge(rc(x), y);
		fa(rc(x)) = x;
		pushup(x);
		return x;
	}
	else
	{
		lc(y) = merge(x, lc(y));
		fa(lc(y)) = y;
		pushup(y);
		return y;
	}
}
#define isrc(x) rc(fa(x)) == x
int kth(int x)
{
	int res = t[lc(x)].sz + 1;
	while (x != root)
	{
		if (isrc(x))
			res += t[lc(fa(x))].sz + 1;
		x = fa(x);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, a, s, x, b, c, k, sz, d;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a;
		root = merge(root, crt(a));
	}
	char op[10];
	while (m--)
	{
		cin >> op >> s;
		k = atot[s]; // 结点编号
		if (op[0] == 'T')
		{
			sz = kth(k);
			split(root, sz - 1, a, b);
			split(b, 1, b, c);
			root = merge(b, merge(a, c));
		}
		else if (op[0] == 'B')
		{
			sz = kth(k);
			split(root, sz - 1, a, b);
			split(b, 1, b, c);
			root = merge(merge(a, c), b);
		}
		else if (op[0] == 'I')
		{
			cin >> x;
			sz = kth(k) - 1; // 它上面有sz本，不包括自己
			split(root, sz, a, b);
			split(b, 1, b, c);
			if (x > 0)
			{
				split(c, x, c, d);
				root = merge(merge(a, c), merge(b, d));
			}
			else
			{
				split(a, sz + x /*x本来就是负的*/, a, d);
				root = merge(merge(a, b), merge(d, c));
			}
		}
		else if (op[0] == 'A')
		{
			cout << kth(k) - 1 << '\n';
		}
		else // Q
		{
			split(root, s - 1, a, b); // 将sz分为第s本之前的（不包括它）和s以及之后的
			x = b;
			while (lc(x))
				x = lc(x);
			root = merge(a, b);
			cout << t[x].val << '\n';
		}
	}
	return 0;
}
