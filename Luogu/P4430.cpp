#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 9999991;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	ll i;	
	cin >> n;
	ll ans = 1;
	for (i = 1; i <= n - 2; ++i) // n-2可能<0
	{
		ans = ans * n % M;
	}
	for (i = 1; i <= n - 1; ++i)
	{
		ans = ans * i % M;
	}
	cout << ans << '\n';
	return 0;
}
