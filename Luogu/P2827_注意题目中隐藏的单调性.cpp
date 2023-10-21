#include <bits/stdc++.h>
using namespace std;

/*
a中存放没切过的
b中存放被切过的较长的那一段
c中存放被切过的较短的那一段
设现有两个长度a1,a2，a1>a2
我们先假设切完a1之后的两端都比a2短（因为如果有更长的话就会循环下去，没有什么意义）
t时刻：a1->pa1 a1-pa1,a2
2t时刻：a2+q->p(a2+q) (a2+q)-p(a2+q)
此时几段的长度分别为：pa1+q (1-p)a1+q p(a2+q) (1-p)(a2+q)
易得结论pa1+q>p(a2+q) (1-p)a1+q>(1-p)(a2+q)
所以队列中可维护单调性
*/
using ll = long long;
const int R = 1e5 + 10;
queue<ll> a, b, c;
int x[R];
ll getmax()
{
	ll res = LLONG_MIN;
	if (!a.empty())
	{
		res = a.front();
	}
	if (!b.empty())
	{
		res = max(res, b.front());
	}
	if (!c.empty())
	{
		res = max(res, c.front());
	}
	if (!a.empty() && a.front() == res)
	{
		a.pop();
	}
	else if (!b.empty() && b.front() == res)
	{
		b.pop();
	}
	else
	{
		c.pop();
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, t, i;
	ll q, u, v, ans, curlen, len1, len2, totq = 0;
	cin >> n >> m >> q >> u >> v >> t;
	for (i = 1; i <= n; ++i)
	{
		cin >> x[i];
	}
	sort(x + 1, x + n + 1);
	for (i = n; i >= 1; --i)
	{
		a.push(x[i]);
	}
	for (i = 1; i <= m; ++i)
	{
		curlen = getmax() + totq;
		if (i % t == 0)
		{
			cout << curlen << ' ';
		}
		len1 = curlen * u / v;
		len2 = curlen - len1;
		len1 -= totq;
		len2 -= totq;
		len1 -= q;
		len2 -= q;
		b.push(max(len1, len2));
		c.push(min(len1, len2));
		totq += q;
	}
	cout << '\n';
	for (i = 1; i <= n + m; ++i)
	{
		ans = getmax() + totq;
		if (i % t == 0)
		{
			cout << ans << ' ';
		}
	}
	return 0;
}
