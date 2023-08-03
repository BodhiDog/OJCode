#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10, M = 5e4 + 10;
struct Edge
{
	int to, next;
} e[M];
struct
{
	int x, y;
} mem[M];
vector<int> son[N]; // 新图
int head[M], tot, dfn[N], low[N], tme, group[N], gcnt, sta[N], top;
void add(int x, int y)
{
	e[++tot] = {.to = y, .next = head[x]};
	head[x] = tot;
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
		else if (!group[to])
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++gcnt;
		while (sta[top] != x)
		{
			group[sta[top--]] = gcnt;
		}
		group[sta[top--]] = gcnt;
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
		add(u, v);
		mem[j] = {u, v};
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j])
		{
			tarjan(j);
		}
	}
	for (j = 1; j <= m; ++j)
	{
		if (group[mem[j].x] != group[mem[j].y])
		{
			son[group[mem[j].x]].push_back(group[mem[j].y]);
		}
	}
	vector<int> ansgroup;
	for (j = 1; j <= gcnt; ++j)
	{
		if (son[j].size() == 0) // 出度为0
		{
			ansgroup.push_back(j);
		}
	}
	if (ansgroup.size() > 1)
	{
		cout << "0\n";
	}
	else
	{
		int ans = 0;
		for (j = 1; j <= n; ++j)
		{
			if (group[j] == ansgroup[0])
			{
				++ans;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
