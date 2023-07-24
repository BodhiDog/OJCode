// 作为一道红题，简直太虐心了QAQ
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll s, i, r = 0, newi, newr;
	int n;
	double beta, gamma;
	cin >> s >> i >> n >> beta >> gamma;
	for (int day = 1; day <= n; ++day)
	{
		newi = ceil(beta * s * i);
		newr = ceil(gamma * i);
		r += newr;
		if (newi >= s)
		{
			i = i + s - newr;
			s = 0;
		}
		else
		{
			i = i + newi - newr;
			s = s - newi;
		}
	}
	cout << s << ' ' << i << ' ' << r << '\n';
	return 0;
}
