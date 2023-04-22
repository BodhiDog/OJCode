#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
struct Edge
{
	int to, ext, len;
} e[N * 4]; // m=2n，存无向边还要*2，也就是4n
int head[N * 4], tot, dis[N];
bool b[N];
void add(int x, int y, int l)
{
	e[tot] = {.to = y,
			  .ext = head[x],
			  .len = l};
	head[x] = tot;
	++tot;
}
void bfs(int x)
{
	queue<int> q;
	q.push(x);
	int j, to, len;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (j = head[x]; ~j; j = e[j].ext)
			{
				to = e[j].to, len = e[j].len;
				if (!b[to])
				{
					dis[to] = dis[x] ^ len;
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
	memset(head, -1, sizeof(head));
	int n, m, Q, j, x, y, l;
	cin >> n >> m >> Q;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> l;
		add(x, y, l), add(y, x, l);
	}
	for (j = 1; j <= n; ++j)
		if (!b[j])
			bfs(j);
	while (Q--)
	{
		cin >> x >> y;
		cout << (dis[x] ^ dis[y]) << '\n';
	}
	return 0;
}
