#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
int n;
ll t[R];
#define lowbit(x) (x & (-x))
void update(int p, ll x)
{
	while (p <= n)
	{
		t[p] += x;
		p += lowbit(p);
	}
}
ll query(int p)
{
	ll res = 0;
	while (p > 0)
	{
		res += t[p];
		p -= lowbit(p);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int w, a;
	ll b;
	char op;
	cin >> n >> w;
	while (w--)
	{
		cin >> op >> a >> b;
		if (op == 'x')
		{
			update(a, b);
		}
		else
		{
			cout << query(b) - query(a - 1) << '\n';
		}
	}
	return 0;
}
