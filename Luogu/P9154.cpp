#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[100], tot;
void _10to3(ll x)
{
	while (x)
	{
		a[++tot] = x % 3;
		x /= 3;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, i;
	ll x, ans;
	cin >> T;
	while (T--)
	{
		tot = 0;
		memset(a, 0, sizeof(a));
		cin >> x;
		_10to3(x);
		if (a[1] == 2)
		{
			cout << "0\n";
		}
		else
		{
			ans = 1;
			for (i = tot; i > 1; --i)
			{
				if (a[i] == 1)
				{
					ans *= 2;
				}
				else
				{
					ans *= 1; // 可不写
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
