#include <bits/stdc++.h>
using namespace std;

const int M = 2e3 + 10, N = 210;
struct
{
	int to, next, w;
} e[M * 2];
int head[M * 2], tot, n, dep[N], depcnt[N], last[M * 2];
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	queue<int> q;
	q.push(n);
	dep[n] = 1;
	depcnt[1] = 1;
	int x, to, i;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (i = head[x]; ~i; i = e[i].next)
		{
			to = e[i].to;
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
	if (x == n)
	{
		return flow;
	}
	int to, i, cap, add, res = 0;
	for (i = last[x]; ~i; i = last[x] = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (dep[x] - 1 == dep[to] && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			if (add)
			{
				flow -= add;
				res += add;
				e[i].w -= add;
				e[i ^ 1].w += add;
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
		dep[1] = n + 1;
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
	int m, all, j, x, y, w;
	cin >> n >> m >> all;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, 0);
	}
	bfs();
	int ans = 0;
	while (dep[1] <= n)
	{
		copy(head, head + tot, last);
		ans += dfs(1, INT_MAX);
	}
	if (ans == 0)
	{
		cout << "Orz Ni Jinan Saint Cow!\n";
	}
	else
	{
		cout << ans << ' ' << int(ceil(double(all) / double(ans))) << '\n'; // ceil返回值是double，要取int！！！
	}
	return 0;
}
