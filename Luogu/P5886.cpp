#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
int cnt[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, p, i, j, k, x, ans1 = 0;
	cin >> n >> m >> p;
	for (i = 1; i <= n; ++i)
	{
		cin >> k;
		for (j = 1; j <= k; ++j)
		{
			cin >> x;
			++cnt[x];
		}
	}
	for (i = 1; i <= m; ++i)
		if (cnt[i] == p)
			++ans1;
	cout << ans1 << '\n';
	for (i = 1; i <= m; ++i)
		if (cnt[i] == p)
			cout << i << ' ';
	return 0;
}
