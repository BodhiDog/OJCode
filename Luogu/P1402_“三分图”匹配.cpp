#include <bits/stdc++.h>
using namespace std;

const int N = 410, M = 3e4 + 2e2 + 10;
struct Edge
{
	int to, next, w;
} e[M * 2]; // 将人放在中间，房间放左，菜放右
int head[N], last[N], tot, dep[N], depcnt[N], s, t;
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	queue<int> q;
	depcnt[dep[t] = 1] = 1;
	q.push(t);
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
			if (add)
			{
				e[j].w -= add;
				e[j ^ 1].w += add;
				flow -= add;
				res += add;
			}
			if (flow == 0)
			{
				return res;
			}
		}
	}
	if (--depcnt[dep[x]] == 0)
	{
		dep[s] = t + 2;
	}
	++depcnt[++dep[x]];
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, p, q, i, j, x;
	cin >> n >> p >> q;
	s = 0;
	t = p + 2 * n + q + 1;
	for (j = 1; j <= p; ++j) // s->[1,p]
	{
		add(s, j, 1);
		add(j, s, 0);
	}
	for (i = p + 1; i <= p + n; ++i) // [1,p]->[p+1,p+n]
	{
		for (j = 1; j <= p; ++j)
		{
			cin >> x;
			if (x)
			{
				add(j, i, 1);
				add(i, j, 0);
			}
		}
	}
	for (j = p + 1; j <= p + n; ++j) // [p+1,p+n]->[p+n+1,p+n+n]，每个客户要跟自己新建一层点，详见https://www.luogu.com.cn/blog/76228/solution-p1402
	{
		add(j, j + n, 1);
		add(j + n, j, 0);
	}
	for (i = p + n + 1; i <= p + 2 * n; ++i) // [p+n+1,p+n+n]->[p+2n+1,p+2n+q]
	{
		for (j = p + 2 * n + 1; j <= p + 2 * n + q; ++j)
		{
			cin >> x;
			if (x)
			{
				add(i, j, 1);
				add(j, i, 0);
			}
		}
	}
	for (j = p + 2 * n + 1; j <= p + 2 * n + q; ++j) // [p+2n+1,p+2n+q]->t
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
	return 0;
}
