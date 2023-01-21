// ÀýÈç:llºÍint½øÐÐxor,Òª½«int×ª»»³Éll
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
using ll = long long;
struct Node
{
	int l, r, key, sz, val;
	ll sum;
	bool tag;
} tree[R * 70];
int root[R], tot;
#define lc tree[k].l
#define rc tree[k].r
mt19937 rd;
int tc[R], top;
int crt(ll val = 0)
{
	int t = (top ? tc[top--] : ++tot);
	tree[t].key = rd();
	tree[t].val = tree[t].sum = val;
	tree[t].sz = 1;
	return t;
}
int clone(int x)
{
	int a = (top ? tc[top--] : ++tot);
	tree[a] = tree[x];
	return a;
}
void pushdown(int k)
{
	if (tree[k].tag)
	{
		swap(lc, rc);
		if (lc)
		{
			lc = clone(lc);
			tree[lc].tag ^= 1;
		}
		if (rc)
		{
			rc = clone(rc);
			tree[rc].tag ^= 1;
		}
		tree[k].tag = false;
	}
}
void pushup(int k)
{
	tree[k].sz = tree[lc].sz + tree[rc].sz + 1;
	tree[k].sum = tree[lc].sum + tree[rc].sum + tree[k].val;
}
void split(int k, int sz, int &x, int &y)
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	pushdown(k);
	if (tree[lc].sz + 1 <= sz)
	{
		x = clone(k);
		split(tree[x].r, sz - tree[tree[x].l].sz - 1, tree[x].r, y);
		pushup(x);
	}
	else
	{
		y = clone(k);
		split(tree[y].l, sz, x, tree[y].l);
		pushup(y); // æ™?é€šçš„FHQTreapå…¶å®žä¹Ÿåº”è¯¥è¿™ä¹ˆå†™,å?ä¸è¿‡ä¸è?ºæ˜¯xè¿˜æ˜¯yéƒ½è??èµ‹å€¼ä¸ºk,æ‰€ä»¥å¯ä»¥åœ¨æœ€åŽpushup(k)å°±è??
	}
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	// pushdown(x), pushdown(y);
	// int a = crt();
	if (tree[x].key < tree[y].key)
	{
		pushdown(x);
		tree[x].r = merge(tree[x].r, y);
		pushup(x);
		return x;
	}
	else
	{
		pushdown(y);
		tree[y].l = merge(x, tree[y].l);
		pushup(y);
		return y;
	}
}
int x, y, z;
void rev(int ver, int l, int r)
{
	split(root[ver], l - 1, x, y);
	split(y, r - l + 1, y, z);
	tree[y].tag ^= 1;
	root[ver] = merge(merge(x, y), z);
}
ll query(int ver, int l, int r)
{
	split(root[ver], l - 1, x, y);
	split(y, r - l + 1, y, z);
	ll res = tree[y].sum;
	root[ver] = merge(merge(x, y), z);
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int ver, opt, a, b, c, n;
	ll x, lastres = 0, p, l, r; // ËäËµp,l,r²»»á³¬¹ýint,µ«ÊÇÐèÒªÓëlastres½øÐÐÒì»òÔËËã,ËùÒÔÒ²Òª¿ª³Éll
	Node ept = {0, 0, 0, 0, 0, 0, false};
	cin >> n;
	for (int j = 1; j <= n; ++j)
	{
		cin >> ver >> opt;
		root[j] = root[ver];
		if (opt == 1)
		{
			cin >> p >> x;
			p ^= lastres, x ^= lastres;
			split(root[j], p, a, b);
			root[j] = merge(merge(a, crt(x)), b);
		}
		else if (opt == 2)
		{
			cin >> p;
			p ^= lastres;
			// split(root[j], p - 1, a, b);
			// split(b, 1, b, c);
			split(root[j], p, a, c);
			split(a, p - 1, a, b);
			tree[b] = ept; // ç½?ç©?
			tc[++top] = b;
			root[j] = merge(a, c);
		}
		else if (opt == 3)
		{
			cin >> l >> r;
			l ^= lastres, r ^= lastres;
			if (l > r)
				swap(l, r);
			rev(j, l, r);
		}
		else
		{
			cin >> l >> r;
			l ^= lastres, r ^= lastres;
			if (l > r)
				swap(l, r);
			lastres = query(j, l, r);
			cout << lastres << '\n';
		}
	}
	return 0;
}
