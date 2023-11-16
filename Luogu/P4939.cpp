#include <bits/stdc++.h>
using namespace std;

#define lowbit(x) (x & (-x))
const int R = 1e7 + 10;
int n, t[R];
void update(int x, int val)
{
	while (x <= n)
	{
		t[x] += val;
		x += lowbit(x);
	}
}
int query(int x)
{
	int res = 0;
	while (x > 0)
	{
		res += t[x];
		x -= lowbit(x);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, op, a, b;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> op >> a;
		if (op == 0)
		{
			cin >> b;
			update(a, 1), update(b + 1, -1);
		}
		else
		{
			cout << query(a) << '\n';
		}
	}
	return 0;
}
