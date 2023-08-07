#include <bits/stdc++.h>
using namespace std;

const int R = 2010;
vector<int> son[R], newson[R];
int dfn[R], low[R], tme, sta[R], top, group[R], gcnt, rd[R];
long long sz[R]; // SCC的大小
bitset<R> b[R];
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
			++sz[gcnt];
			group[sta[top--]] = gcnt;
		}
		++sz[gcnt];
		group[sta[top--]] = gcnt;
		b[gcnt][gcnt] = true;
	}
}
void topo()
{
	// 新结点x的贡献值=sz[x]*x所能到达之后的所有点的数量之积
	// x所能到达之后的所有点的数量之积=sz[x]+sz[x.son]+sz[x.son.son]...
	int j, x;
	queue<int> q;
	for (j = 1; j <= gcnt; ++j)
	{
		if (rd[j] == 0)
		{
			q.push(j);
		}
	}
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (int to : newson[x])
		{
			--rd[to];
			b[to] |= b[x]; // to（原图的父结点）一定能到达x（原图的子结点）之后的结点
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
	int n, i, j;
	char c;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			cin >> c;
			if (c == '1')
			{
				son[i].push_back(j);
			}
		}
	}
	for (i = 1; i <= n; ++i)
	{
		if (!dfn[i])
		{
			tarjan(i);
		}
	}
	// 建立反图
	for (i = 1; i <= n; ++i)
	{
		for (int to : son[i])
		{
			if (group[i] != group[to])
			{
				newson[group[to]].push_back(group[i]);
				++rd[group[i]];
			}
		}
	}
	topo();
	long long ans = 0;
	for (i = 1; i <= gcnt; ++i)
	{
		for (j = 1; j <= gcnt; ++j)
		{
			if (b[i][j])
			{
				ans += sz[i] * sz[j];
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
