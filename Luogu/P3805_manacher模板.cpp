#include <bits/stdc++.h>
using namespace std;

const int R = 2.2e7 + 10;
char s[R];
int r[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n = 0;
	char c = getchar();
	s[++n] = ' ';
	while (isalpha(c))
	{
		s[++n] = c;
		s[++n] = ' ';
		c = getchar();
	}
	int mx = 0, mid = 0, ans = 0; // mx是最右回文子串的右边界+1，mid是中心
	for (int i = 1; i <= n; ++i)
	{
		if (i < mx)
		{
			r[i] = min(mx - i /*本来应该是r-i+1，但是mx本来就是r+1*/, r[mid * 2 - i] /*(i+j)/2=mid由于对称性，r[j]可继承到r[i]*/);
		}
		else
		{
			r[i] = 1; // 在目前已知的最大半径之外了，按照已经算出过的已知，无法得知半径，因此默认为1（下边拓展）
		}
		while (i + r[i] <= n && i - r[i] >= 1 && s[i + r[i]] == s[i - r[i]])
		{
			++r[i];
		}
		if (i + r[i] > mx)
		{
			mx = i + r[i];
			mid = i;
		}
		ans = max(ans, r[i]);
	}
	/*2r-1=newlen
	2r-1=org+org+1（ a a a 中，原字符串3，空格4； a a 中，原字符串2，空格4。可以看出，无论回文串是奇串还是偶串，都是org+org+1）
	2r-1=2org+1
	org（答案长度）=r-1*/
	cout << ans - 1 << '\n';
	return 0;
}
