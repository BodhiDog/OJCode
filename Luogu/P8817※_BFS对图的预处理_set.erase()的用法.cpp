#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 2.5e3 + 10, M = 1e4 + 10;
struct
{
	int to, next;
} e[M * 2];
struct St
{
	int x;
	ll w;
	bool operator<(const St &oth) const
	{
		return w < oth.w;
	}
};
set<St> trs[N]; // 从b、c可到达的点a、d
int head[N], tot, k, dis[N][N];
ll w[N];
bool b[N];
void add(int u, int v)
{
	e[++tot] = {v, head[u]};
	head[u] = tot;
}
void bfs(int s)
{
	memset(dis[s], 0x3f, sizeof(dis[s]));
	memset(b, 0, sizeof(b));
	queue<int> q;
	q.push(s);
	dis[s][s] = 0;
	int x, to, j;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (j = head[x]; j; j = e[j].next)
			{
				to = e[j].to;
				if (dis[s][x] + 1 < dis[s][to])
				{
					dis[s][to] = dis[s][x] + 1;
					if (dis[s][to] <= k)
						q.push(to);
				}
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j, x, y, b, c;
	cin >> n >> m >> k;
	for (i = 2; i <= n; ++i)
	{
		cin >> w[i];
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y;
		add(x, y), add(y, x);
	}
	for (i = 1; i <= n; ++i) // 处理点能否到达
	{
		bfs(i);
	}
	for (i = 2; i <= n; ++i) // 将所有能到达的点放到set中
	{
		for (j = 2; j <= n; ++j)
		{
			if (i != j && dis[1][j] <= k + 1 && dis[j][i] <= k + 1)
			{
				trs[i].insert({.x = j, .w = w[j]});
				if (trs[i].size() >= 4) // 剪枝，无需存储更多元素了。钦定这一个点是必选的，那么只需要知道其他的3个点即可
				{
					trs[i].erase(trs[i].begin()); // 删除最小的一个元素
				}
			}
		}
	}
	ll ans = 0;
	for (b = 2; b <= n; ++b) // 枚举中间的两个景点
	{
		for (c = 2; c <= n; ++c)
		{
			if (b == c || dis[b][c] > k + 1)
				continue;
			for (St a : trs[b])
			{
				if (a.x == b || a.x == c)
					continue;
				for (St d : trs[c])
				{
					if (d.x != a.x && d.x != b && d.x != c)
					{
						ans = max(ans, w[a.x] + w[b] + w[c] + w[d.x]);
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
