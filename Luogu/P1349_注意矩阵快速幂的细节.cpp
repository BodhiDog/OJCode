#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int m;
struct Matrix
{
	ll a[3][3];
	int row, col;
	Matrix() { memset(a, row = col = 0, sizeof(a)); }
	Matrix operator*(const Matrix &oth) const
	{
		Matrix res;
		res.row = this->row, res.col = oth.col;
		int i, j, k;
		for (i = 1; i <= this->row; ++i)
		{
			for (j = 1; j <= oth.col; ++j)
			{
				for (k = 1; k <= this->col; ++k)
				{
					res.a[i][j] = (res.a[i][j] + this->a[i][k] * oth.a[k][j] % m) % m;
				}
			}
		}
		return res;
	}
} ans, pq;
void pow(int p)
{
	while (p)
	{
		if (p & 1)
		{
			ans = ans * pq;
		}
		pq = pq * pq;
		p >>= 1;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	pq.a[1][2] = 1;
	cin >> pq.a[1][1] >> pq.a[2][1] >>
		ans.a[1][2] >> ans.a[1][1] >> // 注意顺序！！！构造矩阵为[a(n-1) a(n-2)]，输入时为a2,a1
		n >> m;
	pq.col = pq.row = 2;
	ans.row = 1, ans.col = 2;
	if (n <= 2)
	{
		cout << ans.a[1][n == 2 ? 1 : 2] % m << '\n'; // 这里也要注意顺序！！！
		return 0;
	}
	pow(n - 2);
	cout << ans.a[1][1] % m << '\n';
	return 0;
}
