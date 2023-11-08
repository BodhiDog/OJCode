#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
mt19937 rd(2333);
int a[N], b[N], ans3 = INT_MAX;
class
{
public:
	struct
	{
		int son[2], sz, val;
		unsigned int key;
	} t[N];
	#define lc(k) t[k].son[0]
	#define rc(k) t[k].son[1]
	#define pushup(k) t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1
	int a[N], root, tot;
	int add(int val)
	{
		t[++tot].sz = 1;
		t[tot].val = val;
		t[tot].key = rd();
		return tot;
	}
	void split(int k, int val, int &x, int &y)
	{
		if (!k)
		{
			x = y = 0;
			return;
		}
		if (t[k].val <= val)
		{
			x = k;
			split(rc(k), val, rc(x), y);
		}
		else
		{
			y = k;
			split(lc(k), val, x, lc(y));
		}
		pushup(k);
	}
	int merge(int x, int y)
	{
		if (!x || !y)
		{
			return x | y;
		}
		if (t[x].key < t[y].key)
		{
			rc(x) = merge(rc(x), y);
			pushup(x);
			return x;
		}
		else
		{
			lc(y) = merge(x, lc(y));
			pushup(y);
			return y;
		}
	}
	void insert(int x)
	{
		int a, b;
		split(root, x, a, b);
		root = merge(a, merge(add(x), b));
	}
	int findmax(int k)
	{
		while (rc(k))
		{
			k = rc(k);
		}
		return t[k].val;
	}
	int findmin(int k)
	{
		while (lc(k))
		{
			k = lc(k);
		}
		return t[k].val;
	}
	void insert2(int x) // 插入的时候顺便更新操作3的答案 
	{
		int a, b;
		split(root, x, a, b);
		if (t[a].sz)
		{
			ans3 = min(ans3, abs(x - findmax(a)));
		}
		if (t[b].sz)
		{
			ans3 = min(ans3, abs(x - findmin(b)));
		}
		root = merge(a, merge(add(x), b));
	}
	void del(int x)
	{
		int a, b, c;
		split(root, x - 1, a, b);
		split(b, x, b, c);
		b = merge(lc(b), rc(b));
		root = merge(a, merge(b, c));
	}
} t1, t2;//https://www.luogu.com.cn/blog/Althen-Way-Satan/solution-p1110
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string op;
	int n, m, i, k;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		t2.insert2(b[i] = a[i]);
	}
	for (i = 1; i < n; ++i)
	{
		t1.insert(abs(a[i] - a[i + 1])); 
	}
	while (m--)
	{
		cin >> op;
		if (op[0] == 'I')
		{
			cin >> i >> k;
			t2.insert2(k);
			if (i != n)
			{
				t1.del(abs(b[i] - a[i + 1]));
				t1.insert(abs(k - a[i + 1]));
			}
			t1.insert(abs(b[i] - k));
			b[i] = k; // 详见题目要求：原序列下标不变
		}
		else if (op[4] == 'G') // 相邻的
		{
			cout << t1.findmin(t1.root) << '\n';
		}
		else
		{
			cout << ans3 << '\n';
		}
	}
	return 0;
}
