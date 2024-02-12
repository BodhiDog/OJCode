// 用微积分过的第一题
#include <bits/stdc++.h>
using namespace std;

double a, b, c, d, l, r;
double F(double x) // a!=0
{
	if (a != 0 && c != 0)
	{
		return c * (a * x + b) / (a * a) + ((a * d - b * c) * log(abs(a * x + b)) / (a * a));
	}
	else if (a == 0 && c != 0)
	{
		return (c * x + d) * (c * x + d) / (2 * b * c);
	}
	else
	{
		return d * x / b;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> a >> b >> c >> d >> l >> r;
	if (a == 0)
	{
		cout << fixed << setprecision(6) << F(r) - F(l) << flush;
	}
	else
	{
		cout << fixed << setprecision(6) << F(r) - F(l) << flush;
	}
	return 0;
}
