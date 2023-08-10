#include <bits/stdc++.h>
using namespace std;

const int M = 210, N = 210;
struct Edge
{
	int to, next, w;
} e[M * 2];
int head[M * 2], tot, m, dep[N], last[M * 2];
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
bool bfs()
{
	queue<int> q;
	memset(dep, 0, sizeof(dep));
	memcpy(last, head, sizeof(head));
	q.push(1);
	dep[1] = 1;
	int x, i, to;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (i = head[x]; ~i; i = e[i].next)
		{
			to = e[i].to;
			if (!dep[to] && e[i].w > 0)
			{
				q.push(to);
				dep[to] = dep[x] + 1;
				if (to == m)
				{
					return true;
				}
			}
		}
	}
	return false;
}
int dfs(int x, int flow)
{
	if (x == m)
	{
		return flow;
	}
	int i, to, cap;
	int res = 0, add;
	for (i = last[x]; (~i) && flow; i = last[x] = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (dep[to] == dep[x] + 1 && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			e[i].w -= add;
			e[i ^ 1].w += add;
			res += add;
			flow -= add;
		}
	}
	if (res == 0)
	{
		dep[x] = -1;
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, j, x, y, w;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, 0);
	}
	int ans = 0;
	while (bfs())
	{
		ans += dfs(1, INT_MAX);
	}
	cout << ans << '\n';
	return 0;
}
