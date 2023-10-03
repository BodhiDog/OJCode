#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
int a[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, c, j;
	cin >> n >> c;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	sort(a + 1, a + n + 1);
	long long ans = 0;
	for (int l = 1, r1 = 1, r2 = 1; l <= n; ++l)
	{
		while (r1 <= n && a[r1] - a[l] <= c)
		{
			++r1; // 第一个a[r1]-a[l]>c的数
		}
		while (r2 <= n && a[r2] - a[l] < c)
		{
			++r2; // 第一个a[r2]-a[l]>=c的数
		}
		ans += r1 - r2;
	}
	cout << ans << '\n';
	return 0;
}
