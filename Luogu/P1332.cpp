#include <bits/stdc++.h>
using namespace std;

const int R = 510, M = 1e5 + 10,
		  xx[4] = {0, 1, 0, -1},
		  yy[4] = {1, 0, -1, 0};
struct Pos
{
	int x, y;
};
int mp[R][R], b[M][2];
queue<Pos> q;
#define inmap(x, y) (x >= 1 && x <= n && y >= 1 && y <= m)
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, a, bb, x, y;
	cin >> n >> m >> a >> bb;
	int j;
	memset(mp, 0x3f, sizeof(mp));
	for (j = 1; j <= a; ++j)
	{
		cin >> x >> y;
		mp[x][y] = 0;
		q.push({x, y});
	}
	for (j = 1; j <= bb; ++j)
	{
		cin >> b[j][0] >> b[j][1];
	}
	int fx, fy, tx, ty;
	while (!q.empty())
	{
		fx = q.front().x, fy = q.front().y;
		q.pop();
		for (j = 0; j < 4; ++j)
		{
			tx = fx + xx[j], ty = fy + yy[j];
			if (inmap(tx, ty) && mp[tx][ty] > mp[fx][fy] + 1)
			{
				q.push({tx, ty});
				mp[tx][ty] = mp[fx][fy] + 1;
			}
		}
	}
	for (j = 1; j <= bb; ++j)
		cout << mp[b[j][0]][b[j][1]] << '\n';
	return 0;
}
