#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 10, N = 1e4 + 10;
struct Edge
{
	int from, to, next;
} e[M];
int head[M], tot = 0, m, w[N], w2[N], rd[N], res[N];
int low[N], dfn[N], tme, belong[N], s[N], top, scc;
bool b[N];
void add(int x, int y)
{
	e[tot] = {
		.from = x,
		.to = y,
		.next = head[x]};
	head[x] = tot;
	++tot;
}
void tarjan(int x)
{
	low[x] = dfn[x] = ++tme;
	s[++top] = x;
	b[x] = true;
	int to, t;
	for (int i = head[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
		}
		else if (b[to])
			low[x] = min(low[x], dfn[to]);
	}
	if (dfn[x] == low[x])
	{
		++scc;
		while (s[top] != x)
		{
			t = s[top--];
			b[t] = false;
			belong[t] = scc;
			w2[scc] += w[t];
		}
		top--;
		b[x] = false;
		belong[x] = scc;
		w2[scc] += w[x]; // 就是上面几行代码缩写成了x
	}
}
void rebuild()
{
	memset(head, -1, sizeof(head));
	tot = 0;
	for (int j = 1, x, y; j <= m; ++j)
	{
		x = e[j].from, y = e[j].to;
		if (belong[x] != belong[y])
		{
			add(belong[x], belong[y]);
			++rd[belong[y]];
		}
	}
}
void tpsort()
{
	int j, x, to;
	queue<int> q;
	for (j = 1; j <= scc; ++j)
	{
		if (!rd[j])
		{
			q.push(j);
			res[j] = w2[j];
		}
	}
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (j = head[x]; ~j; j = e[j].next)
		{
			to = e[j].to;
			res[to] = max(res[to], res[x] + w2[to]); // 类似动态规划，请自行举例验证
			--rd[to];
			if (!rd[to])
				q.push(to);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, x, y, ans = -1;
	cin >> n >> m;
	memset(head, -1, sizeof(head));
	for (j = 1; j <= n; ++j)
		cin >> w[j];
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		add(x, y);
	}
	for (j = 1; j <= n; ++j)
		if (!dfn[j])
			tarjan(j);
	rebuild();
	tpsort();
	for (j = 1; j <= scc; ++j)
		ans = max(ans, res[j]);
	cout << ans << '\n';
	return 0;
}
