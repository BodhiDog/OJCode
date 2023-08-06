#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
vector<int> son[R];
int dfn[R], low[R], tme, group[R], gcnt, cd[R], rd[R], sta[R], top;
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
	int n, j, y;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		while (true)
		{
			cin >> y;
			if (y == 0)
				break;
			son[j].push_back(y);
		}
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j])
		{
			tarjan(j);
		}
	}
	for (j = 1; j <= n; ++j)
	{
		for (int to : son[j])
		{
			if (group[j] != group[to])
			{
				++cd[group[j]];
				++rd[group[to]];
			}
		}
	}
	// 统计答案
	int rtot = 0, ctot = 0; // 入度统计、出度统计
	for (j = 1; j <= gcnt; ++j)
	{
		if (rd[j] == 0)
		{
			++rtot;
		}
		if (cd[j] == 0)
		{
			++ctot;
		}
	}
	cout << rtot << '\n'
		 << (gcnt == 1 ? 0 : max(rtot, ctot)) << '\n'; // 特判！！！
	return 0;
}
