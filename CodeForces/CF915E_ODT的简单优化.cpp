#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int l, r, day; // 1非工作日2工作日
	Node(int l, int r = 0, int day = 2) { this->l = l, this->r = r, this->day = day; }
	bool operator<(const Node &x) const { return l < x.l; }
};
set<Node> st;
int ans;
auto split(int p)
{
	auto it = st.lower_bound(Node(p));
	if (it != st.end() && it->l == p)
		return it;
	--it;
	int l = it->l, r = it->r, day = it->day;
	st.erase(it);
	st.insert(Node(l, p - 1, day));
	return st.insert(Node(p, r, day)).first;
}
void assign(int l, int r, int op)
{
	auto it2 = split(r + 1), it1 = split(l);
	for (auto it = it1; it != it2; ++it) // 这就是优化，在assign的时候直接计算答案，避免了答案的重复计算（因为如果再写一个query()的话会把set中的所有结点都统计一遍，当assign数量过多时就会TLE）
	{
		if (it->day == 2 && op == 1)
		{
			ans -= it->r - it->l + 1;
		}
		else if (it->day == 1 && op == 2)
		{
			ans += it->r - it->l + 1;
		}
	}
	st.erase(it1, it2);
	st.insert(Node(l, r, op));
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, l, r, k;
	cin >> n >> q;
	ans = n;
	st.insert(Node(1, n, 2));
	while (q--)
	{
		cin >> l >> r >> k;
		assign(l, r, k);
		cout << ans << '\n';
	}
	return 0;
}
