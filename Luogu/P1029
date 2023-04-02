#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int gcd(int a, int b)
{
	if (a < b)
		swap(a, b);
	int t = a % b;
	while (t)
	{
		a = b;
		b = t;
		t = a % b;
	}
	return b;
}
int main()
{
	ll x0, y0, ans = 0, p, q = 1; 
	cin >> x0 >> y0;
	for (p = x0; p * p <= x0 * y0; ++p)
	{
		if(x0 * y0 % p == 0)
		{
			q = x0 * y0 / p;
			if (gcd(q, p) == x0)
				ans += 2;
			if (p == q)
				if(p == x0)
					ans -= 1; // 注意这里是-=，因为是满足前一个if之后才来的这个if
		}
	}
	cout << ans << '\n';
	return 0;
}