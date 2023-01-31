#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline void d_read(T &a)
{
	int fh = 1;
	a = 0;
	char c = getchar();
	for (; c < '0' || c > '9'; c = getchar())
	{
		if (c == '-')
		{
			fh = -1;
		}
	}
	for (; c >= '0' && c <= '9'; c = getchar())
	{
		a = (a << 1) + (a << 3) + (c ^ 48);
	}
	a = a * fh;
}
int main()
{
	int a, n, ans = 0;
	register int y;
	d_read(n);
	d_read(ans);
	for (y = 2; y <= n; ++y)
	{
		d_read(a);
		ans ^= a;
	}
	printf("%d", ans);
	return 0;
}