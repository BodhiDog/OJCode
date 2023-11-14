// 除了注释部分，都是自己写的
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
ll t[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll n, x, p, q, i, ans, totsleep = 0, daytimeleft, delta;
	cin >> n >> x >> p >> q;
	for (i = 1; i <= n; ++i)
	{
		cin >> t[i];
	}
	i = 1;
	for (ans = 1;; ++ans)
	{
		/*
        感谢@Little09 的题解
		当x - ti + totsleep < x * ans * p / q时，这一天一定无法完成当前任务，所以需要多睡几天
		设多睡了delta天，则需要满足不等式x - ti + totsleep + delta * x >= x * (ans + delta) * p / q
		移项之后得到delta >= (x * p * ans + q * (-x + ti - totsleep)) / (x * (q - p))
		即要求得delta的最小正整数解
		*/
		if ((x - t[i] + totsleep) * q < x * ans * p)
		{
			delta = ceil(double(x * p * ans + q * (-x + t[i] - totsleep)) / double(x * (q - p)));
			ans += delta;
			totsleep += delta * x;
		}
		daytimeleft = x;
		for (; i <= n && q * (daytimeleft - t[i] + totsleep) >= p * x * ans/*即daytimeleft - t[i] >= x * ans * p / q - totsleep*/ && daytimeleft - t[i] > 0; ++i)
		{
			daytimeleft -= t[i];
		}
		if (i > n)
		{
			break;
		}
		totsleep += daytimeleft;
	}
	cout << ans << '\n';
	return 0;
}
