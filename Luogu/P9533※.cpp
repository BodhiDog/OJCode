#include <bits/stdc++.h>
using namespace std;
/*
本题性质：区间反转后结果数量不变
求异或区间为0的部分：用前缀和统计的思想，相当于把O(n^2)的求法中枚举左端点的部分替换成了cnt[x]，因此可以快速计算出贡献
*/
const int R = 1e5 + 10;
int cnt[1 << 21];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, a, i, s = 0;
	long long ans = 0;
	cin >> n;
	cnt[0] = 1;
	for (i = 1; i <= n; ++i)
	{
		cin >> a;
		s ^= a;
		ans += cnt[s];
		++cnt[s];
	}
	cout << ans << '\n';
	return 0;
}
