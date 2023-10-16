#include <bits/stdc++.h>
using namespace std;

const int R = 510;
struct
{
	int x, y;
	char sex;
} rab[R * R * 2];
char s[R][R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int r, c, n, m, tot = 0, i, j, x, y, res, ans = 0;
	char nowsex;
	cin >> r >> c >> n >> m;
	for (i = 1; i <= r; ++i)
	{
		for (j = 1; j <= c; ++j)
		{
			cin >> s[i][j];
			if (s[i][j] != '.')
			{
				rab[++tot] = {i, j, s[i][j]};
			}
		}
	}
	for (i = 1; i <= tot; ++i)
	{
		res = 0;

		x = rab[i].x;
		y = rab[i].y;
		while (y <= c) // rignt
		{
			if (s[x][y] == '.' || s[x][y] == rab[i].sex)
			{
				++y;
			}
			else
			{
				break;
			}
		}
		res += (y == c + 1);

		x = rab[i].x;
		y = rab[i].y;
		while (x <= r) // down
		{
			if (s[x][y] == '.' || s[x][y] == rab[i].sex)
			{
				++x;
			}
			else
			{
				break;
			}
		}
		res += (x == r + 1);

		x = rab[i].x;
		y = rab[i].y;
		while (y >= 1) // left
		{
			if (s[x][y] == '.' || s[x][y] == rab[i].sex)
			{
				--y;
			}
			else
			{
				break;
			}
		}
		res += (y == 0);

		x = rab[i].x;
		y = rab[i].y;
		while (x >= 1) // up
		{
			if (s[x][y] == '.' || s[x][y] == rab[i].sex)
			{
				--x;
			}
			else
			{
				break;
			}
		}
		res += (x == 0);

		ans += (res >= 3);
	}
	cout << ans << endl;
	return 0;
}
