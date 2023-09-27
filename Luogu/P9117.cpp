#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Color
{
	int id, col;
} row[R], col[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, m, q, x, c, i, j, op;
	cin >> T;
	while (T--)
	{
		cin >> n >> m >> q;
		for (i = 1; i <= n; ++i)
		{
			row[i] = {0, 0};
		}
		for (j = 1; j <= m; ++j)
		{
			col[j] = {0, 0};
		}
		for (i = 1; i <= q; ++i)
		{
			cin >> op >> x >> c;
			op == 0 ? row[x] = {i, c} : col[x] = {i, c};
		}
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= m; ++j)
			{
				if (row[i].id == 0 && col[j].id == 0)
				{
					cout << "0 ";
				}
				else
				{
					cout << (row[i].id > col[j].id ? row[i].col : col[j].col) << ' ';
				}
			}
			cout << '\n';
		}
	}
	return 0;
}