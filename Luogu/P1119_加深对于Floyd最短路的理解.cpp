#include <bits/stdc++.h>
using namespace std;

const int N = 210;
int t[N], e[N][N], f[N][N], n;
bool b[N];
void update(int k)
{
	int i, j;
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
			f[i][j] = f[j][i] = min(f[i][k] + f[k][j], f[i][j]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, x, y, w, q, j, tm, now = 0;
	cin >> n >> m;
	for (j = 0; j < n; ++j)
		cin >> t[j];
	memset(f, 0x3f, sizeof(f));
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> w;
		f[x][y] = f[y][x] = w;
	}
	for (j = 0; j < n; ++j)
		f[j][j] = 0;
	cin >> q;
	while (q--)
	{
		cin >> x >> y >> tm;
		while (t[now] <= tm && now <= n)
		{
			update(now);
			++now;
		}
		if (t[x] > tm || t[y] > tm || f[x][y] == 0x3f3f3f3f)
			cout << "-1\n";
		else
			cout << f[x][y] << '\n';
	}
	return 0;
}
