#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	bitset<110> b;
	int n, m, i, ans = 0;
	cin >> n >> m;
	for (i = 1; i <= m && n > 0; i += 2, --n)
	{
		b[i] = true;
	}
	for (i = 2; i <= m && n > 0; i += 2, --n)
	{
		b[i] = true;
	}
	b[0] = b[m];
	b[m + 1] = b[1];
	for (i = 1; i <= m; ++i)
	{
		if (b[i])
		{
			ans += b[i - 1] + b[i + 1];
		}
	}
	cout << ans << '\n';
	return 0;
}
