#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10, M = 2e3 + 10;
struct
{
	int to, next, cap;
} e[N * 2 + M * 2];
set<int> L, R;
int head[N], last[N], tot, s, t, dep[N], depcnt[N];
void add(int u, int v, int f)
{
	e[tot] = {v, head[u], f};
	head[u] = tot++;
}
void bfs()
{
	queue<int> q;
	q.push(t);
	depcnt[dep[t] = 1] = 1;
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
	int res = 0;
	for (int j = last[x], cap, add, to; ~j; j = last[x] = e[j].next)
	{
		to = e[j].to;
		cap = e[j].cap;
		if (cap > 0 && dep[to] + 1 == dep[x])
		{
			add = dfs(to, min(flow, cap));
			e[j].cap -= add;
			e[j ^ 1].cap += add;
			res += add;
			flow -= add;
			if (flow == 0)
			{
				return res;
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
	memset(head, -1, sizeof(head));
	int n, m, j, a, b;
	cin >> n >> m;
	s = 0;
	t = n + 1;
	for (j = 1; j <= m; ++j)
	{
		cin >> a >> b;
		++a, ++b;
		if (L.count(b) || R.count(a))
		{
			swap(a, b);
		}
		if (!L.count(a))
		{
			L.insert(a);
		}
		if (!R.count(b))
		{
			R.insert(b);
		}
		add(a, b, 1);
		add(b, a, 0);
	}
	for (int to : L)
	{
		add(s, to, 1);
		add(to, s, 0);
	}
	for (int to : R)
	{
		add(to, t, 1);
		add(t, to, 0);
	}
	int ans = 0;
	bfs();
	while (dep[s] <= t + 1)
	{
		copy(head, head + N, last);
		ans += dfs(s, INT_MAX);
	}
	// cout << ans << '\n';
	cout << n - ans << '\n';
	return 0;
}
