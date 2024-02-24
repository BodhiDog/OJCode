// 时隔两年，终于做出了这道题！！！
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct Node
{
	int l, r, val;
};
list<Node> s;
int a[R];
bool del[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;
	cin >> n;
	a[0] = 2;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (a[i] == a[i - 1])
		{
			s.back().r = i;
		}
		else
		{
			s.push_back({i, i, a[i]});
		}
	}
	auto it = s.begin(), last = s.begin();
	while (!s.empty())
	{
		for (it = s.begin(); it != s.end(); ++it) // 输出
		{
			cout << it->l << ' ';
		}
		for (it = s.begin(); it != s.end();) // 删
		{
			del[it->l] = true;
			while (del[it->l] && it->l <= it->r)
			{
				++it->l;
			}
			if (it->l > it->r)
			{
				it = s.erase(it);
			}
			else
			{
				++it;
			}
		}
		for (it = s.begin(); it != s.end();) // 并
		{ // 不能把这个并到上一个循环中，例如9 1 1 1 1 1 0 1 1 1，7号位会因为被提前并入上一个块而无法标记del
			last = it;
			--last;
			if (it != s.begin() && last->val == it->val)
			{
				last->r = it->r;
				it = s.erase(it);
			}
			else
			{
				++it;
			}
		}
		cout << '\n';
	}
	return 0;
}
