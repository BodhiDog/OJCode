#include <bits/stdc++.h>
using namespace std;

const int N = 110, M = 20500;
struct
{
	int to, next, w;
} e[M];
int head[N], tot, dep[N], depcnt[N], last[N], s, t, lans[N], rans[N];
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	queue<int> q;
	q.push(t);
	dep[t] = 1;
	depcnt[1] = 1;
	int x, to, j;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (j = head[x]; ~j; j = e[j].next)
		{
			to = e[j].to;
			if (!dep[to])
			{
				dep[to] = dep[x] + 1;
				++depcnt[dep[to]];
				q.push(to);
			}
		}
	}
}
int dfs(int x, int flow)
{
	if (x == t)
	{
		return flow;
	}
	int to, j, cap, add, res = 0;
	for (j = last[x]; ~j; j = last[x] = e[j].next)
	{
		to = e[j].to;
		cap = e[j].w;
		if (dep[to] + 1 == dep[x] && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			if (add)
			{
				e[j].w -= add;
				e[j ^ 1].w += add;
				res += add;
				flow -= add;
			}
			if (flow == 0)
			{
				return res;
			}
		}
	}
	--depcnt[dep[x]];
	if (depcnt[dep[x]] == 0)
	{
		dep[s] = t + 2;
	}
	++dep[x];
	++depcnt[dep[x]];
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int m, n, j, x, y;
	cin >> m >> n;
	s = 0;
	t = n + 1;
	for (j = 1; j <= m; ++j)
	{
		add(s, j, 1);
		add(j, s, 0);
	}
	while (true)
	{
		cin >> x >> y;
		if (x == -1)
		{
			break;
		}
		add(x, y, 1);
		add(y, x, 0);
	}
	for (j = m + 1; j <= n; ++j)
	{
		add(j, t, 1);
		add(t, j, 0);
	}
	bfs();
	int ans = 0;
	while (dep[s] <= t + 1)
	{
		copy(head, head + N, last);
		ans += dfs(s, INT_MAX);
	}
	cout << ans << '\n';
	for (j = 0; j < tot; j += 2) // 因为有输入重边，所以不能在搜索的时候判断
	{
		if (e[j].to != t && e[j ^ 1].to != s && e[j ^ 1].w > 0) // 边被启用
		{
			cout << e[j ^ 1].to << ' ' << e[j].to << '\n';
		}
	}
	return 0;
}
