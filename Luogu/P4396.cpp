#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, B = 400;
struct Qry
{
	int l, r, a, b, id;
} q[N];
int a[N], maxa /*用于取值域*/,
	L[B], R[B], belong[N], bucket[N], sum1[B], sum2[B],
	ans1[N], ans2[N];
void build_mo(int n)
{
	int sz = sqrt(n), j;
	for (j = 1; j <= n; ++j)
	{
		belong[j] = j / sz;
	}
}
bool cmp(Qry &a, Qry &b)
{
	if (belong[a.l] == belong[b.l])
		return (belong[a.l] & 1) ? a.r < b.r : a.r > b.r;
	else
		return belong[a.l] < belong[b.l];
}
void build()
{
	int sz = sqrt(maxa), tot = maxa / sz, j;
	if (maxa % sz)
	{
		++tot;
	}
	for (j = 1; j <= maxa; ++j)
	{
		belong[j] = (j - 1) / sz + 1;
	}
	for (j = 1; j <= tot; ++j)
	{
		L[j] = (j - 1) * sz + 1;
		R[j] = j * sz;
	}
	R[tot] = maxa;
}
// 1是值的个数，2是值的种类数
void add(int v)
{
	++bucket[v];
	++sum1[belong[v]];
	if (bucket[v] == 1)
	{
		++sum2[belong[v]];
	}
}
void del(int v)
{
	--bucket[v];
	--sum1[belong[v]];
	if (bucket[v] == 0)
	{
		--sum2[belong[v]];
	}
}
int query1(int a, int b)
{
	if (a > maxa)
	{
		return 0;
	}
	int res = 0, j;
	b = min(b, maxa);
	if (belong[a] == belong[b])
	{
		for (j = a; j <= b; ++j) // 细节！！！
		{
			res += bucket[j];
		}
	}
	else
	{
		for (j = a; j <= R[belong[a]]; ++j)
		{
			res += bucket[j];
		}
		for (j = belong[a] + 1; j <= belong[b] - 1; ++j)
		{
			res += sum1[j];
		}
		for (j = L[belong[b]]; j <= b; ++j)
		{
			res += bucket[j];
		}
	}
	return res;
}
int query2(int a, int b)
{
	if (a > maxa)
	{
		return 0;
	}
	int res = 0, j;
	b = min(b, maxa);
	if (belong[a] == belong[b])
	{
		for (j = a; j <= b; ++j)
		{
			res += bool(bucket[j]);
		}
	}
	else
	{
		for (j = a; j <= R[belong[a]]; ++j)
		{
			res += bool(bucket[j]);
		}
		for (j = belong[a] + 1; j <= belong[b] - 1; ++j)
		{
			res += sum2[j];
		}
		for (j = L[belong[b]]; j <= b; ++j)
		{
			res += bool(bucket[j]);
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		maxa = max(maxa, a[j]);
	}
	build_mo(n);
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r >> q[j].a >> q[j].b;
		q[j].id = j;
	}
	sort(q + 1, q + m + 1, cmp);
	build();
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
		ans1[q[j].id] = query1(q[j].a, q[j].b);
		ans2[q[j].id] = query2(q[j].a, q[j].b);
	}
	for (j = 1; j <= m; ++j)
	{
		cout << ans1[j] << ' ' << ans2[j] << '\n';
	}
	return 0;
}
