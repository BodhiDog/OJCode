#include <bits/stdc++.h>
using namespace std;

int a[1010], ans[1010][1010];
int gcd(int x, int y)
{
	if (x < y)
		swap(x, y);
	int z;
	while (y)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j, l, r;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
		cin >> a[i];
	for (i = 1; i <= n; ++i)
	{
		ans[i][i] = a[i];
		for (j = i + 1; j <= n; ++j)
			ans[i][j] = gcd(ans[i][j - 1], a[j]);
	}
	while (m--)
	{
		cin >> l >> r;
		cout << ans[l][r] << '\n';
	}
	return 0;
}
