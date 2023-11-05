// 不妨定义每次len的长度都是1。同时由于sum只需要知道奇偶，所以-1操作不会产生影响
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 2e5 + 10;
ll a[R], b[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, i;
	ll sum;
	cin >> T;
	while (T--)
	{
		sum = 0;
		cin >> n;
		for (i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		for (i = 1; i <= n; ++i)
		{
			cin >> b[i];
			sum += abs(a[i] - b[i]);
		}
		cout << (sum % 2) << '\n';
	}
	return 0;
}
