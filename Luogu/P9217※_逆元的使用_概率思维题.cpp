#include <bits/stdc++.h>
using namespace std;

/*
费马小定理：b^0=1≡b^(p-1)(mod p)，b^-1≡b^(p-2)(mod p)
由此计算分数：a/b=a*b^-1
*/
const int N = 1e5 + 10, MOD = 998244353;
using ll = long long;
ll a[N];
ll qpow(ll x, int k)
{
	ll res = 1;
	while (k)
	{
		if (k & 1)
		{
			res = res * x % MOD;
		}
		x = x * x % MOD;
		k >>= 1;
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i, m;
	ll s, p, q, ans = 0, probability, p2;
	cin >> n >> p >> q >> s;
	probability = p * qpow(q, MOD - 2) % MOD; // p/q
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (i = 1; i <= n; ++i)
	{
		/*
		某一项之前的项对答案一定没有贡献，它及其之后的才可能对答案有贡献
		设后者数量为m，则若这m个数都没有施魔法，那么数组的最大值只可能为a[n]，答案为((1-p/q)^m)*a[n]，即后面的数都没有魔法
		再考虑加上s后能超过a[n]的项
		设这个数a[i]之后的数量为k，则这个数对答案的贡献为(a[i]+s)*(p/q)*((1-p/q)^k)，即它之后的数都不施魔法，而它施了魔法。由于数组有序，所以某一个这样的数之前的数有没有施魔法对答案没有影响
		*/
		if (a[i] + s > a[n])
		{
			m = n - i + 1;
			break;
		}
	}
	ans = a[n] % MOD * qpow(1 - probability, m) % MOD;
	for (i = n - m + 1; i <= n; ++i) // 是从n-m+1开始而不是m，因为m是个数！！！
	{
		ans = ((a[i] + s) * probability % MOD /*这里记得取模！！！*/ * qpow(1 - probability, n - i) % MOD + ans) % MOD;
		// 设直接写probability即可，ans替换为(ans+MOD)%MOD
	}
	cout << "2\n"
		 << (ans + MOD) % MOD << flush;
	return 0;
}
