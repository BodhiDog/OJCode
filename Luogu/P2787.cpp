// 线段树正解
#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
class
{
public:
	struct
	{
		int l, r, val, tag;
	} t[R * 4];
#define lc(k) (k << 1)
#define rc(k) (k << 1 | 1)
#define pushup(k) t[k].val = t[lc(k)].val + t[rc(k)].val
#define edit(k, v) t[k].val = (t[k].r - t[k].l + 1) * v, t[k].tag = v
	void pushdown(int k)
	{
		if (t[k].tag != -1) // 有覆盖为0的情况，所以初始为-1！！！
		{
			edit(lc(k), t[k].tag);
			edit(rc(k), t[k].tag);
			t[k].tag = -1;
		}
	}
	void build(int k, int l, int r)
	{
		t[k].tag = -1;
		t[k].l = l, t[k].r = r;
		if (l == r)
		{
			return;
		}
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
	}
	void update(int k, int x, int y, int val)
	{
		if (x <= t[k].l && t[k].r <= y)
		{
			edit(k, val);
			return;
		}
		pushdown(k);
		int mid = (t[k].l + t[k].r) >> 1;
		if (x <= mid)
		{
			update(lc(k), x, y, val);
		}
		if (y > mid)
		{
			update(rc(k), x, y, val);
		}
		pushup(k);
	}
	int query(int k, int x, int y)
	{
		if (x <= t[k].l && t[k].r <= y)
		{
			return t[k].val;
		}
		pushdown(k);
		int mid = (t[k].l + t[k].r) >> 1, res = 0;
		if (x <= mid)
		{
			res = query(lc(k), x, y);
		}
		if (y > mid)
		{
			res += query(rc(k), x, y);
		}
		return res;
	}
} t[30];
int cnt[30];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, op, x, y, i, k, l;
	char c;
	cin >> n >> m;
	for (i = 0; i < 26; ++i)
	{
		t[i].build(1, 1, n);
	}
	for (i = 1; i <= n; ++i)
	{
		cin >> c;
		k = tolower(c) - 'a';
		t[k].update(1, i, i, 1);
	}
	while (m--)
	{
		cin >> op >> x >> y;
		if (op == 1)
		{
			cin >> c;
			k = tolower(c) - 'a';
			cout << t[k].query(1, x, y) << '\n';
		}
		else if (op == 2)
		{
			cin >> c;
			k = tolower(c) - 'a';
			for (i = 0; i < 26; ++i)
			{
				t[i].update(1, x, y, 0);
			}
			t[k].update(1, x, y, 1);
		}
		else
		{
			for (i = 0; i < 26; ++i)
			{
				cnt[i] = t[i].query(1, x, y);
				t[i].update(1, x, y, 0);
			}
			l = x;
			for (i = 0; i < 26; ++i)
			{
				t[i].update(1, l, l + cnt[i] - 1, 1);
				l = l + cnt[i];
			}
		}
	}
	return 0;
}

// 珂朵莉树，非正解，最后一个点被卡
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char c;
	int l, r;
	Node(const int a, int b = 0, char ch = 0) { l = a, r = b, c = ch; }
	bool operator<(const Node &x) const { return l < x.l; }
};
#define isdigit(c) (c >= '0' && c <= '9')
char toUpper(char c)
{
	return (c >= 'a' && c <= 'z') ? char(c - 'a' + 'A') : c;
}
set<Node> s;
using st = set<Node>::iterator;
int l1, r2;
char temp;
st split(const int pos)
{
	st it = s.lower_bound(Node(pos));
	if (it != s.end() && it->l == pos)
		return it;
	--it;
	l1 = it->l, r2 = it->r, temp = it->c;
	s.erase(it);
	s.insert(Node(l1, pos - 1, temp));
	return s.insert(Node(pos, r2, temp)).first;
}
st merge(st it1, st it2)
{ // 合并相同段以降低复杂度，返回新块的迭代器，若不可合并则返回s.end()
	if (it1->c == it2->c)
	{
		if (it1->l > it2->l)
			swap(it1, it2); // 保证左右关系
		l1 = it1->l;
		r2 = it2->r;
		temp = it1->c;
		s.erase(it1);
		s.erase(it2);
		return s.insert(Node(l1, r2, temp)).first;
	}
	return s.end();
}
int query(int l, int r, char c)
{
	int res = 0;
	st it2 = split(r + 1), it1 = split(l);
	for (st it = it1; it != it2; ++it)
		if (it->c == c)
			res += it->r - it->l + 1;
	st tmp;
	if (it1 != s.begin())
	{
		tmp = --it1;
		++it1;
		merge(tmp, it1);
	}
	if (it2 != s.end())
	{
		tmp = ++it2;
		--it2;
		merge(it2, tmp);
	}
	// 还原回去
	return res;
}
void assign(const int &l, const int &r, const char &c)
{
	st it2 = split(r + 1), it1 = split(l);
	s.erase(it1, it2);
	st md = s.insert(Node(l, r, c)).first;
	if (md != s.begin())
	{
		st lst = --md;
		++md;
		md = merge(lst, md); // 直接指向新块
	}
	if (md != s.end())
	{
		st ext = ++md;
		--md;
		merge(md, ext);
	}
}
int bct[27];
void srt(int &l, const int &r)
{
	memset(bct, 0, sizeof(bct));
	st it2 = split(r + 1), it1 = split(l);
	while (it1 != it2)
	{
		bct[it1->c - 'A'] += it1->r - it1->l + 1;
		it1 = s.erase(it1);
	}
	bool ll = false;
	st rt, tmp;
	for (int j = 0; j <= 26; ++j)
	{
		if (bct[j])
		{
			if (!ll)
			{
				rt = s.insert(Node(l, l + bct[j] - 1, j + 'A')).first;
				if (rt != s.begin())
				{
					tmp = --rt;
					++rt;
					rt = merge(tmp, rt);
				}
			}
			else
				rt = s.insert(Node(l, l + bct[j] - 1, j + 'A')).first;
			l += bct[j]; // 下一个块的l，在这个块的r+1
			ll = true;
		}
	}
	if (rt != s.end())
	{
		tmp = ++rt;
		--rt;
		merge(rt, tmp);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, opt, x, y, j;
	cin >> n >> m;
	char c;
	st t1 = s.begin(), t2 = s.begin();
	for (j = 1; j <= n; ++j) // 插入+合并
	{
		cin >> c;
		t2 = s.insert(Node(j, j, toUpper(c))).first;
		if (t2 != s.begin())
		{
			t1 = --t2;
			++t2;
			merge(t1, t2);
		}
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> opt >> x >> y;
		if (opt == 1)
		{
			cin >> c;
			cout << query(x, y, toUpper(c)) << '\n';
		}
		else if (opt == 2)
		{
			cin >> c;
			assign(x, y, toUpper(c));
		}
		else
			srt(x, y);
	}
	return 0;
}