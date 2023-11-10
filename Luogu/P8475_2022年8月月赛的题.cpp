#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
const int MAXN = 1e7 + 10;
int n;
ull a[MAXN];
namespace Generator
{
	ull k1, k2;
	int thres;
	inline ull xorShift128Plus()
	{
		ull k3 = k1, k4 = k2;
		k1 = k4, k3 ^= (k3 << 23), k2 = k3 ^ k4 ^ (k3 >> 17) ^ (k4 >> 26);
		return k2 + k4;
	}
	inline void generate()
	{
		for (int i = 1; i <= n; ++i)
		{
			a[i] = xorShift128Plus() % thres;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> Generator::k1 >> Generator::k2 >> Generator::thres;
	Generator::generate();
	int i, j, last = n, minv;
	for (i = 1; i <= n; ++i)
	{
		minv = INT_MAX;
		for (j = n; j > i; --j)
		{
			if (a[j] < minv)
			{
				minv = a[j];
				last = j;
			}
		}
		if (minv != INT_MAX && a[i] > a[last])
		{
			swap(a[i], a[last]);
			i = last;
		}
	}
	ull ans = 0;
	for (i = 1; i <= n; ++i)
	{
		ans += ull(i) * a[i];
	}
	cout << ans << '\n';
	return 0;
}
