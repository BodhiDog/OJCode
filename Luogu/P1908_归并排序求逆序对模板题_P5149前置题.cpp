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