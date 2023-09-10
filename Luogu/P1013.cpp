#include <bits/stdc++.h>
using namespace std;

string s[15][15];
unordered_map<char, int> toint;
int n;
bool b[15];
int trs(string &str)
{
	int res = 0, p = 1;
	string temp;
	for (int j = str.size() - 1; j >= 0; --j)
	{
		res += toint[str[j]] * p;
		p *= (n - 1);
	}
	return res;
}
bool check()
{
	int i, j;
	for (i = 1; i < n; ++i)
	{
		for (j = 1; j < n; ++j)
		{
			if (toint[s[i][0][0]] + toint[s[0][j][0]] != trs(s[i][j]))
			{
				return false;
			}
		}
	}
	return true;
}
bool dfs(int x)
{
	if (x == n + 1)
	{
		return check();
	}
	for (int j = 0; j <= n - 1; ++j)
	{
		if (!b[j])
		{
			b[j] = true;
			toint[s[0][x][0]] = j; // 这里与输入格式有关（因为s[0][0]是'+'，要从s[0][1]开始），所以x要从1开始搜索
			if (dfs(x + 1))
			{
				return true;
			}
			b[j] = false;
		}
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j;
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			cin >> s[i][j];
		}
	}
	if (dfs(1))
	{
		for (j = 1; j < n; ++j)
		{
			cout << s[0][j][0] << '=' << toint[s[0][j][0]] << ' ';
		}
		cout << '\n'
			 << n - 1 << '\n';
	}
	else
	{
		cout << "ERROR!\n";
	}
	return 0;
}
