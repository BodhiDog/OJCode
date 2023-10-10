// 第一道完全不看题解做出的非模板题蓝题
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 5e4 + 10;
int c[R], belong[R], cnt[R];
ll ans[R][2], res;
struct Qry
{
	int l, r, id;
	bool operator<(const Qry &oth) const
	{
		return belong[l] == belong[oth.l] ? r < oth.r : l < oth.l;
	}
} q[R];
ll gcd(ll x, ll y)
{
	if (x < y)
	{
		swap(x, y);
	}
	ll z;
	while (y)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}
void add(int x)
{
	++cnt[c[x]];
	res += cnt[c[x]] - 1;
}
void del(int x)
{
	--cnt[c[x]];
	res -= cnt[c[x]];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, l, r;
	ll g, fm, len;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> c[i];
		belong[i] = i / sqrt(n);
		// f[i] = (i == 1 ? 0 : f[i - 1] + i - 1); // 枚举几个数之后发现，一种颜色的贡献满足f(n)=f(n-1)+(n-1) (n>=2)
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> q[i].l >> q[i].r;
		q[i].id = i;
	}
	sort(q + 1, q + m + 1);
	l = 1, r = 0;
	for (i = 1; i <= n; ++i)
	{
		if (q[i].l == q[i].r)
		{
			ans[q[i].id][0] = 0; // 这里也要写q[i].id！！！
			ans[q[i].id][1] = 1;
			continue;
		}
		while (l > q[i].l)
			add(--l);
		while (r < q[i].r)
			add(++r);
		while (l < q[i].l)
			del(l++);
		while (r > q[i].r)
			del(r--);
		len = r - l + 1;
		fm = len * (len - 1) / 2;
		g = gcd(fm, res);
		ans[q[i].id][0] = res / g;
		ans[q[i].id][1] = fm / g;
	}
	for (i = 1; i <= m; ++i)
	{
		cout << ans[i][0] << '/' << ans[i][1] << '\n';
	}
	return 0;
}
