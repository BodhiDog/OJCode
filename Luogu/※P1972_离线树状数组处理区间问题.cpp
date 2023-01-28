#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
struct Qry
{
	int l, r, x;
	bool operator<(const Qry &a) const { return r < a.r; }
} q[R];
int a[R], tree[R], ans[R], last[R], n;
// 树状数组维护[l,r]内的不同数字的个数
// last记录上一个当前数出现的位置
int lowbit(int x) { return x & (-x); }
void add(int pos, int v)
{
	for (int j = pos; j <= n; j += lowbit(j))
		tree[j] += v;
}
int query(int pos)
{
	int ans = 0;
	for (int j = pos; j >= 1; j -= lowbit(j))
		ans += tree[j];
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, j;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	cin >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r;
		q[j].x = j;
	}
	sort(q + 1, q + m + 1);
	int begin = 1;
	for (int i = 1; i <= m; ++i)
	{
		for (j = begin; j <= q[i].r; ++j)
		{
			if (last[a[j]])
				add(last[a[j]], -1);
			add(j, 1);
			last[a[j]] = j;
		}
		ans[q[i].x] = query(q[i].r) - query(q[i].l - 1);
		begin = q[i].r + 1;
	}
	for (j = 1; j <= m; ++j)
		cout << ans[j] << '\n';
	return 0;
}