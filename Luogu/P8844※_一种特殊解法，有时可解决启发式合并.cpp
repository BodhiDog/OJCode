#include <bits/stdc++.h>
using namespace std;

#define lowbit(x) (x & (-x))
const int R = 1e5 + 10;
struct Edge
{
	int to, next;
} e[R * 2];
struct Qry
{
	int dep, id;
};
vector<Qry> qry[R];
int head[R], tot, ans[R], sz[R], t[R], fa[R], n;
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void add(int x)
{
	while (x <= n)
	{
		++t[x];
		x += lowbit(x);
	}
}
int query(int x)
{
	int res = 0;
	while (x)
	{
		res += t[x];
		x -= lowbit(x);
	}
	return res;
}
void dfs(int x, int dep)
{
	for (Qry q : qry[x])
	{
		ans[q.id] = query(n) - query(q.dep - 1); // 当前点在到达之前有多少点是在[dep, n]之内的，暂存下来
	}
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != fa[x])
		{
			fa[to] = x;
			dfs(to, dep + 1);
		}
	}
	add(dep);
	for (Qry q : qry[x])
	{
		ans[q.id] = query(n) - query(q.dep - 1) - ans[q.id]; // 遍历了当前点之后所有之前遍历过的点数-暂存的点数=新加入的点数
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, x, y, dep, qcnt = 0;
	char op;
	cin >> n >> m;
	dep = n + 1; // dep默认深度为n+1，这样所有点的颜色就都是绿色了
	for (i = 1; i < n; ++i)
	{
		cin >> x >> y;
		add(x, y);
		add(y, x);
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> op >> x;
		if (op == '1')
		{
			dep = x;
		}
		else
		{
			qry[x].push_back({dep, ++qcnt});
		}
	}
	dfs(1, 1);
	for (i = 1; i <= qcnt; ++i)
	{
		cout << ans[i] << '\n';
	}
	return 0;
}