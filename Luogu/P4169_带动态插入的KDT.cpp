#include <bits/stdc++.h>
using namespace std;

const int R = 6e5 + 10;
const double alpha = 0.75;
int KD;
struct Point
{
	int pos[2];
	bool operator<(const Point &oth) const
	{
		return pos[KD] < oth.pos[KD];
	}
} a[R];
struct Node
{
	int son[2], sz, mn[2], mx[2];
	Point now;
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define dis(x1, y_1, x2, y2) (abs((x1) - (x2)) + abs((y_1) - (y2)))
int sta[R], top, tot, root, cnt, ans;
inline int newnode()
{
	if (top)
	{
		return sta[top--];
	}
	else
	{
		return ++tot;
	}
}
inline void pushup(int k)
{
	int ls = lc(k), rs = rc(k);
	t[k].sz = t[ls].sz + t[rs].sz + 1;
	t[k].mn[0] = t[k].mx[0] = t[k].now.pos[0];
	t[k].mn[1] = t[k].mx[1] = t[k].now.pos[1];
	if (ls)
	{
		t[k].mn[0] = min(t[ls].mn[0], t[k].mn[0]);
		t[k].mx[0] = max(t[ls].mx[0], t[k].mx[0]);
		t[k].mn[1] = min(t[ls].mn[1], t[k].mn[1]);
		t[k].mx[1] = max(t[ls].mx[1], t[k].mx[1]);
	}
	if (rs)
	{
		t[k].mn[0] = min(t[rs].mn[0], t[k].mn[0]);
		t[k].mx[0] = max(t[rs].mx[0], t[k].mx[0]);
		t[k].mn[1] = min(t[rs].mn[1], t[k].mn[1]);
		t[k].mx[1] = max(t[rs].mx[1], t[k].mx[1]);
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
	if (t[lc(k)].sz > t[k].sz * alpha || t[rc(k)].sz > t[k].sz * alpha)
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
	if (p.pos[kd] < t[k].now.pos[kd]) // 在当前维度下判断！！！
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
inline int guess(int k, Point p)
{
	if (!k)
	{
		return INT_MAX;
	}
	int res = 0;
	if (p.pos[0] < t[k].mn[0])
	{
		res += t[k].mn[0] - p.pos[0];
	}
	if (p.pos[0] > t[k].mx[0])
	{
		res += p.pos[0] - t[k].mx[0];
	}
	if (p.pos[1] < t[k].mn[1])
	{
		res += t[k].mn[1] - p.pos[1];
	}
	if (p.pos[1] > t[k].mx[1])
	{
		res += p.pos[1] - t[k].mx[1];
	}
	return res;
}
void query(int k, Point p)
{
	if (!k)
	{
		return;
	}
	ans = min(ans, dis(t[k].now.pos[0], t[k].now.pos[1], p.pos[0], p.pos[1]));
	int lans = guess(lc(k), p), rans = guess(rc(k), p);
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
	int n, m, op, i, x, y;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].pos[0] >> a[i].pos[1];
	}
	root = build(1, n, 0);
	while (m--)
	{
		cin >> op >> x >> y;
		if (op == 1)
		{
			insert(root, {x, y}, 0);
		}
		else
		{
			ans = INT_MAX;
			query(root, {x, y});
			cout << ans << '\n';
		}
	}
	return 0;
}
