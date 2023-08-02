/*
旧版写法hack数据的一部分（仅展示hack的原理）：
1 5
5 7 
7 1
1 9
9 2
2 3
3 9
从1开始遍历，会先到达9为环头的强联通分量中
但是题目要求先输出编号小的为起始的环头，所以错了
*/
#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
vector<int> son[R];
set<int> scc[R];
int dfn[R], low[R], tme, sta[R], top, group[R], gcnt;
bool vis[R];
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
			scc[gcnt].insert(sta[top]);
			group[sta[top]] = gcnt;
			--top;
		}
		scc[gcnt].insert(x);
		group[x] = gcnt;
		--top;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, u, v, i;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> u >> v;
		son[u].push_back(v);
	}
	for (i = 1; i <= n; ++i)
		if (!dfn[i])
			tarjan(i);
	cout << gcnt << '\n';
	for (i = 1; i <= n; ++i)
		if (!vis[group[i]])
		{
			vis[group[i]] = true;
			for (int j : scc[group[i]])
				cout << j << ' ';
			cout << '\n';
		}
	return 0;
}
