#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, sum = 50, s; // 笔试基础有50分！！！
	bool isa;
	for (int j = 1; j <= 7; ++j)
	{
		cin >> a;
		sum += a;
	}
	cin >> isa >> s;
	if (isa)
	{
		sum += 5;
	}
	cout << (sum >= s ? "AKIOI\n" : "AFO\n");
	return 0;
}
