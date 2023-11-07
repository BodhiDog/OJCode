#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	if (n % 5 >= 3)
	{
		cout << 2;
		n -= 5;
	}
	for (int i = 1; i <= n / 5; ++i)
	{
		cout << 1;
	}
	return 0;
}
