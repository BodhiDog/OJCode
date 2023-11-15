#include <bits/stdc++.h>
using namespace std;

/*
https://www.luogu.com.cn/blog/520520qq/p9460-zhong-shuo-i-ti-xie
采用贪心
每次取出出现次数最大的数，将其-1（相当于进行1次操作），如此操作k次（k次操作）
统计答案时，如果这个数字出现的次数+k>=q.top()，就有可能成为区间众数
*/
using ll = long long;
const int R = 1e6 + 10;
map<ll, ll> cnt;
ll a[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, i, x, ans = 0;
	cin >> n >> k;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		++cnt[a[i]];
	}
	priority_queue<int> q;
	for (auto it : cnt)
	{
		q.push(it.second);
	}
	for (i = 1; i <= k; ++i)
	{
		x = q.top();
		q.pop();
		q.push(x - 1);
	}
	if (k >= q.top())
	{
		cout << "pigstd\n";
		return 0;
	}
	for (auto it : cnt)
	{
		if (it.second + k >= q.top())
		{
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}
