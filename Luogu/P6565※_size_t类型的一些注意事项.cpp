// 注意：vector、map、string等STL返回的size()类型是size_t，也就是unsigned int。如果这样的数据类型减去一个比它还要大的数，就会返回一个接近无穷大的值
// 例如：size_t(-1) - 3 = 4294967292
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i, j, ans = 0, cnt, anstot;
	string name, msg, a[110];
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> name >> msg;
		cnt = 0;
		for (j = 0; j <= int(msg.size()) - 3; ++j)
		{
			if (msg[j] == 's' && msg[j + 1] == 'o' && msg[j + 2] == 's')
				++cnt;
		}
		if (cnt > ans)
		{
			anstot = 0;
			fill(&a[0], &a[109], "");
			a[++anstot] = name;
			ans = cnt;
		}
		else if (cnt == ans)
		{
			a[++anstot] = name;
		}
	}
	for (i = 1; i <= anstot; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << '\n'
		 << ans << '\n';
	return 0;
}
