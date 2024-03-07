#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
struct Point
{
	int pos[3];
	bool operator<=(const Point &oth) const
	{
		for (int i = 0; i < 3; ++i)
		{
			if (pos[i] > oth.pos[i])
			{
				return false;
			}
		}
		return true;
	}
	bool operator==(const Point &oth) const
	{
		for (int i = 0; i < 3; ++i)
		{
			if (pos[i] ^ oth.pos[i])
			{
				return false;
			}
		}
		return true;
	}
} a[R];
struct _4D
{
	int pos[4];
} b[R];
struct Node
{
	int son[2], mn[3], mx[3], val, res;
	Point now;
	Node()
	{
		mn[0] = mn[1] = mn[2] = INT_MAX;
		mx[0] = mx[1] = mx[2] = INT_MIN;
	}
} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int tot, f[R]; // 使用f优化掉一维，不用f的话直接n次取最大
void pushup(int k)
{
	t[k].res = max({t[lc(k)].res, t[rc(k)].res, t[k].val});
}
void pushup_pos(int k) // update的时候不需要更新，所以这部分直接分离出来
{
	for (int i = 0; i < 3; ++i)
	{
		t[k].mn[i] = t[k].mx[i] = t[k].now.pos[i];
		if (lc(k))
		{
			t[k].mn[i] = min(t[k].mn[i], t[lc(k)].mn[i]);
			t[k].mx[i] = max(t[k].mx[i], t[lc(k)].mx[i]);
		}
		if (rc(k))
		{
			t[k].mn[i] = min(t[k].mn[i], t[rc(k)].mn[i]);
			t[k].mx[i] = max(t[k].mx[i], t[rc(k)].mx[i]);
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
	nth_element(b + l, b + mid, b + r + 1, [&](_4D x, _4D y)
				{ return x.pos[kd + 1] < y.pos[kd + 1]; });
	t[k].now = {b[mid].pos[1], b[mid].pos[2], b[mid].pos[3]};
	t[k].val = 0;
	lc(k) = build(l, mid - 1, (kd + 1) % 3);
	rc(k) = build(mid + 1, r, (kd + 1) % 3);
	pushup_pos(k);
	return k;
}
int query(int k, Point p)
{
	if (!k || t[k].mn[0] > p.pos[0] || t[k].mn[1] > p.pos[1] || t[k].mn[2] > p.pos[2])
	{
		return -1;
	}
	if (t[k].mx[0] <= p.pos[0] && t[k].mx[1] <= p.pos[1] && t[k].mx[2] <= p.pos[2])
	{
		return t[k].res;
	}
	int res = -1;
	if (t[k].now <= p)
	{
		res = t[k].val;
	}
	res = max({res, query(lc(k), p), query(rc(k), p)});
	return res;
}
void update(int k, Point p, int val)
{
	if (!k ||
		t[k].mn[0] > p.pos[0] || t[k].mx[0] < p.pos[0] ||
		t[k].mn[1] > p.pos[1] || t[k].mx[1] < p.pos[1] ||
		t[k].mn[2] > p.pos[2] || t[k].mx[2] < p.pos[2])
	{
		return;
	}
	if (t[k].now == p)
	{
		t[k].val = val;
		pushup(k);
		return;
	}
	update(lc(k), p, val);
	update(rc(k), p, val);
	pushup(k);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i, ans = -1;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> b[i].pos[0] >> b[i].pos[1] >> b[i].pos[2] >> b[i].pos[3];
	}
	sort(b + 1, b + n + 1, [&](_4D x, _4D y)
		{
			for (int i = 0; i < 4; ++i)
			{
				if (x.pos[i] ^ y.pos[i])
				{
					return x.pos[i] < y.pos[i];
				}
			}
			return false;
		});
	for (i = 1; i <= n; ++i)
	{
		a[i] = {b[i].pos[1], b[i].pos[2], b[i].pos[3]};
	}
	build(1, n, 0);
	for (i = 1; i <= n; ++i)
	{
		f[i] = max(query(1, a[i]), 0) + 1; // 在这个点之前有多少个<=当前点的点
		update(1, a[i], f[i]);
		ans = max(ans, f[i]);
	}
	cout << ans << flush;
	return 0;
}
