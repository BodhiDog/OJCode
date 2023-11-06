#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll a, c, p, q, r, x, need;
	cin >> a >> c >> p >> q >> r >> x;
	if (a > c)
	{
		cout << a + x / r << '\n';
	}
	else
	{
		need = (c - a) * p;
		if (need >= x)
		{
			cout << a + x / p << '\n';
		}
		else if (need + q >= x)
		{
			cout << c << '\n';
		}
		else
		{
			cout << c + (x - need - q) / r << '\n';
		}
	}
	return 0;
}
