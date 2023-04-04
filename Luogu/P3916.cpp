// 逆向思维：反向建边
#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 10, N = 1e5 + 10;
struct Edge
{
	int to, next;
} e[M];
int head[M], tot, ans[N];
bool b[N];
void add(int x, int y)
{
	e[tot] = {
		.to = y,
		.next = head[x]};
	head[x] = tot;
	++tot;
}
void bfs(int s, int num)
{
	ans[s] = num;
	queue<int> q;
	q.push(s);
	b[s] = true;
	int from, to, j;
	while (!q.empty())
	{
		from = q.front();
		q.pop();
		for (j = head[from]; ~j; j = e[j].next)
		{
			to = e[j].to;
			if (!b[to])
			{
				q.push(to);
				b[to] = true;
				ans[to] = num;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int j, n, m, x, y;
	cin >> n >> m;
	memset(head, -1, sizeof(head));
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		add(y, x);
	}
	for (j = 1; j <= n; ++j)
		ans[j] = j; // 默认最大点为自己
	for (j = n; j >= 1; --j)
		if (!b[j])
			bfs(j, j);
	for (j = 1; j <= n; ++j)
		cout << ans[j] << ' ';
	return 0;
}
