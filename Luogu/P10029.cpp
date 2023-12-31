#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long T, n, m, p, ha1, hb1;
	cin >> T;
	while (T--)
	{
		cin >> n >> m >> p;
		// 经过变换之后发现，是h0变换一次之后就不再变化
		ha1 = n - (n % p), hb1 = m - (m % p);
		if (hb1 == 0)
		{
			cout << "Alice\n";
		}
		else if (ha1 == 0)
		{
			cout << "Bob\n";
		}
		else
		{
			cout << "Lasting Battle\n";
		}
	}
	return 0;
}
