#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e4 + 10, M = 5e4 + 10;
struct Edge
{
	int to, next;
	ll c;
} e[M * 2];
int head[M * 2], tot, n;
int blood, f[N];
ll dis[N];
bool b[N];
void add(int x, int y, ll c)
{
	e[++tot] = {
		.to = y,
		.next = head[x],
		.c = c};
	head[x] = tot;
}
bool check(int f1) // SPFA
{
	if (b[1] > f1)
		return false;
	fill(dis, dis + n + 1, int(1e9));
	memset(b, 0, sizeof(b));
	queue<int> q;
	dis[1] = 0;
	q.push(1);
	b[1] = true;
	int x, to, i;
	while (!q.empty())
	{
		x = q.front();
		b[x] = false;
		q.pop();
		for (i = head[x]; i; i = e[i].next)
		{
			to = e[i].to;
			if (dis[x] + e[i].c < dis[to])
			{
				dis[to] = dis[x] + e[i].c;
				if (!b[to] && f[to] <= f1) // 费用<=当前约束的最大费用时才扩展
				{
					q.push(to);
					b[to] = true;
				}
			}
		}
	}
	return dis[n] <= blood; // dis血量
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, j, x, y, r = 0;
	ll len, l;
	cin >> n >> m >> blood;
	for (j = 1; j <= n; ++j)
	{
		cin >> f[j];
		r = max(r, f[j]); // 至多这些钱
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> len;
		if (x == y)
			continue;
		add(x, y, len);
		add(y, x, len);
	}
	if (!check(int(1e9)))
	{
		cout << "AFK\n";
		return 0;
	}
	l = max(f[1], f[n]); // 至少要这些钱
	ll mid, c = 0;
	while (l <= r) // 二分费用
	{
		mid = (l + r) >> 1;
		if (check(mid)) // 二分的时候传的是mid！！！
			r = mid - 1;
		else
			l = mid + 1;
	}
	cout << l << '\n';
	return 0;
}
