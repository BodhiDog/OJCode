// 阅读理解好题
// 题意分析：https://www.luogu.com.cn/blog/hss-FH/solution-p3709
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
vector<int> v;
int a[R], belong[R], ans[R], maxcnt, cnt[R], cntcnt[R];
struct Qry
{
	int l, r, id;
	bool operator<(const Qry &oth) const
	{
		if (belong[l] != belong[oth.l])
		{
			return l < oth.l;
		}
		else
		{
			return (belong[l] & 1) ? r < oth.r : r > oth.r;
		}
	}
} q[R];
void add(int x)
{
	++cnt[x];
	++cntcnt[cnt[x]];
	maxcnt = max(maxcnt, cnt[x]);
}
void del(int x)
{
	--cntcnt[cnt[x]];
	if (maxcnt == cnt[x] && cntcnt[cnt[x]] == 0)
	{
		--maxcnt;
	}
	--cnt[x];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, l, r, sz;
	cin >> n >> m;
	sz = sqrt(n);
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		v.push_back(a[j]);
		belong[j] = j / sz;
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (j = 1; j <= n; ++j)
	{
		a[j] = lower_bound(v.begin(), v.end(), a[j]) - v.begin() + 1;
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r;
		q[j].id = j;
	}
	sort(q + 1, q + m + 1);
	l = 1, r = 0;
	for (j = 1; j <= m; ++j)
	{
		while (r < q[j].r)
			add(a[++r]);
		while (l > q[j].l)
			add(a[--l]);
		while (r > q[j].r)
			del(a[r--]);
		while (l < q[j].l)
			del(a[l++]);
		ans[q[j].id] = -maxcnt;
	}
	for (j = 1; j <= m; ++j)
	{
		cout << ans[j] << '\n';
	}
	return 0;
}
