#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
const int R = 4e4 + 10;
struct
{
	int son[2];
	ll val;
	unsigned key;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
mt19937 rd(2333);
int root, tot;
int newnode(ll val)
{
	t[++tot] = {.val = val, .key = rd()};
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
		return x;
	}
	else
	{
		lc(y) = merge(x, lc(y));
		return y;
	}
}
void insert(ll x)
{
	int a, b;
	split(root, x, a, b);
	root = merge(merge(a, newnode(x)), b);
}
ll pre(ll x) // 第一个<的
{
	int a, b, k;
	split(root, x-1, a, b);
	k = a;
	while (rc(k))
	{
		k = rc(k);
	}
	root = merge(a, b);
	return t[k].val;
}
ll succ(ll x) // 第一个>=的
{
	int a, b, k;
	split(root, x - 1, a, b);
	k = b;
	while (lc(k))
	{
		k = lc(k);
	}
	root = merge(a, b);
	return t[k].val;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	ll a, ans = 0;
	cin >> n;
	insert(-1e13), insert(1e13);
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		if (i == 1)
		{
			ans = a; // ！！！
		}
		else
		{
			ans += min(abs(pre(a) - a), abs(succ(a) - a));
		}
		insert(a);
	}
	cout << ans;
	return 0;
}
