// 全读入再build
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int KD, tot;
int ansmin, ansmax;
struct Point
{
	int pos[2];
	bool operator<(const Point &oth) const
	{
		return pos[KD] < oth.pos[KD];
	}
	bool operator!=(const Point &oth) const
	{
		return pos[0] != oth.pos[0] || pos[1] != oth.pos[1];
	}
} a[R];
struct Node
{
	int son[2];
	int mn[2], mx[2];
	Point now;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define dis(x1, y1, x2, y2) (abs((x1) - (x2)) + abs((y1) - (y2)))
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
	KD = kd;
	nth_element(a + l, a + mid, a + r + 1);
	t[k].now = a[mid];
	lc(k) = build(l, mid - 1, kd ^ 1);
	rc(k) = build(mid + 1, r, kd ^ 1);
	pushup(k);
	return k;
}
int guessmin(int k, Point p)
{
	if (!k)
	{
		return INT_MAX;
	}
	int res = 0;
	for (int i = 0; i < 2; ++i)
	{
		if (p.pos[i] < t[k].mn[i])
		{
			res += t[k].mn[i] - p.pos[i];
		}
		if (p.pos[i] > t[k].mx[i])
		{
			res += p.pos[i] - t[k].mx[i]; // mx别写成mn了！！！
		}
	}
	return res;
}
int guessmax(int k, Point p)
{
	if (!k)
	{
		return -1;
	}
	int res = 0;
	for (int i = 0; i < 2; ++i)
	{
		res += max(abs(t[k].mn[i] - p.pos[i]), abs(t[k].mx[i] - p.pos[i]));
	}
	return res;
}
void querymin(int k, Point p)
{
	if (!k)
	{
		return;
	}
	if (p != t[k].now)
	{
		ansmin = min(ansmin, dis(p.pos[0], p.pos[1], t[k].now.pos[0], t[k].now.pos[1]));
	}
	int lans = guessmin(lc(k), p), rans = guessmin(rc(k), p);
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
	ansmax = max(ansmax, dis(p.pos[0], p.pos[1], t[k].now.pos[0], t[k].now.pos[1]));
	int lans = guessmax(lc(k), p), rans = guessmax(rc(k), p);
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
	int ans = INT_MAX;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].pos[0] >> a[i].pos[1];
	}
	build(1, n, 0);
	for (i = 1; i <= n; ++i)
	{
		ansmin = INT_MAX, ansmax = -1;
		querymin(1, a[i]), querymax(1, a[i]);
		ans = min(ans, ansmax - ansmin);
	}
	cout << ans << flush;
	return 0;
}

// 边读入边insert（稍微慢一点）
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
const double alpha = 0.75;
int KD, root, ansmin, ansmax, cnt, sta[R], top, tot;
struct Point
{
	int pos[2];
	bool operator<(const Point &oth) const
	{
		return pos[KD] < oth.pos[KD];
	}
	bool operator!=(const Point &oth) const
	{
		return pos[0] != oth.pos[0] || pos[1] != oth.pos[1];
	}
} a[R], b[R];
struct Node
{
	int son[2], mn[2], mx[2], sz;
	Point now;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define dis(x1, y1, x2, y2) (abs((x1) - (x2)) + abs((y1) - (y2)))
int newnode()
{
	return top ? sta[top--] : ++tot;
}
inline void pushup(int k)
{
	int ls = lc(k), rs = rc(k);
	t[k].sz = t[ls].sz + t[rs].sz + 1;
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
	int mid = (l + r) >> 1, k = newnode();
	KD = kd;
	nth_element(a + l, a + mid, a + r + 1);
	t[k].now = a[mid];
	lc(k) = build(l, mid - 1, kd ^ 1);
	rc(k) = build(mid + 1, r, kd ^ 1);
	pushup(k);
	return k;
}
void flat(int k)
{
	if (!k)
	{
		return;
	}
	a[++cnt] = t[k].now;
	sta[++top] = k;
	flat(lc(k));
	flat(rc(k));
}
void check(int &k, int kd)
{
	if (t[k].sz * alpha < t[lc(k)].sz || t[k].sz * alpha < t[rc(k)].sz)
	{
		cnt = 0;
		flat(k);
		k = build(1, cnt, kd);
	}
}
void insert(int &k, Point p, int kd)
{
	if (!k)
	{
		k = newnode();
		t[k].son[0] = t[k].son[1] = 0;
		t[k].now = p;
		pushup(k);
		return;
	}
	if (p.pos[kd] < t[k].now.pos[kd])
	{
		insert(lc(k), p, kd ^ 1);
	}
	else
	{
		insert(rc(k), p, kd ^ 1);
	}
	pushup(k);
	check(k, kd);
}
int guessmin(int k, Point p)
{
	if (!k)
	{
		return INT_MAX;
	}
	int res = 0;
	for (int i = 0; i < 2; ++i)
	{
		if (p.pos[i] < t[k].mn[i])
		{
			res += t[k].mn[i] - p.pos[i];
		}
		if (p.pos[i] > t[k].mx[i])
		{
			res += p.pos[i] - t[k].mx[i];
		}
	}
	return res;
}
int guessmax(int k, Point p)
{
	if (!k)
	{
		return -1;
	}
	int res = 0;
	for (int i = 0; i < 2; ++i)
	{
		res += max(abs(t[k].mx[i] - p.pos[i]), abs(t[k].mn[i] - p.pos[i]));
	}
	return res;
}
void querymin(int k, Point p)
{
	if (!k)
	{
		return;
	}
	if (t[k].now != p)
	{
		ansmin = min(ansmin, dis(p.pos[0], p.pos[1], t[k].now.pos[0], t[k].now.pos[1]));
	}
	int lans = guessmin(lc(k), p), rans = guessmin(rc(k), p);
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
	ansmax = max(ansmax, dis(p.pos[0], p.pos[1], t[k].now.pos[0], t[k].now.pos[1]));
	int lans = guessmax(lc(k), p), rans = guessmax(rc(k), p);
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
	int n, i, ans = INT_MAX;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> b[i].pos[0] >> b[i].pos[1];
		insert(root, b[i], 0);
	}
	for (i = 2; i <= n; ++i)
	{
		ansmin = INT_MAX, ansmax = -1;
		querymin(root, b[i]), querymax(root, b[i]);
		ans = min(ans, ansmax - ansmin);
	}
	cout << ans << flush;
	return 0;
}
