#include <bits/stdc++.h>
using namespace std;

int n, a[10], b[10], c[10], x, y, z;
int check()
{
	for (int i = 2; i <= n; ++i)
	{
		if ((abs(a[i] - x) ^ abs(b[i] - y) ^ abs(c[i] - z)) != 9)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, ans = 0, z1, temp;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i] >> b[i] >> c[i];
	}
	for (x = 1; x <= m; ++x)
	{
		for (y = 1; y <= m; ++y)
		{
			/*
			abs(a-x)^abs(b-y)^9=abs(c-z)
			1.c>z
			abs(a-x)^abs(b-y)^9=c-z
			z=c-(abs(a-x)^abs(b-y)^9)
			2.c<z
			abs(a-x)^abs(b-y)^9=z-c
			z=c+(abs(a-x)^abs(b-y)^9)
			*/
			temp = (abs(a[1] - x) ^ abs(b[1] - y) ^ 9);
			z = z1 = c[1] - temp;
			if (1 <= z && z <= m)
			{
				ans += check();
			}
			z = c[1] + temp;
			if (z != z1 && 1 <= z && z <= m)
			{
				ans += check();
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
