#include <bits/stdc++.h>
using namespace std;

const int R = 3e5 + 10;
class
{
public:
	struct
	{
		int son[2], val, res, fa;
		bool tag;
	} t[R + R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define reverse(k) swap(lc(k), rc(k)), t[k].tag ^= 1
#define connect(x, f, k) t[f].son[k] = x, fa(x) = f
#define notroot(x) (lc(fa(x)) == x || rc(fa(x)) == x)
#define isrc(x) (rc(fa(x)) == x)
	void pushup(int k)
	{
		t[k].res = t[lc(k)].res + t[rc(k)].res + t[k].val;
	}
	void pushdown(int k)
	{
		if (t[k].tag)
		{
			if (lc(k))
			{
				reverse(lc(k));
			}
			if (rc(k))
			{
				reverse(rc(k));
			}
			t[k].tag = false;
		}
	}
	void pushdownall(int x)
	{
		if (notroot(x))
		{
			pushdownall(fa(x));
		}
		pushdown(x);
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
			x = lc(x);
		}
		splay(x);
		return x;
	}
	void link(int x, int y)
	{
		makeroot(x);
		fa(x) = y;
	}
	void split(int x, int y)
	{
		makeroot(x);
		access(y);
		splay(y);
	}
} lct;
struct
{
	int x, to, nxt;
	bool w; // w代表是否有泡芙
} e[R + R];
map<pair<int, int>, int> e_to_p;
int head[R], tot, dfn[R], low[R], tme, belong[R], scc, sta[R], top;
bool puff[R];
void add(int x, int y, bool v)
{
	e[tot] = {x, y, head[x], v};
	head[x] = tot++;
}
void tarjan(int x, int frome)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int i = head[x], to; ~i; i = e[i].nxt)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to, i);
			low[x] = min(low[x], low[to]);
		}
		else if (i != (frome ^ 1))
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++scc;
		while (sta[top] != x)
		{
			belong[sta[top--]] = scc;
		}
		belong[sta[top--]] = scc;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int i, n, m, q, x, y, w, ptot = 0;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, w);
	}
	tarjan(1, 0);
	ptot = scc;
	for (i = 0; i <= tot; i += 2)
	{
		x = belong[e[i].x], y = belong[e[i].to];
		if (x == y)
		{
			puff[x] |= e[i].w;
		}
	}
	for (i = 1; i <= scc; ++i)
	{
		lct.t[i].val = lct.t[i].res = puff[i];
	}
	for (i = 0; i <= tot; i += 2)
	{
		x = belong[e[i].x], y = belong[e[i].to];
		if (x != y)
		{
			if (lct.findroot(x) != lct.findroot(y))
			{
				e_to_p[{x, y}] = e_to_p[{y, x}] = ++ptot;
				lct.link(x, ptot), lct.link(ptot, y);
			}
			if (e[i].w)
			{
				w = e_to_p[{x, y}];
				lct.splay(w);
				lct.t[w].val = 1;
				lct.pushup(w);
			}
		}
	}
	cin >> q;
	while (q--)
	{
		cin >> x >> y;
		x = belong[x], y = belong[y];
		lct.split(x, y);
		cout << (lct.t[y].res ? "YES\n" : "NO\n");
	}
	return 0;
}
