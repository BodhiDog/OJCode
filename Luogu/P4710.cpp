#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	double v, a, g = 10, t, x, y;
	cin >> v >> a;
	t = v * cos(a) / g;
	y = 0.5 * g * t * t;
	x = v * sin(a) * t;
	cout << x << ' ' << y << flush;
	return 0;
}
