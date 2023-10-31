// 照着题解抄的https://www.luogu.com.cn/blog/user8682/solution-p1069
#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
vector<int> pr;
bool ispr[R];
int ppr[R], cpr[R];
void mkpr(int n)
{
	memset(ispr, 1, sizeof(ispr));
	ispr[1] = false;
	int i, j;
	for (i = 2; i <= n; ++i)
	{
		if (ispr[i])
		{
			pr.push_back(i);
			for (j = i + i; j <= n; j += i)
			{
				ispr[j] = false;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	pr.push_back(1);
	mkpr(R - 1);
	int n, m1, m2, i, j, cell, cur, ans = INT_MAX;
	bool flag;
	cin >> n >> m1 >> m2;
	for (i = 1; m1 != 1; ++i)
	{
		while (m1 % pr[i] == 0)
		{
			ppr[i] += m2;
			m1 /= pr[i];
		}
	}
	for (i = 1; i <= n; ++i)
	{
		cin >> cell;
		cur = 0;
		flag = true;
		memset(cpr, 0, sizeof(cpr));
		for (j = 1; j < pr.size(); ++j)
		{
			while (cell % pr[j] == 0)
			{
				++cpr[j];
				cell /= pr[j];
			}
		}
		for (j = 1; j < pr.size(); ++j)
		{
			if (ppr[j] != 0 && cpr[j] == 0)
			{
				flag = false;
			}
			if (ppr[j] != 0 && cpr[j] != 0)
			{
				if (ppr[j] % cpr[j] == 0)
				{
					cur = max(cur, ppr[j] / cpr[j]);
				}
				else
				{
					cur = max(cur, ppr[j] / cpr[j] + 1);
				}
			}
		}
		if (flag)
		{
			ans = min(ans, cur);
		}
	}
	cout << (ans == INT_MAX ? -1 : ans) << '\n';
	return 0;
}
