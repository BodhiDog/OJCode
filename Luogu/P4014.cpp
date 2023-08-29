#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 110;
struct
{
	int to, next;
	ll w, cost;
} e[4 * R + R * R * 2];
int head[R * 2], last[R * 2], tot, s, t;
ll c[R][R], dis[R * 2], ans;
bool b[R * 2];
void add(int x, int y, ll w, ll c)
{
	e[tot] = {y, head[x], w, c};
	head[x] = tot++;
}
bool spfa()
{
	queue<int> q;
	q.push(s);
	memset(dis, 0x3f, sizeof(dis));
	dis[s] = 0;
	memset(b, 0, sizeof(b));
	b[s] = true;
	int x, to, j;
	ll cost;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		b[x] = false;
		for (j = head[x]; ~j; j = e[j].next)
		{
			to = e[j].to;
			cost = e[j].cost;
			if (e[j].w > 0 && dis[x] + cost < dis[to])
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
int dfs(int x, int flow)
{
	if (x == t)
	{
		return flow;
	}
	b[x] = true;
	int to, j;
	ll cap, cost, add, res = 0;
	for (j = last[x]; ~j; j = last[x] = e[j].next)
	{
		to = e[j].to;
		cap = e[j].w;
		cost = e[j].cost;
		if (!b[to] && cap > 0 && dis[x] + cost == dis[to])
		{
			add = dfs(to, min(flow, int(cap)));
			flow -= add;
			ans += cost * add;
			res += add;
			e[j].w -= add;
			e[j ^ 1].w += add;
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i, j;
	cin >> n;
	s = 0, t = n * 2 + 1;
	for (i = 1; i <= n; ++i)
	{
		for (j = n + 1; j <= 2 * n; ++j)
		{
			cin >> c[i][j - n];
		}
	}
	// 最小费用
	memset(head, -1, sizeof(head));
	for (i = 1; i <= n; ++i)
	{
		add(s, i, 1, 0);
		add(i, s, 0, 0);
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = n + 1; j <= 2 * n; ++j)
		{
			add(i, j, 1, c[i][j - n]);
			add(j, i, 0, -c[i][j - n]);
		}
	}
	for (j = n + 1; j <= 2 * n; ++j)
	{
		add(j, t, 1, 0);
		add(t, j, 0, 0);
	}
	while (spfa())
	{
		copy(head, head + t + 1, last);
		memset(b, 0, sizeof(b));
		dfs(s, INT_MAX);
	}
	cout << ans << '\n';
	// 最大费用
	ans = tot = 0;
	memset(head, -1, sizeof(head));
	for (i = 1; i <= n; ++i)
	{
		add(s, i, 1, 0);
		add(i, s, 0, 0);
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = n + 1; j <= 2 * n; ++j)
		{
			add(i, j, 1, -c[i][j - n]);
			add(j, i, 0, c[i][j - n]);
		}
	}
	for (j = n + 1; j <= 2 * n; ++j)
	{
		add(j, t, 1, 0);
		add(t, j, 0, 0);
	}
	while (spfa())
	{
		copy(head, head + t + 1, last);
		memset(b, 0, sizeof(b));
		dfs(s, INT_MAX);
	}
	cout << -ans << '\n';
	return 0;
}
