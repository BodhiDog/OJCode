#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 510;
struct Que
{
	int x;
	ll d;
	bool operator<(const Que &oth) const
	{
		return d > oth.d;
	}
};
struct
{
	int to, next;
	ll len;
} e[4 * N * (N + 1)];
int head[N * N], tot, n, s, t;
ll dis[N * N];
bool b[N * N];
void add(int x, int y, ll d)
{
	e[++tot] = {y, head[x], d};
	head[x] = tot;
}
void dijkstra()
{
	memset(dis, 0x3f, sizeof(dis));
	dis[s] = 0;
	priority_queue<Que> q;
	q.push({s, 0});
	int x, to, j;
	ll len;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (j = head[x]; j; j = e[j].next)
			{
				to = e[j].to, len = e[j].len;
				if (dis[x] + len < dis[to])
				{
					dis[to] = dis[x] + len;
					q.push({to, dis[to]});
				}
			}
		}
	}
}
inline int pos(int x, int y)
{
	return (x - 1) * n + y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j, x, y, val;
	cin >> n;
	s = 0;
	t = n * n + 1;
	// 将图顺时针旋转90°
	for (i = 1; i <= n + 1; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			cin >> val;
			if (i == 1)
			{
				add(s, pos(i, j), val);
			}
			else if (i == n + 1)
			{
				add(pos(i - 1, j), t, val);
			}
			else
			{
				add(pos(i - 1, j), pos(i, j), val);
			}
		}
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n + 1; ++j)
		{
			cin >> val;
			if (j == 1)
			{
				add(pos(i, j), t, val);
			}
			else if (j == n + 1)
			{
				add(s, pos(i, j - 1), val);
			}
			else
			{
				add(pos(i, j), pos(i, j - 1), val);
			}
		}
	}
	for (i = 1; i <= n + 1; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			cin >> val;
			if (i == 1)
			{
				add(pos(i, j), s, val);
			}
			else if (i == n + 1)
			{
				add(t, pos(i - 1, j), val);
			}
			else
			{
				add(pos(i, j), pos(i - 1, j), val);
			}
		}
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n + 1; ++j)
		{
			cin >> val;
			if (j == 1)
			{
				add(t, pos(i, j), val);
			}
			else if (j == n + 1)
			{
				add(pos(i, j), s, val);
			}
			else
			{
				add(pos(i, j - 1), pos(i, j), val);
			}
		}
	}
	dijkstra();
	cout << dis[t] << '\n';
	return 0;
}
