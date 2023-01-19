#include <bits/stdc++.h>
using namespace std;

int a[70];
bool b[70];
int n, maxlen, len;
bool dfs(int tot, int sum, int now)
{
	if (tot * len == maxlen)
		return true;
	if (sum == len)
		return dfs(tot + 1, 0, 1);
	int last = 0;
	for (int j = now; j <= n; ++j)
	{
		if (b[j] || sum + a[j] > len || a[j] == last)
			continue;
		b[j] = true;
		if (dfs(tot, sum + a[j], j + 1))
			return true;
		b[j] = false;
		last = a[j];					   // 匹配失败
		if (sum == 0 || sum + a[j] == len) // 注意这里的剪枝
			return false;
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int j;
	while (true)
	{
		memset(b, 0, sizeof(b));
		memset(a, 0, sizeof(a));
		maxlen = 0;
		cin >> n;
		if (n == 0)
			break;
		for (j = 1; j <= n; ++j)
		{
			cin >> a[j];
			if (a[j] > 50)
				a[j] = 0;
			maxlen += a[j];
		}
		sort(a + 1, a + n + 1, greater<int>());
		for (len = a[n]; len <= maxlen; ++len)
		{
			if (maxlen % len)
				continue;
			if (dfs(0, 0, 1))
				break;
		}
		cout << len << '\n';
	}
	return 0;
}