#include <bits/stdc++.h>
using namespace std;

long long h(long long n)
{
	long long res = 0, i, j;
	for (i = 1; i <= n; i = j + 1)
	{
		j = n / (n / i);
		res += (j - i + 1) * (n / i);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		cout << h(n) << '\n';
	}
	return 0;
}