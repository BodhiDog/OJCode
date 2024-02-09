#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long n, level = 0, left = 0, a;
	double tot = 10, x;
	cin >> n;
	while (n--)
	{
		cin >> x >> a;
		if (tot - x <= 0)
		{
			break;
		}
		tot = min(tot - x, 10.0);
		left = left + a;
		while (left >= pow(2, level))
		{
			left -= pow(2, level);
			++level;
		}
	}
	cout << level << ' ' << left << flush;
	return 0;
}
