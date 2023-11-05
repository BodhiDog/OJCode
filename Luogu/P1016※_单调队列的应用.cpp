// https://www.luogu.com.cn/blog/hongzy/solution-p1016
#include <bits/stdc++.h>
using namespace std;

struct Oil
{
	double cost, oil;
};
struct Station
{
	double dis, p;
	bool operator<(const Station &oth) const
	{
		return dis < oth.dis;
	}
} s[10];
deque<Oil> q; // 单调减队列（队尾最便宜）
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	Oil x;
	double d1, c, d2, p, need, ans = 0, nowoil;
	int n, i, j, len;
	bool flag;
	cin >> d1 >> c >> d2 >> s[0].p >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> s[i].dis >> s[i].p;
	}
	s[0].dis = 0;
	s[n + 1].dis = d1;
	sort(s, s + n + 2);
	for (i = 1; i <= n + 1; ++i)
	{
		if (c * d2 < s[i].dis - s[i - 1].dis)
		{
			cout << "No Solution\n";
			return 0;
		}
	}
	ans = c * s[0].p;
	nowoil = c;
	q.push_back({s[0].p, c}); // 先加满
	for (i = 1; i <= n + 1; ++i)
	{
		need = (s[i].dis - s[i - 1].dis) / d2;
		while (!q.empty() && need > 0)
		{
			x = q.front();
			q.pop_front(); // 优先退贵的油
			if (x.oil > need)
			{
				nowoil -= need;
				q.push_front({x.cost, x.oil - need});
				break;
			}
			else
			{
				nowoil -= x.oil;
				need -= x.oil;
			}
		}
		if (i == n + 1)
		{
			while (!q.empty())
			{
				x = q.front();
				q.pop_front();
				ans -= x.cost * x.oil;
			}
			break;
		}
		while (!q.empty() && q.back().cost > s[i].p)
		{
			x = q.back();
			q.pop_back();
			ans -= x.cost * x.oil;
			nowoil -= x.oil;
		}
		ans += (c - nowoil) * s[i].p;
		q.push_back({s[i].p, c - nowoil}); // 加满
		nowoil = c;
	}
	cout << fixed << setprecision(2) << ans << '\n';
	return 0;
}
