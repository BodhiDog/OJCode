#include <bits/stdc++.h>
using namespace std;

/*
对于if (c == '<' && !a[n].empty())
{
	a[n].pop_back();
}
else
{
	a[n] += c;
}
的hack：
如果输入为：
a
EOF
a<a<<a
EOF
答案应当为1。但是由于进行条件判断之后第三个'<'进入了else，导致'<'也被加进了字符串，导致结果为0。
*/
const int R = 1e4 + 10;
string a[R], b[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	long long n = 0, m = 0, i, tme, cnt = 0;
	while (true)
	{
		getline(cin, s);
		if (s == "EOF")
		{
			break;
		}
		++n;
		for (char c : s)
		{
			if (c == '<' && !a[n].empty())
			{
				a[n].pop_back();
			}
			else if (c != '<')
			{
				a[n] += c;
			}
		}
	}
	while (true)
	{
		getline(cin, s);
		if (s == "EOF")
		{
			break;
		}
		++m;
		for (char c : s)
		{
			if (c == '<' && !b[m].empty())
			{
				b[m].pop_back();
			}
			else if (c != '<')
			{
				b[m] += c;
			}
		}
		for (i = 0; i < min(a[m].size(), b[m].size()); ++i)
		{
			cnt += (a[m][i] == b[m][i]);
		}
	}
	cin >> tme;
	cout << round(cnt * 60.0 / double(tme)) << '\n';
	return 0;
}
