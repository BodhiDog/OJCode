#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i;
	ll a, minv = LLONG_MAX, maxv = LLONG_MIN, ans = 0;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a;
		minv = min(minv, a);
		maxv = max(maxv, a);
	}
	if (maxv == 0)
	{
		cout << int(pow(2, m)) << '\n';
	}
	else if(maxv == 1)
	{
		maxv += 2;
		--m;
		for (i = 1; i <= m; ++i)
		{
			maxv *= 2;
		}
		cout << maxv - minv << '\n';
	}
	else
	{
		for (i = 1; i <= m; ++i)
		{
			maxv *= 2;
		}
		cout << maxv - minv << '\n';
	}
	return 0;
}
