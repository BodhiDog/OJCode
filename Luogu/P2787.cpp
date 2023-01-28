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