#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10, M = 2e3 + 10;
int a[N], cnt[M];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	pair<int, int> ans;
	int n, m, j, res = INT_MAX, l, r, tot = 0;
	cin >> n >> m;
	ans.first = 1, ans.second = n;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	for (l = r = 1; r <= n; ++r)
	{
		++cnt[a[r]];
		if (cnt[a[r]] == 1)
		{
			++tot;
		}
		while (cnt[a[l]] > 1)
		{
			--cnt[a[l]];
			++l;
		}
		if (tot == m && r - l + 1 < res)
		{
			res = r - l + 1;
			ans.first = l, ans.second = r;
		}
	}
	cout << ans.first << ' ' << ans.second << '\n';
	return 0;
}
