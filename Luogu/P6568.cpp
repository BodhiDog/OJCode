#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
long long a[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, i;
	long long ans = 0;
	cin >> n >> k;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	for (i = k + 1; i <= n; ++i)
	{
		ans = max(ans, a[i] - a[i - k - 1]);
	}
	cout << ans << flush;
	return 0;
}
