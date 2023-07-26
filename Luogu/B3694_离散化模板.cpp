#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int a[R], b[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, i, len;
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (i = 1; i <= n; ++i)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b + 1, b + n + 1);
		len = unique(b + 1, b + n + 1) - (b + 1);
		for (i = 1; i <= n; ++i)
			a[i] = lower_bound(b + 1, b + len + 1, a[i]) - b; // -b就是离散化到[1,len]，-(b+1)就是离散化到[0,len-1]
		for (i = 1; i <= n; ++i)
			cout << a[i] << ' ';
		cout << '\n';
	}
	return 0;
}
