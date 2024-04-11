#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
vector<int> ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, i, j = 0, tot = 0, per, cur;
	cin >> n >> k;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		tot += a[i];
	}
	if (tot % k != 0)
	{
		cout << "No\n";
	}
	else
	{
		per = tot / k;
		for (i = 1; i <= n; i = j + 1)
		{
			cur = 0;
			for (j = i; j <= n; ++j)
			{
				cur += a[j];
				if (cur > per)
				{
					cout << "No\n";
					return 0;
				}
				if (cur == per)
				{
					break;
				}
			}
			if (cur == per)
			{
				ans.push_back(j - i + 1);
			}
		}
		if (ans.size() == k)
		{
			cout << "Yes\n";
			for (int x : ans)
			{
				cout << x << ' ';
			}
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}
