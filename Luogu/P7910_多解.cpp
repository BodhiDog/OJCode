// 平衡树解法 
#include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;

tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> t;
int a[8010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, i, x, v;
	cin >> n >> q;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		
	}
	t.insert(make_pair(-1, -1));
	char op;
	while (q--)
	{
		cin >> op >> x;
		if (op == '1')
		{
			cin >> v;
			t.erase(make_pair(a[x], x));
			a[x] = v;
			t.insert(make_pair(v, x));
		}
		else
		{
			cout << t.order_of_key(make_pair(a[x], x)) << '\n';
		}
	}
	return 0;
}

// 普通解法 
#include <bits/stdc++.h>
using namespace std;
 
 int t[8001]; // t[]存储的是第i个元素在a[]中的原位置
 struct Node
 {
 	int num;
 	int subscr;
 } a[8001];
 bool cmp(Node a, Node b)
 {
 	if (a.num != b.num)
 	{
 		return a.num < b.num;
 	}
 	else
 	{
 		return a.subscr < b.subscr;
 	}
 	// 不是普通的冒泡排序，而是如果元素相同就按照下标排序
 }
 int main()
 {
 	int n, q, x, v, i = 0, j, p;
 	short caozuo;
 	cin >> n >> q;
 	for (i = 1; i <= n; ++i)
 	{
 		cin >> a[i].num;
 		a[i].subscr = i;
 	}
 	sort(a + 1, a + n + 1, cmp);
 	for (i = 1; i <= n; ++i)
 	{
 		t[a[i].subscr] = i;
 	}
 	for (i = 1; i <= q; ++i)
 	{
 		cin >> caozuo;
 		if (caozuo == 1)
 		{
 			cin >> x >> v;
 			a[t[x]].num = v;
 			for (j = 2; j <= n; ++j)
 			{
 				if (!cmp(a[j - 1], a[j]))
 				{
 					swap(a[j], a[j - 1]);
 				}
 			}
 			for (j = n; j >= 2; --j)
 			{
 				if (!cmp(a[j - 1], a[j]))
 				{
 					swap(a[j], a[j - 1]);
 				}
 			}
 			for (j = 1; j <= n; ++j)
 			{
 				t[a[j].subscr] = j;
 			}
 		}
 		else // caozuo == 2
 		{
 			cin >> x;
 			cout << t[x] << endl;
 		}
 	}
 	return 0;
 }
