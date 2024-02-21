#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Point
{
	double x, y;
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
	bool notthis(Point oth) const
	{
		return now.x != oth.x || now.y != oth.y;
	}
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define sqr(x) ((x) * (x))
#define dis(x1, y1, x2, y2) (sqr(x1 - x2) + sqr(y1 - y2))
map<pair<double, double>, bool> mp;
int tot;
double ansmin = DBL_MAX, ansmax = -1;
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
inline double guessmin(int k, Point p)
{
	if (!k)
	{
		return DBL_MAX;
	}
	double res = 0;
	if (p.x < t[k].mn[0])
	{
		res += sqr(t[k].mn[0] - p.x);
	}
	if (p.x > t[k].mx[0])
	{
		res += sqr(p.x - t[k].mx[0]);
	}
	if (p.y < t[k].mn[1])
	{
		res += sqr(t[k].mn[1] - p.y);
	}
	if (p.y > t[k].mx[1])
	{
		res += sqr(p.y - t[k].mx[1]);
	}
	return res;
}
inline double guessmax(int k, Point p)
{
	if (!k)
	{
		return -1;
	}
	double res = max(sqr(p.x - t[k].mn[0]), sqr(p.x - t[k].mx[0])) +
				 max(sqr(p.y - t[k].mn[1]), sqr(p.y - t[k].mx[1]));
	return res;
}
void querymin(int k, Point p)
{
	if (!k)
	{
		return;
	}
	if (t[k].notthis(p))
	{
		ansmin = min(ansmin, dis(p.x, p.y, t[k].now.x, t[k].now.y));
	}
	double lans = guessmin(lc(k), p), rans = guessmin(rc(k), p);
	if (lans < rans)
	{
		if (lans < ansmin)
		{
			querymin(lc(k), p);
		}
		if (rans < ansmin)
		{
			querymin(rc(k), p);
		}
	}
	else
	{
		if (rans < ansmin)
		{
			querymin(rc(k), p);
		}
		if (lans < ansmin)
		{
			querymin(lc(k), p);
		}
	}
}
void querymax(int k, Point p)
{
	if (!k)
	{
		return;
	}
	ansmax = max(ansmax, dis(p.x, p.y, t[k].now.x, t[k].now.y));
	double lans = guessmax(lc(k), p), rans = guessmax(rc(k), p);
	if (lans > rans)
	{
		if (lans > ansmax)
		{
			querymax(lc(k), p);
		}
		if (rans > ansmax)
		{
			querymax(rc(k), p);
		}
	}
	else
	{
		if (rans > ansmax)
		{
			querymax(rc(k), p);
		}
		if (lans > ansmax)
		{
			querymax(lc(k), p);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].x >> a[i].y;
		if (mp[{a[i].x, a[i].y}])
		{
			ansmin = 0;
		}
		mp[{a[i].x, a[i].y}] = true;
	}
	build(1, n, 0);
	for (i = 1; i <= n; ++i)
	{
		querymin(1, a[i]);
		querymax(1, a[i]);
	}
	cout << fixed << setprecision(2) << sqrt(ansmin) << ' ' << sqrt(ansmax) << flush;
	return 0;
}
