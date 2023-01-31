#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	/*dp[i]=max(s[i]-s[j]) (j>=i-m+1-1)
	由于s[i]是常量，所以可优化为dp[i]=s[i]-min(s[j]) (j>=i-m+1-1)
	单调队列取的是队头元素，所以只要维护队列中队头元素最小，即单调递增即可*/
	const int R = 2e5 + 10;
	int s[R] = {0};
	int n, ans = INT_MIN;
	cin >> n;
	register int j;
	for (j = 1; j <= n; ++j)
	{
		cin >> s[j];
		s[j] += s[j - 1];
	}
	deque<int> q;
	q.push_back(0);
	for (j = 1; j <= n; ++j)
	{
		if (!q.empty() && q.front() < j - n) // 有j-m+1个元素，但是因为前缀和求的时候左端点要-1，所以+1-1抵消，就是j-m
			q.pop_front();
		ans = max(ans, s[j] - s[q.front()]);
		while (!q.empty() && s[q.back()] > s[j])
			q.pop_back();
		q.push_back(j);
	}
	cout << ans;
	return 0;
}
