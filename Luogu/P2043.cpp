#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
bool ispr[R];
vector<int> v;
map<int, int> ans;
void prtable(int n)
{
	int i, j;
	memset(ispr, 1, sizeof(ispr));
	for (i = 2; i <= n; ++i)
	{
		if (ispr[i])
			v.push_back(i);
		for (j = 0; j < v.size() && v[j] * i <= n; ++j)
		{
			ispr[v[j] * i] = false;
			if (i % v[j] == 0)
				break;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, x, i, j;
	cin >> n;
	prtable(n);
	for (i = 2; i <= n; ++i)
	{
		x = i;
		for (int j : v)
		{
			if (j > x)
				break;
			while (x % j == 0)
			{
				x /= j;
				++ans[j];
			}
		}
	}
	if (x > 1)
		++ans[x];
	for (auto t = ans.begin(); t != ans.end(); ++t)
	{
		cout << t->first << ' ' << t->second << '\n';
	}
	return 0;
}
