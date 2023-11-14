#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5 + 10, MOD = 10007;
ll a[N], n, L[N], R[N], belong[N], addtag[N], multag[N];
void pushdown(int k) // k为块的编号
{
	for (int i = L[k]; i <= R[k]; ++i)
	{
		a[i] = (a[i] * multag[belong[i]] % MOD + addtag[belong[i]]) % MOD;
	}
	addtag[k] = 0;
	multag[k] = 1;
}
void build()
{
	int sz = sqrt(n), tot = n / sz, i;
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
		multag[i] = 1;
	}
}
void update(int l, int r, int add, ll mul)
{
	int i;
	if (belong[l] == belong[r])
	{
		pushdown(belong[l]);
		for (i = l; i <= r; ++i)
		{
			a[i] = (a[i] + add) * mul % MOD;
		}
	}
	else
	{
		pushdown(belong[l]);
		for (i = l; i <= R[belong[l]]; ++i)
		{
			a[i] = (a[i] + add) * mul % MOD;
		}
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
		{
			if (add != 0)
			{
				addtag[i] = (addtag[i] + add) % MOD;
			}
			else
			{
				addtag[i] = addtag[i] * mul % MOD;
				multag[i] = multag[i] * mul % MOD;
			}
		}
		pushdown(belong[r]);
		for (i = L[belong[r]]; i <= r; ++i)
		{
			a[i] = (a[i] + add) * mul % MOD;
		}
	}
}
int query(int x)
{
	pushdown(belong[x]);
	return a[x];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, op, l, r, c;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	build();
	for (i = 1; i <= n; ++i)
	{
		cin >> op >> l >> r >> c;
		if (op == 0)
		{
			update(l, r, c, 1);
		}
		else if(op == 1)
		{
			update(l, r, 0, c);
		}
		else
		{
			cout << query(r) % MOD << '\n';
		}
	}
	return 0;
}
