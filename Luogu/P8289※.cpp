// 一道很久之前就想做的大模拟
// 作者: Bodhi  公开 发表时间: 2022-07-20 10:31
#include <bits/stdc++.h>
using namespace std;

map<string, pair<string, bool>> mp;
string dfs(string &s)
{
	int i, j;
	string res, name;
	for (i = 0; i < s.size();)
	{
		j = 0;
		while (i + j < s.size() && 
			   (isalpha(s[i + j]) || 
			    isdigit(s[i + j]) ||
				s[i + j] == '_'))
		{
			++j;
		}
		if (j)
		{
			name = s.substr(i, j);
			if (mp.count(name) && !mp[name].second)
			{
				mp[name].second = true;
				res += dfs(mp[name].first);
				mp[name].second = false;
			}
			else
			{
				res += name;
			}
			i += j;
		}
		else
		{
			res += s[i];
			++i;
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i, p1, p2;
	string s, name, content;
	cin >> n;
	getline(cin, s);
	for (i = 1; i <= n; ++i)
	{
		getline(cin, s);
		if (s[0] == '#')
		{
			p1 = s.find(' ', 8); // 第二个空格
			if (s[1] == 'd')
			{
				name = s.substr(8, p1 - 8);
				content = s.substr(p1 + 1);
				mp[name] = make_pair(content, false);
			}
			else
			{
				name = s.substr(7);
				mp.erase(name);
			}
			cout << '\n';
		}
		else
		{
			cout << dfs(s) << '\n';
		}
	}
	return 0;
}
