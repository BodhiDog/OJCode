#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
using ll = long long;
struct Matrix
{
	ll a[4][4];
	int row, col;
	Matrix()
	{
		memset(a, 0, sizeof a);
		row = col = 0;
	}
	Matrix operator*(const Matrix &x) const
	{
		int i, j, k;
		Matrix res;
		res.row = row, res.col = x.col;
		for (i = 1; i <= row; ++i)
			for (j = 1; j <= x.col; ++j)
				for (k = 1; k <= row; ++k)
					res.a[i][j] = (res.a[i][j] + a[i][k] * x.a[k][j] % MOD) % MOD;
		return res;
	}
} ans;
void qpow(ll p)
{
	Matrix tmp;
	int i;
	tmp.row = tmp.col = 3;
	tmp.a[1][1] = tmp.a[1][3] = tmp.a[2][1] = tmp.a[3][2] = 1;
	while (p)
	{
		if (p & 1)
			ans = tmp * ans;
		tmp = tmp * tmp;
		p /= 2;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	ll n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		if (n <= 3)
		{
			cout << "1\n";
		}
		else
		{
			ans.row = 3, ans.col = 1; // 2*1
			ans.a[1][1] = ans.a[2][1] = ans.a[3][1] = 1;
			qpow(n - 3);
			cout << ans.a[1][1] % MOD << '\n';
		}
	}
	return 0;
}
