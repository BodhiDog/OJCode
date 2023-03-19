#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;

gp_hash_table<string, bool> mp;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, res = 0;
	string s, t;
	mp[""] = true;
	cin >> n;
	while (n--)
	{
		t = "";
		cin >> s;
		s += '/';
		for (auto c : s)
		{
			if (c == '/')
			{
				if (!mp[t])
				{
					mp[t] = true;
					++res;
				}
			}
			t += c; // 不清空t，相当于给每一个文件夹的所有父文件夹关系都存下来了
		}
		cout << res << '\n';
	}
	return 0;
}