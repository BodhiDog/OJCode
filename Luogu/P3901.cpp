#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int a[R], belong[R], cnt[R], res;
bool ans[R];
struct Qry
{
	int id, l, r;
	bool operator<(const Qry &oth) const
	{
		if (belong[l] == belong[oth.l])
		{
			return (belong[l] & 1) ? r > oth.r : r < oth.r;
        }
		else
		{
			return belong[l] < belong[oth.l];
		}
	}
} qry[R];
void add(int x)
{
	++cnt[a[x]];
	if (cnt[a[x]] == 1)
	{
		++res;
	}
}
void del(int x)
{
	--cnt[a[x]];
	if (cnt[a[x]] == 0)
	{
		--res;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, l, r, i;
	cin >> n >> q;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		belong[i] = i / sqrt(n);
	}
	for (i = 1; i <= q; ++i)
	{
		cin >> qry[i].l >> qry[i].r;
		qry[i].id = i;
	}
	sort(qry + 1, qry + q + 1);
	l = 1;
	r = 0;
	for (i = 1; i <= q; ++i)
	{
		while (l > qry[i].l)
			add(--l);
		while (r < qry[i].r)
			add(++r);
		while (l < qry[i].l)
			del(l++);
		while (r > qry[i].r)
			del(r--);
		ans[qry[i].id] = (r - l + 1 == res);
	}
	for (i = 1; i <= q; ++i)
	{
		cout << (ans[i] ? "Yes\n" : "No\n");
	}
	return 0;
}
