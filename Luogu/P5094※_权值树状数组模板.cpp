#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 5e4 + 10;
struct Node
{
	ll val;
	int pos;
} a[R];
int n;
ll t1[R], t2[R]; // t1到i为止坐标和，t2有多少的坐标小于i.pos
#define lowbit(x) (x & (-x))
void update(int p, int x, ll t[])
{
	while (p < R) // 当成桶了，所以不是<=n
	{
		t[p] += x;
		p += lowbit(p);
	}
}
ll query(int p, ll t[])
{
	ll res = 0;
	while (p > 0)
	{
		res += t[p];
		p -= lowbit(p);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int j;
	ll sum, cnt, sumpos = 0, ans = 0;
	cin >> n;
	for (j = 1; j <= n; ++j)
		cin >> a[j].val >> a[j].pos;
	sort(a + 1, a + n + 1, [](Node &x, Node &y)
		 { return x.val == y.val ? x.pos < y.pos : x.val < y.val; });
	for (j = 1; j <= n; ++j)
	{
		sum = query(a[j].pos, t1);									   // 小于当前点坐标的点的坐标和
		cnt = query(a[j].pos, t2);									   // 小于当前点的坐标的个数
		ans += (a[j].pos * cnt - sum) * a[j].val;					   // 小于的
		ans += ((sumpos - sum) - a[j].pos * (j - 1 - cnt)) * a[j].val; // 大于的
		update(a[j].pos, a[j].pos, t1);
		update(a[j].pos, 1, t2);
		sumpos += a[j].pos;
	}
	cout << ans << '\n';
	return 0;
}
