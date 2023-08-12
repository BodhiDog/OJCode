#include <bits/stdc++.h>
using namespace std;

const int M = 250 * 250 + 10, N = 260;
struct
{
	int to, next, w;
} e[M * 2];
struct Segment
{
	int x1, y1, x2, y2;
} xx[N], yy[N];
int n, xtot, ytot, head[M * 2], tot, last[M * 2], dep[N], depcnt[N], s, t;
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
bool check(Segment &a, Segment &b)
{
	return a.x1 <= b.x1 && a.x2 >= b.x2 && b.y1 <= a.y1 && b.y2 >= a.y2;
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
				++depcnt[dep[to]]; // 这里别忘了！！！
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
	int i, to, cap, res = 0, add;
	for (i = last[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (dep[to] + 1 == dep[x] && cap > 0)
		{
			add = dfs(to, min(cap, flow));
			e[i].w -= add;
			e[i ^ 1].w += add;
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
		dep[s] = n + 3;
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
	int i, j, x1, y1, x2, y2;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 == x2)
		{
			yy[++ytot] = {x1, min(y1, y2), x2, max(y1, y2)};
		}
		else
		{
			xx[++xtot] = {min(x1, x2), y1, max(x1, x2), y2};
		}
	}
	s = 0;
	t = n + 1;
	for (j = 1; j <= xtot; ++j)
	{
		add(s, j, 1);
		add(j, s, 0);
	}
	for (i = 1; i <= xtot; ++i) // 有交点的建边
	{
		for (j = 1; j <= ytot; ++j)
		{
			if (check(xx[i], yy[j]))
			{
				add(i, xtot + j, 1);
				add(xtot + j, i, 0);
			}
		}
	}
	for (j = 1; j <= ytot; ++j)
	{
		add(xtot + j, t, 1);
		add(t, xtot + j, 0);
	}
	bfs();
	int ans = 0;
	while (dep[s] <= n + 2)
	{
		copy(head, head + tot, last);
		ans += dfs(s, INT_MAX);
	}
	cout << n - ans << '\n';
	return 0;
}
