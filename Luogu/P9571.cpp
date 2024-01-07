#include <bits/stdc++.h>
using namespace std;

map<int, int> kl; // 斜率为k的线的个数
map<int, unordered_map<int, int>> mp;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, op, k, b, tot = 0;
	cin >> m;
	while (m--)
	{
		cin >> op >> k >> b;
		if (op == 1)
		{
			++mp[k][b];
			++tot;
			++kl[k];
		}
		else if (op == 2)
		{
			cout << tot - kl[k] << '\n';
		}
		else
		{
			for (auto it = kl.begin(); it != kl.end(); ++it) // 一个公共点的擦掉
			{
				if (it->first != k)
				{
					mp.erase(it->first);
					tot -= it->second;
				}
			}
			kl.clear();
			tot -= mp[k][b], kl[k] = tot;
			mp[k][b] = 0; // 重合的擦掉
		}
	}
	return 0;
}
