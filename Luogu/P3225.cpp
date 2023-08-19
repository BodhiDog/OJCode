#include <bits/stdc++.h>
using namespace std;

const int R = 1e3 + 10;
vector<int> son[R];
int dfn[R], low[R], tme, root, cptot, notcptot, gcnt, group[R];
bool cp[R];
void tarjan(int x, int f)
{
	int soncnt = 0;
	dfn[x] = low[x] = ++tme;
	for (int to : son[x])
	{
		if (to != f)
		{
			if (!dfn[to])
			{
				++soncnt;
				tarjan(to, x);
				low[x] = min(low[x], low[to]);
				if (x != root && low[to] >= dfn[x])
				{
					cp[x] = true;
				}
			}
			else
			{
				low[x] = min(low[x], dfn[to]);
			}
		}
	}
	if (x == root && soncnt >= 2)
	{
		cp[x] = true;
	}
}
void dfs(int x) // 搜到割点时搜索停止
{
	group[x] = gcnt;
	++notcptot;
	for (int to : son[x])
	{
		if (cp[to] && group[to] != gcnt)
		{
			++cptot;
			group[to] = gcnt;
		}
		else if (!group[to])
		{
			dfs(to);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n = 0, m, j, x, y, cs = 0;
	long long ans1, ans2;
	while (true)
	{
		cin >> m;
		if (m == 0)
		{
			break;
		}
		// 初始化
		for (j = 1; j <= n; ++j)
			son[j].clear();
		tme = ans1 = gcnt = n = 0;
		ans2 = 1;
		memset(cp, 0, sizeof(cp));
		memset(dfn, 0, sizeof(dfn));
		memset(low, 0, sizeof(low));
		memset(group, 0, sizeof(group));
		// 读入
		for (j = 1; j <= m; ++j)
		{
			cin >> x >> y;
			son[x].push_back(y);
			son[y].push_back(x);
			n = max(max(n, x), y);
		}
		// solve
		for (j = 1; j <= n; ++j)
		{
			if (!dfn[j])
			{
				root = j;
				tarjan(j, 0);
			}
		}
		for (j = 1; j <= n; ++j)
		{
			if (!cp[j] && !group[j]) // 搜点双连通分量，要先从不是割点的点开始搜
			{
				++gcnt;
				cptot = notcptot = 0;
				dfs(j);
				if (cptot == 0)
				{
					ans1 += 2;
					ans2 *= notcptot * (notcptot - 1) / 2;
				}
				else if (cptot == 1)
				{
					ans1 += 1;
					ans2 *= notcptot;
				}
				// 如果割点数>=2，那么无论是哪个点坍塌，一定可以到达其他点双连通分量
			}
		}
		++cs;
		cout << "Case " << cs << ": " << ans1 << ' ' << ans2 << '\n';
	}
	return 0;
}