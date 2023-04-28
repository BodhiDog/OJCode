#include <bits/stdc++.h>
using namespace std;

using ud = unsigned int;
const int R = 1e5 + 10;
ud a[R], tst1[R], tst2[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, j;
	long long k;
	bool flag;
	ud temp1, temp2;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		temp1 = temp2 = 0;
		flag = true;
		for (j = 1; j <= n; ++j)
		{
			cin >> a[j];
			temp1 ^= a[j];
			temp2 = temp1;
		}
		// 经对大样例中第7组数据的分析，发现存在一种经过第一次变换后不会再改变的数列（样例5也是）
		// 于是先要对数据进行一次检验，看是不是这种特殊的数列
		// 先验一下进行第1次、第2次变换的数列是否发生改变：
		for (j = 1; j <= n; ++j) // 写入tst1，进行1次变换
			tst1[j] = temp1 ^ a[j];
		temp1 = 0;
		for (j = 1; j <= n; ++j) // temp1の自我迭代
			temp1 ^= tst1[j];
		for (j = 1; j <= n; ++j) // 进行第二次变换
			tst2[j] = temp1 ^ tst1[j];
		for (j = 1; j <= n; ++j)
			if (tst2[j] != tst1[j])
			{
				flag = false;
				break;
			}
		// 若不变，直接输出第1次变换的结果即可：
		if (flag)
		{
			for (j = 1; j <= n; ++j)
				cout << tst1[j] << ' ';
			cout << '\n';
		}
		// 若改变，则可用刚做题时推出的特殊性质：
		else
		{
			if (k % 2 == 0) // 不变，原数列
			{
				for (j = 1; j <= n; ++j)
					cout << a[j] << ' ';
				cout << '\n';
			}
			else
			{
				for (j = 1; j <= n; ++j)
					a[j] = temp2 ^ a[j]; // 用原先存下来的
				for (j = 1; j <= n; ++j)
					cout << a[j] << ' ';
				cout << '\n';
			}
		}
	}
	return 0;
}