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