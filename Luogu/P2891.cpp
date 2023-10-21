#include <bits/stdc++.h>
using namespace std;

const int R = 110 * 4;
struct
{
	int to, nxt, cap;
} e[2 * (R * R + R)];
int head[R], last[R], tot, s, t, dep[R], depcnt[R];
void add(int x, int y, int cap)
{
	e[tot] = {y, head[x], cap};
	head[x] = tot++;
}
void bfs()
{
	queue<int> q;
	q.push(t);
	depcnt[dep[t] = 1] = 1;
	int x, to, i;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (i = head[x]; ~i; i = e[i].nxt)
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
	if (x == t)
	{
		return flow;
	}
	int i, to, add, cap, res = 0;
	for (i = last[x]; ~i; i = last[x] = e[i].nxt)
	{
		to = e[i].to;
		cap = e[i].cap;
		if (cap && dep[x] == dep[to] + 1)
		{
			add = dfs(to, min(flow, cap));
			if (add)
			{
				e[i].cap -= add;
				e[i ^ 1].cap += add;
				flow -= add;
				res += add;
				if (!flow)
				{
					return res;
				}
			}
		}
	}
	--depcnt[dep[x]];
	if (!depcnt[dep[x]])
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
	int f, d, n, i, j, fi, di, x;
	cin >> n >> f >> d;
	s = 0, t = f + n + n + d + 1;
	for (i = 1; i <= f; ++i)
	{
		add(s, i, 1);
		add(i, s, 0);
	}
	for (i = 1; i <= n; ++i)
	{
		cin >> fi >> di;
		for (j = 1; j <= fi; ++j)
		{
			cin >> x;
			add(x, f + i, 1);
			add(f + i, x, 0);
		}
		add(f + i, f + n + i, 1);
		add(f + n + i, f + i, 0);
		for (j = 1; j <= di; ++j)
		{
			cin >> x;
			x += f + n + n;
			add(f + n + i, x, 1);
			add(x, f + n + i, 0);
		}
	}
	for (i = f + n + n + 1; i <= f + n + n + d; ++i)
	{
		add(i, t, 1);
		add(t, i, 0);
	}
	bfs();
	int ans = 0;
	while (dep[s] <= t + 1)
	{
		copy(head, head + R, last);
		ans += dfs(s, INT_MAX);
	}
	cout << ans << '\n';
	return 0;
}
