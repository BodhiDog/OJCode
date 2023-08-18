// 建图方式：https://gitee.com/BodhiDog/OJCode/blob/master/Other/%E6%B4%9B%E8%B0%B7P4001/%E5%9B%BE.jpg
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e3 + 10;
struct
{
	int to, next;
	ll len;
} e[3 * R * R * 2];
struct Que
{
	int x;
	ll d;
	bool operator<(const Que &oth) const { return d > oth.d; }
};
int head[R * R * 2], tot, s, t;
ll dis[R * R * 2];
bool b[R * R * 2];
void add(int x, int y, int l)
{
	e[++tot] = {y, head[x], l};
	head[x] = tot;
}
void dijkstra()
{
	priority_queue<Que> q;
	memset(dis, 0x3f, sizeof(dis));
	q.push({0, 0});
	dis[0] = 0;
	int x, i, to;
	ll len;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (i = head[x]; i; i = e[i].next)
			{
				to = e[i].to;
				len = e[i].len;
				if (dis[x] + len < dis[to])
				{
					dis[to] = dis[x] + len;
					q.push({to, dis[to]});
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
	int n, m, x, y, i, j;
	ll l;
	cin >> n >> m;
	s = 0, t = 2 * (m - 1) * (n - 1) + 1;
	// 横
	x = 2, y = 1;
	for (j = 1; j <= m - 1; ++j)
	{
		cin >> l;
		add(s, x, l);
		add(x, s, l);
		x += 2;
	}
	for (i = 2; i <= n - 1; ++i)
	{
		for (j = 1; j <= m - 1; ++j)
		{
			cin >> l;
			add(x, y, l);
			add(y, x, l);
			x += 2, y += 2;
		}
	}
	for (j = 1; j <= m - 1; ++j)
	{
		cin >> l;
		add(y, t, l);
		add(t, y, l);
		y += 2;
	}
	// 竖
	x = 1, y = 2;
	for (i = 1; i <= n - 1; ++i)
	{
		cin >> l;
		add(t, x, l);
		add(x, t, l);
		x += 2;
		for (j = 2; j <= m - 1; ++j)
		{
			cin >> l;
			add(x, y, l);
			add(y, x, l);
			x += 2, y += 2;
		}
		cin >> l;
		add(y, s, l);
		add(s, y, l);
		y += 2;
	}
	// 斜
	x = 1, y = 2;
	for (i = 1; i <= n - 1; ++i)
	{
		for (j = 1; j <= m - 1; ++j)
		{
			cin >> l;
			add(x, y, l);
			add(y, x, l);
			x += 2, y += 2;
		}
	}
	dijkstra();
	cout << dis[t] << '\n';
	return 0;
}
