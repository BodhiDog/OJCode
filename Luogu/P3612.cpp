#include <bits/stdc++.h>
using namespace std;

// 参考https://www.luogu.com.cn/blog/HongseFox/solution-p3612
using ll = long long;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	ll n, sqr2[64] = {0};
	cin >> n;
	int len = s.length();
	if (len == 1)
	{
		cout << s[0] << '\n';
		return 0;
	}
	s = ' ' + s;
	sqr2[0] = 1;
	int j;
	for (j = 1; j <= 61; ++j) // 18*lg(10)/lg(2)≈59.79
		sqr2[j] = sqr2[j - 1] << 1;
	// 如果n是len*2^x+1，则pos=len*2^x，即--n
	// 如果n是len*2^x，那么一定不能进行下面的减去再减1的操作，因为这样会变成负数，应当将x--
	// 否则pos=n-len*2^x-1
	// x=log2(n/len)
	while (n > len)
	{
		j = log2(double(n) / double(len));
		if (n == sqr2[j] * len)
			--j;
		if (n == sqr2[j] * len + 1)
			--n;
		else
			n = n - ll(len) * sqr2[j] - 1;
	}
	cout << s[n] << '\n';
	return 0;
}
