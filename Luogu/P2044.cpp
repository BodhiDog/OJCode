// __int128写法
#include <bits/stdc++.h>
using namespace std;

using ll = __int128;
ll mod, a;
struct Matrix
{
	ll a[4][4];
	int row, col;
	Matrix() { memset(a, 0, sizeof(a)); }
	Matrix operator*(const Matrix &x) const
	{
		int i, j, k;
		Matrix res;
		res.row = row, res.col = x.col;
		for (i = 1; i <= row; ++i)
			for (j = 1; j <= x.col; ++j)
				for (k = 1; k <= col; ++k)
					res.a[i][j] = (res.a[i][j] + a[i][k] * x.a[k][j] % mod) % mod;
		return res;
	}
};
Matrix ans;
void qpow(ll p)
{
	Matrix tmp;
	tmp.row = tmp.col = 2;
	tmp.a[1][1] = a, tmp.a[1][2] = 1;
	tmp.a[2][2] = 1;
	while (p)
	{
		if (p & 1)
			ans = tmp * ans;
		tmp = tmp * tmp;
		p >>= 1;
	}
}
ll read()
{
	ll res = 0, fh = 1;
	char c = getchar();
	while (!isdigit(c))
	{
		if (c == '-')
			fh = -1;
		c = getchar();
	}
	while (isdigit(c))
	{
		res = res * 10 + (c - '0');
		c = getchar();
	}
	return res * fh;
}
void put(ll x)
{
	if (x < 0)
	{
		putchar('-');
		x = -x;
	}
	if (x > 9)
		put(x / 10);
	putchar(x % 10 + '0');
}
int main()
{
	ll c, x0, n, g;
	mod = read();
	a = read();
	c = read();
	x0 = read();
	n = read();
	g = read();
	if (n == 1)
	{
		put((a * x0 % mod + c % mod) % mod);
		return 0;
	}
	ans.row = 2, ans.col = 1;
	ans.a[1][1] = x0 % mod; // x0
	ans.a[2][1] = c % mod;	// c
	qpow(n);
	put(ans.a[1][1] % g);
	return 0;
}
