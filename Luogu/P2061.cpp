#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 4e4 + 10;
struct
{
	int son[2], tag;
	ll val;
} t[R * 40];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
struct Line
{
	ll x, h, val;
	bool operator<(const Line &oth) const
	{
		return x < oth.x;
	}
} l[R * 2];
int root, tot;
void pushup(int &k, int &l, int &r)
{
	if (t[k].tag)
	{
		t[k].val = r - l + 1;
	}
	else
	{
		t[k].val = t[lc(k)].val + t[rc(k)].val;
	}
}
void update(int &k, int l, int r, int x, int y, int v)
{
	if (!k)
	{
		k = ++tot;
	}
	if (x <= l && y >= r)
	{
		t[k].tag += v;
		pushup(k, l, r);
		return;
	}
	int mid = (l + r) >> 1;
	if (x <= mid)
	{
		update(lc(k), l, mid, x, y, v);
	}
	if (y > mid)
	{
		update(rc(k), mid + 1, r, x, y, v);
	}
	pushup(k, l, r);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, ltot = 0, a, b;
	ll minh = 0, maxh = -1, h;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> a >> b >> h;
		l[++ltot] = {a, h, 1};
		l[++ltot] = {b, h, -1};
		maxh = max(maxh, h);
	}
	sort(l + 1, l + ltot + 1);
	ll ans = 0, last = 0;
	for (j = 1; j <= ltot; ++j)
	{
		ans += (l[j].x - last) * t[root].val;
		last = l[j].x;
		update(root, minh, maxh, 1, l[j].h, l[j].val);
	}
	cout << ans << '\n';
	return 0;
}
