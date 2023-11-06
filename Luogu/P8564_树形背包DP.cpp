// 发表时间: 2022-10-16 15:25
// https://www.luogu.com.cn/blog/scp020/solution-p8564
#include <bits/stdc++.h>
using namespace std;

const int R = 5e3 + 10;
vector<int> v[R];
long long f[R], dp[R][R];
int sz[R];
void dfs(int x, int fa)
{
	sz[x] = 1;
	dp[x][0] = 0;
	int i, j, cnt = 0;
	for (int to : v[x])
	{
		if (to == fa)
			continue;
		dfs(to, x);
		cnt += sz[to];
		for (i = cnt - 1; i >= 1; --i)
		{
			for (j = max(1, i - sz[x]); j <= min(sz[to] - 1, i); ++j)
			{
				dp[x][i] = min(dp[x][i], dp[x][i - j] + dp[to][j]);
			}
		}
		sz[x] += sz[to];
	}
	for (i = 0; i < sz[x] - 1; ++i)
	{
		dp[x][sz[x] - 1] = min(dp[x][sz[x] - 1], dp[x][i] + f[sz[x] - i]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(dp, 0x3f, sizeof(dp));
	int n, x, y, j;
	cin >> n;
	for (j = 2; j <= n; ++j)
	{
		cin >> f[j];
	}
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1, 0);
	cout << dp[1][n - 1];
	return 0;
}
