#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
class
{
public:
	struct Node
	{
		int son[2], fa;
		long long sz, vsz;
		bool tag;
	} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define isrc(k) (rc(fa(k)) == k)
#define reverse(k) swap(lc(k), rc(k)), t[k].tag ^= 1
#define notroot(k) (lc(fa(k)) == k || rc(fa(k)) == k)
#define connect(x, f, k) fa(x) = f, t[f].son[k] = x
#define pushup(k) t[k].sz = t[lc(k)].sz + t[rc(k)].sz + t[k].vsz + 1
	void pushdown(int k)
	{
		if (t[k].tag)
		{
			reverse(lc(k));
			reverse(rc(k));
			t[k].tag = false;
		}
	}
	void pushdownall(int k)
	{
		if (notroot(k))
		{
			pushdownall(fa(k));
		}
		pushdown(k);
	}
	void rotate(int x)
	{
		int f = fa(x), ff = fa(f), k = isrc(x);
		if (notroot(f))
		{
			t[ff].son[isrc(f)] = x;
		}
		fa(x) = ff;
		connect(t[x].son[k ^ 1], f, k);
		connect(f, x, k ^ 1);
		pushup(f);
		pushup(x);
	}
	void splay(int x)
	{
		pushdownall(x);
		int f;
		while (notroot(x))
		{
			f = fa(x);
			if (notroot(f))
			{
				isrc(x) ^ isrc(f) ? rotate(x) : rotate(f);
			}
			rotate(x);
		}
	}
	void access(int x)
	{
		for (int y = 0; x; y = x, x = fa(x))
		{
			splay(x);
			t[x].vsz = t[x].vsz - t[y].sz + t[rc(x)].sz;
			rc(x) = y;
			pushup(x);
		}
	}
	void makeroot(int x)
	{
		access(x);
		splay(x);
		reverse(x);
	}
	int findroot(int x)
	{
		access(x);
		splay(x);
		while (lc(x))
		{
			pushdown(x);
			x = lc(x);
		}
		splay(x);
		return x;
	}
	void split(int x, int y)
	{
		makeroot(x);
		access(y);
		splay(y);
	}
	void link(int x, int y)
	{
		makeroot(x);
		access(y), splay(y); // 对某一个点进行操作时，一定要考虑对它的父亲结点有无影响。比如这里：如果不access(y), splay(y)（或者makeroot(y)），就需要从y到y的根结点全部更新一遍！！！
		fa(x) = y;
		t[y].vsz += t[x].sz;
		pushup(y);
	}
	void cut(int x, int y)
	{
		split(x, y);
		fa(x) = lc(y) = 0;
		pushup(y);
	}
} lct;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, x, y;
	long long res;
	char op;
	cin >> n >> q;
	while (q--)
	{
		cin >> op >> x >> y;
		if (op == 'A')
		{
			lct.link(x, y);
		}
		else
		{
			lct.cut(x, y);
			cout << lct.t[x].sz * lct.t[y].sz << '\n';
			lct.link(x, y);
		}
	}
	return 0;
}
