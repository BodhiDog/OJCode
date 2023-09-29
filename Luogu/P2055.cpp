// 有亿点毒瘤
#include <bits/stdc++.h>
using namespace std;

const int N = 60, M = N + N * N + N;
struct
{
	int to, next, w;
} e[M * 2];
int head[N * 2], tot, s, t, dep[N * 2], depcnt[N * 2], last[N * 2], stu[N];
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
		if (cap > 0 && dep[to] + 1 == dep[x])
		{
			add = dfs(to, min(flow, cap));
			if (add > 0)
			{
				e[j].w -= add;
				e[j ^ 1].w += add;
				res += add;
				flow -= add;
				if (flow == 0)
				{
					return res;
				}
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
	int T, n, i, j, ans, x, cnt;
	cin >> T;
	while (T--)
	{
		cnt = ans = tot = 0;
		memset(head, -1, sizeof(head));
		memset(dep, 0, sizeof(dep));
		memset(depcnt, 0, sizeof(depcnt));
		memset(stu, 0, sizeof(stu));
		cin >> n;
		s = 0, t = n * 2 + 1;
		for (j = 1; j <= n; ++j)
		{
			cin >> stu[j];
			if (stu[j])
			{
				add(j, j + n, 1);
				add(j + n, j, 0); // 给自己连边
				add(n + j, t, 1);
				add(t, n + j, 0);
			}
		}
		for (j = 1; j <= n; ++j)
		{
			cin >> x;
			if (!stu[j] || !x) // 不是学生的和是学生且不回家的
			{
				add(s, j, 1);
				add(j, s, 0);
				++cnt;
			}
		}
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= n; ++j)
			{
				cin >> x;
				if (x)
				{
					add(i, j + n, 1);
					add(j + n, i, 0);
					add(j, i + n, 1);
					add(i + n, j, 0);
				}
			}
		}
		bfs();
		while (dep[s] <= t + 1)
		{
			copy(head, head + 2 * N, last);
			ans += dfs(s, INT_MAX);
		}
		cout << (ans >= cnt ? "^_^\n" : "T_T\n");
	}
	return 0;
}
