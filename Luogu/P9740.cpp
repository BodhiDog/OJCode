#include <bits/stdc++.h>
using namespace std;

int a[10], b[10], nowget[10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, t, j, cur = 0, cap, per;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j] >> b[j];
		nowget[j] = (100 / a[j]) * b[j];
		cur += nowget[j];
	}
	cin >> t;
	if (cur >= t)
	{
		cout << "Already Au.\n";
	}
	else
	{
		for (j = 1; j <= n; ++j)
		{
			cap = 100 - nowget[j];
			per = 100 / a[j];
			if (cap + cur < t)
			{
				cout << "NaN\n";
			}
			else
			{
				cout << ceil(double(t - cur) / per) << '\n';
			}
		}
	}
	return 0;
}
