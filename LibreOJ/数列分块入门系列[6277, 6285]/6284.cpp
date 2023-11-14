#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
struct Node
{
	int l, r, val;
	Node (int a, int b = 0, int c = 0)
	{
		l = a, r = b, val = c;
	}
	bool operator<(const Node &oth) const
	{
		return l < oth.l;
	}
};
set<Node> s;
int a[N], n;
auto split(int p)
{
	auto it = s.lower_bound(Node(p));
	if (it != s.end() && it->l == p)
	{
		return it;
	}
	--it;
	int l = it->l, r = it->r, val = it->val;
	s.erase(it);
	s.insert(Node(l, p - 1, val));
	return s.insert(Node(p, r, val)).first;
}
int query(int l, int r, int c)
{
	auto it2 = split(r + 1), it1 = split(l);
	int res = 0;
	for (; it1 != it2; ++it1)
	{
		if (it1->val == c)
		{
			res += it1->r - it1->l + 1;
		}
	}
	return res;
}
void assign(int l, int r, int c)
{
	auto it2 = split(r + 1), it1 = split(l);
	s.erase(it1, it2);
	s.insert(Node(l, r, c));
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int l, r, c, i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		s.insert(Node(i, i, a[i]));
	}
	for (i = 1; i <= n; ++i)
	{
		cin >> l >> r >> c;
		cout << query(l, r, c) << '\n';
		assign(l, r, c);
	}
	return 0;
}
