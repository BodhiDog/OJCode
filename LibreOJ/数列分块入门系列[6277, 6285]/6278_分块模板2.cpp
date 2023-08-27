#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 5e4 + 10, B = 2230;
ll blo[N], tag[B];
int bsz, tot, n, a[N], belong[N], L[B], R[B];
void build()
{
	bsz = sqrt(n);
	tot = n / bsz;
	if (n % bsz)
		++tot;
	int i;
	for (i = 1; i <= tot; ++i)
	{
		L[i] = (i - 1) * bsz + 1;
		R[i] = bsz * i;
	}
	R[tot] = n;
	for (i = 1; i <= n; ++i)
	{
		belong[i] = (i - 1) / bsz + 1;
		blo[i] = a[i];
	}
	for (i = 1; i <= tot; ++i)
		sort(blo + L[i], blo + R[i] + 1);
}
void update(int l, int r, ll v)
{
	int i;
	if (belong[l] == belong[r])
	{
		for (i = l; i <= r; ++i)
			a[i] += v;
		for (i = L[belong[l]]; i <= R[belong[l]]; ++i)
			blo[i] = a[i];
		sort(blo + L[belong[l]], blo + R[belong[l]] + 1);
	}
	else
	{
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
			tag[i] += v;

		for (i = l; i <= R[belong[l]]; ++i)
			a[i] += v;
		for (i = L[belong[l]]; i <= R[belong[l]]; ++i)
			blo[i] = a[i];
		sort(blo + L[belong[l]], blo + R[belong[l]] + 1);

		for (i = L[belong[r]]; i <= r; ++i)
			a[i] += v;
		for (i = L[belong[r]]; i <= R[belong[r]]; ++i)
			blo[i] = a[i];
		sort(blo + L[belong[r]], blo + R[belong[r]] + 1);
	}
}
int query(int l, int r, ll c)
{
	int res = 0, i;
	if (belong[l] == belong[r])
	{
		for (i = l; i <= r; ++i)
			if (a[i] + tag[belong[l]] < c)
				++res;
	}
	else
	{
		for (i = l; i <= R[belong[l]]; ++i)
			if (a[i] + tag[belong[l]] < c)
				++res;
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
			res += lower_bound(blo + L[i], blo + R[i] + 1, c - tag[i]) - &blo[L[i]]; // 注意i是块编号所以直接写i而非belong[i]！！！
		for (i = L[belong[r]]; i <= r; ++i)
			if (a[i] + tag[belong[r]] < c)
				++res;
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build();
	int op, l, r;
	ll c;
	while (n--)
	{
		cin >> op >> l >> r >> c;
		if (op == 0)
			update(l, r, c);
		else
			cout << query(l, r, c * c) << '\n';
	}
	return 0;
}
