#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 5e4 + 10, N = 1e4 + 10;
struct Edge
{
	int to, next;
	ll len;
} e[M * 2];
struct Que
{
	int x, layer;
	ll len;
	bool operator<(const Que &oth) const
	{
		return len > oth.len;
	}
};
int head[M * 2], tot, k;
ll dis[N][25];
bool b[N][25];
void add(int x, int y, ll l)
{
	e[++tot] = {.to = y, .next = head[x], .len = l};
	head[x] = tot;
}
void dijkstra()
{
	memset(dis, 0x3f, sizeof(dis));
	priority_queue<Que> q;
	q.push({1, 0, 0});
	dis[1][0] = 0;
	int x, layer, i, to;
	ll len;
	while (!q.empty())
	{
		x = q.top().x, layer = q.top().layer;
		q.pop();
		if (!b[x][layer])
		{
			b[x][layer] = true;
			for (i = head[x]; i; i = e[i].next)
			{
				to = e[i].to;
				len = e[i].len;
				if (dis[x][layer] + len < dis[to][layer])
				{
					dis[to][layer] = dis[x][layer] + len;
					q.push({to, layer, dis[to][layer]});
				}
				if (layer + 1 <= k && dis[x][layer] < dis[to][layer + 1])
				{
					dis[to][layer + 1] = dis[x][layer];
					q.push({to, layer + 1, dis[to][layer]});
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
	int n, m, j, u, v;
	ll w;
	cin >> n >> m >> k;
	for (j = 1; j <= m; ++j)
	{
		cin >> u >> v >> w;
		add(u, v, w), add(v, u, w);
	}
	dijkstra();
	ll ans = LLONG_MAX;
	for (j = 0; j <= k; ++j)
	{
		ans = min(ans, dis[n][j]);
	}
	cout << ans << '\n';
	return 0;
}