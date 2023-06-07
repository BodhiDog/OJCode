#include <bits/stdc++.h>
using namespace std;

string mem[5010];
short resnum[2000];
string plus_(string x, string y)
{
	memset(resnum, 0, sizeof(resnum)); // 三年OI一场空，多用不清见祖宗
	string res;
	int ressz = max(x.size(), y.size()) + 1;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	while (x.size() < ressz)
		x = x + '0';
	while (y.size() < ressz)
		y = y + '0'; // 补0，防止访问空下标
	int p = 0;
	for (p = 0; p < ressz; ++p)
	{
		resnum[p] += (x[p] - '0') + (y[p] - '0');
		if (resnum[p] >= 10)
		{
			resnum[p] %= 10;
			resnum[p + 1] += 1;
		}
	}
	char c;
	for (p = 0; p <= ressz; ++p)
	{
		c = resnum[p] + '0';
		res = res + c;
	}
	reverse(res.begin(), res.end());
	while (res[0] == '0') // 删前导0
		res.erase(0, 1);
	return res;
}
string f(int x)
{
	if (x == 1)
		return "1";
	if (x == 2)
		return "2";
	if (mem[x].size())
		return mem[x];
	return mem[x] = plus_(f(x - 1), f(x - 2));
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	cout << f(n) << '\n';
	return 0;
}
