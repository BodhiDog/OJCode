#include <bits/stdc++.h>
using namespace std;

#define inrange(x, y) (x >= 1 && x <= n && y >= 1 && y <= n && c[x][y] == 'E')
const int R = 25,
		  xx[] = {0, 1, 0, -1},
		  yy[] = {1, 0, -1, 0}; // right0 down1 left2 up3
struct Node
{
	int x1, y1, x2, y2, to1, to2, step;
};
char c[R][R];
bool b[R][R][R][R][5][5];
int ans, n;
void bfs()
{
	queue<Node> q;
	q.push({n, 1, n, 1, 0, 3, 0});
	Node from;
	int x1, y1, x2, y2, to1, to2, step, tx1, ty1, tx2, ty2;
	while (!q.empty())
	{
		from = q.front();
		q.pop();
		x1 = from.x1, y1 = from.y1;
		x2 = from.x2, y2 = from.y2;
		to1 = from.to1, to2 = from.to2;
		step = from.step;
		if (!b[x1][y1][x2][y2][to1][to2])
		{
			b[x1][y1][x2][y2][to1][to2] = true;
			if (x1 == 1 && y1 == n && x2 == 1 && y2 == n)
			{
				ans = step;
				return;
			}
			// turn left
			q.push({x1, y1, x2, y2, (to1 + 3) % 4, (to2 + 3) % 4, step + 1});

			// turn right
			q.push({x1, y1, x2, y2, (to1 + 1) % 4, (to2 + 1) % 4, step + 1});

			// go ahead
			tx1 = x1 + xx[to1], ty1 = y1 + yy[to1];
			tx2 = x2 + xx[to2], ty2 = y2 + yy[to2];
			if (!inrange(tx1, ty1) || (x1 == 1 && y1 == n)) // 一头牛已经到达了终点，它就不用动了
			{
				tx1 = x1, ty1 = y1;
			}
			if (!inrange(tx2, ty2) || (x2 == 1 && y2 == n))
			{
				tx2 = x2, ty2 = y2;
			}
			q.push({tx1, ty1, tx2, ty2, to1, to2, step + 1});
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			cin >> c[i][j];
		}
	}
	bfs();
	cout << ans << '\n';
	return 0;
}
