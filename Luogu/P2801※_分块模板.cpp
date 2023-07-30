#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6 + 10, B = 1100;
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
		for (i = l; i <= R[belong[l]]; ++i)
			a[i] += v;
		for (i = L[belong[l]]; i <= R[belong[l]]; ++i)
			blo[i] = a[i];
		sort(blo + L[belong[l]], blo + R[belong[l]] + 1);

		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
			tag[i] += v;

		for (i = L[belong[r]]; i <= r; ++i)
			a[i] += v;
		for (i = L[belong[r]]; i <= R[belong[r]]; ++i)
			blo[i] = a[i];
		sort(blo + L[belong[r]], blo + R[belong[r]] + 1);
	}
}
int query(int l, int r, ll w)
{
	int res = 0, i;
	if (belong[l] == belong[r])
	{
		for (i = l; i <= r; ++i)
			if (a[i] + tag[belong[l]] >= w)
				++res;
	}
	else
	{
		for (i = l; i <= R[belong[l]]; ++i)
			if (a[i] + tag[belong[l]] >= w)
				++res;
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
			res += &blo[R[i]] - lower_bound(blo + L[i], blo + R[i] + 1, w - tag[i]) + 1; // 千万别忘处理tag！！！
		for (i = L[belong[r]]; i <= r; ++i)
			if (a[i] + tag[belong[r]] >= w)
				++res;
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int q;
	cin >> n >> q;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build();
	char op;
	int l, r;
	ll w;
	while (q--)
	{
		cin >> op >> l >> r >> w;
		if (op == 'M')
			update(l, r, w);
		else
			cout << query(l, r, w) << '\n';
	}
	return 0;
}
