#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int price, tme;
	bool used;
} ticket[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tot = 0, n, i, j = 1, used = 0, ans = 0, op, price, tme, temp;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> op >> price >> tme;
		if (op == 0)
		{
			ans += price;
			ticket[++tot] = {price, tme, false};
		}
		else
		{
			while (j <= tot && tme - ticket[j].tme > 45)
			{
				++j;
			}
			bool flag = false;
			for (temp = j; temp <= tot; ++temp)
			{
				if (!ticket[temp].used && ticket[temp].price >= price)
				{
					ticket[temp].used = true;
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				ans += price;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}