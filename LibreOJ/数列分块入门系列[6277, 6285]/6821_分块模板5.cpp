#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 5e4 + 10;
int n, belong[N], L[N], R[N];
ll sum[N], maxv[N], a[N];
void build()
{
	int sz = sqrt(n), tot = n / sz, i;
	if (n % sz)
	{
		++tot;
	}
	memset(maxv, -0x3f, sizeof(maxv));
	for (i = 1; i <= n; ++i)
	{
		belong[i] = (i - 1) / sz + 1;
		maxv[belong[i]] = max(maxv[belong[i]], a[i]);
		sum[belong[i]] += a[i];
	}
	for (i = 1; i <= tot; ++i)
	{
		L[i] = (i - 1) * sz + 1;
		R[i] = i * sz;
	}
	R[tot] = n;
}
void update(int l, int r)
{
	int i, j;
	if (belong[l] == belong[r])
	{
		if (maxv[belong[l]] > 1)
		{
			for (i = l; i <= r; ++i)
			{
				a[i] = sqrt(a[i]);
			}
			sum[belong[l]] = 0;
			maxv[belong[l]] = -1;
			for (i = L[belong[l]]; i <= R[belong[l]]; ++i)
			{
				sum[belong[l]] += a[i];
				maxv[belong[l]] = max(maxv[belong[l]], a[i]);
			}
		}
	}
	else
	{
		if (maxv[belong[l]] > 1)
		{
			for (i = l; i <= R[belong[l]]; ++i)
			{
				a[i] = sqrt(a[i]);
			}
			sum[belong[l]] = 0;
			maxv[belong[l]] = -1;
			for (i = L[belong[l]]; i <= R[belong[l]]; ++i)
			{
				sum[belong[l]] += a[i];
				maxv[belong[l]] = max(maxv[belong[l]], a[i]);
			}
		}
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
		{
			if (maxv[i] > 1)
			{
				sum[i] = 0; 
				maxv[i] = -1;
				for (j = L[i]; j <= R[i]; ++j)
				{
					a[j] = sqrt(a[j]);
					sum[i] += a[j];
					maxv[i] = max(maxv[i], a[j]);
				}
			}
		}
		if (maxv[belong[r]] > 1)
		{
			for (i = L[belong[r]]; i <= r; ++i)
			{
				a[i] = sqrt(a[i]);
			}
			sum[belong[r]] = 0;
			maxv[belong[r]] = -1;
			for (i = L[belong[r]]; i <= R[belong[r]]; ++i)
			{
				sum[belong[r]] += a[i];
				maxv[belong[r]] = max(maxv[belong[r]], a[i]);
			}
		}
	}
}
ll query(int l, int r)
{
	int i;
	ll res = 0;
	if (belong[l] == belong[r])
	{
		for (i = l; i <= r; ++i)
		{
			res += a[i];
		}
	}
	else
	{
		for (i = l; i <= R[belong[l]]; ++i)
		{
			res += a[i];
		}
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i)
		{
			res += sum[i];
		}
		for (i = L[belong[r]]; i <= r; ++i)
		{
			res += a[i];
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	int i, op, l, r, c;
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
			update(l, r);
		}
		else
		{
			cout << query(l, r) << '\n';
		}
	}
	return 0;
}
