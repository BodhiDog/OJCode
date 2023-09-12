// 困扰了好久的题
#include <bits/stdc++.h>
using namespace std;

vector<int> pr;
bool ispr[int(5e4) + 10], notpr[int(1e6) + 10];
int prtot;
void prsv(int n)
{
	memset(ispr, true, sizeof(ispr));
	int i, j;
	ispr[1] = false;
	for (i = 2; i <= n; ++i)
	{
		if (ispr[i])
		{
			pr.push_back(i);
			for (j = i * 2; j <= n; j += i)
			{
				ispr[j] = false;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	prsv(5e4);
	int l, r;
	cin >> l >> r;
	if (l == 1)
	{
		++l;
	}
	for (int x : pr)
	{
		for (long long j = max(2, l / x) * x; j <= r; j += x)
		{
			if (l <= j)
			{
				notpr[j - l] = true;
			}
		}
		if (x > r)
		{
			break;
		}
	}
	int ans = 0;
	for (int i = 0; i <= r - l; ++i)
	{
		if (!notpr[i])
		{
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}
