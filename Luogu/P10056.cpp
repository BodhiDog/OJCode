#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long a, b, n, x;
	cin >> a >> b >> n;
	x = min(n, a / b);
	cout << x * b << flush;
	return 0;
}
