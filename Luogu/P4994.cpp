#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll f[100000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, ans;
	cin >> m;
	f[0] = 0, f[1] = 1;
	for (ans = 2;; ++ans)
	{
		f[ans] = (f[ans - 1] + f[ans - 2]) % m;
		if (f[ans - 1] % m == 0 && f[ans] % m == 1)
		{
			cout << ans - 1;
			break;
		}
	}
	return 0;
}
