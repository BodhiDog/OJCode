#include <bits/stdc++.h>
using namespace std;

string s[100010];
unordered_map<string, bool> mp;
unordered_map<string, int> cnt;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, l, ans1 = 0, ans2 = INT_MAX;
	string str;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> str;
		mp[str] = true; // 是需要背的单词
	}
	cin >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> s[j];
	}
	l = 1;
	for (j = 1; j <= m; ++j)
	{
		if (mp[s[j]])
		{
			++cnt[s[j]];
			if (cnt[s[j]] == 1)
			{
				++ans1;
				ans2 = j - l + 1;
				// 新增一个要背的单词时，要更新ans2的长度
			}
		}
		while (l <= j)
		{
			if (!mp[s[l]]) // 不需要背这个词
			{
				++l;
			}
			else if (mp[s[l]] && cnt[s[l]] >= 2) // 即使-1也包含这个词
			{
				--cnt[s[l]];
				++l;
			}
			else
			{
				break;
			}
		}
		ans2 = min(ans2, j - l + 1);
	}
	cout << ans1 << '\n'
		 << ans2 << '\n';
	return 0;
}
