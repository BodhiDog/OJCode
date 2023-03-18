#include <bits/stdc++.h>
using namespace std;

const int R = 2e6 + 10, MOD = 100003, N = 1e6 + 10;
struct Edge
{
	int to, next;
} e[R * 2];
int head[R * 2], tot, dis[N], cnt[N];
bool b[N];
void add(int x, int y)
{
	e[++tot] = {
		.to = y,
		.next = head[x]};
	head[x] = tot;
}
void bfs()
{
	queue<int> q;
	memset(dis, 0x3f, sizeof(dis));
	dis[1] = 0;
	cnt[1] = 1;
	b[1] = true;
	q.push(1);
	int from, to;
	while (!q.empty())
	{
		from = q.front();
		q.pop();
		for (int i = head[from]; ~i; i = e[i].next)
		{
			to = e[i].to;
			if (!b[to])
			{
				b[to] = true;
				dis[to] = dis[from] + 1;
				q.push(to);
			}
			if (dis[to] == dis[from] + 1)
				cnt[to] = (cnt[from] + cnt[to]) % MOD;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, m, x, y;
	cin >> n >> m;
	int j;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		add(x, y), add(y, x);
	}
	bfs();
	for (j = 1; j <= n; ++j)
		cout << cnt[j] % MOD << '\n';
	return 0;
}
