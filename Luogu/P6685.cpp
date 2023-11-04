#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll n, m;
bool check(ll x)
{
	int p = m;
	ll res = 1;
	while (p)
	{
		if (x > n)
		{
			return false;
		}
		if (p & 1)
		{
			res *= x;
			if (res > n)
			{
				return false;
			}
		}
		x *= x; // 可能乘完这一次会超，但同时p也会在下一次变为0，也就是无效的乘
		p >>= 1;
	}
	return res <= n;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	int l = 1, r = n, mid;
	while (l <= r)
	{
		mid = (l + r) >> 1;
		if (check(mid))
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	cout << r << '\n';
	return 0;
}
