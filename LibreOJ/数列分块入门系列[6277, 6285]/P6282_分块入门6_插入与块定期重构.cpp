#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
vector<int> v[1000];
int a[N], n, L[N], R[N], tot;
void build()
{
	int sz, i, j;
	tot = sz = sqrt(n);
	if (n % sz)
	{
		++tot;
	}
	for (i = 1; i <= tot; ++i)
	{
		L[i] = (i - 1) * sz + 1;
		R[i] = i * sz;
	}
	R[tot] = n;
	for (i = 1; i <= tot; ++i)
	{
		for (j = L[i]; j <= R[i]; ++j)
		{
			v[i].push_back(a[j]);
		}
	}
}
void add(int x, int val)
{
	int i;
	for (i = 1; x > v[i].size(); ++i)
	{
		x -= v[i].size();
	}
	v[i].insert(v[i].begin() + x - 1, val);
}
void rebuild()
{
	n = 0;
	int i, j;
	for (i = 1; i <= tot; ++i)
	{
		for (int x : v[i])
		{
			a[++n] = x;
		}
		v[i].clear();
	}
	build();
}
int query(int x)
{
	int i;
	for (i = 1; x > v[i].size(); ++i)
	{
		x -= v[i].size();
	}
	return v[i][x - 1];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i, opt, l, r, c, rebcnt;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	m = n;
	build();
	rebcnt = sqrt(n);
	for (i = 1; i <= m; ++i)
	{
		cin >> opt >> l >> r >> c;
		if (opt == 0)
		{
			add(l, r);
		}
		else
		{
			cout << query(r) << '\n';
		}
		if (i % rebcnt == 0)
		{
			rebuild();
		}
	}
	return 0;
}
