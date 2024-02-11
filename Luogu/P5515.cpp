#include <bits/stdc++.h>
using namespace std;

namespace Mker
{
#define uint unsigned int
	uint sd;
	int op;
	inline void init()
	{
		cin >> sd >> op;
	}
	inline uint uint_rand()
	{
		sd ^= sd << 13;
		sd ^= sd >> 7;
		sd ^= sd << 11;
		return sd;
	}
	inline double get_n()
	{
		double x = (double)(uint_rand() % 100000) / 100000;
		return x + 4;
	}
	inline double get_k()
	{
		double x = (double)(uint_rand() % 100000) / 100000;
		return (x + 1) * 5;
	}
	inline void read(double &n, double &a, double &b)
	{
		n = get_n();
		a = get_k();
		if (op)
			b = a;
		else
			b = get_k();
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	double n, a, b, ans = 0;
	cin >> T;
	Mker::init();
	while (T--)
	{
		Mker::read(n, a, b);
		ans += 0.9999999 / (a * pow(n, a - 1) + b * pow(n, b - 1)); // 函数增长很快，直接dy/(dy/dx)就满足精度
	}
	cout << ans << flush;
	return 0;
}
