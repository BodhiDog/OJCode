#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
const double alpha = 0.75;
int sta[R], top, KD;
template <int K>
class KDT
{
public:
	int tot = 0, cnt;
	struct Point
	{
		int pos[K], val;
		bool operator<(const Point &oth) const
		{
			return pos[KD] < oth.pos[KD];
		}
		bool at(const Point &A, const Point &B) const // 判断当前点是否在AB内
		{
			for (int i = 0; i < K; ++i)
			{
				if (pos[i] < A.pos[i] || pos[i] > B.pos[i])
				{
					return false;
				}
			}
			return true;
		}
	} a[R];
	struct Node
	{
		int son[2], ans, sz, mn[K], mx[K];
		Point now;
		bool in(const Point &A, const Point &B) const // 管辖的区域是否完全包含在AB中。AB分别是大区域的左下和右上
		{
			for (int i = 0; i < K; ++i)
			{
				if (mn[i] < A.pos[i] || mx[i] > B.pos[i]) // 只要有一个边出去了就不是完全包含，就返回false
				{
					return false;
				}
			}
			return true;
		}
		bool out(const Point &A, const Point &B) const // 管辖区域与AB交集是否为空
		{
			for (int i = 0; i < K; ++i)
			{
				if (mx[i] < A.pos[i] || mn[i] > B.pos[i]) // 只要有一个边出去了就是完全没有交集，就返回true
				{
					return true;
				}
			}
			return false;
		}
		void reset()
		{
			son[0] = son[1] = ans = sz = now.val = 0;
			for (int i = 0; i < K; ++i)
			{
				mn[i] = mx[i] = now.pos[i] = 0;
			}
		}
	} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
	int newnode()
	{
		if (top)
		{
			t[sta[top]].reset();
			return sta[top--];
		}
		else
		{
			return ++tot;
		}
	}
	void pushup(int k)
	{
		int ls = lc(k), rs = rc(k);
		for (int i = 0; i < K; ++i)
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
		t[k].ans = t[ls].ans + t[rs].ans + t[k].now.val; // 别把r写成l！！！
		t[k].sz = t[ls].sz + t[rs].sz + 1;
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
		lc(k) = build(l, mid - 1, (kd + 1) % K);
		rc(k) = build(mid + 1, r, (kd + 1) % K);
		pushup(k);
		return k;
	}
	// void flat(int k, int lsz) // 这是替罪羊树的拍平写法，但是由于KDT在重构时使用了nth_element排序，所以就不需要保证原序列有序了
	// {
	// 	if (lc(k))
	// 	{
	// 		flat(lc(k), lsz);
	// 	}
	// 	a[t[lc(k)].sz + lsz + 1] = t[k].now;
	// 	sta[++top] = k;
	// 	if (rc(k))
	// 	{
	// 		flat(rc(k), lsz + t[lc(k)].sz + 1);
	// 	}
	// }
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
			// flat(k, 0);
			cnt = 0;
			flat(k);
			k = build(1, t[k].sz, kd);
		}
	}
	void insert(int &k, const Point &val, int kd)
	{
		if (!k)
		{
			k = newnode();
			t[k].now = val;
			pushup(k);
			return;
		}
		if (val.pos[kd] <= t[k].now.pos[kd])
		{
			insert(lc(k), val, (kd + 1) % K);
		}
		else
		{
			insert(rc(k), val, (kd + 1) % K);
		}
		pushup(k);
		check(k, kd);
	}
	int query(int k, const Point &A, const Point &B)
	{
		if (!k || t[k].out(A, B))
		{
			return 0;
		}
		if (t[k].in(A, B))
		{
			return t[k].ans;
		}
		int res = 0;
		if (t[k].now.at(A, B))
		{
			res = t[k].now.val;
		}
		res += query(lc(k), A, B) + query(rc(k), A, B);
		return res;
	}
};
KDT<2> t;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, lastans = 0, op, x1, y1, x2, y2, a, root = 0;
	cin >> n;
	while (true)
	{
		cin >> op;
		if (op == 1)
		{
			cin >> x1 >> y1 >> a;
			x1 ^= lastans, y1 ^= lastans, a ^= lastans;
			t.insert(root, {x1, y1, a}, 0);
		}
		else if (op == 2)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			x1 ^= lastans, y1 ^= lastans, x2 ^= lastans, y2 ^= lastans;
			cout << (lastans = t.query(root, {x1, y1}, {x2, y2})) << '\n';
		}
		else
		{
			break;
		}
	}
	return 0;
}
