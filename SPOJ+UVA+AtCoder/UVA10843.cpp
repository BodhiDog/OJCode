#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll M = 2000000011;
ll qpow(ll x, ll p)
{
	if (p < 0)
	{
		return 1;
	}
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
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n;
	cin >> T;
	for (int i = 1; i <= T; ++i)
	{
		cin >> n;
		printf("Case #%d: %lld\n", i, qpow(n, n - 2));
	}
	return 0;
}
