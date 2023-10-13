#include <bits/stdc++.h>
using namespace std;

const int N = 55, M = 1e3 + 10;
struct
{
	int to, next, len;
} e[M * 2];
struct Que
{
	int x, dis, k;
	bool operator<(const Que &oth) const
	{
		return dis > oth.dis;
	}
};
int head[N], tot, dis[N][N], kmax;
bool b[N][N];
void add(int x, int y, int len)
{
	e[++tot] = {y, head[x], len};
	head[x] = tot;
}
void dijkstra()
{
	memset(dis, 0x3f, sizeof(dis));
	dis[1][0] = 0;
	priority_queue<Que> q;
	q.push({1, 0, 0});
	int i, x, to, len, k;
	while (!q.empty())
	{
		x = q.top().x;
		k = q.top().k;
		q.pop();
		if (!b[x][k])
		{
			b[x][k] = true;
			for (i = head[x]; i; i = e[i].next)
			{
				to = e[i].to;
				len = e[i].len;
				if (dis[x][k] + len < dis[to][k])
				{
					dis[to][k] = dis[x][k] + len;
					q.push({to, dis[to][k], k});
				}
				if (k + 1 <= kmax && dis[x][k] + (len >> 1) < dis[to][k + 1])
				{
					dis[to][k + 1] = dis[x][k] + (len >> 1);
					q.push({to, dis[to][k + 1], k + 1});
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
	int n, m, i, x, y, len;
	cin >> n >> m >> kmax;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> len;
		add(x, y, len);
		add(y, x, len);
	}
	dijkstra();
	int ans = INT_MAX;
	for (i = 0; i <= kmax; ++i)
	{
		ans = min(dis[n][i], ans);
	}
	cout << ans << endl;
	return 0;
}
