// 1
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 5e3 + 10, M = 5e4 + 10;
struct
{
	int to, next;
	ll cap, cost;
} e[M * 2];
int head[N], last[N], tot, s, t;
ll dis[N], minc;
bool b[N];
void add(int x, int y, ll w, ll c)
{
	e[tot] = {y, head[x], w, c};
	head[x] = tot++;
}
bool spfa()
{
	memset(dis, 0x3f, sizeof(dis));
	memset(b, 0, sizeof(b));
	dis[s] = 0;
	queue<int> q;
	q.push(s);
	b[s] = false;
	int x, to, i;
	ll cost, cap;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		b[x] = false;
		for (i = head[x]; ~i; i = e[i].next)
		{
			to = e[i].to;
			cap = e[i].cap;
			cost = e[i].cost;
			if (cap > 0 && dis[x] + cost < dis[to])
			{
				dis[to] = dis[x] + cost;
				if (!b[to])
				{
					q.push(to);
					b[to] = true;
				}
			}
		}
	}
	return dis[t] != 0x3f3f3f3f3f3f3f3f;
}
ll dfs(int x, ll flow)
{
	if (x == t)
	{
		return flow;
	}
	b[x] = true;
	int to, i;
	ll cap, add, res = 0, cost;
	for (i = last[x]; ~i; i = last[x] = e[i].next)
	{
		to = e[i].to;
		cap = e[i].cap;
		cost = e[i].cost;
		if (!b[to] && cap > 0 && dis[to] == dis[x] + cost)
		{
			add = dfs(to, min(cap, flow));
			e[i].cap -= add;
			e[i ^ 1].cap += add;
			flow -= add;
			res += add;
			minc += cost * add;
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, m, i, x, y;
	ll w, c;
	cin >> n >> m >> s >> t;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w >> c;
		add(x, y, w, c);
		add(y, x, 0, -c);
	}
	ll maxf = 0;
	while (spfa())
	{
		copy(head, head + N, last);
		maxf += dfs(s, 1e10);
	}
	cout << maxf << ' ' << minc << '\n';
	return 0;
}

// 2
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
				pre[to] = i; // 记录路径上的边，以便下面更新时减去边的w
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
	while (spfa()) // 只要能找到流，就扩展
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
