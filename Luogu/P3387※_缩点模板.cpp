#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
vector<int> son[R], newson[R];
int dfn[R], low[R], tme, gcnt, group[R], sta[R], top;
int w[R], neww[R], rd[R], res[R];
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
		else if (!group[to]) // 访问过，但没给过编号，说明在栈中。是一种简化写法
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
		group[x] = gcnt;
		--top;
	}
}
void topo() // 拓扑排序意义：本来枚举从每个点出发到其他所有点的时间复杂度是O(n^2)，但是拓扑可以优化成O(n)
{
	queue<int> q;
	for (int i = 1; i <= gcnt; ++i)
	{
		if (rd[i] == 0)
		{
			q.push(i);
		}
	}
	int x;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (int to : newson[x])
		{
			--rd[to];
			res[to] = max(res[to], res[x] + neww[to]);
			if (rd[to] == 0)
			{
				q.push(to);
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, u, v, i, j;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> w[i];
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> u >> v;
		son[u].push_back(v);
	}
	for (i = 1; i <= n; ++i)
	{
		if (!dfn[i])
		{
			tarjan(i);
		}
	}
	for (i = 1; i <= n; ++i)
	{
		neww[group[i]] += w[i];
		res[group[i]] += w[i];
		for (int to : son[i])
		{
			if (group[to] != group[i]) // 不在一个联通分量里才加边
			{
				newson[group[i]].push_back(group[to]);
			}
		}
	}
	for (i = 1; i <= gcnt; ++i)
	{
		sort(newson[i].begin(), newson[i].end());
		newson[i].erase(unique(newson[i].begin(), newson[i].end()), newson[i].end()); // 去重边
		for (int to : newson[i])
		{
			++rd[to];
		}
	}
	topo();
	int ans = 0;
	for (i = 1; i <= gcnt; ++i)
	{
		ans = max(ans, res[i]);
	}
	cout << ans << '\n';
	return 0;
}
