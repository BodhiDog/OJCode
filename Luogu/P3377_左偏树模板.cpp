#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int son[2], val, dis, fa;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int findfa(int x)
{
	return x == t[x].fa ? x : t[x].fa = findfa(t[x].fa);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x | y;
	if (t[x].val > t[y].val || (t[x].val == t[y].val && x > y))
		swap(x, y);
	rc(x) = merge(rc(x), y);
	t[rc(x)].fa = x;
	if (t[lc(x)].dis < t[rc(x)].dis)
		swap(lc(x), rc(x));
	t[x].dis = t[rc(x)].dis + 1;
	return x;
}
void pop(int x)
{
	t[x].val = -1;
	t[lc(x)].fa = lc(x);
	t[rc(x)].fa = rc(x);
	t[x].fa = merge(lc(x), rc(x));
	// 因为使用了路径压缩，可能有多个子结点指向x。为了不影响其他的儿子，x结点保留，并将x结点的父亲指向新堆的堆顶
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> t[i].val;
		t[i].fa = i;
	}
	t[0].dis = -1;
	char op;
	while (m--)
	{
		cin >> op >> x;
		if (op == '1')
		{
			cin >> y;
			if (t[x].val != -1 && t[y].val != -1)
			{
				x = findfa(x), y = findfa(y);
				if (x != y)
					t[x].fa = t[y].fa = merge(x, y);
			}
		}
		else
		{
			if (t[x].val == -1)
			{
				cout << "-1\n";
				continue;
			}
			x = findfa(x);
			cout << t[x].val << '\n';
			pop(x);
		}
	}
	return 0;
}
