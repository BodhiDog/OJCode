#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	if (n == 1)
		cout << "-1\n";
	else
		cout << n << ' ' << n + 1 << ' ' << n * (n + 1) << '\n';
	return 0;
}
