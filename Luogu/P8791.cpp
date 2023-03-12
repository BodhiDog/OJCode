#include <bits/stdc++.h>
using namespace std;

long long count(string s, char c)
{
	long long res = 0;
	for (int j = 0; j < s.length(); ++j)
		if (s[j] == c)
			++res;
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	long long gb = 0, mb = 0, kb = 0, b = 0, len, p1, p2, l, tot;
	string type, var; // int4B,long8B,len
	cin >> t;
	while (t--)
	{
		len = p1 = p2 = 0;
		cin >> type;
		getline(cin, var);
		// var = var.substr(1); // 去空格
		tot = count(var, '=');
		if (type == "int")
		{
			b += 4 * tot;
		}
		else if (type == "long")
		{
			b += 8 * tot;
		}
		else if (type == "int[]")
		{
			while (tot--)
			{
				p1 = var.find("[", p2);
				// if (p1 == -1)
				// 	break;
				p2 = var.find(']', p1 + 1);
				p1 += 1; // 指到数字开头
				// p2 -= 1; // 指到数字结尾
				len = stoll(var.substr(p1, p2 - p1));
				b += 4 * len;
			}
		}
		else if (type == "long[]")
		{
			while (tot--)
			{
				p1 = var.find("[", p2);
				// if (p1 == -1)
				// 	break;
				p2 = var.find(']', p1 + 1);
				p1 += 1; // 指到数字开头
				// p2 -= 1; // 指到数字结尾
				len = stoll(var.substr(p1, p2 - p1));
				b += 8 * len;
			}
		}
		else // String
		{
			l = var.size();
			for (p1 = 0; p1 < l; ++p1)
				if (var[p1] == '"')
					while (var[++p1] != '"')
						++b;
		}
	}
	kb = b / 1024, b %= 1024;
	mb = kb / 1024, kb %= 1024;
	gb = mb / 1024, mb %= 1024;
	if (gb != 0)
		cout << gb << "GB";
	if (mb != 0)
		cout << mb << "MB";
	if (kb != 0)
		cout << kb << "KB";
	if (b != 0)
		cout << b << "B";
	return 0;
}
