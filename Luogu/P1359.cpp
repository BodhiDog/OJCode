#include <bits/stdc++.h>
using namespace std;

const int R = 210;
using ll = long long;
struct Edge
{
	int to, next;
	ll len;
} e[R * R]; // 注意大小！！！
int head[R * R], tot;
ll dis[R]; // 不知为何开要ll。。。
bool b[R];
void add(int x, int y, ll l)
{
	e[++tot] = {.to = y, .next = head[x], .len = l};
	head[x] = tot;
}
struct Q
{
	int x;
	ll len;
	bool operator<(const Q &s) const { return len > s.len; }
};
void dijkstra()
{
	priority_queue<Q> q;
	memset(dis, 0x3f, sizeof(dis));
	q.push({1, 0});
	dis[1] = 0;
	int to, len, x;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (int i = head[x]; i; i = e[i].next)
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
	int n, i, j;
	ll l;
	cin >> n;
	for (i = 1; i < n; ++i)
	{
		for (j = i + 1; j <= n; ++j)
		{
			cin >> l;
			add(i, j, l);
		}
	}
	dijkstra();
	cout << dis[n] << '\n';
	return 0;
}
