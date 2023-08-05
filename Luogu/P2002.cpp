#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Edge
{
	int x, y;
} e[500010];
vector<int> son[R], fa[R];
// 找入度为0的点
int dfn[R], low[R], tme, sta[R], top, group[R], gcnt, rd[R];
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int to : son[x])
	{
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
	int n, m, j, x, y;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		if (x != y)
		{
			son[x].push_back(y);
			e[j] = {x, y};
		}
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
		if (group[e[j].x] != group[e[j].y])
		{
			fa[group[e[j].y]].push_back(group[e[j].x]); // 建立反图，以便统计入度
		}
	}
	int ans = 0;
	for (j = 1; j <= gcnt; ++j)
	{
		if (fa[j].size() == 0)
		{
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}
