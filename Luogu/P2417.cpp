#include <bits/stdc++.h>
using namespace std;

const int N = 2e4 + 10;
struct
{
	int to, next, w;
} e[N * N * 2];
int head[N * 2], tot, last[N * 2], s, t, dep[N * 2], depcnt[10];
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	memset(dep, 0, sizeof(dep));
	memset(depcnt, 0, sizeof(depcnt));
	queue<int> q;
	q.push(t);
	dep[t] = 1;
	depcnt[1] = 1;
	int i, x, to;
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
	int res = 0;
	for (int i = last[x], to, add, cap; ~i; i = last[x] = e[i].next)
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
	int T, n, m, k, i, y, res;
	cin >> T;
	while (T--)
	{
		memset(head, -1, sizeof(head));
		tot = res = 0;
		cin >> m >> n;
		s = 0;
		t = m + n + 2;
		for (i = 1; i <= m; ++i)
		{
			add(s, i, 1);
			add(i, s, 0);
		}
		for (i = 1; i <= m; ++i)
		{
			cin >> k;
			while (k--)
			{
				cin >> y;
				y += m;
				add(i, y, 1);
				add(y, i, 0);
			}
		}
		for (i = 1 + m; i <= m + n; ++i)
		{
			add(i, t, 1);
			add(t, i, 0);
		}
		bfs();
		while (dep[s] <= t + 1)
		{
			copy(head, head + 2 * N, last);
			res += dfs(s, INT_MAX);
		}
		cout << (res >= m ? "YES\n" : "NO\n"); // 注意教室数量是m！！！
	}
	return 0;
}
