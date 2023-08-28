#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, B = 350, M = 1e6 + 10;
int n, a[N], belong[N/*注意是N不是B！！！*/], cnt[N], sum[B], ans[M], L[B], R[B];
struct Qry
{
	int id, l, r, a, b;
	bool operator<(const Qry &oth) const
	{
		return belong[this->l] == belong[oth.l] ? this->r < oth.r : belong[this->l] < belong[oth.l];
	}
} q[M];
void build()
{
	int i, sz = sqrt(n), tot = n / sz;
	if (n % sz)
	{
		++tot;
	}
	for (i = 1; i <= n; ++i)
	{
		belong[i] = (i - 1) / sz + 1;
	}
	for (i = 1; i <= tot; ++i)
	{
		L[i] = (i - 1) * sz + 1;
		R[i] = i * sz;
	}
	R[tot] = n;
}
void add(int v)
{
	if (cnt[v] == 0)
	{
		++sum[belong[v]];
	}
	++cnt[v];
}
void del(int v)
{
	--cnt[v];
	if (cnt[v] == 0)
	{
		--sum[belong[v]];
	}
}
int query(int x, int y)
{
	int res = 0, i;
	if (belong[x] == belong[y])
	{
		for (i = x; i <= y; ++i)
		{
			res += (cnt[i] ? 1 : 0);
		}
	}
	else
	{
		for (i = x; i <= R[belong[x]]; ++i)
		{
			res += (cnt[i] ? 1 : 0);
		}
		for (i = belong[x] + 1; i <= belong[y] - 1; ++i)
		{
			res += sum[i];
		}
		for (i = L[belong[y]]; i <= y; ++i)
		{
			res += (cnt[i] ? 1 : 0);
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i;
	cin >> n >> m;
	build();
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> q[i].l >> q[i].r >> q[i].a >> q[i].b;
		q[i].id = i;
	}
	sort(q + 1, q + m + 1);
	int l = 1, r = 0;
	for (i = 1; i <= m; ++i)
	{
		while (l < q[i].l)
		{
			del(a[l++]);
		}
		while (r > q[i].r)
		{
			del(a[r--]);
		}
		while (l > q[i].l)
		{
			add(a[--l]);
		}
		while (r < q[i].r)
		{
			add(a[++r]);
		}
		ans[q[i].id] = query(q[i].a, q[i].b);
	}
	for (i = 1; i <= m; ++i)
	{
		cout << ans[i] << '\n';
	}
	return 0;
}
