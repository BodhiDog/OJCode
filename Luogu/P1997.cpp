#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, V = 2e5 + 10;
struct Qry
{
	int l, r, id;
} q[V];
int a[N], bucket[V], sum[N], belong[N], ans[V], maxcnt;
void add(int v)
{
	++bucket[v];
	++sum[bucket[v]];
	maxcnt = max(maxcnt, bucket[v]);
}
void del(int v)
{
	if (sum[bucket[v]] == 1 && maxcnt == bucket[v])
		--maxcnt; // 只是相当于减少了一个数，所以-1
	--sum[bucket[v]];
	--bucket[v];
    // 彻底删除一个数，不用再++sum[bucket[v]]
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j;
	cin >> n >> m;
	int sz = sqrt(n);
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		a[j] += 1e5;
		belong[j] = (j - 1) / sz + 1;
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r;
		q[j].id = j;
	}
	sort(q + 1, q + m + 1, [](Qry &a, Qry &b)
		 { return belong[a.l] == belong[b.l] ? ((belong[a.l] & 1) ? a.r < b.r : a.r > b.r) : belong[a.l] < belong[b.l]; });
	int l = 1, r = 0;
	for (j = 1; j <= m; ++j)
	{
		while (l < q[j].l)
			del(a[l++]);
		while (r > q[j].r)
			del(a[r--]);
		while (l > q[j].l)
			add(a[--l]);
		while (r < q[j].r)
			add(a[++r]);
		ans[q[j].id] = maxcnt;
	}
	for (j = 1; j <= m; ++j)
	{
		cout << ans[j] << '\n';
	}
	return 0;
}
