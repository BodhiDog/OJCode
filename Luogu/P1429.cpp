// 直接建树然后判断（由于输入数据可能有重复点，所以要判重！！！）
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct Point
{
	double pos[2];
} a[R];
struct
{
	int son[2], sz;
	Point now;
	double mn[2], mx[2];
	bool notthis(const Point &oth) const
	{
		return now.pos[0] != oth.pos[0] || now.pos[1] != oth.pos[1];
	}
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define sqr(x) ((x) * (x))
map<pair<double, double>, bool> mp;
int tot;
double ans = DBL_MAX;
double dis(Point a, Point b)
{
	return sqr(a.pos[0] - b.pos[0]) + sqr(a.pos[1] - b.pos[1]);
}
double guess(int k, Point p) // p在结点k管理的区间中可能取得的最小值
{
	double res = 0; // 如果p在矩形内，最小的距离可能是0
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
void pushup(int k)
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
	nth_element(a + l, a + mid, a + r + 1, [&](Point &x, Point &y)
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
	double lans = DBL_MAX, rans = DBL_MAX;
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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].pos[0] >> a[i].pos[1];
		if (mp[{a[i].pos[0], a[i].pos[1]}])
		{
			cout << "0.0000" << flush;
			return 0;
		}
		mp[{a[i].pos[0], a[i].pos[1]}] = true;
	}
	build(1, n, 0);
	for (i = 1; i <= n; ++i)
	{
		query(1, a[i]);
	}
	cout << fixed << setprecision(4) << sqrt(ans) << flush;
	return 0;
}

// 一个个先检测，再插入 
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
int root, cur;
double ans = DBL_MAX;
template <int K>
class KDT
{
public:
	struct Node
	{
		int son[2];
		double now[K], mn[K], mx[K];
	} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
	double dis(int a, int b)
	{
		double res = 0;
		for (int i = 0; i < K; ++i)
		{
			res += (t[a].now[i] - t[b].now[i]) * (t[a].now[i] - t[b].now[i]);
		}
		return res;
	}
	double possans(int k) // 估价函数，可能的最近距离
	{
		if (!k)
		{
			return DBL_MAX;
		}
		double res = 0, x;
		for (int i = 0; i < K; ++i)
		{
			x = max(t[cur].now[i] - t[k].mx[i], 0.0) + max(t[k].mn[i] - t[cur].now[i], 0.0);
			res += x * x;
		}
		return res;
	}
	void update(int k)
	{
		for (int i = 0; i < K; ++i)
		{
			t[k].mn[i] = min(t[k].mn[i], t[cur].mn[i]);
			t[k].mx[i] = max(t[k].mx[i], t[cur].mx[i]);
		}
	}
	void query(int k)
	{
		if (!k)
		{
			return;
		}
		ans = min(ans, dis(k, cur));
		double lans = possans(lc(k)), rans = possans(rc(k));
		if (lans < rans)
		{
			if (lans < ans)
			{
				query(lc(k));
			}
			if (rans < ans)
			{
				query(rc(k));
			}
		}
		else // rans<lans
		{
			if (rans < ans)
			{
				query(rc(k));
			}
			if (lans < ans)
			{
				query(lc(k));
			}
		}
	}
	void insert(int &k, int kd)
	{
		if (!k)
		{
			k = cur;
			return;
		}
		if (t[cur].now[kd] <= t[k].now[kd])
		{
			insert(lc(k), (kd + 1) % K);
		}
		else
		{
			insert(rc(k), (kd + 1) % K);
		}
		update(k);
	}
};
KDT<2> t;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> t.t[i].now[0] >> t.t[i].now[1];
		t.t[i].mn[0] = t.t[i].mx[0] = t.t[i].now[0];
		t.t[i].mn[1] = t.t[i].mx[1] = t.t[i].now[1];
	}
	random_shuffle(t.t + 1, t.t + n + 1);
	for (cur = 1; cur <= n; ++cur)
	{
		t.query(root);
		t.insert(root, 0);
	}
	cout << fixed << setprecision(4) << sqrt(ans) << flush;
	return 0;
}
