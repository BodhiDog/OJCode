#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1010;
vector<int> son[N];
ll cost[N][N], h[N], dis[N];
int pre[N], s, t, match[N];
bool inq[N], flow[N][N], vis[N];
inline void add(int &x, int &y, bool cap, ll c)
{
	son[x].push_back(y);
	flow[x][y] = cap;
	cost[x][y] = c;
}
void spfa()
{
	fill(h, h + t + 1, -1e17);
	queue<int> q;
	q.push(s);
	h[s] = 0;
	inq[s] = true;
	int x;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		inq[x] = false;
		for (int to : son[x])
		{
			if (flow[x][to] && h[x] + cost[x][to] > h[to])
			{
				h[to] = h[x] + cost[x][to];
				if (!inq[to])
				{
					q.push(to);
					inq[to] = true;
				}
			}
		}
	}
}
bool dijkstra()
{
	fill(dis, dis + t + 1, -1e17);
	fill(vis, vis + t + 1, false);
	dis[s] = 0;
	int i, temp = t, x;
	ll c;
	while (temp--)
	{
		x = 0;
		for (i = 1; i <= t; ++i)
		{
			if (!vis[i] && dis[i] > dis[x])
			{
				x = i;
			}
		}
		// cout << x << ' ';
		vis[x] = true;
		for (int to : son[x])
		{
			c = cost[x][to] + h[x] - h[to];
			// cout << cost[x][to] << ' ' << h[x] << ' ' << h[to] << '\n';
			if (flow[x][to] && dis[x] + c > dis[to])
			{
				dis[to] = dis[x] + c;
				pre[to] = x;
			}
		}
	}
	return dis[t] != -1e17;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, x, y;
	ll hh;
	cin >> n >> m;
	s = n + n + 1, t = n + n + 2;
	for (i = 1; i <= n; ++i)
	{
		add(s, i, true, 0);
		add(i, s, false, 0);
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y;
		y += n;
		cin >> hh;
		add(x, y, true, hh);
		add(y, x, false, -hh);
	}
	for (i = n + 1; i <= n + n; ++i)
	{
		add(i, t, true, 0);
		add(t, i, false, 0);
	}
	ll ans = 0;
	spfa();
	// for (x = 0; x <= t; ++x)
	// {
	// 	cout << h[x] << ' ';
	// }
	while (dijkstra())
	{
		for (i = 1; i <= t; ++i)
		{
			h[i] += dis[i];
		}
		x = t;
		while (x != s)
		{
			flow[pre[x]][x] = false;
			flow[x][pre[x]] = true;
			ans += cost[pre[x]][x];
			x = pre[x];
		}
	}
	cout << ans << '\n';
	for (x = n + 1; x <= n + n; ++x)
	{
		for (int to : son[x])
		{
			if (to != t && flow[x][to]) // 反向边有流量
			{
				match[x - n] = to;
				break;
			}
		}
	}
	for (i = 1; i <= n; ++i)
	{
		cout << match[i] << ' ';
	}
	return 0;
}
