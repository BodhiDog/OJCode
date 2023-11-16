#include <bits/stdc++.h>
using namespace std;

#define lowbit(x) (x & (-x))
using ll = long long;
const int R = 2e5 + 10;
int n;
ll a[R], ch[R], t[R];
void update(int x, ll val)
{
	while (x <= n)
	{
		t[x] += val;
		x += lowbit(x);
	}
}
ll query(int x)
{
	ll res = 0;
	while (x > 0)
	{
		res += t[x];
		x -= lowbit(x);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int q, i, x, y;
	ll s, t, z, b = 0, ax_1, ax, ay, ay_1;
	cin >> n >> q >> s >> t;
	for (i = 0; i <= n; ++i)
	{
		cin >> a[i];
		if (i)
		{
			ch[i] = a[i] - a[i - 1];
		}
	}
	for (i = 1; i <= n; ++i)
	{
		update(i, ch[i]);
	}
	for (i = 1; i <= n; ++i)
	{
		if (a[i - 1] < a[i])
		{
			b = b - s * (a[i] - a[i - 1]);
		}
		else
		{
			b = b + t * (a[i - 1] - a[i]);
		}
	}
	while (q--)
	{
		cin >> x >> y >> z;
		ax_1 = query(x - 1), ax = query(x);
		if (ax_1 < ax)
		{
			b = b + s * (ax - ax_1); // undo
		}
		else
		{
			b = b - t * (ax_1 - ax); // undo
		}
		ay = query(y), ay_1 = query(y + 1);
		if (ay < ay_1)
		{
			b = b + s * (ay_1 - ay);
		}
		else
		{
			b = b - t * (ay - ay_1);
		}
		update(x, z), update(y + 1, -z);
		ax_1 = query(x - 1), ax = query(x);
		if (ax_1 < ax)
		{
			b = b - s * (ax - ax_1); // undo
		}
		else
		{
			b = b + t * (ax_1 - ax); // undo
		}
		ay = query(y), ay_1 = query(y + 1);
		if (ay < ay_1)
		{
			b = b - s * (ay_1 - ay);
		}
		else
		{
			b = b + t * (ay - ay_1);
		}
		cout << b << '\n';
	}
	return 0;
}
