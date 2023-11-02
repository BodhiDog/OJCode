#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, ans1 = 0, ans2 = 0;
	cin >> n;
	bool flag = false;
	while (n > 0)
	{
		++ans1;
		if (!flag && n % 3 == 1)
		{
			ans2 = ans1;
			flag = true;
		}
		n = n - ceil(n / 3.0); // 苹果的数量每次减少ceil(n/3)
	}
	cout << ans1 << ' ' << ans2 << '\n';
	return 0;
}
