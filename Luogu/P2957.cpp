#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
const int P = 2333;
ull s1[85], s2[85], p[85];
ull get(int l, int r, ull s[]) { return s[r] - s[l - 1] * p[r - l + 1]; }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	cin >> a >> b;
	int ml = min(a.size(), b.size());
	int j;
	s1[0] = a[0];
	for (j = 1; j < a.size(); ++j)
	{
		s1[j] = s1[j - 1] * P + a[j];
	}
	s2[0] = b[0];
	for (j = 1; j < b.size(); ++j)
	{
		s2[j] = s2[j - 1] * P + b[j];
	}
	p[0] = 1;
	for (j = 1; j <= max(a.size(), b.size()); ++j)
	{
		p[j] = p[j - 1] * P;
	}
	int ans = 0;
	ull v1, v2;
	for (int p = 0; p <= ml; ++p)
	{
		v1 = get(0, p, s1), v2 = get(b.size() - p - 1, b.size() - 1, s2);
		if (v1 == v2)
		{
			ans = p + 1;
		}
		v1 = get(a.size() - p - 1, a.size() - 1, s1), v2 = get(0, p, s2);
		if (v1 == v2)
		{
			ans = p + 1;
		}
	}
	cout << ans << '\n';
	return 0;
}
