#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 5e5 + 10;
struct
{
	int to, next;
} e[R];
struct
{
	int to, next;
	ll d;
} newe[R];
struct
{
	int x, y;
} edge[R];
ll sum[R], dis[R];
int a[R], head[R], tot;
int dfn[R], low[R], tme, sta[R], top, belong[R], scc;
int newhead[R], newtot;
bool bar[R], b[R];
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void add(int x, int y, ll w)
{
	newe[++newtot] = {y, newhead[x], w};
	newhead[x] = newtot;
}
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
		}
		else if (!belong[to])
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++scc;
		while (sta[top] != x)
		{
			belong[sta[top]] = scc;
			sum[scc] += a[sta[top]];
			--top;
		}
		belong[sta[top]] = scc;
		sum[scc] += a[sta[top]];
		--top;
	}
}
void spfa(int s)
{
	memset(dis, -0x3f, sizeof(dis));
	dis[s] = sum[s]; // 注意这里初始值的赋值！！！
	queue<int> q;
	q.push(s);
	b[s] = true;
	int x, i, to;
	ll d;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		b[x] = false;
		for (i = newhead[x]; i; i = newe[i].next)
		{
			to = newe[i].to;
			d = newe[i].d;
			if (dis[x] + d > dis[to])
			{
				dis[to] = dis[x] + d;
				if (!b[to])
				{
					q.push(to);
					b[to] = true;
				}
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, s, p, i, x, y;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y;
		if (x != y)
		{
			add(x, y);
			edge[i] = {x, y};
		}
	}
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (i = 1; i <= n; ++i)
	{
		if (!dfn[i])
		{
			tarjan(i);
		}
	}
	for (i = 1; i <= m; ++i)
	{
		x = belong[edge[i].x];
		y = belong[edge[i].y];
		if (x != y)
		{
			add(x, y, sum[y]); // 从一个点到另一个点的贡献等于从一个点到经过这条路径到达另一个点的贡献，所以把v的sum作为路径权值
		}
	}
	cin >> s >> p;
	for (i = 1; i <= p; ++i)
	{
		cin >> x;
		bar[x] = true;
	}
	spfa(belong[s]);
	ll ans = 0;
	for (i = 1; i <= n; ++i)
	{
		if (bar[i])
		{
			ans = max(ans, dis[belong[i]]);
		}
	}
	cout << ans << '\n';
	return 0;
}
