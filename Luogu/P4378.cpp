// 有思维含量：找到原数组中在这个位置之前的比它大的数的个数+1
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Node
{
	int val, pos;
} a[R];
int n;
int t[R];
#define lowbit(x) (x & (-x))
void update(int p)
{
	while (p <= n)
	{
		t[p] += 1;
		p += lowbit(p);
	}
}
int query(int p)
{
	int res = 0;
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
	int i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].val;
		a[i].pos = i;
	}
	sort(a + 1, a + n + 1, [](Node &u, Node &v)
		 { return u.val == v.val ? u.pos > v.pos : u.val > v.val; });
	int ans = 0;
	for (i = 1; i <= n; ++i)
	{
		ans = max(ans, query(a[i].pos) + 1);
		update(a[i].pos);
	}
	cout << ans << '\n';
	return 0;
}
