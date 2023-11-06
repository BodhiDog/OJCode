#include <bits/stdc++.h>
using namespace std;

const int R = 1e7 + 10;
int cnt[130];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	int ans = -1;
	cin >> s;
	for (char c : s)
	{
		++cnt[c];
	}
	for (int i = 'a'; i <= 'z'; ++i)
	{
		ans = max(ans, cnt[i]);
	}
	cout << ans << '\n';
	return 0;
}
