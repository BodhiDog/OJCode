#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
struct
{
	int son[2], val, sz;
	unsigned int key;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define pushup(k) t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1
int tot, root;
mt19937 rd;
int crt(int val)
{
	t[++tot] = {.val = val, .sz = 1, .key = rd()};
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
		return x | y;
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
int a, b;
int rank_(int x)
{
	split(root, x - 1, a, b);
	int res = t[a].sz + 1;
	root = merge(a, b);
	return res;
}
int kth(int k) // k和x别写错了！！！
{
	int x = root;
	while (x)
	{
		if (t[lc(x)].sz + 1 == k)
			return t[x].val;
		if (t[lc(x)].sz >= k)
			x = lc(x);
		else
		{
			k -= t[lc(x)].sz + 1;
			x = rc(x);
		}
	}
	return -1;
}
int pre(int x)
{
	int k;
	split(root, x - 1, a, b);
	if (!a)
		return -2147483647;
	k = a;
	while (rc(k))
		k = rc(k);
	root = merge(a, b);
	return t[k].val;
}
int ext(int x)
{
	int k;
	split(root, x, a, b);
	if (!b)
		return 2147483647;
	k = b;
	while (lc(k))
		k = lc(k);
	root = merge(a, b);
	return t[k].val;
}
void insert(int x)
{
	split(root, x, a, b);
	root = merge(merge(a, crt(x)), b);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int q, x;
	char op;
	cin >> q;
	while (q--)
	{
		cin >> op >> x;
		if (op == '1')
			cout << rank_(x) << '\n';
		else if (op == '2')
			cout << kth(x) << '\n';
		else if (op == '3')
			cout << pre(x) << '\n';
		else if (op == '4')
			cout << ext(x) << '\n';
		else
			insert(x);
	}
	return 0;
}

