#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s, all;
	int i, n = 0, cur = 0;
	while (cin >> s)
	{
		++n;
		all = all + s;
	}
	cout << n << ' ';
	if (all[0] == '1') // 从0开始计数！！！
	{
		cout << "0 ";
	}
	for (i = 0; i < all.size(); ++i)
	{
		++cur;
		if (all[i] != all[i + 1])
		{
			cout << cur << ' ';
			cur = 0;
		}
	}
	cout << endl;
	return 0;
}
