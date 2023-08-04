#include <bits/stdc++.h>
using namespace std;

const int R = 2e6 + 10;
int dfn[R], low[R], tme, gcnt, group[R], sta[R], top;
vector<int> son[R];
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
	int n, m, x, a, y, b, j;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> a >> y >> b;
		son[x + n * a].push_back(y + n * (b ^ 1));
		son[y + n * b].push_back(x + n * (a ^ 1));
		// 假：点编号+n，真：不加
	}
	for (j = 1; j <= 2 * n; ++j)
	{
		if (!dfn[j])
		{
			tarjan(j);
		}
	}
	for (j = 1; j <= n; ++j)
	{
		if (group[j] == group[j + n])
		{
			cout << "IMPOSSIBLE\n";
			return 0;
		}
	}
	cout << "POSSIBLE\n";
	for (j = 1; j <= n; ++j)
	{
		cout << (group[j] < group[j + n]) << ' '; // 越是靠近dfs序叶子结点的点，在tarjan时越是先被标记在一个强联通分量中
	}
	return 0;
}
