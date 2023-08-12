#include <bits/stdc++.h>
using namespace std;

const int N = 2010, M = 14 * N;
struct
{
	int to, next, w;
} e[M];
int head[M], tot, n, s, t, dep[N * 3], depcnt[N * 3], last[M]; // 注意dep和depcnt的数组大小！！！
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
	if (x == t)
	{
		return flow;
	}
	int to, i, cap, add, res = 0;
	for (i = last[x]; ~i; i = last[x] = e[i].next)
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
		dep[s] = 3 * n + 3;
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
	int j, s1, s2;
	cin >> n;
	s = 0;
	t = 3 * n + 1;
	for (j = 1; j <= 2 * n; ++j)
	{
		add(s, j, 1);
		add(j, s, 0);
	}
	for (j = 1; j <= 2 * n; ++j)
	{
		cin >> s1 >> s2;
		s1 += 2 * n;
		s2 += 2 * n;
		add(j, s1, 1);
		add(s1, j, 0);
		add(j, s2, 1);
		add(s2, j, 0);
	}
	for (j = 1; j <= n; ++j)
	{
		add(j + 2 * n, t, 2); // 一排座位坐两个人
		add(t, j + 2 * n, 0);
	}
	bfs();
	int ans = 0;
	while (dep[s] <= 3 * n + 2)
	{
		copy(head, head + tot, last);
		ans += dfs(s, INT_MAX);
	}
	cout << ans << '\n';
	return 0;
}
