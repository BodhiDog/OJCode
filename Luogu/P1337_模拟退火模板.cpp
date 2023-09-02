#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e3 + 10;
struct
{
	double x, y, w;
} obj[R];
mt19937 rd(2333);
int n;
double ansx, ansy, anse = DBL_MAX;
double calc(double x, double y)
{
	double res = 0, tx, ty;
	for (int i = 1; i <= n; ++i)
	{
		tx = x - obj[i].x, ty = y - obj[i].y;
		res += sqrt(tx * tx + ty * ty) * obj[i].w;
	}
	return res;
}
void sa()
{
	double t = 1e5, xtemp, ytemp, newe, delta, xx = ansx, yy = ansy;
	while (t > 1e-15)
	{
		xtemp = ansx + (ll(rd()) * 2 - ll(UINT_MAX)) * t;
		ytemp = ansy + (ll(rd()) * 2 - ll(UINT_MAX)) * t;
		newe = calc(xtemp, ytemp);
		delta = newe - anse;
		if (delta < 0)
		{
			ansx = xx = xtemp;
			ansy = yy = ytemp;
			anse = newe;
		}
		else if (exp(-delta / t) * ll(UINT_MAX) > rd())
		{
			xx = xtemp;
			yy = ytemp; // 如果进入了一个波谷，那么下一次循环大概率能在上个if更新ans，而不是直接更新ans
		}
		t *= 0.996;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> obj[i].x >> obj[i].y >> obj[i].w;
	}
	int times = 5;
	while (times--)
	{
		sa();
	}
	cout << fixed << setprecision(3) << ansx << ' ' << ansy << '\n';
	return 0;
}
