#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 5e4 + 10, B = 240;
ll sum[B], a[N], tag[B];
int L[B], R[B], n, belong[N];
void build()
{
	int bsz = sqrt(n), tot = n / bsz;
	if (n % bsz)
		++tot;
	int i;
	for (i = 1; i <= tot; ++i)
	{
		L[i] = (i - 1) * bsz + 1;
		R[i] = i * bsz;
	}
	R[tot] = n;
	for (i = 1; i <= n; ++i)
	{
		belong[i] = (i - 1) / bsz + 1;
		sum[belong[i]] += a[i];
	}
}
void update(int l, int r, ll v)
{
	int i;
	if (belong[l] == belong[r])
	{
		for (i = l; i <= r; ++i)
		{
			a[i] += v;
			sum[belong[l]] += v;
		}
	}
	else
	{
		for (i = l; i <= R[belong[l]]; ++i)
		{
			a[i] += v;
			sum[belong[l]] += v;
		}
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
			tag[i] += v;

		for (i = L[belong[r]]; i <= r; ++i)
		{
			a[i] += v;
			sum[belong[r]] += v;
		}
	}
}
ll query(int l, int r, ll mod)
{
	ll res = 0;
	int i;
	if (belong[l] == belong[r])
	{
		for (i = l; i <= r; ++i)
			res = (res + a[i] + tag[belong[l]]) % mod;
	}
	else
	{
		for (i = l; i <= R[belong[l]]; ++i)
			res = (res + a[i] + tag[belong[l]]) % mod;

		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
			res = (res + sum[i] + (R[i] - L[i] + 1) * tag[i] % mod) % mod;

		for (i = L[belong[r]]; i <= r; ++i)
			res = (res + a[i] + tag[belong[r]]) % mod;
	}
	return res % mod;
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
			cout << query(l, r, c + 1) << '\n';
	}
	return 0;
}
