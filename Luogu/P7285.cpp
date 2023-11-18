#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, i, a, y;
	cin >> T;
	while (T--)
	{
		y = 0;
		cin >> n;
		for (i = 1; i <= n; ++i)
		{
			cin >> a;
			if (a == 0)
			{
				++y;
			}
		}
		cout << n - y << '\n';
		for (i = 1; i <= n; ++i)
		{
			cout << "1 ";
		}
		cout << '\n';
	}
	return 0;
}
