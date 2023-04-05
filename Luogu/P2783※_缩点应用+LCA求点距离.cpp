#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10, M = 5e4 + 10;
struct Edge
{
	int from, to, next;
	bool flag;
} e[M * 2];
int head[M * 2], tot;
int dfn[N], low[N], tme, scc, belong[N], fa[N][17], dep[N];
bool b[N];
map<int, bool> mp[N];
string _10to2(int x)
{
	string res;
	while (x)
	{
		res = char((x & 1) + '0') + res;
		x /= 2;
	}
	return res;
}
void add(int x, int y)
{
	e[tot] = {.from = x,
			  .to = y,
			  .next = head[x]};
	head[x] = tot;
	++tot;
}
void tarjan(int x, int f)
{
	dfn[x] = low[x] = ++tme;
	int to;
	for (int i = head[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to, x);
			low[x] = min(low[x], low[to]);
			if (dfn[x] < low[to]) // i号边是桥
				e[i].flag = e[i ^ 1].flag = true;
		}
		else if (to != f)
			low[x] = min(low[x], dfn[to]);
	}
}
void dfs(int x, int f)
{
	belong[x] = scc;
	b[x] = true;
	for (int j = head[x], to; ~j; j = e[j].next)
	{
		to = e[j].to;
		if (!b[to] && !e[j].flag)
			dfs(to, x);
	}
}
void dfstree(int x, int f)
{
	fa[x][0] = f;
	dep[x] = dep[f] + 1;
	b[x] = true;
	for (int j = 1; j <= 16; ++j) // 建树时写ST表
		fa[x][j] = fa[fa[x][j - 1]][j - 1];
	for (int j = head[x], to; ~j; j = e[j].next)
	{
		to = e[j].to;
		if (!b[to])
			dfstree(to, x);
	}
}

int lca(int x, int y)
{
	if (dep[x] < dep[y])
		swap(x, y);
	int i;
	while (dep[x] > dep[y])
		x = fa[x][int(log2(dep[x] - dep[y]))];
	if (x == y)
		return x;
	for (i = 16; i >= 0; --i)
		if (fa[x][i] != fa[y][i])
			x = fa[x][i], y = fa[y][i];
	return fa[x][0];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, i, j, q;
	cin >> n >> m;
	memset(head, -1, sizeof(head));
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		if (!mp[x][y]) // 双碳无论双键还是三键都不构成环，不能缩点，所以要判重边
		{
			mp[x][y] = mp[y][x] = true;
			add(x, y), add(y, x);
		}
	}

	// 缩点
	for (j = 1; j <= n; ++j)
		if (!dfn[j])
			tarjan(j, 0);
	for (j = 1; j <= n; ++j)
		if (!b[j])
		{
			++scc;
			dfs(j, 0);
		}

	// 重建图，构建树
	memset(head, -1, sizeof(head));
	memset(b, 0, sizeof(b));
	tot = 0;
	for (i = 0; i <= (m << 1) - 1; i += 2)
	{
		x = e[i].from, y = e[i].to;
		if (belong[x] != belong[y])
			add(belong[x], belong[y]), add(belong[y], belong[x]);
	}

	for (j = 1; j <= scc; ++j)
		if (!b[j])
			dfstree(j, 0);

	cin >> q;
	while (q--)
	{
		cin >> x >> y;
		x = belong[x], y = belong[y]; // 注意这里，因为所有点都已经换成缩之后的点了，所以x=belong[x]
		cout << _10to2(dep[x] + dep[y] - 2 * dep[lca(x, y)] + 1) << '\n';
	}
	return 0;
}