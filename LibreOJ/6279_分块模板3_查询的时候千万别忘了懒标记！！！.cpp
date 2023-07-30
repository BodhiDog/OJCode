#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5 + 10, B = 350;
ll blo[N], tag[B], a[N];
int L[B], R[B], belong[N], n, tot, bsz;
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
		R[i] = i * bsz;
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
void update(int l, int r, int v)
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
int query(int l, int r, int c)
{
	int i, bl = belong[l], br = belong[r];
	ll res = LLONG_MIN, *t;
	if (bl == br)
	{
		for (i = l; i <= r; ++i)
			if (a[i] + tag[bl] < c && a[i] + tag[bl] > res)
				res = a[i] + tag[bl];
	}
	else
	{
		for (i = l; i <= R[bl]; ++i)
			if (a[i] + tag[bl] < c && a[i] + tag[bl] > res)
				res = a[i] + tag[bl];

		for (i = bl + 1; i <= br - 1; ++i)
		{
			t = lower_bound(blo + L[i], blo + R[i] + 1, c - tag[i]);
            // 1.查询的时候千万别忘了懒标记！！！
            // 2.对整块处理的时候LR数组直接用i而不是belong[i]！！！
			if (t == blo + L[i])
				continue;
			--t;
			res = max(res, *t + tag[i]); // 查询的时候千万别忘了懒标记！！！
		}

		for (i = L[br]; i <= r; ++i)
			if (a[i] + tag[br] < c && a[i] + tag[br] > res)
				res = a[i] + tag[br];
	}
	return res == LLONG_MIN ? -1 : res;
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
			cout << query(l, r, c) << '\n';
	}
	return 0;
}
