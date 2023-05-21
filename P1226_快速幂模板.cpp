// 递归版
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll fun(ll x, ll p, ll m)
{
	if (p == 0)
	{
		return 1;
	}
	if (p == 1)
	{
		return x % m;
	}
	ll res = 0;
	if (p % 2)
	{
		res = fun(x, p / 2, m) % m;
		res = res * res % m;
		res = res * x % m;
	}
	else
	{
		res = fun(x, p / 2, m) % m;
		res = res * res % m;
	}
	return res;
}
int main()
{
	ll x, p, m, ans = 0;
	cin >> x >> p >> m;
	ans = fun(x, p, m);
	printf("%lld^%lld mod %lld=%lld", x, p, m, ans);
	return 0;
}

// 循环版
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int mod;
ll qpow(ll a, ll p)
{
	ll ans = 1;
	while (p)
	{
		if (p & 1)
			ans = ans * a % mod;
		a = a * a % mod;
		p >>= 1;
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b;
	cin >> a >> b >> mod;
	cout << a << '^' << b << " mod " << mod << '=' << qpow(a, b) << '\n';
	return 0;
}
