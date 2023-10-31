#include <bits/stdc++.h>
using namespace std;

int p[10][10], cur[10];
bool check(int x)
{
	int i, j, k, cnt = 0;
	bool flag;
	// 先找转1个圈
	for (i = 1; i <= 5; ++i)
	{
		if (cur[i] != p[x][i])
		{
			++cnt;
		}
	}
	if (cnt == 1) // 是转一个圈就能达到的情况
	{
		return true;
	}
	// 再找转2个圈
	cnt = 0;
	for (i = 1; i <= 4; ++i)
	{
		if (cur[i] != p[x][i] && cur[i + 1] != p[x][i + 1])
		{
			for (k = 1; k <= 9; ++k)
			{
				if ((cur[i] + k) % 10 == p[x][i] && (cur[i + 1] + k) % 10 == p[x][i + 1])
				{
					flag = true;
					for (j = 1; j <= 5; ++j)
					{
						if (j == i || j == i + 1)
						{
							continue;
						}
						if (cur[j] != p[x][j])
						{
							flag = false;
						}
					}
					cnt += flag;
				}
			}
		}
	}
	if (cnt == 1)
	{
		return true;
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i, j, a, b, c, d, e, ans = 0;
	bool flag;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= 5; ++j)
		{
			cin >> p[i][j];
		}
	}
	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			for (c = 0; c <= 9; ++c)
			{
				for (d = 0; d <= 9; ++d)
				{
					for(e = 0; e <= 9; ++e)
					{
						cur[1] = a;
						cur[2] = b;
						cur[3] = c;
						cur[4] = d;
						cur[5] = e;
						flag = true;
						for (i = 1; i <= n; ++i)
						{
							if (!check(i))
							{
								flag = false;
								break;
							}
						}
						ans += flag;
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
