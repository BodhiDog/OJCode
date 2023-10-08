#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 110, M = 5010; // 改一下数据范围即可
struct Edge
{
	int to, next;
	ll w;
} e[M * 2];
int head[M * 2], tot, n, s, t, dep[N], depcnt[N], last[M * 2];
void add(int x, int y, ll w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	dep[t] = 1;
	depcnt[1] = 1;
	queue<int> q;
	q.push(t);
	int x, i, to;
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
ll dfs(int x, ll flow)
{
	if (x == t)
	{
		return flow;
	}
	ll cap, add, res = 0;
	for (int i = last[x], to; (~i) && flow > 0; i = last[x] = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (dep[to] + 1 == dep[x] && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			if (add)
			{
				e[i].w -= add;
				e[i ^ 1].w += add;
				flow -= add;
				res += add;
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
		dep[s] = n + 1;
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
	int m, i, x, y;
	ll w;
	cin >> n >> m >> s >> t;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, 0);
	}
	ll ans = 0;
	bfs();
	while (dep[s] <= n)
	{
		copy(head, head + tot, last);
		ans += dfs(s, 1e12);
	}
	cout << ans << '\n';
	return 0;
}
