#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10, M = 5e4 + 10;
struct Edge
{
	int to, next;
} e[M];
set<int> scc[R];
int tot, head[M];
int dfn[R], low[R], tme, sta[R], top, gcnt;
bool insta[R];
void add(int x, int y)
{
	e[++tot] = {.to = y, .next = head[x]};
	head[x] = tot;
}
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	insta[x] = true;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
		}
		else if (insta[to])
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++gcnt;
		while (sta[top] != x)
		{
			insta[sta[top]] = false;
			scc[gcnt].insert(sta[top--]);
		}
		insta[x] = false;
		scc[gcnt].insert(sta[top--]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, u, v;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> u >> v;
		if (u != v)
		{
			add(u, v);
		}
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j])
		{
			tarjan(j);
		}
	}
	int ans = 0;
	for (j = 1; j <= gcnt; ++j)
	{
		if (scc[j].size() > 1)
		{
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}
