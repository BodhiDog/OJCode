#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char c;
	int l, r;
	Node(const int a, int b = 0, char ch = 0) { l = a, r = b, c = ch; }
	bool operator<(const Node &x) const { return l < x.l; }
};
set<Node> s;
using st = set<Node>::iterator;
st split(const int pos)
{
	st it = s.lower_bound(Node(pos));
	if (it != s.end() && it->l == pos)
		return it;
	--it;
	int l1 = it->l, r2 = it->r;
	char temp = it->c;
	s.erase(it);
	s.insert(Node(l1, pos - 1, temp));
	return s.insert(Node(pos, r2, temp)).first;
}
int bct[30];
void srt0(int &l, const int &r) // 降序
{
	memset(bct, 0, sizeof(bct));
	st it2 = split(r + 1), it1 = split(l);
	while (it1 != it2)
	{
		bct[it1->c - 'a'] += it1->r - it1->l + 1;
		it1 = s.erase(it1);
	}
	for (int j = 25; j >= 0; --j)
	{
		if (bct[j])
		{
			s.insert(Node(l, l + bct[j] - 1, j + 'a'));
			l += bct[j]; // 下一个块的l，在这个块的r+1
		}
	}
}
void srt1(int &l, const int &r) // 升序
{
	memset(bct, 0, sizeof(bct));
	st it2 = split(r + 1), it1 = split(l);
	while (it1 != it2)
	{
		bct[it1->c - 'a'] += it1->r - it1->l + 1;
		it1 = s.erase(it1);
	}
	for (int j = 0; j <= 25; ++j)
	{
		if (bct[j])
		{
			s.insert(Node(l, l + bct[j] - 1, j + 'a'));
			l += bct[j]; // 下一个块的l，在这个块的r+1
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); // 1e5+10
	int n, q, j, l, r, k;
	cin >> n >> q;
	char c;
	for (j = 1; j <= n; ++j) // 插入+合并
	{
		cin >> c;
		s.insert(Node(j, j, c));
	}
	for (j = 1; j <= q; ++j)
	{
		cin >> l >> r >> k;
		if (k == 0)
			srt0(l, r);
		else
			srt1(l, r);
	}
	st t1 = s.begin();
	int len;
	while (t1 != s.end())
	{
		len = t1->r - t1->l + 1;
		for (j = 1; j <= len; ++j)
			cout << t1->c;
		t1 = s.erase(t1);
	}
	return 0;
}