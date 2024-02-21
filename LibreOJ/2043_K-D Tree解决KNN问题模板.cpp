#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct Point
{
	ll x, y;
	bool operator<(const Point &oth) const
	{
		return x == oth.x ? y < oth.y : x < oth.x;
	}
} a[R];
struct
{
	int son[2];
	Point now;
	double mn[2], mx[2];
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define sqr(x) ((x) * (x))
#define dis(x1, y1, x2, y2) (sqr(x1 - x2) + sqr(y1 - y2))
priority_queue<ll, vector<ll>, greater<ll>> q;
int tot;
inline void pushup(int k)
{
	t[k].mn[0] = t[k].mx[0] = t[k].now.x;
	t[k].mn[1] = t[k].mx[1] = t[k].now.y;
	int ls = lc(k), rs = rc(k);
	if (ls)
	{
		t[k].mn[0] = min(t[k].mn[0], t[ls].mn[0]);
		t[k].mx[0] = max(t[k].mx[0], t[ls].mx[0]);
		t[k].mn[1] = min(t[k].mn[1], t[ls].mn[1]);
		t[k].mx[1] = max(t[k].mx[1], t[ls].mx[1]);
	}
	if (rs)
	{
		t[k].mn[0] = min(t[k].mn[0], t[rs].mn[0]);
		t[k].mx[0] = max(t[k].mx[0], t[rs].mx[0]);
		t[k].mn[1] = min(t[k].mn[1], t[rs].mn[1]);
		t[k].mx[1] = max(t[k].mx[1], t[rs].mx[1]);
	}
}
int build(int l, int r, int kd)
{
	if (l > r)
	{
		return 0;
	}
	int mid = (l + r) >> 1, k = ++tot;
	nth_element(a + l, a + mid, a + r + 1);
	t[k].now = a[mid];
	lc(k) = build(l, mid - 1, kd ^ 1);
	rc(k) = build(mid + 1, r, kd ^ 1);
	pushup(k);
	return k;
}
inline ll guess(int k, Point p)
{
	if (!k)
	{
		return -1;
	}
	ll res = max(sqr(p.x - t[k].mn[0]), sqr(p.x - t[k].mx[0])) +
			 max(sqr(p.y - t[k].mn[1]), sqr(p.y - t[k].mx[1]));
	return res;
}
void query(int k, Point p)
{
	if (!k)
	{
		return;
	}
	ll temp = dis(p.x, p.y, t[k].now.x, t[k].now.y);
	if (temp > q.top())
	{
		q.pop();
		q.push(temp);
	}
	ll lans = guess(lc(k), p), rans = guess(rc(k), p);
	if (lans > rans)
	{
		if (lans > q.top())
		{
			query(lc(k), p);
		}
		if (rans > q.top())
		{
			query(rc(k), p);
		}
	}
	else
	{
		if (rans > q.top())
		{
			query(rc(k), p);
		}
		if (lans > q.top())
		{
			query(lc(k), p);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, i;
	cin >> n >> k;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].x >> a[i].y;
	}
	build(1, n, 0);
	for (i = 1; i <= k + k; ++i)
	{
		q.push(0);
	}
	for (i = 1; i <= n; ++i)
	{
		query(1, a[i]);
	}
	cout << q.top() << flush;
	return 0;
}
