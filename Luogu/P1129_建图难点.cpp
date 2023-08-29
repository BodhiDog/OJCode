// 参考https://www.luogu.com.cn/blog/cmwqf/p1129-ju-zhen-you-hu
#include <bits/stdc++.h>
using namespace std;

// 将行作为L，列作为R
// 发现当交换时，结点编号改变而图的形态不变
const int R = 210;
#define reset(a, val) memset(a, val, sizeof(a))
struct
{
	int to, next, w;
} e[4 * R + R * R * 2];
int head[R * 2], last[R * 2], tot, dep[R * 2], depcnt[R * 2], s, t;
void add(int x, int y, int w)
{
	e[tot] = {y, head[x], w};
	head[x] = tot++;
}
void bfs()
{
	reset(dep, 0);
	reset(depcnt, 0);
	queue<int> q;
	q.push(t);
	depcnt[dep[t] = 1] = 1;
	int x, to, j;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (j = head[x]; ~j; j = e[j].next)
		{
			to = e[j].to;
			if (e[j].w && !dep[to])
			{
				q.push(to);
				dep[to] = dep[x] + 1;
				++depcnt[dep[to]];
			}
		}
	}
}
int dfs(int x, int flow)
{
	if (x == t)
	{
		return flow;
	}
	int to, j, cap, add, res = 0;
	for (j = last[x]; ~j; j = last[x] = e[j].next)
	{
		to = e[j].to;
		cap = e[j].w;
		if (cap > 0 && dep[x] == dep[to] + 1)
		{
			add = dfs(to, min(flow, cap));
			flow -= add;
			res += add;
			e[j].w -= add;
			e[j ^ 1].w += add;
			if (flow == 0)
			{
				return res;
			}
		}
	}
	--depcnt[dep[x]];
	if (depcnt[dep[x]] == 0)
	{
		dep[s] = t + 2;
	}
	++dep[x];
	++depcnt[dep[x]];
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, i, j, a, ans;
	cin >> T;
	while (T--)
	{
		ans = tot = 0;
		reset(head, -1);
		cin >> n;
		s = 0, t = 2 * n + 1;
		for (i = 1; i <= n; ++i)
		{
			add(s, i, 1);
			add(i, s, 0);
		}
		for (i = 1; i <= n; ++i)
		{
			for (j = n + 1; j <= 2 * n; ++j)
			{
				cin >> a;
				if (a)
				{
					add(i, j, 1);
					add(j, i, 0);
				}
			}
		}
		for (j = n + 1; j <= 2 * n; ++j)
		{
			add(j, t, 1);
			add(t, j, 0);
		}
		bfs();
		while (dep[s] <= t + 1)
		{
			copy(head, head + t + 2, last);
			ans += dfs(s, INT_MAX);
		}
		cout << (ans >= n ? "Yes\n" : "No\n");
	}
	return 0;
}
