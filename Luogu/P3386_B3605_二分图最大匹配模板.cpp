// ISAP
#include <bits/stdc++.h>
using namespace std;

const int N = 510, M = 5e4 + 10;
struct Edge
{
	int to, next, w;
} e[2 * (M + N * 2)];
int head[2 * (M + N * 2)], tot, s, t, last[2 * (M + N * 2)], dep[N + M], depcnt[N + M];
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	queue<int> q;
	dep[t] = 1;
	depcnt[1] = 1;
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
				q.push(to);
				dep[to] = dep[x] + 1;
				++depcnt[dep[to]];
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
	int cap, i, to, add, res = 0;
	for (i = last[x]; ~i; i = last[x] = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (dep[x] == dep[to] + 1 && cap > 0)
		{
			add = dfs(to, min(cap, flow));
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
		dep[s] = t + 1;
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
	int n, m, e, j, x, y;
	cin >> n >> m >> e;
	s = 1;
	t = n + m + 2; //[1,n+m+2]，共m+n+2个点
	for (j = 2; j <= n + 1; ++j)
	{
		add(s, j, 1);
		add(j, s, 0);
	}
	for (j = 1; j <= e; ++j)
	{
		cin >> x >> y;
		x += 1;
		y += n + 1;
		add(x, y, 1);
		add(y, x, 0);
	}
	for (j = n + 1 + 1; j <= n + m + 1; ++j)
	{
		add(j, t, 1);
		add(t, j, 0);
	}
	bfs();
	int ans = 0;
	while (dep[s] <= t)
	{
		copy(head, head + tot + 1, last);
		ans += dfs(s, 1000);
	}
	cout << ans << '\n';
	return 0;
}

// BFS
#include <bits/stdc++.h>
using namespace std;

const int R = 510;
vector<int> son[R];
int vis[R], l[R], r[R], wait[R];
int bfs(int st, int turn)
{
	queue<int> q; // 等待退回匹配的人
	q.push(st);
	memset(wait, 0, sizeof(wait));
	int from, x;
	while (!q.empty())
	{
		from = q.front();
		q.pop();
		for (int to : son[from])
		{
			if (vis[to] == turn)
			{
				continue;
			}
			vis[to] = turn;
			wait[to] = from;
			if (r[to] == 0)
			{
				while (to)
				{
					x = l[from];
					r[to] = from, l[from] = to;
					to = x;
					from = wait[to];
				}
				return 1;
			}
			else
			{
				q.push(r[to]);
			}
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, e, j, x, y;
	cin >> n >> m >> e;
	for (j = 1; j <= e; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
	}
	int ans = 0;
	for (j = 1; j <= n; ++j)
	{
		ans += bfs(j, j);
	}
	cout << ans << '\n';
	return 0;
}

// DFS
#include <bits/stdc++.h>
using namespace std;

const int R = 510;
vector<int> son[R];
int vis[R], l[R], r[R];
int dfs(int x, int turn)
{
	if (vis[x] == turn)
	{
		return 0;
	}
	vis[x] = turn;
	for (int to : son[x])
	{
		if (r[to] == 0 || dfs(r[to], turn))
		{
			r[to] = x;
			return 1;
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, e, j, x, y;
	cin >> n >> m >> e;
	for (j = 1; j <= e; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
	}
	int ans = 0;
	for (j = 1; j <= n; ++j)
	{
		ans += dfs(j, j);
	}
	cout << ans << '\n';
	return 0;
}
