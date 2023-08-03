#include <bits/stdc++.h>
using namespace std;

const int R = 5e3 + 10;
vector<int> son[R];
set<int> scc[R];
int dfn[R], low[R], tme, group[R], gcnt, sta[R], top;
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
			group[sta[top]] = gcnt;
			scc[gcnt].insert(sta[top--]);
		}
		group[sta[top]] = gcnt;
		scc[gcnt].insert(sta[top--]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, op, x, y;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> op; // 顺序！！！
		son[x].push_back(y);
		if (op == 2)
		{
			son[y].push_back(x);
		}
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j])
		{
			tarjan(j);
		}
	}
	int ansp = 0;
	for (j = 1; j <= gcnt; ++j)
	{
		if (scc[j].size() > scc[ansp].size())
		{
			ansp = j;
		}
		else if (scc[j].size() == scc[ansp].size() &&
				 *scc[j].begin() < *scc[ansp].begin())
		{
			ansp = j;
		}
	}
	cout << scc[ansp].size() << '\n';
	for (int x : scc[ansp])
	{
		cout << x << ' ';
	}
	return 0;
}
