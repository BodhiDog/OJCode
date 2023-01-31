#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[20];
ll get(int l, int r)
{
	ll res = 0;
	for (register int j = l; j >= r; --j)
		res = res * 10 + a[j];
	return res;
}
inline ll pow10(int p)
{
	ll res = 1;
	while (p--)
		res *= 10;
	return res;
}
inline ll dp(ll n, int x) // n一定要开longlong！！！
{
	if (n == 0)
		return 0;
	int k = 0;
	while (n)
	{
		a[++k] = n % 10;
		n /= 10;
	}
	ll res = 0;
	for (register int j = k - !x; j >= 1; --j)
	{
		if (j != k)
			res += (get(k, j + 1) - !x) * pow10(j - 1);
		if (x == a[j])
			res += get(j - 1, 1) + 1;
		else if (x < a[j])
			res += pow10(j - 1);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll l, r;
	cin >> l >> r;
	for (register int j = 0; j <= 9; ++j)
		cout << dp(r, j) - dp(l - 1, j) << ' ';
	return 0;
}
