#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
char c[N];
int solve(int l, int r, char a)
{
	if (l == r)
	{
		return c[l] != a;
	}
	int mid = (l + r) >> 1, resl = 0, resr = 0, i; // resl把左边变成c-good，右边变成(c+1)-good；resr相反
	for (i = l; i <= mid; ++i)
	{
		resl += (c[i] != a); // 如果左边要变成c-good就需要全部替换
	}
	for (i = mid + 1; i <= r; ++i)
	{
		resr += (c[i] != a);
	}
	resl += solve(mid + 1, r, a + 1); // 还要加上右边变成(c+1)-good的答案
	resr += solve(l, mid, a + 1);
	return min(resl, resr);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, i;
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (i = 1; i <= n; ++i)
		{
			cin >> c[i];
		}
		cout << solve(1, n, 'a') << '\n';
	}
	return 0;
}
