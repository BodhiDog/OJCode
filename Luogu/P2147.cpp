#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
class LCT
{
public:
	struct
	{
		int son[2], fa;
		bool tag;
	} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define isrc(k) (rc(fa(k)) == k)
#define notroot(k) (lc(fa(k)) == k || rc(fa(k)) == k)
	void pushdown(int x)
	{
		if (t[x].tag)
		{
			t[lc(x)].tag ^= 1;
			t[rc(x)].tag ^= 1;
			swap(lc(x), rc(x));
			t[x].tag = false;
		}
	}
	void pushdown_all(int x)
	{
		if (notroot(x))
			pushdown_all(fa(x));
		pushdown(x);
	}
	void connect(int x, int f, int k)
	{
		fa(x) = f;
		t[f].son[k] = x;
	}
	void rotate(int x)
	{
		int f = fa(x), ff = fa(f);
		int k = isrc(x);
		connect(t[x].son[k ^ 1], f, k);
		fa(x) = ff;
		if (notroot(f))
			t[ff].son[isrc(f)] = x;
		connect(f, x, k ^ 1);
	}
	void splay(int x)
	{
		pushdown_all(x);
		int f, ff;
		while (notroot(x))
		{
			f = fa(x), ff = fa(f);
			if (notroot(f))
				isrc(f) ^ isrc(x) ? rotate(x) : rotate(f);
			rotate(x);
		}
	}
	void access(int x)
	{
		for (int y = 0; x; x = fa(y = x)/*y=x一定要写在x=fa(x)之前！！！*/)
		{
			splay(x);
			rc(x) = y;
		}
	}
	void makeroot(int x)
	{
		access(x);
		splay(x);
		t[x].tag ^= 1;
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
	void link(int x, int y)
	{
		makeroot(x);
		if (findroot(y) == x)
			return;
		fa(x) = y;
	}
	void cut(int x, int y)
	{
		makeroot(x);
		if (findroot(y) != x || fa(y) != x || lc(y))
			return;
		rc(x) = fa(y) = 0;
	}
	void split(int x, int y)
	{
		makeroot(x);
		access(y);
		splay(y);
	}
} lct;
int n;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, j, x, y;
	cin >> n >> m;
	char s[10];
	while (m--)
	{
		cin >> s >> x >> y;
		if (s[0] == 'Q')
			cout << ((lct.findroot(x) == lct.findroot(y)) ? "Yes\n" : "No\n");
		else if (s[0] == 'C')
			lct.link(x, y);
		else // s[0]=='D'
			lct.cut(x, y);
	}
	return 0;
}