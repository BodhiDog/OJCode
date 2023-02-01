#include <bits/stdc++.h>
using namespace std;

const int R = 100010;
int a[R], b[R], t[R], num[R], dp[R];
int search(int left, int right, int x)
{
	int mid;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (dp[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return left;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	register int j;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		t[a[j]] = j;
	}
	for (j = 1; j <= n; ++j)
	{
		cin >> b[j];
		num[j] = t[b[j]];
	}
	dp[1] = num[1];
	int len = 1, p, left, right, mid;
	for (j = 2; j <= n; ++j)
	{
		if (dp[len] < num[j])
		{
			++len;
			dp[len] = num[j];
		}
		else
		{
			p = search(1, len, num[j]);
			dp[p] = num[j];
		}
	}
	cout << len;
	return 0;
}