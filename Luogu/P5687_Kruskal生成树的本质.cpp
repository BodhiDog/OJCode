#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 3e5 + 10;
ll a[R], b[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> b[i];
	}
	sort(a + 1, a + n + 1);
	sort(b + 1, b + m + 1);
	int pa = 1, pb = 1;
	int linkx = 1, linky = 1; // 记录已经有多少个行/列被连接了
	ll ans = a[1] * (m - 1) + b[1] * (n - 1); // 至少要保证联通，如果某个数组中的数都比另一个数组中的数小，那另一个数组中的数字就用不上，就不连通了
	++pa, ++pb;
	while (pa <= n && pb <= m)
	{
		if (a[pa] <= b[pb])
		{
			ans += a[pa] * ll(m - linky);
			++pa;
			++linkx;
		}
		else
		{
			ans += b[pb] * ll(n - linkx);
			++pb;
			++linky;
		}
	}
	cout << ans << '\n';
	return 0;
}