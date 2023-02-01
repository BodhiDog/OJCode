#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	const int R = 1e3 + 10;
	int sum[R][R] = {0};
	int n, m, x1, y1, x2, y2;
	cin >> n >> m;
	register int x, y, j;
	for (j = 1; j <= m; ++j)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		++sum[x1][y1];
		--sum[x2 + 1][y1];
		--sum[x1][y2 + 1];
		++sum[x2 + 1][y2 + 1];
		/*图示（'m'表示标记，以标记4×4的方格为例）：
		m···m
		····
		····
		····
		m   m
		其实和一维前缀和类似，都是在起始位置+x，在(结束位置+1)-x*/
	}
	for (x = 1; x <= n; ++x)
	{
		for (y = 1; y <= n; ++y)
		{
			sum[x][y] += sum[x - 1][y] + sum[x][y - 1] - sum[x - 1][y - 1];
			cout << sum[x][y] << ' ';
		}
		cout << "\n";
	}
	return 0;
}
