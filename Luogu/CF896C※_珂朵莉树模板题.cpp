#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10, MOD = 1e9 + 7;
ll a[R], seed;
struct Node
{
	int l, r;
	mutable ll val;
	Node(int a, int b = 0, ll c = 0) { l = a, r = b, val = c; }
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
	int l = it->l, r = it->r;
	ll val = it->val;
	s.erase(it);
	s.insert(Node(l, pos - 1, val));
	return s.insert(Node(pos, r, val)).first;
}
void assign(int l, int r, ll val)
{
	st it2 = split(r + 1), it1 = split(l);
	s.erase(it1, it2);
	s.insert(Node(l, r, val));
}
void add(int l, int r, ll val)
{
	st it2 = split(r + 1), it1 = split(l);
	for (; it1 != it2; ++it1)
		it1->val += val;
}
ll kth(int l, int r, int k)
{
	st it2 = split(r + 1), it1 = split(l);
	vector<pair<ll, int>> v;
	for (st t = it1; t != it2; ++t)
		v.push_back({t->val, t->r - t->l + 1});
	sort(v.begin(), v.end());
	int i;
	for (i = 0; i < v.size(); ++i)
	{
		k -= v[i].second;
		if (k <= 0)
			return v[i].first;
	}
	return ll(-1);
}
ll pow(ll a, ll p, ll mod)
{
	if (p == 0)
		return 1;
	ll res = pow(a, p / 2, mod) % mod;
	if (p & 1)
	{
		res = (res % mod) * (res % mod) % mod;
		res = (res % mod) * (a % mod) % mod;
	}
	else
		res = (res % mod) * (res % mod) % mod;
	return res % mod;
}
ll query(int l, int r, ll x, ll mod)
{
	st it2 = split(r + 1), it1 = split(l);
	ll res = 0;
	for (; it1 != it2; ++it1)
		res = (res + ll(it1->r - it1->l + 1) * pow(it1->val, x, mod)) % mod;
	return res;
}
ll rnd()
{
	ll res = seed;
	seed = (seed * 7 + 13) % MOD;
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, op, l, r;
	ll x, y, vmax;
	cin >> n >> m >> seed >> vmax;
	for (i = 1; i <= n; ++i)
	{
		a[i] = (rnd() % vmax) + 1;
		s.insert(Node(i, i, a[i]));
	}
	for (i = 1; i <= m; ++i)
	{
		op = (rnd() % 4) + 1;
		l = (rnd() % n) + 1;
		r = (rnd() % n) + 1;
		if (l > r)
			swap(l, r);
		if (op == 3)
			x = (rnd() % (r - l + 1)) + 1;
		else
			x = (rnd() % vmax) + 1;
		if (op == 4)
			y = (rnd() % vmax) + 1;
		if (op == 1)
			add(l, r, x);
		else if (op == 2)
			assign(l, r, x);
		else if (op == 3)
			cout << kth(l, r, x) << '\n';
		else
			cout << query(l, r, x, y) << '\n';
	}
	return 0;
}