#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
int a[R], cnt[15];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> pr;
	pr.push_back(2), pr.push_back(3), pr.push_back(7), pr.push_back(11);
	int T, n, i;
	long long k, sum;
	string ks;
	bool flag;
	cin >> T;
	while (T--)
	{
		cin >> n >> ks;
		k = (ks.length() <= 16 ? stoll(ks) : 1e16);
		sum = 0;
		flag = false;
		memset(cnt, 0, sizeof(cnt));
		for (i = 1; i <= n; ++i)
		{
			cin >> a[i];
			sum += (long long)a[i];
			for (int x : pr)
			{
				if (a[i] % x == 0)
				{
					++cnt[x];
				}
			}
		}
		if (n == 1) // 这里一定要特判！！！如果只有一个元素且该元素是147/153的倍数，按照原来的写法，就能超过k了！！！
		{
			if (a[1] >= k)
			{
				cout << "Yes\n";
			}
			else
			{
				cout << "No\n";
			}
		}
		else
		{
			if (sum >= k)
			{
				flag = true;
			}
			else
			{
				for (i = 1; i <= n; ++i)
				{
					if ((a[i] % 154 == 0) ||
						(a[i] % 147 == 0) || // 但凡找到一个，就说明能够无限翻倍了
						(a[i] % 77 == 0 && cnt[2]) ||
						(a[i] % 22 == 0 && cnt[7]) ||
						(a[i] % 14 == 0 && cnt[11]) || // 以上是154
						(a[i] % 49 == 0 && cnt[3]) ||
						(a[i] % 21 == 0 && cnt[7] >= 2)) // 注意这里的细节：21本来就包含一个7，想要找到另一个7就必须7的个数>=2
					{
						flag = true;
						break;
					}
				}
			}
			cout << (flag ? "Yes\n" : "No\n");
		}
	}
	return 0;
}
