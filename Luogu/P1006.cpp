#include <bits/stdc++.h>
using namespace std;

const int N = 55, INF = -0x3f3f3f3f;
struct Edge
{
	int to, nxt, cap, cost;
} e[N * N * 3 * 2];
int head[N * N * 2], tot, a[N][N], pre[N * N * 2], dis[N * N * 2], s, t, flow[N * N * 2];
bool b[N * N * 2];
void add(int x, int y, int cap, int cost)
{
	e[tot] = {y, head[x], cap, cost};
	head[x] = tot++;
}
bool spfa()
{
	fill(dis, dis + N * N * 2, INF);
	dis[s] = 0;
	queue<int> q;
	q.push(s);
	flow[s] = INT_MAX;
	b[s] = true;
	int x, i, y;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		b[x] = false;
		for (i = head[x]; ~i; i = e[i].nxt)
		{
			y = e[i].to;
			if (e[i].cap && dis[x] + e[i].cost > dis[y])
			{
				dis[y] = dis[x] + e[i].cost;
				flow[y] = min(flow[x], e[i].cap);
				pre[y] = i;
				if (!b[y])
				{
					b[y] = true;
					q.push(y);
				}
			}
		}
	}
	return dis[t] == INF ? false : true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j, x, ans = 0, delta, num;
	cin >> n >> m;
	memset(head, -1, sizeof(head));
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}
	}
	s = 1, t = m * n * 2;
	delta = m * n;
	for (i = 1; i <= n; ++i) // 建图方法详见https://gitee.com/BodhiDog/OJCode/blob/master/Other/%E6%B4%9B%E8%B0%B7P1006.png（注意题目中要求只能向右/下走）
	{
		for (j = 1; j <= m; ++j)
		{
			// 右下角的三条边归这个点管
			num = (i - 1) * m + j;
			if (i == 1 && j == 1 || i == n && j == m) // 这两个点流量为2
			{
				add(num, num + delta, 2, 0);
				add(num + delta, num, 0, 0);
			}
			else
			{
				add(num, num + delta, 1, a[i][j]);
				add(num + delta, num, 0, -a[i][j]); // 每个点必连右下角的中转点
			}
			if (i < n) // 如果不是最后一行，还要把右下角的点和下方的点连上
			{
				add(num + delta, num + m, 1, 0);
				add(num + m, num + delta, 0, 0);
			}
			if (j < m) // 如果不是最后一列，还要把右下角的点和右侧的点连上
			{
				add(num + delta, num + 1, 1, 0);
				add(num + 1, num + delta, 0, 0);
			}
		}
	}
	while (spfa())
	{
		x = t;
		ans += dis[t] * flow[t];
		while (x != s)
		{
			i = pre[x];
			e[i].cap -= flow[t];
			e[i ^ 1].cap += flow[t];
			x = e[i ^ 1].to;
		}
	}
	cout << ans << flush;
	return 0;
}
