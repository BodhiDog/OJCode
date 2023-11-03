#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool cnt[N][N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, k, i, j, a, ans;
	cin >> n >> m >> k;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			cin >> a;
			cnt[a][j] = true;
		}
	}
	for (i = 1; i <= k; ++i)
	{
		ans = 0;
		for (j = 1; j <= m; ++j)
		{
			ans += cnt[i][j];
		}
		cout << ans << ' ';
	}
	return 0;
}
