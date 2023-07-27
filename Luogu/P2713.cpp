#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
struct
{
	int son[2], val, dis, fa;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int find(int x)
{
	return x == t[x].fa ? x : t[x].fa = find(t[x].fa);
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
		swap(lc(x), rc(x)); // 注意交换的是左右儿子！！！
	t[x].dis = t[rc(x)].dis + 1;
	return x;
}
void pop(int x)
{
	t[x].val = -1;
	t[lc(x)].fa = lc(x);
	t[rc(x)].fa = rc(x);
	t[x].fa = merge(lc(x), rc(x));
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> t[i].val;
		t[i].fa = i;
	}
	t[0].dis = -1;
	char op;
	cin >> m;
	while (m--)
	{
		cin >> op >> x;
		if (op == 'M')
		{
			cin >> y;
			if (t[x].val == -1 || t[y].val == -1)
				continue;
			x = find(x), y = find(y);
			if (x == y)
				continue;
			merge(x, y);
		}
		else
		{
			if (t[x].val == -1)
			{
				cout << "0\n";
				continue;
			}
			x = find(x);
			cout << t[x].val << '\n';
			pop(x);
		}
	}
	return 0;
}
