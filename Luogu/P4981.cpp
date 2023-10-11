#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 1e9 + 9;
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
	int T, n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		cout << qpow(n, n - 1) << '\n';
	}
	return 0;
}
