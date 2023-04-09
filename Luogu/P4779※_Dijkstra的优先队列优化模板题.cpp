#include <bits/stdc++.h>
using namespace std;

struct Edge
{
	int to, len, next;
} edge[200010];
struct Node
{
	int pos, dis;
	bool operator<(const Node &a) const
	{
		return dis > a.dis;
	}
};
int pre[100010], d[100010];
bool b[100010];
int tot;
int n, m, s;
void add(int x, int y, int len)
{
	++tot;
	edge[tot].to = y;
	edge[tot].len = len;
	edge[tot].next = pre[x];
	pre[x] = tot;
}
void dijkstra()
{
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	priority_queue<Node> q;
	q.push({s, 0});
	int i, j, st, to;
	while (!q.empty())
	{
		st = q.top().pos;
		if (!b[st])
		{
			b[st] = true;
			for (j = pre[st]; j != 0; j = edge[j].next)
			{
				to = edge[j].to;
				if (d[st] + edge[j].len < d[to])
				{
					d[to] = d[st] + edge[j].len;
					if (!b[to])
					{
						q.push({to, d[to]});
					}
				}
			}
		}
		q.pop();
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m >> s;
	int q, x, y, len;
	for (q = 1; q <= m; ++q)
	{
		cin >> x >> y >> len;
		add(x, y, len);
	}
	dijkstra();
	for (q = 1; q <= n; ++q)
	{
		cout << d[q] << ' ';
	}
	return 0;
}

// 2023.4.9重写版
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 2e5 + 10;
struct Edge
{
	int to, len, next;
} e[M];
struct Q
{
	int x;
	unsigned int len;
	bool operator<(const Q &a) const { return len > a.len; }
};
int head[M], tot;
unsigned int dis[N];
bool b[N];
void add(int x, int y, int l)
{
	e[tot] = {
		.to = y,
		.len = l,
		.next = head[x]};
	head[x] = tot;
	++tot;
}
void dijkstra(int s)
{
	memset(dis, 0x3f, sizeof(dis));
	dis[s] = 0;
	priority_queue<Q> q;
	q.push({s, 0});
	int j, x, to, len;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x]) // 测试发现只能将这句话写在外面
		{
			b[x] = true;
			for (j = head[x]; ~j; j = e[j].next)
			{
				to = e[j].to, len = e[j].len;
				if (dis[x] + len < dis[to])
				{
					dis[to] = dis[x] + (unsigned)len;
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
	int j, n, m, s, x, y, l;
	cin >> n >> m >> s;
	memset(head, -1, sizeof(head));
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> l;
		add(x, y, l);
	}
	dijkstra(s);
	for (j = 1; j <= n; ++j)
		cout << dis[j] << ' ';
	return 0;
}
