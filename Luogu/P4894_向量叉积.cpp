#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long x1, y1, z1, x2, y2, z2, x, y, z, g;
	while (cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2)
	{
		x = y1 * z2 - y2 * z1;
		y = z1 * x2 - z2 * x1;
		z = x1 * y2 - x2 * y1;
		g = __gcd(__gcd(x, y), z);
		x /= g, y /= g, z /= g;
		cout << x << ' ' << y << ' ' << z << '\n';
	}
	return 0;
}
