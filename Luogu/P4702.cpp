#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;
	long long x, sum = 0;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> x;
		sum += x;
	}
	cout << (sum % 2 ? "Alice" : "Bob");
	return 0;
}
