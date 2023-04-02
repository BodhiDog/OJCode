#include <bits/stdc++.h>
using namespace std;

const int M = 2e6 + 10, N = 5e5 + 10;
struct Edge
{
	int to, next;
	bool flag; // 标记桥
} e[M * 2];
int head[M * 2], tot = 0;
int low[N], dfn[N], tme, anscnt;
vector<int> ans[N];
bool b[N];
void add(int x, int y)
{
	e[tot] = {
		.to = y,
		.next = head[x]};
	head[x] = tot;
	++tot; // 这里edge就一定要从0（或者2）开始存了，因为是无向边，之后会有^判回边的
}
void tarjan(int x, int frome)
{
	low[x] = dfn[x] = ++tme;
	int to;
	for (int i = head[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to, i);
			low[x] = min(low[x], low[to]);
			if (dfn[x] < low[to])
				e[i].flag = e[i ^ 1].flag = true; // 这里就是为什么边要从0开始存
		}
		else if (i != (frome ^ 1))
			low[x] = min(low[x], dfn[to]);
	}
}
void dfs(int x)
{
	b[x] = true;
	ans[anscnt].push_back(x);
	int to;
	for (int i = head[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		if (!b[to] && !e[i].flag)
			dfs(to);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, j;
	memset(head, -1, sizeof(head));
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		if (x != y)
			add(x, y), add(y, x);
	}
	for (j = 1; j <= n; ++j)
		if (!dfn[j])
			tarjan(j, 0);
	for (j = 1; j <= n; ++j)
		if (!b[j])
		{
			++anscnt;
			dfs(j);
		}
	cout << anscnt << '\n';
	for (int i = 1; i <= anscnt; ++i)
	{
		cout << ans[i].size() << ' ';
		for (auto j : ans[i])
			cout << j << ' ';
		cout << '\n';
	}
	return 0;
}