#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 10;
double x[N], y[N], dis[N]; // dis表示从一个集合到另一个集合中最短边的长度
bool b[N];
inline double getdis(int a, int b)
{
	return sqrt((x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * (y[a] - y[b]));
}
double prim(int n)
{
	int i, j, lastp = 1, nowp;
	double ans = 0, len;
	fill(dis + 1, dis + n + 1, DBL_MAX);
	dis[1] = 0;
	b[1] = true;
	for (i = 1; i < n; ++i)
	{
		len = DBL_MAX;
		for (j = 1; j <= n; ++j)
		{
			if (!b[j] && getdis(lastp, j) < dis[j])
			{
				dis[j] = getdis(lastp, j);
			}
		}
		for (j = 1; j <= n; ++j)
		{
			if (!b[j] && dis[j] < len)
			{
				len = dis[j];
				nowp = j;
			}
		}
		lastp = nowp;
		ans += len;
		b[nowp] = true;
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;	
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> x[i] >> y[i];
	}
	cout << fixed << setprecision(2) << prim(n) << '\n';
	return 0;
}
