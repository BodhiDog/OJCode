#include <bits/stdc++.h>
using namespace std;

const int M = 2e6 + 10, N = 5e5 + 10;
struct Edge
{
	int to, next;
} e[M * 2];
int head[M * 2], tot;
int low[N], dfn[N], tme, anscnt, s[N], top, root;
vector<int> ans[N];
void add(int x, int y)
{
	e[++tot] = {
		.to = y,
		.next = head[x]};
	head[x] = tot;
}
void dfs(int x)
{
	low[x] = dfn[x] = ++tme;
	s[++top] = x;
	if (x == root && head[x] == -1) // 判孤点
	{
		ans[++anscnt].push_back(x);
		return;
	}
	int to;
	for (int i = head[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			dfs(to);
			low[x] = min(low[x], low[to]);
			if (low[to] >= dfn[x])
			{
				++anscnt;
				int t;
				do
				{
					t = s[top--];
					ans[anscnt].push_back(t);
				} while (t != to);
				ans[anscnt].push_back(x);
			}
		}
		else
			low[x] = min(low[x], dfn[to]); // 注意这里是dfnto，因为是无向图，所以一定是每个点都能回到自己的祖先节点，如果这样更新的话就不对了
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, j;
	memset(head, -1, sizeof(head));
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		if (x != y)
			add(x, y), add(y, x);
	}
	for (j = 1; j <= n; ++j)
		if (!dfn[j])
		{
			root = j;
			top = 0;
			dfs(j);
		}
	cout << anscnt << '\n';
	for (int i = 1; i <= anscnt; ++i)
	{
		cout << ans[i].size() << ' ';
		for (auto j : ans[i])
			cout << j << ' ';
		cout << '\n';
	}
	return 0;
}
