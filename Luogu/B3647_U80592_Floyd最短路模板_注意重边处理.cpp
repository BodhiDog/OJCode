// B3647
#include <bits/stdc++.h>
using namespace std;

const int R = 510, INF = 0X3F3F3F3F;
int dis[R][R];
int main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	int n, m, i, j, k, x, y, len;
	cin >> n >> m;
	memset(dis, 0x3f, sizeof(dis));
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> len;
		dis[y][x] = dis[x][y] = len;
	}
	for (i = 1; i <= n; ++i)
		dis[i][i] = 0;
	for (k = 1; k <= n; ++k)
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
			cout << dis[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}

// U80592
#include <bits/stdc++.h>
using namespace std;

const int R = 510, MOD = 998244354;
const long long INF = 0X3f3f3f3f3f3f3f3f;
long long dis[R][R], ans[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j, k, x, y;
	long long len;
	cin >> n >> m;
	memset(dis, 0x3f, sizeof(dis));
	for (i = 1; i <= n; ++i)
		dis[i][i] = 0;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> len;
		dis[y][x] = dis[x][y] = min(len, dis[x][y]); // 可能有重边
	}
	for (k = 1; k <= n; ++k)
		for (i = 1; i <= n; ++i)
			if (dis[i][k] != INF)
				for (j = 1; j <= n; ++j)
					dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
	for (i = 1; i <= n; ++i)
		for (j = 1; j <= n; ++j)
			ans[i] = (ans[i] + dis[i][j]) % MOD;
	for (j = 1; j <= n; ++j)
		cout << ans[j] << '\n';
	return 0;
}
