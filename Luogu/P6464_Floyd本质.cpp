#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 110;
int n;
ll dis[N][N], newdis[N][N];
void copy()
{
	int i, j;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			newdis[i][j] = dis[i][j];
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, j, k, k1, k2, x, y, len;
	ll ans = LLONG_MAX, res;
	memset(dis, 0x3f, sizeof(dis));
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		dis[i][i] = 0;
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> len;
		dis[x][y] = len;
		dis[y][x] = len;
	}
	for (k = 1; k <= n; ++k)
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= n; ++j)
			{
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
	for (k1 = 1; k1 <= n; ++k1)
	{
		for (k2 = k1 + 1; k2 <= n; ++k2)
		{
			copy();
			newdis[k1][k2] = newdis[k2][k1] = 0;
			for (i = 1; i <= n; ++i)
			{
				for (j = 1; j <= n; ++j)
				{
					newdis[i][j] = min(newdis[i][j], newdis[i][k1] + newdis[k1][j]);
				}
			}
			for (i = 1; i <= n; ++i)
			{
				for (j = 1; j <= n; ++j)
				{
					newdis[i][j] = min(newdis[i][j], newdis[i][k2] + newdis[k2][j]);
				}
			}
			res = 0;
			for (i = 1; i <= n; ++i)
			{
				for (j = 1; j <= n; ++j)
				{
					res += newdis[i][j];
				}
			}
			ans = min(ans, res);
		}
	}
	cout << ans / 2 << '\n';
	return 0;
}
