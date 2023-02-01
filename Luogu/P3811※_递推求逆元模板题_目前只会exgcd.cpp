#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	using ll = long long;
	ll inv[3000100] = {0};
	ll n, p, x, y;
	cin >> n >> p;
	inv[1] = 1;
	cout << "1\n";
	for (register int a = 2; a <= n; ++a)
	{
		inv[a] = p - (p / a) * inv[p % a] % p;
		cout << inv[a] << "\n";
	}
	return 0;
}
