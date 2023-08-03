#include <bits/stdc++.h>
using namespace std;

const int N = 210, M = 40010;
vector<int> son[N], newson[N];
int rd[N], dfn[N], low[N], tme, group[N], gcnt, sta[N], top;
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
	int n, x, y;
	cin >> n;
	for (x = 1; x <= n; ++x)
	{
		while (true)
		{
			cin >> y;
			if (y == 0)
				break;
			son[x].push_back(y);
		}
	}
	for (x = 1; x <= n; ++x)
	{
		if (!dfn[x])
		{
			tarjan(x);
		}
	}
	for (x = 1; x <= n; ++x)
	{
		for (int to : son[x])
		{
			if (group[x] != group[to])
			{
				newson[group[x]].push_back(group[to]);
			}
		}
	}
	for (x = 1; x <= gcnt; ++x)
	{
		for (int to : newson[x])
		{
			++rd[to];
		}
	}
	int ans = 0;
	for (x = 1; x <= gcnt; ++x)
	{
		if (rd[x] == 0)
		{
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}
