#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10;
class LCT
{
public:
	struct
	{
		int son[2], fa, val, res, colcnt;
		bool revtag;
	} t[N];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define isrc(k) (rc(fa(k)) == k)
#define connect(x, f, k) t[f].son[k] = x, fa(x) = f
#define notroot(x) (lc(fa(x)) == x || rc(fa(x)) == x)
#define reverse(k) swap(lc(k), rc(k)), t[k].revtag ^= 1
	void pushup(int k)
	{
		t[k].res = max({t[lc(k)].res, t[rc(k)].res, t[k].val});
	}
	void pushdown(int k)
	{
		if (t[k].revtag)
		{
			reverse(lc(k));
			reverse(rc(k));
		}
		t[k].revtag = false;
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
		connect(t[x].son[k ^ 1], f, k);
		if (notroot(f))
			t[ff].son[isrc(f)] = x;
		t[x].fa = ff;
		connect(f, x, k ^ 1);
		pushup(f), pushup(x);
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
		fa(x) = y;
		++t[x].colcnt;
		++t[y].colcnt;
	}
	void cut(int x, int y)
	{
		makeroot(x);
		access(y);
		splay(y);
		splay(x);
		// 以上三行，如果没有判断连通，就一定要加，这样才能保证y一定是x的右儿子！！！（感谢韩队）
		rc(x) = fa(y) = 0;
		pushup(x);
		--t[x].colcnt;
		--t[y].colcnt;
	}
	int query(int x, int y)
	{
		if (findroot(x) != findroot(y))
		{
			return -1;
		}
		else
		{
			split(x, y);
			return t[y].res;
		}
	}
	void update(int x, int v)
	{
		access(x);
		splay(x);
		t[x].val = v;
		pushup(x);
	}
} lct[12];
struct Edge
{
	int x, y;
	bool operator<(const Edge &oth) const
	{
		return x == oth.x ? y < oth.y : x < oth.x;
	}
};
map<Edge, int> mp;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, C, k, i, val, op, x, y, col;
	cin >> n >> m >> C >> k;
	for (i = 1; i <= n; ++i)
	{
		cin >> val;
		for (col = 1; col <= C; ++col)
		{
			lct[col].t[i].val = lct[col].t[i].res = val;
		}
	}
	while (m--)
	{
		cin >> x >> y >> col;
		++col;
		mp[{x, y}] = mp[{y, x}] = col;
		lct[col].link(x, y);
	}
	while (k--)
	{
		cin >> op;
		if (op == 0)
		{
			cin >> x >> val;
			for (i = 1; i <= C; ++i)
			{
				lct[i].update(x, val);
			}
		}
		else if (op == 1)
		{
			cin >> x >> y >> col;
			++col;
			if (mp.count({x, y}) == 0)
			{
				cout << "No such edge.\n";
			}
			else if (mp[{x, y}] == col)
			{
				cout << "Success.\n";
			}
			else if (lct[col].t[x].colcnt >= 2 || lct[col].t[y].colcnt >= 2)
			{
				cout << "Error 1.\n";
			}
			else if (lct[col].findroot(x) == lct[col].findroot(y)) // 连接之后要成环，就需要连接前在同一棵树上
			{
				cout << "Error 2.\n";
			}
			else
			{
				lct[col].link(x, y);
				lct[mp[{x, y}]].cut(x, y);
				mp[{x, y}] = mp[{y, x}] = col;
				cout << "Success.\n";
			}
		}
		else
		{
			cin >> col >> x >> y;
			++col;
			cout << lct[col].query(x, y) << '\n';
		}
	}
	return 0;
}
