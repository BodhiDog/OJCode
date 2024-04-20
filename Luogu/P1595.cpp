#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll f[25];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	f[1] = 0;
	f[2] = 1;
	for (int i = 3; i <= n; ++i)
	{
		f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
	}
	cout << f[n] << flush;
	return 0;
}
