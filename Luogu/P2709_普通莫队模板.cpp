#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
using ll = long long;
struct Qry
{
	int l, r, pos;
} q[R];
int a[R], ku[R], tot[R];
ll ans[R], res;
void add(int pos)
{
	++tot[a[pos]];
	res += pow(tot[a[pos]], 2) - pow(tot[a[pos]] - 1, 2);
}
void sub(int pos)
{
	--tot[a[pos]];
	res -= pow(tot[a[pos]] + 1, 2) - pow(tot[a[pos]], 2);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, k;
	cin >> n >> m >> k;
	int j, sz = sqrt(n);
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		ku[j] = j / sz;
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r;
		q[j].pos = j;
	}
	sort(q + 1, q + m + 1, [](Qry x, Qry y)
		 { return ku[x.l] == ku[y.l] ? x.r < y.r : ku[x.l] < ku[y.l]; });
	for (int l = 1, r = 0, j = 1; j <= m; ++j)
	{
		while (l > q[j].l)
			add(--l);
		while (r < q[j].r)
			add(++r);
		while (l < q[j].l)
			sub(l++);
		while (r > q[j].r)
			sub(r--);
		ans[q[j].pos] = res;
	}
	for (j = 1; j <= m; ++j)
		cout << ans[j] << '\n';
	return 0;
}