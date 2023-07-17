// 树状数组
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 5e5 + 10;
int n;
struct Node
{
	int pos, val;
} a[R];
ll t[R];
#define lowbit(x) (x & (-x))
void update(int p)
{
	while (p <= n)
	{
		t[p] += 1;
		p += lowbit(p);
	}
}
ll query(int p)
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
	cin >> n;
	int i;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].val;
		a[i].pos = i;
	}
	sort(a + 1, a + n + 1, [](Node &x, Node &y)
		 { return x.val == y.val ? x.pos > y.pos : x.val > y.val; }); // 举例验证！！！
	ll ans = 0;
	for (i = 1; i <= n; ++i)
	{
		ans += query(a[i].pos);
		update(a[i].pos);
	}
	cout << ans << '\n';
	return 0;
}

// 归并排序求（不常用）
#include <bits/stdc++.h>
using namespace std;

int a[500010], t[500010];
long long ans; // 十年OI一场空，不开longlong见祖宗
void mergesort(int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int mid = l + r >> 1, i = l, j = mid + 1, p = l;
	mergesort(l, mid);
	mergesort(mid + 1, r);
	while (i <= mid && j <= r)
	{
		if (a[i] <= a[j])
		{
			t[p] = a[i];
			++p, ++i;
		}
		else
		{
			ans += mid - i + 1;
			t[p] = a[j];
			++p, ++j;
		}
	}
	while (i <= mid)
	{
		t[p] = a[i];
		++p, ++i;
	}
	while (j <= r)
	{
		t[p] = a[j];
		++p, ++j;
	}
	for (j = l; j <= r; ++j)
	{
		a[j] = t[j];
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	for (register int j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	mergesort(1, n);
	cout << ans;
	return 0;
}