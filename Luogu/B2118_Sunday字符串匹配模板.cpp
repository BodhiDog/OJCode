#include <bits/stdc++.h>
using namespace std;

int skip[130];
bool sunday(string s1, string s2) // 钦定s1为主串（长串），s2为匹配串（短串）
{
	int p1, p2;
	fill(skip, skip + 128, s2.size() + 1);
	for (p2 = 0; p2 < s2.size(); ++p2)
	{
		skip[s2[p2]] = s2.size() - p2;
	}
	p1 = p2 = 0;
	while (p1 + s2.size() <= s1.size())
	{
		while (p2 < s2.size() && s1[p1 + p2] == s2[p2])
		{
			++p2;
		}
		if (p2 == s2.size())
		{
			return true;
		}
		if (p1 + s2.size() >= s1.size())
		{
			break;
		}
		p1 += skip[s1[p1 + s2.size()]];
		p2 = 0;
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s1, s2;
	int p1, p2;
	cin >> s1 >> s2;
	if (sunday(s2, s1))
	{
		cout << s1 << " is substring of " << s2 << '\n';
	}
	else if (sunday(s1, s2))
	{
		cout << s2 << " is substring of " << s1 << '\n';
	}
	else
	{
		cout << "No substring\n";
	}
	return 0;
}
