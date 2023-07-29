#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 5e4 + 10, B = 2230; // 设置块大小为sqrt(n)，n/sqrt(n)=2230
struct Block
{
	int l, r;
	// ll sum; // 由于不涉及区间和，所以sum可省略
	ll tag;
} b[B];
ll a[R];
int bsz, n, tot, belong[R];
void build()
{
	bsz = sqrt(n);
	tot = n / bsz;
	if (n % bsz)
		++tot;
	int i;
	for (i = 1; i <= n; ++i)
	{
		belong[i] = (i - 1) / bsz + 1;
		// b[belong[i]].sum += a[i];
	}
	for (i = 1; i <= tot; ++i)
	{
		b[i].l = (i - 1) * bsz + 1;
		b[i].r = i * bsz;
		// 公式可先推出ri=bsz*i，ri-li+1=bsz
		// 移项得li=(i-1)*bsz+1
	}
	b[tot].r = n; // 特例
}
void update(int l, int r, int v)
{
	int i;
	if (belong[l] == belong[r])
		for (i = l; i <= r; ++i)
		{
			// b[belong[i]].sum += v;
			a[i] += v;
		}
	else
	{
		for (i = l; i <= b[belong[l]].r; ++i) // 枚举元素
		{
			// b[belong[i]].sum += v;
			a[i] += v;
		}
		for (i = belong[l] + 1; i <= belong[r] - 1; ++i) // 枚举块
			b[i].tag += v;
		for (i = b[belong[r]].l; i <= r; ++i) // 枚举元素
		{
			// b[belong[i]].sum += v;
			a[i] += v;
		}
	}
}
int query(int p) { return a[p] + b[belong[p]].tag; }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int op, l, r, c;
	cin >> n;
	for (int j = 1; j <= n; ++j)
		cin >> a[j];
	build();
	while (n--)
	{
		cin >> op >> l >> r >> c;
		if (op == 0)
			update(l, r, c);
		else
			cout << query(r) << '\n';
	}
	return 0;
}
