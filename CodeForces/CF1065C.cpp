#include <bits/stdc++.h>
using namespace std;

// 把题目中的图顺时针翻转
// 从最上往下循环
using ll = long long;
const int N = 2e5 + 10;
int h[N];
ll sum[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, n, maxh = -1, minh = INT_MAX, i, ans = 0, tot = 0;
	ll k;
	cin >> n >> k;
	for (i = 1; i <= n; ++i)
	{
		cin >> a;
		maxh = max(maxh, a);
		minh = min(minh, a);
		++h[a]; // 相当于在块的最上端打标记
	}
	for (i = maxh; i >= minh; --i)
	{
		sum[i] = sum[i + 1] + h[i]; // sum[i]表示第i层能切多少块
	}
	for (i = maxh; i >= minh; --i)
	{
		if (tot + sum[i] > k)
		{
			++ans;
			tot = 0;
		}
		tot += sum[i];
	}
	if (tot > n) // 由于是循环到最小高度，最后一层也会被计入tot。而如果k很大，且剩余的块数大于n，那么这时候虽然循环结束，但是块还没切完，所以要特判
	{
		++ans;
	}
	cout << ans << flush;
	return 0;
}
