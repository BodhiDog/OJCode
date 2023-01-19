#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll exgcd(ll a, ll b, ll &x, ll &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	ll d = exgcd(b, a % b, x, y);
	ll t = x;
	x = y;
	y = t - a / b * y;
	return d;
}
int main()
{
	ll x, y, m, n, l, x1, y1;
	cin >> x >> y >> m >> n >> l;
	ll a = n - m, b = l, c = x - y;
	if (a < 0)
	{
		a = -a;
		c = -c;
	}
	ll d = exgcd(a, b, x1, y1), r = b / d;
	x1 = x1 * (c / d);
	if (a == 0 || c % d != 0)
	{
		cout << "Impossible";
		return 0;
	}
	cout << (x1 % r + r) % r;
	return 0;
}