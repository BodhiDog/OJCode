#include <bits/stdc++.h>
using namespace std;

const int R = 1.334e5, K = 1e6 + 10;
struct Qry
{
	int l, r, pos, time;
} q[R];
struct Upd
{
	int pos, x;
} upd[R];
int l = 1, r = 0, res, now;
int tot[K], a[R], ku[R], ans[R];
void add(int x)
{
	++tot[a[x]];
	if (tot[a[x]] == 1)
		++res;
}
void sub(int x)
{
	--tot[a[x]];
	if (tot[a[x]] == 0)
		--res;
}
void change(int ver)
{
	if (upd[ver].pos >= l && upd[ver].pos <= r)
	{
		--tot[a[upd[ver].pos]];
		if (tot[a[upd[ver].pos]] == 0)
			--res;
		++tot[upd[ver].x];
		if (tot[upd[ver].x] == 1)
			++res;
	}
	swap(upd[ver].x, a[upd[ver].pos]); // 后面可能还会遇到对于这个版本的修改，也就是改回去，所以直接swap即可
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, qt = 0, ut = 0;
	char c;
	int j;
	cin >> n >> m;
	int sz = pow(n, double(2) / double(3));
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		ku[j] = j / sz;
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> c;
		if (c == 'Q')
		{
			cin >> q[++qt].l >> q[qt].r;
			q[qt].pos = qt;
			q[qt].time = ut;
		}
		else
			cin >> upd[++ut].pos >> upd[ut].x;
	}
	sort(q + 1, q + qt + 1, [](Qry &x1, Qry &x2) -> bool
		 { return (ku[x1.l] == ku[x2.l]) ? ((ku[x1.r] == ku[x2.r]) ? (x1.time < x2.time) : (ku[x1.r] < ku[x2.r])) : (ku[x1.l] < ku[x2.l]); });
	// 注意排序的方法
	for (j = 1; j <= qt; ++j)
	{
		while (l < q[j].l)
			sub(l++);
		while (r > q[j].r)
			sub(r--);
		while (l > q[j].l)
			add(--l);
		while (r < q[j].r)
			add(++r);
		while (now > q[j].time)
			change(now--);
		while (now < q[j].time)
			change(++now);
		ans[q[j].pos] = res;
	}
	for (j = 1; j <= qt; ++j)
		cout << ans[j] << '\n';
	return 0;
}