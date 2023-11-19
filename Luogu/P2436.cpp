// 看不懂，抄的题解，以后再研究吧https://www.luogu.com.cn/blog/mlf/solution-p2436
#include <bits/stdc++.h>
using namespace std;

const int R = 1e3 + 10;
vector<pair<int, int>> v;
int orz[R], qwq[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j, ans1, ans2, t, a;
	bool flag;
	while (cin >> n >> m)
	{
		for (i = 1; i <= n; ++i)
		{
			cin >> orz[i];
		}
		for (i = 1; i <= m; ++i)
		{
			cin >> qwq[i];
		}
		flag = false;
		t = 10 * (m + n) + 1;
		v.clear();
		for (i = 2; i <= t; ++i)
		{
			ans1 = 0, ans2 = INT_MAX;
			for (j = 1; j <= n; ++j)
			{
				a = orz[j] % i;
				if (a == 0)
				{
					ans1 = max(ans1, i);
				}
				else
				{
					ans1 = max(ans1, a);
				}
			}
			for (j = 1; j <= m; ++j)
			{
				a = qwq[j] % i;
				if (a == 0)
				{
					ans2 = min(ans2, i);
				}
				else
				{
					ans2 = min(ans2, a);
				}
			}
			if (ans1 < ans2)
			{
				v.push_back({ans1, i - ans1});
				flag = true;
			}
		}
		if (flag)
		{
			sort(v.begin(), v.end());
			cout << v[0].first << ' ' << v[0].second << '\n';
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
