#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Wt
{
	int p, x;
} a[R];
struct Qry
{
	int l, r;
} q[R];
vector<int> v;
unordered_map<int, int> pos;
int val[R * 3];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int j;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j].p >> a[j].x;
		v.push_back(a[j].p);
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> q[j].l >> q[j].r;
		v.push_back(q[j].l), v.push_back(q[j].r);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (j = 0; j < v.size(); ++j)
		pos[v[j]] = j + 1;
	for (j = 1; j <= n; ++j)
		val[pos[a[j].p]] += a[j].x;
	for (j = 1; j <= v.size() + 1; ++j)
		val[j] += val[j - 1];
	for (j = 1; j <= m; ++j)
		cout << val[pos[q[j].r]] - val[pos[q[j].l] - 1] << '\n';
	return 0;
}