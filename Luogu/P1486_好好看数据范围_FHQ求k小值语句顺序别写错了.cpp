#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 3e5 + 10;
struct
{
	int son[2], sz;
	unsigned key;
	ll val;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define pushup(k) t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1
mt19937 rd(2333);
int tot, root;
int newnode(ll val)
{
	t[++tot] = {.sz = 1, .key = rd(), .val = val};
	return tot;
}
void split(int k, ll val, int &x, int &y)
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
void insert(ll val)
{
	int a, b;
	split(root, val, a, b);
	root = merge(merge(a, newnode(val)), b);
}
ll kth(int k)
{
	int x = root;
	k = t[root].sz - k + 1; // 第k大转换成第k小
	while (x)
	{
		if (t[lc(x)].sz + 1 == k)
		{
			return t[x].val;
		}
		else if (t[lc(x)].sz + 1 > k)
		{
			x = lc(x);
		}
		else
		{
			k = k - t[lc(x)].sz - 1;
			x = rc(x); // 这里顺序别写错了！！！
		}
	}
	return -1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, a, b, ans = 0, i;
	ll m, k;
	char op;
	cin >> n >> m;
	while (n--)
	{
		cin >> op >> k;
		if (op == 'I')
		{
			if (k >= m)
			{
				insert(k);
			}
		}
		else if (op == 'A') // 修改操作数少，可以直接暴力！！！
		{
			for (i = 1; i <= tot; ++i)
			{
				t[i].val += k;
			}
		}
		else if (op == 'S')
		{
			for (i = 1; i <= tot; ++i)
			{
				t[i].val -= k;
			}
			split(root, m - 1, a, b);
			ans += t[a].sz;
			root = b;
		}
		else
		{
			cout << kth(k) << '\n';
		}
	}
	cout << ans << flush;
	return 0;
}
