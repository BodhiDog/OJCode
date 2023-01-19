#include <bits/stdc++.h>
using namespace std;

int f[15][15], a[15]; // f[i][j]代表i位数最后一位取j可以得到的总方案数
inline void nt()
{
	register int i, j, k;
	for (j = 0; j <= 9; ++j)
		f[1][j] = 1;
	for (i = 2; i <= 10; ++i)
		for (j = 0; j <= 9; ++j)
			for (k = j; k <= 9; ++k)
				f[i][j] += f[i - 1][k];
}
int dp(int n)
{
	if (n == 0)
		return 1;
	int k = 0;
	while (n)
	{
		a[++k] = n % 10;
		n /= 10;
	}
	int ans = 0, last = 0;
	register int i, j;
	for (i = k; i >= 1; --i)
	{
		for (j = last; j <= a[i] - 1; ++j) //不贴上界取
			ans += f[i][j];
		if (a[i] < last)
			break;
		last = a[i];
		if (i == 1) //到最后一次也没break掉，说明这个数本身也能满足不递减的性质，所以ans+1
			++ans;
	}
	return ans;
}
int main()
{
	nt();
	int l, r;
	while (cin >> l >> r)
		cout << dp(r) - dp(l - 1) << "\n";
	return 0;
}