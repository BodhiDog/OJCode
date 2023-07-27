// 离散化
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct
{
	int son[2], l, r, len, tag;
	ll res;
} t[R * 2 * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int ptot, root;
struct Line
{
	int x, up, down, val;
	bool operator<(const Line &a) const { return x < a.x; }
} line[R * 2];
vector<int> yp;
void build(int &k, int l, int r)
{
	k = ++ptot;
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		t[k].len = yp[l] - yp[l - 1];
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
	t[k].len = t[lc(k)].len + t[rc(k)].len;
}
void update(int k, int x, int y, int val)
{
	if (x <= t[k].l && y >= t[k].r)
	{
		t[k].tag += val;
		t[k].res = (t[k].tag ? t[k].len : t[lc(k)].res + t[rc(k)].res);
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (x <= mid)
		update(lc(k), x, y, val);
	if (y > mid)
		update(rc(k), x, y, val);
	t[k].res = (t[k].tag ? t[k].len : t[lc(k)].res + t[rc(k)].res);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, x1, y1, x2, y2, tot = 0, up, down;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		line[++tot] = {.x = x1, .up = y2, .down = y1, .val = 1};
		line[++tot] = {.x = x2, .up = y2, .down = y1, .val = -1};
		yp.push_back(y1), yp.push_back(y2);
	}
	sort(yp.begin(), yp.end());
	sort(line + 1, line + tot + 1);
	int sz = yp.erase(unique(yp.begin(), yp.end()), yp.end()) - yp.begin();
	build(root, 1, sz - 1); // 有sz条线，那么这sz条线就构成了sz-1个区间，分别为[1,2],[2,3],[3,4],...,[sz-1,sz]
	ll ans = 0, last = 0;
	for (j = 1; j <= (n << 1); ++j)
	{
		ans += (line[j].x - last) * t[root].res, last = line[j].x;
		up = lower_bound(yp.begin(), yp.end(), line[j].up) - yp.begin();
		down = lower_bound(yp.begin(), yp.end(), line[j].down) - yp.begin();
		update(root, down + 1, up, line[j].val);
	}
	cout << ans << '\n';
	return 0;
}
