#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 110;
const int MOD = 1e9 + 7;
int n;
struct Matrix
{
	ll a[R][R];
	// int row, col;
	Matrix() { memset(a, 0, sizeof(a)); }
	Matrix operator*(const Matrix &x /*, const Matrix &y*/)
	{
		Matrix temp;
		int i, j, k;
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
				for (k = 1; k <= n; ++k)
					temp.a[i][j] = (temp.a[i][j] + a[i][k] * x.a[k][j] % MOD) % MOD;
		return temp;
	}
	void reset()
	{
		for (int i = 1; i <= n; ++i)
			a[i][i] = 1;
	}
} A;
Matrix ans;
void qpow(ll p)
{
	ans.reset();
	while (p)
	{
		if (p & 1)
			ans = ans * A;
		A = A * A;
		p /= 2;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j;
	ll k;
	cin >> n >> k;
	for (i = 1; i <= n; ++i)
		for (j = 1; j <= n; ++j)
			cin >> A.a[i][j];
	qpow(k);
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
			cout << ans.a[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
