#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int l, r, val;
	Node(int x, int y = 0, int z = 0) { l = x, r = y, val = z; }
	bool operator<(const Node &x) const { return l < x.l; }
};
set<Node> s;
using st = set<Node>::iterator;
st split(int pos)
{
	st it = s.lower_bound(Node(pos));
	if (it != s.end() && it->l == pos)
		return it;
	--it;
	int l = it->l, r = it->r, v = it->val;
	s.erase(it);
	s.insert(Node(l, pos - 1, v));
	return s.insert(Node(pos, r, v)).first;
}
void assign(int l, int r, int val)
{
	st it2 = split(r + 1), it1 = split(l);
	s.erase(it1, it2);
	s.insert(Node(l, r, val));
}
bool b[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, ans = 0, l, r;
	cin >> n >> m;
	s.insert(Node(1, n + 1, 0));
	for (int j = 1; j <= m; ++j)
	{
		cin >> l >> r;
		assign(l, r, j);
	}
	for (st it = s.begin(); it != s.end(); ++it)
	{
		if (it->val && !b[it->val])
		{
			++ans;
			b[it->val] = true;
		}
	}
	cout << ans << '\n';
	return 0;
}