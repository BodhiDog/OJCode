#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 5e3 + 10, M = 5e4 + 10;
const ll INF = 0x3f3f3f3f3f3f3f3f;
struct
{
	int to, next;
	ll w, cost;
} e[M * 2];
int head[M * 2], tot, s, t, pre[N];
ll flow[N], dis[N];
bool b[N];
void add(int x, int y, ll w, ll c)
{
	e[tot] = {y, head[x], w, c};
	head[x] = tot++;
}
bool spfa() // 关于SPFA，它活了（
{
	memset(dis, 0x3f, sizeof(dis));
	dis[s] = 0;
	memset(b, 0, sizeof(b));
	b[s] = true;
	queue<int> q;
	q.push(s);
	flow[s] = 1e12;
	int x, to, i;
	ll cap, len;
	while (!q.empty())
	{
		x = q.front();
		b[x] = false;
		q.pop();
		for (i = head[x]; ~i; i = e[i].next)
		{
			to = e[i].to;
			cap = e[i].w;
			len = e[i].cost;
			if (cap > 0 && dis[x] + len < dis[to])
			{
				dis[to] = dis[x] + len;
				flow[to] = min(flow[x], cap);
				pre[to] = i;
				if (!b[to])
				{
					q.push(to);
					b[to] = true;
				}
			}
		}
	}
	if (dis[t] == INF)
		return false;
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, m, i, x, y, w, c;
	cin >> n >> m >> s >> t;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w >> c;
		add(x, y, w, c);
		add(y, x, 0, -c);
	}
	int maxflow = 0, mincost = 0;
	while (spfa())
	{
		x = t;
		maxflow += flow[t];
		mincost += dis[t] * flow[t];
		while (x != s)
		{
			i = pre[x];
			e[i].w -= flow[t];
			e[i ^ 1].w += flow[t];
			x = e[i ^ 1].to;
		}
	}
	cout << maxflow << ' ' << mincost << '\n';
	return 0;
}
