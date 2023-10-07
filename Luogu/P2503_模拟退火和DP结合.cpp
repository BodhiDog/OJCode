// 从此再也不想调退火参数了-_-
#include <bits/stdc++.h>
using namespace std;

const int R = 25;
int n, m;
double dp[R][R], a[R], s[R], avg, ans = 1e50;
double calc() // 求出n个数的连续数列分成m组，sum(x=group1~groupm，(avgx-x)^2)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			dp[i][j] = 1e50;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		s[i] = s[i - 1] + a[i];
	}
	dp[0][0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i && j <= m; j++)
		{
			for (int k = 0; k < i; k++)
			{
				dp[i][j] = min(dp[i][j], dp[k][j - 1] + (avg - (s[i] - s[k])) * (avg - (s[i] - s[k])));
			}
		}
	}
	return dp[n][m];
}
void sa(double curans)
{
	int x, y;
	double T = 1e4;
	while (T > 1e-15)
	{
		x = rand() % n + 1;
		y = rand() % n + 1;
		if (x == y)
		{
			continue;
		}
		swap(a[x], a[y]);
		double now = calc();
		if (now < curans || exp((ans - now) / T) * RAND_MAX < rand()) // 按照概率接受时一定是ans更优，因为ans更加接近正确答案
		{
			curans = now;
		}
		else
		{
			swap(a[x], a[y]);
		}
		T *= 0.995;
	}
	ans = min(ans, curans);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	srand(time(0));
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		avg += a[i];
	}
	avg /= m;
	while (double(clock()) / CLOCKS_PER_SEC <= 0.9)
	{
		random_shuffle(a + 1, a + n + 1);
		sa(calc());
	}
	cout << fixed << setprecision(2) << sqrt(ans / m) << endl;
	return 0;
}
