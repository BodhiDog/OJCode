// ISPA
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 210, M = 5010;
struct Edge
{
	int to, next;
	ll w;
} e[M * 2];
int head[N], tot, n, s, t, dep[N], depcnt[N], last[N];
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
		copy(head, head + n, last);
		ans += dfs(s, 1e12);
	}
	cout << ans << '\n';
	return 0;
}

// Dinic
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 5e3 + 10, N = 210;
struct Edge
{
	int to, next;
	ll w;
} e[M * 2];
int head[N], tot, n, s, t, frome[N], laste[N], dep[N];
ll flow[M * 2];
void add(int u, int v, ll w)
{
	e[tot] = {v, head[u], w};
	head[u] = tot;
	++tot;
}
bool bfs()
{
	memset(dep, 0, sizeof(dep));
	memset(laste, 0, sizeof(laste));
	laste[s] = head[s];
	queue<int> q;
	q.push(s);
	dep[s] = 1;
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
				laste[to] = head[to];
				if (to == t)
				{
					return true;
				}
			}
		}
	}
	return false;
}
ll dfs(int x, ll flow)
{
	if (x == t)
	{
		return flow;
	}
	int i, to;
	ll tot = 0, add, cap; // 一次找出多条增广路，就是Dinic的优点之一
	for (i = laste[x]; (~i) && flow; i = laste[x] = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (dep[to] == dep[x] + 1 && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			e[i].w -= add;
			e[i ^ 1].w += add;
			tot += add;
			flow -= add; // 还未进行分配的流量减少了
		}
	}
	if (tot == 0)
	{
		dep[x] = -1; // 剪枝，没有价值（没有额外流量）的点不再继续搜索
	}
	return tot;
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
	while (bfs())
	{
		ans += dfs(s, 1e12);
	}
	cout << ans << '\n';
	return 0;
}

// EK
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 5e3 + 10, N = 210;
struct Edge
{
	int to, next;
	ll w;
} e[M * 2];
int head[N], tot, s, t, frome[N];
bool b[N];
ll flow[M * 2];
void add(int u, int v, ll w)
{
	e[tot] = {v, head[u], w};
	head[u] = tot;
	++tot;
}
ll bfs()
{
	memset(frome, 0, sizeof(frome));
	memset(flow, 0, sizeof(flow));
	memset(b, 0, sizeof(b));
	queue<int> q;
	q.push(s);
	flow[s] = 1e12;
	int x, i, to;
	ll cap, add, w;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (i = head[x]; ~i; i = e[i].next)
		{
			to = e[i].to;
			cap = e[i].w;
			if (!b[to] && cap > 0)
			{
				b[to] = true;
				q.push(to);
				flow[to] = min(flow[x], cap);
				frome[to] = i;
				if (to == t)
				{
					x = t;
					while (x != s)
					{
						i = frome[x];
						e[i].w -= flow[t];
						e[i ^ 1].w += flow[t];
						x = e[i ^ 1].to;
					}
					return flow[t];
				}
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
	memset(head, -1, sizeof(head));
	int n, m, i, x, y;
	ll w;
	cin >> n >> m >> s >> t;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, 0);
	}
	ll ans = 0, add = 1;
	while (add)
	{
		add = bfs();
		ans += add;
	}
	cout << ans << '\n';
	return 0;
}

// FF
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int M = 5e3 + 10, N = 210;
struct Edge
{
	int to, next;
	ll w;
} e[M * 2];
int head[N], tot, t;
bool b[N];
void add(int u, int v, ll w)
{
	e[tot] = {v, head[u], w};
	head[u] = tot;
	++tot;
}
ll dfs(int x, ll flow)
{
	if (x == t)
	{
		return flow;
	}
	b[x] = true;
	ll cap, add;
	for (int i = head[x], to; ~i; i = e[i].next)
	{
		to = e[i].to;
		cap = e[i].w;
		if (!b[to] && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			if (add)
			{
				e[i].w -= add;
				e[i ^ 1].w += add;
				return add;
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
	memset(head, -1, sizeof(head));
	int n, m, s, i, x, y;
	ll w;
	cin >> n >> m >> s >> t;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, 0);
	}
	ll ans = 0, add = 1;
	while (add)
	{
		add = dfs(s, 1e12);
		memset(b, 0, sizeof(b));
		ans += add;
	}
	cout << ans << '\n';
	return 0;
}