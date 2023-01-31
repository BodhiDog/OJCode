#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, K = 17; // log以2为底1e5的值向上取整为17
int a[N], f[N][K], log2_[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	register int i, j;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	log2_[1] = 0;
	for (j = 2; j <= n; ++j)
	{
		log2_[j] = log2_[j / 2] + 1;
	}
	// n=r-l+1 ? r=l+n-1 ? l=r-n+1
	for (j = 0; j < K; ++j)
	{
		for (i = 1; i + (1 << j) - 1 <= n; ++i)
		{
			if (j == 0)
			{
				f[i][j] = a[i];
			}
			else
			{
				f[i][j] = max(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
				// 两个区间为i~i+2^(j-1)-1和i+2^(j-1)~i+2^(j-1)+2^(j-1)-1
				// 其中i+2^(j-1)+2^(j-1)-1=1+2^j-1
			}
		}
	}
	int l, r, k;
	for (j = 1; j <= m; ++j)
	{
		cin >> l >> r;
		k = log2_[r - l + 1];
		cout << max(f[l][k], f[r - (1 << k) + 1][k]) << "\n";
	}
	return 0;
}