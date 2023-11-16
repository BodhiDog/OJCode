#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
const int R = 2e6 + 10;
mt19937 rd(2333);
unordered_map<ull, ull> cnt;
ull hsh[R];
char sta[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ull now = 0;
	char c;
	int n, i, top = 0;
	ull ans = 0;
	cin >> n;
	for (i = 0; i <= n; ++i)
	{
		hsh[i] = rd();
	}
	cnt[0] = 1;
	for (i = 1; i <= n; ++i)
	{
		cin >> c;
		if (top && sta[top] == c)
		{
			now -= hsh[top] * c;
			--top;
		}
		else
		{
			sta[++top] = c;
			now += hsh[top] * c;
		}
		ans += cnt[now];
		++cnt[now];
	}
	cout << ans << '\n';
	return 0;
}
