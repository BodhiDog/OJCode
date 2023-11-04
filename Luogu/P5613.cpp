#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	bitset<1010> b;
	int n, m, k, j, ans = 0, cur = 0, x;
	cin >> n >> m >> k;
	for (j = 1; j <= k; ++j)
	{
		cin >> x;
		b[x] = true;
	}
	while (cur < n)
	{
		++ans;
		cur += m;
		if (b[cur])
		{
			++m;
		}
	}
	cout << ans << '\n';
	return 0;
}
