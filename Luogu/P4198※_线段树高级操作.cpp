#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
struct
{
	int son[2], l, r, res; // res表示的是从区间头能够看到的楼房的数量，而不是从(0,0)
	double maxk;
} t[N * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int tot, root;
void build(int &k, int l, int r)
{
	k = ++tot;
	t[k].l = l, t[k].r = r;
	if (l == r)
	{
		return;
	}
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
}
int query(int k, double maxk) // 核心操作，pushup时调用
{
	if (t[k].maxk <= maxk) // 没有能够看见的
	{
		return 0;
	}
	else if (t[k].l == t[k].r) // 叶子结点，大于maxk就能看见，否则就看不见
	{
		return t[k].maxk > maxk;
	}
	else if (t[lc(k)].maxk <= maxk) // 左边一定看不见，但是最大斜率又大于maxk，说明右区间一定有能看见的
	{
		return query(rc(k), maxk);
	}
	else // 左区间有能够看见的
	{
		return query(lc(k), maxk) + t[k].res - t[lc(k)].res;
		// 注意res的含义：从区间头能够看到的楼房的数量。如果直接加上t[rc(k)].res就不对了。想要计算从k的头看到的楼房数量就需要写成t[k].res - t[lc(k)].res
	}
	// 最后两个递归原型是return query(lc(k), maxk) + query(rc(k), max(maxk, t[lc(k)].maxk))，但是由于会造成极高的时间开销（最劣O(n)），所以进行了优化
}
void pushup(int k)
{
	t[k].maxk = max(t[lc(k)].maxk, t[rc(k)].maxk);
	t[k].res = t[lc(k)].res + query(rc(k), t[lc(k)].maxk);
}
void update(int k, int p, double x)
{
	if (t[k].l == p && t[k].r == p)
	{
		t[k].maxk = x;
		t[k].res = 1;
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
	{
		update(lc(k), p, x);
	}
	else
	{
		update(rc(k), p, x);
	}
	pushup(k);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y;
	cin >> n >> m;
	build(root, 1, n);
	while (m--)
	{
		cin >> x >> y;
		update(root, x, double(y) / x);
		cout << t[root].res << '\n';
	}
	return 0;
}
