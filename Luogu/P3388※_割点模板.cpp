#include <bits/stdc++.h>
using namespace std;

const int R = 2e4 + 10;
vector<int> son[R];
set<int> isp;
int dfn[R], low[R], tme, root;
void tarjan(int x, int fa)
{
	int soncnt = 0;
	dfn[x] = low[x] = ++tme;
	for (int to : son[x])
	{
		if (to != fa)
		{
			if (!dfn[to])
			{
				++soncnt;
				tarjan(to, x);
				low[x] = min(low[x], low[to]);
				if (x != root && low[to] >= dfn[x])
					isp.insert(x);
			}
			else
			{
				low[x] = min(low[x], dfn[to]);
			}
		}
	}
	if (root == x && soncnt >= 2)
		isp.insert(x);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, u, v;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> u >> v;
		son[u].push_back(v);
		son[v].push_back(u);
	}
	for (i = 1; i <= n; ++i)
		if (!dfn[i])
		{
			root = i;
			tarjan(i, 0);
		}
	cout << isp.size() << '\n';
	for (int x : isp)
		cout << x << ' '; // 是空格！！！
	return 0;
}
