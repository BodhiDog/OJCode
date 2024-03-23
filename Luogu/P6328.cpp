#include <bits/stdc++.h>
using namespace std;

const int R = 1e3 + 10;
vector<int> son[R];
bitset<R> s[R][R]; // s[u][d]表示以u为起点，d步之内能到达的点集
int dis[R];
void bfs(int s)
{
	queue<int> q;
	fill(dis, dis + R, R);
	dis[s] = 0;
	q.push(s);
	int x;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (int to : son[x])
		{
			if (dis[x] + 1 < dis[to])
			{
				dis[to] = dis[x] + 1;
				q.push(to);
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, q, x, y, i, a;
	cin >> n >> m >> q;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y;
		son[x].push_back(y);
		son[y].push_back(x);
	}
	for (x = 1; x <= n; ++x)
	{
		bfs(x);
		for (i = 1; i <= n; ++i)
		{
			if (dis[i] < R)
			{
				s[x][dis[i]][i] = true;
			}
		}
		for (i = 1; i <= n; ++i)
		{
			s[x][i] |= s[x][i - 1]; // 能i-1步到达的，i步一定能到
		}
	}
	bitset<R> res;
	while (q--)
	{
		cin >> a;
		res.reset();
		while (a--)
		{
			cin >> x >> y;
			res |= s[x][y];
		}
		cout << res.count() << '\n';
	}
	return 0;
}
