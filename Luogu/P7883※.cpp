// 本题加深了对KDT和卡常的理解
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 4e5 + 10;
struct Point
{
	int pos[2];
} a[R];
struct
{
	int son[2];
	Point now;
	int mn[2], mx[2];
	bool notthis(Point oth) const
	{
		return now.pos[0] != oth.pos[0] || now.pos[1] != oth.pos[1];
	}
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define sqr(x) (ll(x) * ll(x))
int tot;
ll ans = LLONG_MAX;
inline int read()
{
	int x = 0;
	bool fh = false;
	char c = getchar();
	while (!isdigit(c))
	{
		if (c == '-')
		{
			fh = true;
		}
		c = getchar();
	}
	while (isdigit(c))
	{
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return fh ? -x : x;
}
inline ll dis(Point a, Point b)
{
	return sqr(a.pos[0] - b.pos[0]) + sqr(a.pos[1] - b.pos[1]);
}
inline ll guess(int k, Point p) // p在结点k管理的区间中可能取得的最小值
{
	ll res = 0; // 如果p在矩形内，最小的距离可能是0
	for (int i = 0; i < 2; ++i)
	{
		if (p.pos[i] > t[k].mx[i]) // （i=0为例）如果p在结点k管理区域更靠右，那么距离至少是到矩形边框的距离
		{
			res += sqr(p.pos[i] - t[k].mx[i]);
		}
		if (p.pos[i] < t[k].mn[i]) // 同上
		{
			res += sqr(t[k].mn[i] - p.pos[i]);
		}
	}
	return res;
}
inline void pushup(int k)
{
	int ls = lc(k), rs = rc(k);
	for (int i = 0; i < 2; ++i)
	{
		t[k].mn[i] = t[k].mx[i] = t[k].now.pos[i];
		if (ls)
		{
			t[k].mn[i] = min(t[k].mn[i], t[ls].mn[i]);
			t[k].mx[i] = max(t[k].mx[i], t[ls].mx[i]);
		}
		if (rs)
		{
			t[k].mn[i] = min(t[k].mn[i], t[rs].mn[i]);
			t[k].mx[i] = max(t[k].mx[i], t[rs].mx[i]);
		}
	}
}
int build(int l, int r, int kd)
{
	if (l > r)
	{
		return 0;
	}
	int mid = (l + r) >> 1, k = ++tot;
	nth_element(a + l, a + mid, a + r + 1, [&](Point x, Point y)
				{ return x.pos[kd] < y.pos[kd]; });
	t[k].now = a[mid];
	lc(k) = build(l, mid - 1, kd ^ 1);
	rc(k) = build(mid + 1, r, kd ^ 1);
	pushup(k);
	return k;
}
void query(int k, Point p)
{
	if (!k)
	{
		return;
	}
	if (t[k].notthis(p))
	{
		ans = min(ans, dis(t[k].now, p));
	}
	ll lans = LLONG_MAX, rans = LLONG_MAX;
	if (lc(k))
	{
		lans = guess(lc(k), p);
	}
	if (rc(k))
	{
		rans = guess(rc(k), p);
	}
	if (lans < rans)
	{
		if (lans < ans)
		{
			query(lc(k), p);
		}
		if (rans < ans)
		{
			query(rc(k), p);
		}
	}
	else
	{
		if (rans < ans)
		{
			query(rc(k), p);
		}
		if (lans < ans)
		{
			query(lc(k), p);
		}
	}
}
int main()
{
	int n = read(), i;
	for (i = 1; i <= n; ++i)
	{
		a[i].pos[0] = read();
		a[i].pos[1] = read();
	}
	sort(a + 1, a + n + 1, [](Point &x, Point &y)
		 { return x.pos[0] == y.pos[0] ? x.pos[1] < y.pos[1] : x.pos[0] < y.pos[0]; }); // 优化建树
	build(1, n, 0);
	for (i = 1; i <= n; ++i)
	{
		query(1, a[i]);
	}
	printf("%lld", ans);
	return 0;
}
