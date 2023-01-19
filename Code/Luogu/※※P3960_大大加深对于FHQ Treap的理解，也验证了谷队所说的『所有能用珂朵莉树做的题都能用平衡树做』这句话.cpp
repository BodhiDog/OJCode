// 程序中有任何不理解的部分都可举例验证
#include <bits/stdc++.h>
using namespace std;

const int R = 3e5 + 10;
using ll = long long;
struct
{
	int l, r, sz, key, len;
	ll start;  // 就是left_bound，该区间左边界的结点的编号
} tree[R * 5]; // 经过实验发现，一次操作之后点的数量会增加4个，也就是增加4*3*1e5个点，加上原来存在的点总计15e5个点，也就是R*5个点
mt19937 rd;
int tot, root[R];
int crt(ll x, int len)
{
	if (len == 0)
		return 0;
	tree[++tot].start = x;				// 每个大点的左边界
	tree[tot].len = tree[tot].sz = len; // 这一行的长度
	tree[tot].key = rd();
	return tot;
}
#define lc tree[k].l
#define rc tree[k].r
void pushup(int k)
{
	tree[k].sz = tree[lc].sz + tree[rc].sz + tree[k].len; // size记录的是这棵子树管理的总区间大小，而len记录的是当前结点管理的区间大小
}
void split(int k, int sz, int &x, int &y, int &z)
{
	if (k == 0)
	{
		x = y = z = 0;
		return;
	}
	if (tree[lc].sz >= sz) // 等于也就是要找的点刚好在左子树的最右边
	{
		z = k;
		split(lc, sz, x, y, lc);
	}
	else
	{
		sz -= tree[lc].sz;
		if (sz <= tree[k].len) // sz减去左子树管理的区间后刚好在这个点所管理的区间内
		{
			x = lc;
			y = k;
			z = rc;
			lc = rc = 0; // 解除中间这棵树（要分出去的这棵树）与其他树的联系，使其成为一个独立的点
		}
		else
		{
			x = k;
			sz -= tree[k].len;
			split(rc, sz, rc, y, z);
		}
	}
	pushup(k);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	if (tree[x].key < tree[y].key) // 小根堆
	{
		tree[x].r = merge(tree[x].r, y);
		pushup(x);
		return x;
	}
	else
	{
		tree[y].l = merge(x, tree[y].l);
		pushup(y);
		return y;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, y;
	ll m, x;
	cin >> n >> m >> q;
	int j;
	for (x = 1; x <= n; ++x)
	{
		root[int(x)] = crt((x - 1) * m + 1, m - 1); // 存每一行的第一个数字
		root[0] = merge(root[0], crt(x * m, 1));	// 作为第m列
	}
	int a, b, c;
	for (j = 1; j <= q; ++j)
	{
		cin >> x >> y;
		if (y == m)
		{
			split(root[0], x, a, b, c); // 最后一棵树每一个点都是独立的，可直接得结果
			cout << tree[b].start << '\n';
			root[0] = merge(merge(a, c), b); // 塞到最后
		}
		else
		{

			split(root[0], x, a, b, c);
			root[0] = merge(a, c);
			root[x] = merge(root[x], b);
			split(root[x], y, a, b, c); // 取出的b可能是一棵树而非一个点，因此需要特殊处理
			y -= tree[a].sz;			// 此处y的含义变为：y在树b中是第几个数
			cout << tree[b].start + y - 1 << '\n';
			root[0] = merge(root[0], crt(tree[b].start + y - 1, 1));
			root[x] = merge(merge(a, crt(tree[b].start, y - 1)), merge(crt(tree[b].start + y, tree[b].len - y), c));
		}
	}
	return 0;
}