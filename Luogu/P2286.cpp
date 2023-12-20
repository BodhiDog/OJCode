#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1000000;
map<ll, int> pet, man;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	pet[ll(INT_MIN) * 3] = pet[ll(INT_MAX) * 3] = 0;
	man[ll(INT_MIN) * 3] = man[ll(INT_MAX) * 3] = 0;
	map<ll, int>::iterator a, b;
	int n, i, op, val;
	ll ans = 0;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> op >> val;
		if (op == 0) // 宠物
		{
			if (man.size() == 2)
			{
				++pet[val];
			}
			else if (man.count(val))
			{
				ans += 0;
				--man[val];
				if (man[val] <= 0)
				{
					man.erase(man.lower_bound(val));
				}
			}
			else
			{
				a = --man.lower_bound(val);
				b = man.upper_bound(val);
				if (abs(a->first - val) <= abs(b->first - val))
				{
					--a->second;
					ans = (ans + abs(a->first - val)) % MOD;
					if (a->second == 0)
					{
						man.erase(a);
					}
				}
				else
				{
					--b->second;
					ans = (ans + abs(b->first - val)) % MOD;
					if (b->second == 0)
					{
						man.erase(b);
					}
				}
			}
		}
		else // 领养人
		{
			if (pet.size() == 2)
			{
				++man[val];
			}
			else if (pet.count(val))
			{
				ans += 0;
				--pet[val];
				if (pet[val] <= 0)
				{
					pet.erase(pet.lower_bound(val));
				}
			}
			else
			{
				a = --pet.lower_bound(val); // 第一个小于的
				b = pet.upper_bound(val);
				if (abs(a->first - val) <= abs(b->first - val))
				{
					--a->second;
					ans = (ans + abs(a->first - val)) % MOD;
					if (a->second == 0)
					{
						pet.erase(a);
					}
				}
				else
				{
					--b->second;
					ans = (ans + abs(b->first - val)) % MOD;
					if (b->second == 0)
					{
						pet.erase(b);
					}
				}
			}
		}
	}
	cout << ans << flush;
	return 0;
}
