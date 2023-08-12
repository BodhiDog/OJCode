#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e3 + 10, M = 6e3 + 10, INF = 1e9;
struct Edge
{
	int to, next;
	ll len;
} e[M + N];
struct Que
{
	int x;
	ll len;
	bool operator<(const Que &oth) const
	{
		return len > oth.len;
	}
};
int head[M + N], tot, tme[N], sta[N * N], top, n;
ll dis[N], h[N];
bool b[N];
void add(int x, int y, ll l)
{
	e[tot] = {y, head[x], l};
	head[x] = tot++;
}
bool spfa()
{
	memset(h, 0x3f, sizeof(h));
	h[0] = 0;
	sta[++top] = 0;
	b[0] = true;
	int x, j, to;
	ll len;
	while (top)
	{
		x = sta[top--];
		b[x] = false;
		for (j = head[x]; ~j; j = e[j].next)
		{
			to = e[j].to;
			len = e[j].len;
			if (h[x] + len < h[to])
			{
				h[to] = h[x] + len;
				if (!b[to])
				{
					sta[++top] = to;
					b[to] = true;
					++tme[to];
					if (tme[to] >= n + 1) // 因为加上了超级源点0，多出了一个点
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}
void dijkstra(int s)
{
	memset(b, 0, sizeof(b));
	priority_queue<Que> q;
	q.push({s, 0});
	fill(dis + 1, dis + n + 1, INF);
	int x, to, j;
	dis[s] = 0;
	ll len;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (j = head[x]; ~j; j = e[j].next)
			{
				to = e[j].to;
				len = e[j].len;
				if (dis[x] + len < dis[to])
				{
					dis[to] = dis[x] + len;
					q.push({to, dis[to]});
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
	memset(head, -1, sizeof(head));
	int m, i, j, x, y;
	ll w;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> w;
		add(x, y, w);
	}
	for (j = 1; j <= n; ++j)
	{
		add(0, j, 0);
	}
	if (!spfa())
	{
		cout << "-1\n";
		return 0;
	}
	for (x = 1; x <= n; ++x)
	{
		for (j = head[x]; ~j; j = e[j].next)
		{
			e[j].len = e[j].len + h[x] - h[e[j].to];
		}
	}
	ll ans;
	for (i = 1; i <= n; ++i)
	{
		dijkstra(i);
		ans = 0;
		for (j = 1; j <= n; ++j)
		{
			if (dis[j] == INF)
			{
				ans += ll(j) * INF; // j必须要转换！！！
			}
			else
			{
				ans += ll(j) * (dis[j] - h[i] + h[j]);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
