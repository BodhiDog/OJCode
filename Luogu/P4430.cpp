#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 9999991;
int qpow(ll x, ll p)
{
	ll res = 1;
	while (p)
	{
		if (p & 1)
		{
			res = res * x % M;
		}
		x = x * x % M;
		p >>= 1;
	}
	return int(res);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;	
	cin >> n;
	ll ans = qpow(n, n - 2);
	for (ll i = 1; i <= n - 1; ++i)
	{
		ans = ans * i % M;
	}
	cout << ans << '\n';
	return 0;
}
