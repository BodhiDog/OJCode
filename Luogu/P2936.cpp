#include <bits/stdc++.h>
using namespace std;

const int M = 710, N = 130;
struct
{
	int to, next, w;
} e[M * 2];
int head[N], tot, dep[N], depcnt[N], s = 'A', t = 'Z', last[N];
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	queue<int> q;
	q.push(t);
	depcnt[dep[t] = 1] = 1;
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
				++depcnt[dep[to] = dep[x] + 1];
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
			e[j].w -= add;
			e[j ^ 1].w += add;
			flow -= add;
			res += add;
			if (flow == 0)
			{
				return res;
			}
		}
	}
	--depcnt[dep[x]];
	if (depcnt[dep[x]] == 0)
	{
		dep[s] = 'Z' + 1;
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
	int n, j, w;
	char x, y;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, 0);
	}
	bfs();
	int ans = 0;
	while (dep[s] <= 'Z')
	{
		copy(head, head + N, last);
		ans += dfs(s, INT_MAX);
	}
	cout << ans << '\n';
	return 0;
}
