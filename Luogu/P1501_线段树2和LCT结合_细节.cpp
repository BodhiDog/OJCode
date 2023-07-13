#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
const int R = 1e5 + 10, M = 51061;
class LCT
{
public:
	struct
	{
		int son[2], fa, sz;
		uint res, org, mult, add;
		bool revtag;
	} t[R];
#define lc(x) t[x].son[0]
#define rc(x) t[x].son[1]
#define fa(x) t[x].fa
#define isrc(x) (rc(fa(x)) == x)
#define notroot(x) (lc(fa(x)) == x || rc(fa(x)) == x)
#define connect(x, f, k) t[x].fa = f, t[f].son[k] = x
#define reverse(x) swap(lc(x), rc(x)), t[x].revtag ^= 1
	void pushup(int x)
	{
		t[x].sz = t[lc(x)].sz + t[rc(x)].sz + 1;
		t[x].res = (t[x].org + t[lc(x)].res + t[rc(x)].res) % M;
	}
	void edit(int x, uint mult, uint add)
	{
		if (mult == 1)
		{
			t[x].res = (t[x].res + t[x].sz * add % M) % M;
			t[x].org = (t[x].org + add) % M;
			t[x].add = (t[x].add + add) % M;
		}
		else
		{
			t[x].res = (t[x].res * mult % M + t[x].sz * add % M) % M;
			t[x].org = (t[x].org * mult % M + add) % M;
			t[x].mult = t[x].mult * mult % M;
			t[x].add = (t[x].add * mult % M + add) % M; // 别忘加add！！！
		}
	}
	void pushdown(int x)
	{
		if (lc(x))
			edit(lc(x), t[x].mult, t[x].add);
		if (rc(x))
			edit(rc(x), t[x].mult, t[x].add);
		t[x].mult = 1, t[x].add = 0;
		if (t[x].revtag)
		{
			if (lc(x))
				reverse(lc(x));
			if (rc(x))
				reverse(rc(x));
		}
		t[x].revtag = false;
	}
	void pushdown_all(int x)
	{
		if (notroot(x))
			pushdown_all(fa(x));
		pushdown(x);
	}
	void rotate(int x)
	{
		int f = fa(x), ff = fa(f), k = isrc(x);
		connect(t[x].son[k ^ 1], f, k);
		fa(x) = ff;
		if (notroot(f))
			t[ff].son[isrc(f)] = x;
		connect(f, x, k ^ 1);
		pushup(f), pushup(x);
	}
	void splay(int x)
	{
		pushdown_all(x);
		int f, ff;
		while (notroot(x))
		{
			f = fa(x), ff = fa(f);
			if (notroot(f))
				(isrc(x) ^ isrc(f)) ? rotate(x) : rotate(f);
			rotate(x);
		}
	}
	void access(int x)
	{
		for (int y = 0; x; x = fa(y = x))
		{
			splay(x);
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
	int findroot(int x) // 找原根
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
		pushup(x);
	}
} lct;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, j, x, y, x2, y2;
	uint v;
	char op;
	cin >> n >> q;
	for (j = 1; j <= n; ++j)
		lct.t[j].sz = lct.t[j].org = lct.t[j].mult = 1;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y;
		lct.link(x, y);
	}
	while (q--)
	{
		cin >> op >> x >> y;
		switch (op)
		{
		case '+':
			cin >> v;
			lct.split(x, y);
			lct.edit(y, 1, v % M);
			break;
		case '-':
			cin >> x2 >> y2;
			lct.cut(x, y);
			lct.link(x2, y2);
			break;
		case '*':
			cin >> v;
			lct.split(x, y);
			lct.edit(y, v % M, 0);
			break;
		default: // '/'
			lct.split(x, y);
			cout << lct.t[y].res << '\n';
			break;
		}
	}
	return 0;
}
