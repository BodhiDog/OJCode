#include <bits/stdc++.h>
using namespace std;

int main()
{
	long double r[4], res;
	cin >> r[1] >> r[2] >> r[3];
	sort(r + 1, r + 4);
	if (r[1] + r[2] >= r[3])
	{
		res = -0.5 * (r[1] * r[1] + r[2] * r[2] + r[3] * r[3]);
	}
	else
	{
		res = 0.5 * ((r[3] - r[1] - r[2]) * (r[3] - r[1] - r[2]) - (r[1] * r[1] + r[2] * r[2] + r[3] * r[3]));
	}
	cout << fixed << setprecision(1) << res <<'\n';
	return 0;
}