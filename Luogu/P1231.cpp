#include <bits/stdc++.h>
using namespace std;

const int R = 4e4 + 10, M = 1.4e5 + 10;
struct
{
	int to, nxt, cap;
} e[M];
int head[R], last[R], tot, s, t, dep[R], depcnt[R], flag = false;
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
		flag = true;
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
	int n1, n2, n3, m1, m2, i, x, y;
	cin >> n1 >> n2 >> n3;
	s = 0, t = n2 + n1 + n1 + n3 + 1;
	for (i = 1; i <= n2; ++i)
	{
		add(s, i, 1);
		add(i, s, 0);
	}
	cin >> m1;
	for (i = 1; i <= m1; ++i)
	{
		cin >> x >> y;
		x += n2;
		add(y, x, 1);
		add(x, y, 0);
	}
	for (i = n2 + 1; i <= n2 + n1; ++i)
	{
		add(i, i + n1, 1);
		add(i + n1, i, 0);
	}
	cin >> m2;
	for (i = 1; i <= m2; ++i)
	{
		cin >> x >> y;
		x += n2 + n1;
		y += n2 + n1 + n1;
		add(x, y, 1);
		add(y, x, 0);
	}
	for (i = n2 + n1 + n1 + 1; i <= n2 + n1 + n1 + n3; ++i)
	{
		add(i, t, 1);
		add(t, i, 0);
	}
	bfs();
	int ans = 0;
	while (!flag)
	{
		copy(head, head + R, last);
		ans += dfs(s, INT_MAX);
	}
	cout << ans << '\n';
	return 0;
}
