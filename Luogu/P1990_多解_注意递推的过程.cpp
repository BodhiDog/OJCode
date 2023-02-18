// 递归版
#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10, M = 1e4;
int f[R], sum[R]; // sum是一个单纯的前缀和
int solve(int x)
{
	if (x <= 3 || f[x])
		return f[x] % M;
	f[x] = (solve(x - 1) % M + solve(x - 2) % M + 2 * sum[x - 3] % M) % M; // 递归必须在sum[x-3]前面，因为要先求出x-3才能加2*sum[x-3]
	sum[x] = (sum[x - 1] + f[x]) % M;
	return f[x];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	f[0] = 1, f[1] = 1, f[2] = 2, f[3] = 5;
	sum[0] = 1, sum[1] = 2, sum[2] = 4, sum[3] = 9; // 预处理一下
	int n;
	cin >> n;
	cout << solve(n) << '\n';
	return 0;
}
// 循环版
#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10, M = 1e4;
int f[R], sum[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	f[0] = 1;
	sum[0] = 1;
	int n;
	cin >> n;
	for (int j = 1; j <= n; ++j)
	{
		f[j] = (f[j - 1] + f[j - 2] + 2 * sum[j - 3] % M) % M;
		sum[j] = (sum[j - 1] + f[j]) % M;
	}
	cout << f[n] << '\n';
	return 0;
}
