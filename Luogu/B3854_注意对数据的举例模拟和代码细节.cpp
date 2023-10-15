#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long n, m, p, q;
	cin >> n >> m >> p >> q;
	cout << (n * m - 1 >= p * m + q ? "Program ends with return value 0.\n" : "Segmentation fault.\n");
	/*例：
	3×3的数组
	访问最后一个元素[2][2]时，指针是2*3+2*/
	return 0;
}
