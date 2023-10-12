#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 5e6 + 10;
ll fa[N], prufer[N], cd[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x;
	ll i, ans = 0;
	cin >> n >> m;
	if (m == 1)
	{
		for (i = 1; i <= n - 1; ++i)
		{
			cin >> fa[i];
			++cd[fa[i]];
		}
		for (i = x = 1; i <= n - 2; ++i, ++x)
		{
			while (cd[x])
			{
				++x;
			}
			prufer[i] = fa[x];
			while (i <= n - 2 && --cd[prufer[i]] == 0 && prufer[i] < x)
			{
				prufer[i + 1] = fa[prufer[i]];
				++i;
			}
		}
		for (i = 1; i <= n - 2; ++i)
		{
			ans ^= (long long)i * prufer[i];
		}
		cout << ans << endl;
	}
	else
	{
		for (i = 1; i <= n - 2; ++i)
		{
			cin >> prufer[i];
			++cd[prufer[i]];
		}
		prufer[n - 1] = n;
		for (i = x = 1; i <= n - 1; ++i, ++x)
		{
			while (cd[x])
			{
				++x;
			}
			fa[x] = prufer[i];
			while (i <= n - 1 && --cd[prufer[i]] == 0 && prufer[i] < x)
			{
				fa[prufer[i]] = prufer[i + 1];
				++i;
			}
		}
		for (i = 1; i <= n - 1; ++i)
		{
			ans ^= (long long)i * fa[i];
		}
		cout << ans << endl;
	}
	return 0;
}
