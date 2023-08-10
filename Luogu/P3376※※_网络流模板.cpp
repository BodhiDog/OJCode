// Dinic


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
int head[M * 2], tot, s, t, frome[N];
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
int head[M * 2], tot, t;
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