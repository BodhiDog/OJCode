#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e3 + 10,
		  xx[] = {0, 1, 0, -1},
		  yy[] = {1, 0, -1, 0};
const ll INF = 0x3f3f3f3f3f3f3f3f;
struct Que
{
	int x, y;
	ll len;
	bool operator<(const Que &oth) const
	{
		return len > oth.len;
	}
};
int n, m;
ll r[R][R], dis[R][R][3];
bool b[R][R];
void bfs(int x, int y, int f)
{
	memset(b, 0, sizeof(b));
	int i, j, tx, ty;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			dis[i][j][f] = INF;
		}
	}
	priority_queue<Que> q;
	q.push({x, y, r[x][y]});
	dis[x][y][f] = r[x][y];
	while (!q.empty())
	{
		x = q.top().x;
		y = q.top().y;
		q.pop();
		if (!b[x][y])
		{
			b[x][y] = true;
			for (i = 0; i < 4; ++i)
			{
				tx = x + xx[i];
				ty = y + yy[i];
				if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && dis[x][y][f] + r[tx][ty] < dis[tx][ty][f])
				{
					dis[tx][ty][f] = dis[x][y][f] + r[tx][ty];
					q.push({tx, ty, dis[tx][ty][f]});
				}
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b, c, i, j;
	cin >> n >> m >> a >> b >> c;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			cin >> r[i][j];
		}
	}
	bfs(1, a, 0);
	bfs(n, b, 1);
	bfs(n, c, 2);
	ll ans = LLONG_MAX;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			ans = min(ans, dis[i][j][0] + dis[i][j][1] + dis[i][j][2] - 2 * r[i][j]);
		}
	}
	cout << ans << '\n';
	return 0;
}
