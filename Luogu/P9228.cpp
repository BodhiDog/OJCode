// 使用贪心思想
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e6 + 10;
ll a[R], b[R]; // 火，冰
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j;
	ll k, ans = 0;
	cin >> n >> m >> k;
	for (j = 1; j <= n; ++j)
		cin >> a[j];
	for (j = 1; j <= m; ++j)
		cin >> b[j];
	sort(a + 1, a + n + 1, [](ll x, ll y)
		 { return x > y; }); // 尽量多用火打冰
	sort(b + 1, b + m + 1, [](ll x, ll y)
		 { return x < y; });
	for (j = 1; j <= n && j <= m; ++j)
	{
		if (a[j] > k)
			ans += a[j] * 2 + b[j];
		else
			ans += a[j] + k + b[j];
	}
	if (j > n)
		for (; j <= m; ++j)
			ans += b[j];
	else
		for (; j <= n; ++j)
			ans += a[j];
	cout << ans << '\n';
	return 0;
}
