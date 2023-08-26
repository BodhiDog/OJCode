#include <bits/stdc++.h>
using namespace std;

const int R = 310;
vector<int> son[R], depk[R];
int fa[R], dep[R], maxdep, sz[R], ans, maxcut[R];
// ans是最多能切多少结点
// maxcut是每一层最多能切多少结点的前缀和（因为前缀和能快速计算出某一深度区间内的数量）
bool b[R];
// b标记结点是否被切
void dfs1(int x, int f)
{
	dep[x] = dep[f] + 1;
	fa[x] = f;
	maxdep = max(maxdep, dep[x]);
	sz[x] = 1;
	depk[dep[x]].push_back(x);
	for (int to : son[x])
	{
		if (to != f)
		{
			dfs1(to, x);
			sz[x] += sz[to];
		}
	}
}
void cut(int x, int f)
{
	b[x] = true;
	for (int to : son[x])
	{
		if (to != f)
		{
			cut(to, x);
		}
	}
}
void restore(int x, int f)
{
	b[x] = false;
	for (int to : son[x])
	{
		if (to != f)
		{
			restore(to, x);
		}
	}
}
void dfs2(int d, int res) // 以深度为主要参数进行dfs，res是已经切了多少结点
{
	ans = max(ans, res);
	if (res + maxcut[maxdep] - maxcut[d - 1] < ans) // 深度区间[d,maxdep]
		return;
	for (int to : depk[d])
	{
		if (!b[to])
		{
			cut(to, fa[to]);
			dfs2(d + 1, res + sz[to]);
			restore(to, fa[to]);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, p, j, x, y;
	cin >> n >> p;
	for (j = 1; j <= p; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
		son[y].push_back(x);
	}
	dfs1(1, 0);
	for (int d = 1; d <= maxdep; ++d)
	{
		for (int to : depk[d])
		{
			maxcut[d] = max(maxcut[d], sz[to]);
		}
		maxcut[d] += maxcut[d - 1];
	}
	dfs2(2, 0); // 1号点不能切
	cout << n - ans << '\n';
	return 0;
}
