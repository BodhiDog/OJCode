#include <bits/stdc++.h>
using namespace std;

const int R = 2e6 + 10;
int cnt[10010], col[R]; // cnt记录（游客1）左侧的当前颜色的旅馆的个数 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, p, i, j, price, last = 1;
	long long ans = 0;
	cin >> n >> k >> p;
	for (i = 1; i <= n; ++i)
	{
		cin >> col[i] >> price;
		if (price <= p) // 可以扩展答案
		{
			for (j = last; j <= i; ++j)
			{
				++cnt[col[j]];
			}
			last = i + 1; // j枚举的是游客2的旅馆，因不能住在同一旅馆，所以是[last + 1, i]
			ans += cnt[col[i]] - 1; // 不能住在同一旅馆
		}
		else
		{
			ans += cnt[col[i]];
		}
	}
	cout << ans << '\n';
	return 0;
}