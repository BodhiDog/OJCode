#include <bits/stdc++.h>
using namespace std;

int main()
{
	// ����Сֵ
	//  int n, a, min = 99999999;
	//  cin>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin>>a;
	//  	if (a < min)
	//  	{
	//  		min = a;
	//  	}
	//  }
	//  cout<<min;

	// ���ַ�ת
	//  string a;
	//  cin>>a;
	//  int len = a.size();
	//  for(int i = len-1;i >= 0;i--)
	//  {
	//  	cout<<a[i];
	//  }

	// �ٷַ�լ����ˮ
	//  double t, a;
	//  int n;
	//  cin>>t>>n;
	//  a = t / n;
	//  cout<<fixed<<setprecision(3)<<a<<endl;
	//  cout<<n * 2<<endl;

	// ʱ�����
	//  int a, b, c, d;
	//  cin>>a>>b>>c>>d;
	//  int x = c - a, y = d - b;
	//  if(y < 0)
	//  {
	//  	x--;
	//  	y += 60;
	//  }
	//  cout<<x<<" "<<y;

	// ���������
	//  double s, a, b, c, p;
	//  cin>>a>>b>>c;
	//  p = (a + b + c) / 2;
	//  s = sqrt(p * (p - a) * (p - b) * (p - c));
	//  cout<<fixed<<setprecision(1)<<s<<endl;

	// ��̼�ر�
	//  int a, b;
	//  double p, x;
	//  cin>>a>>b;
	//  p = a + b / 10;
	//  x = p / 1.9;
	//  cout<<fixed<<setprecision(0)<<x;

	// һ��֮��
	//  int a;
	//  float n = 1;
	//  cin>>a;
	//  while (a > 1)
	//  {
	//  	n++;
	//  	a /= 2;
	//  }
	//  cout<<n<<endl;

	// ����ֱ��������
	//  int n, t = 0, a;  //t��ʾ��ǰ��Ҫ���������
	//  cin>>n;
	//  a = n;  //a��������
	//  for(int i = 0; i < n; i++)
	//  {  //n��
	//  	for(int j = 0; j < a; j++)
	//  	{  //ÿ��a��
	//  		t++;  //��Ҫ�������+1
	//  		//��������ȼ����������Ȼ����������Ϊ�����ȼ������������t��Ҫ��ʼ��Ϊ0
	//  		printf("%02d", t);  //�߼�������������λ������֮ǰ����0
	//  	}
	//  	a--;  //ÿ���һ�У�����һ��
	//  	cout<<endl;  //����
	//  }

	// �׳�
	//  int a, s = 1;
	//  cin>>a;
	//  for (int i = 1; i <= a; i++)
	//  {
	//  	s = s * i;
	//  }
	//  cout<<a<<endl;

	// ����Ŷ�ϵͳ
	//  double a, t1, t2;
	//  cin>>a;
	//  t1 = a * 5;
	//  t2 = a * 3 + 11;
	//  if (t1 < t2)
	//  {
	//  	cout<<"Local";
	//  }
	//  if (t1 > t2)
	//  {
	//  	cout<<"Luogu";
	//  }

	// ϲ��������
	//  int a;
	//  cin>>a;
	//  if ((a % 2 == 0)&&(a > 4)&&(a <= 12))
	//  {
	//  	cout<<"1"<<" ";
	//  }
	//  else
	//  {
	//  	cout<<"0"<<" ";
	//  }
	//  if ((a % 2 == 0)||((a > 4)&&(a <= 12)))
	//  {
	//  	cout<<"1"<<" ";
	//  }
	//  else
	//  {
	//  	cout<<"0"<<" ";
	//  }
	//  if ((a % 2 == 0)^((a > 4)&&(a <= 12)))
	//  {
	//  	cout<<"1"<<" ";
	//  }
	//  else
	//  {
	//  	cout<<"0"<<" ";
	//  }
	//  if ((a % 2 != 0) && ((a <= 4) || (a > 12)))
	//  {
	//  	cout<<"1"<<" ";
	//  }
	//  else
	//  {
	//  	cout<<"0"<<" ";
	//  }

	// ��β�³�ƻ��
	//  int m, t, s, shengyu;
	//  cin >> m >> t >> s;
	//  if (t == 0)
	//  {
	//  	cout << 0;
	//  	return 0;
	//  }
	//  shengyu = m - (s / t + s % t);
	//  if (shengyu < 0)
	//  {
	//  	cout << 0;
	//  	return 0;
	//  }
	//  cout << ceil(shengyu);

	// ��������
	//  int m;
	//  float h, bmi;
	//  cin >> m >> h;
	//  bmi = m / pow(h, 2);
	//  if (bmi < 18.5)
	//  {
	//  	cout << "Underweight";
	//  }
	//  if (bmi >= 18.5 && bmi < 24)
	//  {
	//  	cout << "Normal";
	//  }
	//  if (bmi >= 24)
	//  {
	//  	cout << bmi << endl;
	//  	cout << "Overweight";
	//  }

	// �·�����
	//  int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//  int year, month;
	//  cin >> year >> month;
	//  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//  {
	//  	a[1] = 29;
	//  }
	//  cout << a[month - 1];

	// ������ϰ��
	//  int len;
	//  string a;
	//  cin >> a;
	//  len = a.size();
	//  for (int i = 0; i < len; i++)
	//  {
	//  	if (a[i] >= 'a' && a[i] <= 'z')
	//  	{
	//  		a[i] -= 32;
	//  	}
	//  }
	//  for (int i = 0; i < len; i++)
	//  {
	//  	cout << a[i];
	//  }

	// �ֻ�
	//  int times[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
	//  int k, len, temp;
	//  string a;
	//  getline(cin, a);
	//  len = a.length();
	//  for (int i = 0; i < len; i++)
	//  {
	//  	temp = a[i] - 97;
	//  	if (a[i] >= 'a' && a[i] <= 'z')
	//  	{
	//  		k += times[temp];
	//  	}
	//  	if (a[i] == ' ')
	//  	{
	//  		k++;
	//  	}
	//  }
	//  cout << k;

	// ����չʾ
	//  int a[2000];
	//  int year1, year2, k;
	//  cin >> year1 >> year2;
	//  for (int i = year1; i <= year2; i++)
	//  {
	//  	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
	//  	{
	//  		a[k] = i;
	//  		k++;
	//  	}
	//  }
	//  cout << k << endl;
	//  for (int i = 0; i < k; i++)
	//  {
	//  	cout << a[i] << " ";
	//  }

	// n���εĶԽ��߸���
	//  unsigned long long sum, n; //unsigned���޷�����
	//  cin >> n;
	//  sum = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
	//  cout << sum;

	// ������������Ҫ��˳�����_P4414
	//  int a[3];
	//  char A, B, C;
	//  cin >> a[0] >> a[1] >> a[2];
	//  cin >> A >> B >> C;
	//  sort(a, a + 3);
	//  cout << a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];

	// �����η���
	//  int a[3];
	//  cin >> a[0] >> a[1] >> a[2];
	//  sort(a, a + 3);
	//  if (a[0] + a[1] <= a[2])
	//  {
	//  	cout << "Not triangle" << endl;
	//  	return 0;
	//  }
	//  if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2))
	//  {
	//  	cout << "Right triangle" << endl;
	//  }
	//  if (pow(a[0], 2) + pow(a[1], 2) > pow(a[2], 2))
	//  {
	//  	cout << "Acute triangle" << endl;
	//  }
	//  if (pow(a[0], 2) + pow(a[1], 2) < pow(a[2], 2))
	//  {
	//  	cout << "Obtuse triangle" << endl;
	//  }
	//  if (a[0] == a[1] || a[1] == a[2])
	//  {
	//  	cout << "Isosceles triangle" << endl;
	//  }
	//  if (a[0] == a[1] && a[1] == a[2])
	//  {
	//  	cout << "Equilateral triangle" << endl;
	//  }

	// С��ҵĵ��
	//  int a;
	//  double money;
	//  cin >> a;
	//  if (a <= 150)
	//  {
	//  	money = a * 0.4463;
	//  }
	//  else if (a > 150 && a <= 400)
	//  {
	//  	money = 66.945 + (a - 150) * 0.4663;
	//  }
	//  else if (a >= 401)
	//  {
	//  	money = 183.52 + (a - 400) * 0.5663;
	//  }
	//  cout << fixed << setprecision(1) << money << endl;

	// ���Ǻ���
	//  long long int a[3];
	//  cin >> a[0] >> a[1] >> a[2];
	//  sort(a, a + 3);
	//  cout << a[0] / __gcd(a[0], a[2]) << "/" << a[2] / __gcd(a[0], a[2]);

	// ȥ����ߡ���ͷֺ����ƽ����
	//  int a;
	//  double avg, score[1000], sum;
	//  cin >> a;
	//  for (int i = 0; i < a; i++)
	//  {
	//  	cin >> score[i];
	//  }
	//  sort(score, score + a);
	//  score[0] == 0;
	//  score[a - 1] == 0;
	//  for (int i = 1; i < a - 1; i++)
	//  {
	//  	sum += score[i];
	//  }
	//  avg = sum / (a - 2) * 1.0;
	//  cout << fixed << setprecision(2) << avg << endl;

	// ���ַ�ת
	//  long long int a;
	//  cin >> a;
	//  if (a < 0)
	//  {
	//  	cout << "-";
	//  	a = abs(a);
	//  	while (a > 0)
	//  	{
	//  		if (a % 10 == 0)
	//  		{
	//  			a /= 10;
	//  			continue;
	//  		}
	//  		else
	//  		{
	//  			for (int i = 0; a != 0; i++)
	//  			{
	//  				cout << a % 10;
	//  				a /= 10;
	//  			}
	//  		}
	//  	}
	//  }
	//  else
	//  {
	//  	while (a > 0)
	//  	{
	//  		if (a % 10 == 0)
	//  		{
	//  			a /= 10;
	//  			continue;
	//  		}
	//  		else
	//  		{
	//  			for (int i = 0; a != 0; i++)
	//  			{
	//  				cout << a % 10;
	//  				a /= 10;
	//  			}
	//  		}
	//  	}
	//  }

	// У�������
	//  int u, v, len, num, n, tree[10001] = {0};
	//  cin >> len >> n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin >> u >> v;
	//  	for (int j = u; j <= v; j++)
	//  	{
	//  		tree[j] = 1;
	//  	}
	//  }
	//  for (int i = 0; i <= len; i++)
	//  {
	//  	if (tree[i] == 0)
	//  	{
	//  		num++;
	//  	}
	//  }
	//  cout << num << endl;

	// Cantor��_��ο����https://www.luogu.com.cn/blog/oyokuaizi/solution-p1014
	//  int n, k = 1;
	//  cin >> n;
	//  while (n > k)
	//  {
	//  	n = n - k;
	//  	k++;
	//  }
	//  if (k % 2 == 0)
	//  {
	//  	cout << n << "/" << k + 1 - n;
	//  }
	//  else
	//  {
	//  	cout << k + 1 - n << "/" << n;
	//  }

	// ��������
	//  int n, i, j, a[10001], ans;
	//  cin >> n;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	cin >> a[i];
	//  }
	//  for (i = 1; i < n; i++)
	//  {
	//  	for (j = i; j <= n; j++)
	//  	{
	//  		if (a[i] > a[j])
	//  		{
	//  			ans++;
	//  		}
	//  	}
	//  }
	//  cout << ans;

	// ���մӴ�С����
	//  int year[105], month[105], day[105], f[101];
	//  string name[105];
	//  int n;
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> name[i] >> year[i] >> month[i] >> day[i];
	//  	f[i] = year[i] * 10000 + month[i] * 100 + day[i];
	//  }
	//  for (int i = 0; i < n; i++)
	//  {
	//  	for (int j = i + 1; j < n; j++)
	//  	{
	//  		if (year[i] > year[j] ||
	//  			year[i] == year[j] && month[i] > month[j] ||
	//  			year[i] == year[j] && month[i] == month[j] && day[i] > day[j])
	//  		{
	//  			swap(name[i], name[j]);
	//  			swap(year[i], year[j]);
	//  			swap(month[i], month[j]);
	//  			swap(day[i], day[j]);
	//  		}
	//  	}
	//  }
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cout << name[i] << endl;
	//  }

	// ����_1789_����˼·�����https://www.luogu.com.cn/blog/xiaocai/solution-p1789
	//  const int MAX = 10001;
	//  int a[MAX][MAX];
	//  int n, m, k, x, y, ans = 0;
	//  cin >> n >> m >> k;
	//  //���
	//  for (int i = 1; i <= m; i++)
	//  {
	//  	cin >> x >> y;
	//  	for (int j = x - 1; j <= x + 1; j++)
	//  	{
	//  		for (int k = y - 1; k <= y + 1; k++)
	//  		{
	//  			a[j][k] = 1;
	//  		}
	//  	}
	//  	a[x - 2][y] = 1, a[x + 2][y] = 1, a[x][y - 2] = 1, a[x][y + 2] = 1;
	//  }
	//  //өʯ
	//  for (int i = 1; i <= k; i++)
	//  {
	//  	cin >> x >> y;
	//  	for (int j = x - 2; j <= x + 2; j++)
	//  	{
	//  		for (int k = y - 2; k <= y + 2; k++)
	//  		{
	//  			a[j][k] = 1;
	//  		}
	//  	}
	//  }
	//  //���������û���ĸ��Ӵ�+1
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	for (int j = 1; j <= n; j++)
	//  	{
	//  		if (a[i][j] == 0)
	//  		{
	//  			ans++;
	//  		}
	//  	}
	//  }
	//  cout << ans << endl;

	// ����������
	//  int a[1000][1000];
	//  int n, m = -1000;
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	for (int j = 0; j <= i; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (int i = n - 2; i >= 0; i--)
	//  {
	//  	for (int j = 0; j <= i; j++)
	//  	{
	//  		a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
	//  	}
	//  }
	//  cout << a[0][0] << endl;

	// ������_����->https://blog.csdn.net/qq_43010386/article/details/82012689
	//  const int x1[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
	//  const int y1[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
	//  long long s[25][25] = {0}, a[25][25] = {0};
	//  int n, m, x, y;
	//  cin >> n >> m >> x >> y;
	//  memset(a, 0, sizeof(a));
	//  a[x][y] = 1;
	//  for (int i = 1; i <= 8; i++)
	//  {
	//  	if (x + x1[i] >= 0 && y + y1[i] >= 0)
	//  	{
	//  		a[x + x1[i]][y + y1[i]] = 1;
	//  	}
	//  }
	//  //a��������������λ�ã������Ŀ��Ƶ���Ϊ1
	//  s[0][0] = 1;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	if (a[i][0] == 0)
	//  	{
	//  		s[i][0] = 1;
	//  	}
	//  	else
	//  	{
	//  		break; //����߽���������ľͶ�Ϊ0
	//  	}
	//  }
	//  for (int j = 1; j <= m; j++)
	//  {
	//  	if (a[0][j] == 0)
	//  	{
	//  		s[0][j] = 1;
	//  	}
	//  	else
	//  	{
	//  		break;
	//  	}
	//  }
	//  //���ñ߽�ĳ�ֵ
	//  for (int i = 1; i <= n; i++)
	//  	for (int j = 1; j <= m; j++)
	//  	{
	//  		if (a[i][j] == 0)
	//  		{
	//  			s[i][j] = s[i - 1][j] + s[i][j - 1];
	//  		}
	//  		//λ��û����ͼ����ۼ�
	//  		else
	//  		{
	//  			s[i][j] = 0;
	//  		}
	//  	}
	//  cout << s[n][m] << endl;

	// ����Ʒ����
	//  int n, max, a[30001], tot, temp;
	//  cin >> max >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> a[i];
	//  }
	//  sort(a, a + n);
	//  int left = 0, right = n - 1;
	//  while (left <= right)
	//  {
	//  	if (a[left] + a[right] <= max)
	//  	{
	//  		tot++;
	//  		left++;
	//  		right--;
	//  	}
	//  	else
	//  	{
	//  		right--;
	//  		tot++;
	//  	}
	//  }
	//  cout << tot << endl;

	// �������
	//  long long int s[1001], sum, time1;
	//  int n = 0;
	//  while (cin >> s[n])
	//  {
	//  	n++;
	//  }
	//  time1 = pow(2, n - 1);
	//  for (int j = 0; j < n; j++)
	//  {
	//  	sum += s[j] * time1;
	//  }
	//  cout << sum << endl;

	// ʹ������ϵͳ�̶ȵ�����_�������
	//  int len;
	//  string s;
	//  getline(cin, s);
	//  len = s.length();
	//  for (int i = 0; i < len; i++)
	//  {
	//  	if (s[i] != '\\')
	//  	{
	//  		continue;
	//  	}
	//  	else
	//  	{
	//  		if (s[i + 1] == 'r' && s[i + 2] == '\\' && s[i + 3] == 'n')
	//  		{
	//  			cout << "windows" << endl;
	//  			return 0;
	//  		}
	//  		if (s[i + 1] == 'r' && s[i + 1] != '\\')
	//  		{
	//  			cout << "mac" << endl;
	//  			return 0;
	//  		}
	//  		if (s[i + 1] == 'n' && s[i + 1] != '\\')
	//  		{
	//  			cout << "linux" << endl;
	//  			return 0;
	//  		}
	//  	}
	//  }

	// ֱ����
	//  int sor[601] = {0}, w, n, x, sum;
	//  cin >> n >> w;
	//  for (int i = 1; i <= n; i++) //������i=1�������ڼ���i*w/100ʱ���0
	//  {
	//  	cin >> x;
	//  	sor[x]++;
	//  	sum = 0;
	//  	for (int j = 600; j >= 0; j--)
	//  	{
	//  		sum += sor[j];
	//  		if (sum >= max(1, i * w / 100))
	//  		{
	//  			cout << j << " ";
	//  			break;
	//  		}
	//  	}
	//  }

	// ����_https://www.luogu.com.cn/blog/LRY314/solution-p5690
	//  int m, d;
	//  char t;
	//  cin >> m >> t >> d;
	//  if (d > 0 && d <= 28)
	//  {
	//  	if (m > 0 && m <= 12)
	//  		cout << 0;
	//  	else
	//  		cout << 1;
	//  }
	//  else if (d == 29 || d == 30)
	//  {
	//  	if (m == 2 || m == 0 || m > 12)
	//  		cout << 1;
	//  	else
	//  		cout << 0;
	//  }
	//  else if (d == 31)
	//  {
	//  	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	//  		cout << 0;
	//  	else if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
	//  		cout << 1;
	//  	else if (m % 10 == 4 || m % 10 == 6 || m % 10 == 9)
	//  		cout << 2;
	//  	else
	//  		cout << 1;
	//  }
	//  else if (m == 0 || m > 12)
	//  	cout << 2;
	//  else
	//  	cout << 1;

	// ����Ĳ��
	//  int n, last = 0, t;
	//  int a[100001] = {0};
	//  cin >> n;
	//  if (n % 2 == 1)
	//  {
	//  	cout << "-1";
	//  	return 0;
	//  }
	//  for (int i = 0; n > 0; i++)
	//  {
	//  	a[i] = n % 2;
	//  	n /= 2;
	//  	if (a[i] == 1)
	//  	{
	//  		last = i;
	//  	}
	//  }
	//  for (int i = last; i >= 0; i--)
	//  {
	//  	t = pow(2, i);
	//  	if (a[i] != 0 && t != 1)
	//  	{
	//  		cout << t << " ";
	//  	}
	//  }

	// ��������_https://www.luogu.com.cn/blog/w1049/solution-p1020
	//  const int N = 100001;
	//  int a[N], d1[N], d2[N], n = 1;
	//  // while (cin >> a[++n])
	//  // 	cout << n << " ";
	//  // n--; //ѭ��������nΪ���ݸ���+1������Ҫ���仹ԭΪ���ݸ���
	//  while (cin >> a[n])
	//  {
	//  	n++;
	//  	// cout << n << " ";
	//  }
	//  n--; //ѭ��������nΪ���ݸ���+1������Ҫ���仹ԭΪ���ݸ���
	//  // cout << endl;
	//  // cout << n << endl;
	//  // for (int i = 0; i <= n; i++)
	//  // 	cout << a[i] << " ";
	//  // cout << endl;
	//  int len1 = 1, len2 = 1;		 //��ʼ����Ϊ1
	//  d1[1] = a[1];				 //�������������г���
	//  d2[1] = a[1];				 //�������������г���
	//  for (int i = 2; i <= n; i++) //��a[2]��ʼö��ÿ��������Ϊa[1]�Ѿ��ӽ�ȥ��
	//  {
	//  	if (d1[len1] >= a[i])
	//  	{
	//  		len1++;
	//  		d1[len1] = a[i]; //�������Ҫ��(������)�ͼ���d1
	//  	}
	//  	else //������a[i]�滻d1�е�һ����
	//  	{
	//  		int p1 = upper_bound(d1 + 1, d1 + 1 + len1, a[i], greater<int>()) - d1;
	//  		d1[p1] = a[i];
	//  	}
	//  	if (d2[len2] < a[i])
	//  	{
	//  		len2++;
	//  		d2[len2] = a[i];
	//  	}
	//  	else
	//  	{
	//  		int p2 = lower_bound(d2 + 1, d2 + 1 + len2, a[i]) - d2;
	//  		d2[p2] = a[i];
	//  	}
	//  }
	//  cout << len1 << endl
	//  	 << len2;

	// ��������_Practice.cpp->̰��.1229
	//  ios::sync_with_stdio(false);
	//  int r, n, i, s = 0, p, j;
	//  short a[1001] = {0}, d[1001] = {0};
	//  cin >> n;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	cin >> a[i];
	//  	p = -1;
	//  	for (j = 1; j <= s; j++)
	//  	{
	//  		if (d[j] >= a[i])
	//  		{
	//  			p = j;
	//  			break;
	//  		}
	//  	}
	//  	if (p == -1)
	//  	{
	//  		s++;
	//  		d[s] = a[i];
	//  	}
	//  	else
	//  	{
	//  		d[p] = a[i];
	//  	}
	//  }
	//  cout << s;

	// P5707
	//  ios::sync_with_stdio(false);
	//  int s, v;
	//  cin >> s >> v;
	//  int t = ceil(1.0 * s / v) + 10; //�ܷ�����
	//  int zero = 60 * (24 + 8) - t;	//ǰһ��0�㵽�����ķ�����
	//  int hh = (zero / 60) % 24;
	//  int mm = zero % 60;
	//  if (hh < 10)
	//  {
	//  	if (mm < 10)
	//  		cout << "0" << hh << ":"
	//  			 << "0" << mm;
	//  	else
	//  		cout << "0" << hh << ":" << mm;
	//  }
	//  else if (hh >= 10)
	//  {
	//  	if (mm < 10)
	//  		cout << hh << ":"
	//  			 << "0" << mm;
	//  	else
	//  		cout << hh << ":" << mm;
	//  }

	// P2433
	//  int T;
	//  cin >> T;
	//  if (T == 1)
	//  {
	//  	cout << "I love Luogu!";
	//  }
	//  else if (T == 2)
	//  {
	//  	cout << 2 + 4 << " " << 10 - 2 - 4;
	//  }
	//  else if (T == 3)
	//  {
	//  	cout << 3 << endl
	//  		 << 12 << endl
	//  		 << 2 << endl;
	//  }
	//  else if (T == 4)
	//  {
	//  	printf("%.3lf\n", 500.0 / 3.0);
	//  }
	//  else if (T == 5)
	//  {
	//  	cout << 15 << endl;
	//  }
	//  else if (T == 6)
	//  {
	//  	cout << sqrt(6 * 6 + 9 * 9) << endl;
	//  }
	//  else if (T == 7)
	//  {
	//  	cout << 110 << endl
	//  		 << 90 << endl
	//  		 << 0 << endl;
	//  }
	//  else if (T == 8)
	//  {
	//  	double const pi = 3.141593;
	//  	double const r = 5;
	//  	cout << pi * r * 2 << endl
	//  		 << pi * r * r << endl
	//  		 << 4.0 / 3 * pi * r * r * r << endl;
	//  }
	//  else if (T == 9)
	//  {
	//  	cout << 22 << endl;
	//  }
	//  else if (T == 10)
	//  {
	//  	cout << 9 << endl;
	//  }
	//  else if (T == 11)
	//  {
	//  	cout << 100.0 / (8 - 5) << endl;
	//  }
	//  else if (T == 12)
	//  {
	//  	cout << 13 << endl
	//  		 << "R" << endl;
	//  }
	//  else if (T == 13)
	//  {
	//  	double const pi = 3.141593;
	//  	double V = pi * 4 * 4 * 4 * 4 / 3 + pi * 10 * 10 * 10 * 4 / 3;
	//  	cout << floor(pow(V, 1.0 / 3)) << endl;
	//  }
	//  else if (T == 14)
	//  {
	//  	cout << 50 << endl;
	//  }

	// P1424
	//  unsigned long int sum = 0;
	//  int x, n;
	//  cin >> x >> n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	if (x != 6 && x != 7)
	//  	{
	//  		sum += 250;
	//  	}
	//  	if (x == 7)
	//  		x = 1;
	//  	else
	//  	{
	//  		x++;
	//  	}
	//  }
	//  cout << sum;

	// P1085
	//  ios::sync_with_stdio(false);
	//  int a, b;
	//  for (int i = 1; i <= 7; i++)
	//  {
	//  	cin >> a >> b;
	//  	if (a + b > 8)
	//  	{
	//  		cout << i;
	//  		return 0;
	//  	}
	//  }
	//  cout << "0";

	// P1909
	//  const long int INF = 1e8;
	//  long int ans = INF, t;
	//  int n, num, pri;
	//  cin >> n;
	//  for (int i = 1; i <= 3; i++)
	//  {
	//  	cin >> num >> pri;
	//  	if (n % num == 0)
	//  	{
	//  		t = n / num * pri;
	//  	}
	//  	else
	//  	{
	//  		t = (n / num + 1) * pri;
	//  	}
	//  	ans = min(ans, t);
	//  }
	//  cout << ans;

	// P1597_https://www.luogu.com.cn/blog/user8000/solution-p1597
	//  int a[4];
	//  char s1, s2;
	//  while (scanf("%c:=%c;", &s1, &s2) == 4) //�������c++��������
	//  {
	//  	if (s2 >= '0' && s2 <= '9')
	//  	{
	//  		a[s1 - 'a'] = s2 - '0';
	//  	}
	//  	else
	//  	{
	//  		a[s1 - 'a'] = a[s2 - 'a'];
	//  	}
	//  	// a[s1 - 'a'] = s2 >= '0' && s2 <= '9' ? s2 - '0' : a[s2 - 'a']; //��ֵ���������
	//  }
	//  printf("%d %d %d", a[0], a[1], a[2], a[3]);

	// P5719
	//  double suma, sumb;
	//  float ansa, ansb, tota, totb;
	//  int k, n;
	//  //���ϴ������main()�ⲿ
	//  cin >> n >> k;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	if (i % k == 0)
	//  	{
	//  		suma += i;
	//  		tota++;
	//  	}
	//  	else
	//  	{
	//  		sumb += i;
	//  		totb++;
	//  	}
	//  }
	//  ansa = suma / tota * 1.0;
	//  ansb = sumb / totb * 1.0;
	//  cout << fixed << setprecision(1) << ansa << " " << ansb;

	// P1914
	//  int n, y;
	//  string r;
	//  cin >> n >> r;
	//  y = r.size();
	//  for (int h = 0; h < y; h++)
	//  {
	//  	r[h] = r[h] + n;
	//  	if (r[h] > 'z' || r[h] < 'a')
	//  	{
	//  		r[h] -= 26;
	//  	}
	//  }
	//  cout << r;

	// P5734
	//  int n, t;
	//  string a, s, j;
	//  int a2, b;
	//  int a3, e;
	//  cin >> n;
	//  cin >> a;
	//  for (int u = 0; u < n; u++)
	//  {
	//  	cin >> t;
	//  	if (t == 1)
	//  	{
	//  		cin >> s;
	//  		a += s;
	//  		cout << a << endl;
	//  	}
	//  	else if (t == 2)
	//  	{
	//  		cin >> a2 >> b;
	//  		j = a.substr(a2, b);
	//  		a = j;
	//  		cout << a << endl;
	//  	}
	//  	else if (t == 3)
	//  	{
	//  		cin >> a3 >> s;
	//  		a.insert(a3, s);
	//  		cout << a << endl;
	//  	}
	//  	else if (t == 4)
	//  	{
	//  		cin >> s;
	//  		e = a.find(s);
	//  		if (e != -1)
	//  			cout << e << endl;
	//  		else
	//  			cout << "-1" << endl;
	//  	}
	//  }

	// P1308
	//  int tot = 0;
	//  string a, t, m;
	//  getline(cin, t);
	//  getline(cin, a);
	//  int p1 = 0, p2 = a.find(" "), fp;
	//  for (int u = 0; u < t.size(); u++)
	//  {
	//  	t[u] = tolower(t[u]);
	//  }
	//  for (int u = 0; u < a.size(); u++)
	//  {
	//  	a[u] = tolower(a[u]);
	//  }
	//  // cout << t << endl
	//  // 	 << endl;
	//  while (p2 != -1)
	//  {
	//  	m = a.substr(p1, p2 - p1);
	//  	// cout << m << endl;
	//  	if (m == t)
	//  	{
	//  		tot++;
	//  		if (tot == 1)
	//  		{
	//  			fp = p1;
	//  		}
	//  	}
	//  	p1 = p2 + 1;
	//  	p2 = a.find(" ", p2 + 1);
	//  }
	//  if (tot == 0)
	//  {
	//  	cout << "-1";
	//  }
	//  else
	//  {
	//  	cout << tot << " " << fp << endl;
	//  }

	// P1601
	//  string s1, s2;
	//  cin >> s1 >> s2;
	//  int ans[510] = {0};
	//  int a[502] = {0}, b[502] = {0}, al = s1.size(), bl = s2.size(), len = 0;
	//  for (int i = 0; i < al; i++)
	//  {
	//  	a[i] = s1[al - 1 - i] - '0';
	//  }
	//  for (int i = 0; i < bl; i++)
	//  {
	//  	b[i] = s2[bl - 1 - i] - '0';
	//  }
	//  len = max(s1.size(), s2.size());
	//  for (int i = 0; i < len; i++)
	//  {
	//  	ans[i] = a[i] + b[i];
	//  }
	//  for (int i = 0; i < len; i++)
	//  {
	//  	if (ans[i] >= 10)
	//  	{
	//  		ans[i + 1] = ans[i + 1] + ans[i] / 10;
	//  		ans[i] = ans[i] % 10;
	//  	}
	//  }
	//  if (ans[len] != 0)
	//  {
	//  	len++;
	//  }
	//  for (int u = len - 1; u >= 0; u--)
	//  {
	//  	cout << ans[u];
	//  }

	// P1303
	//  string s1, s2;
	//  cin >> s1 >> s2;
	//  int ans[510] = {0}, q, o, k, p = 0;
	//  int a[502] = {0}, b[502] = {0}, al = s1.size(), bl = s2.length();
	//  for (int i = 0; i < al; i++)
	//  {
	//  	a[i] = s1[al - 1 - i] - '0';
	//  }
	//  for (int i = 0; i < bl; i++)
	//  {
	//  	b[i] = s2[bl - 1 - i] - '0';
	//  }
	//  for (q = 0; q < al; q++)
	//  {
	//  	for (o = 0; o < bl; o++)
	//  	{
	//  		k = o + q;
	//  		ans[k] += a[q] * b[o];
	//  		if (ans[k] >= 10)
	//  		{
	//  			ans[k + 1] += ans[k] / 10;
	//  			ans[k] = ans[k] % 10;
	//  		}
	//  	}
	//  }
	//  for (q = 509; q >= 0; q--)
	//  {
	//  	if (ans[q] != 0)
	//  	{
	//  		p = q;
	//  		break;
	//  	}
	//  }
	//  for (q = p; q >= 0; q--)
	//  {
	//  	cout << ans[q];
	//  }

	// P1090_https://www.luogu.com.cn/blog/tarjin/solution-p1090
	//  int n, c, a[10002] = {0}, b[10002] = {0}, j;
	//  long long ans = 0;
	//  cin >> n;
	//  for (c = 1; c <= n; c++)
	//  {
	//  	cin >> a[c];
	//  }
	//  sort(a + 1, a + n + 1);
	//  for (c = 1; c <= n - 1; c++)
	//  {
	//  	ans = ans + a[c] + a[c + 1];
	//  	a[c + 1] += a[c];
	//  	for (j = c + 1; j <= n - 1; j++)
	//  	{
	//  		if (a[j] > a[j + 1])
	//  			swap(a[j], a[j + 1]);
	//  		else
	//  			break;
	//  	}
	//  }
	//  cout << ans;

	// ��P7074_https://www.bilibili.com/video/BV19z4y1C7GT?share_source=copy_web
	//  int a[1001][1001] = {0};
	//  long long up[1001][1001] = {0}, down[1001][1001] = {0};
	//  int m, n, i, j;
	//  cin >> m >> n;
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  		down[i][j] = up[i][j] = -1e10;
	//  	}
	//  }
	//  down[1][1] = a[1][1];
	//  for (i = 2; i <= m; i++)
	//  {
	//  	down[i][1] = a[i][1] + down[i - 1][1];
	//  }
	//  for (j = 2; j <= n; j++)
	//  {
	//  	down[1][j] = max(up[1][j - 1], down[1][j - 1]) + a[1][j];
	//  	up[m][j] = max(up[m][j - 1], down[m][j - 1]) + a[m][j];
	//  	for (i = 2; i <= m; i++)
	//  	{
	//  		down[i][j] = max(down[i][j - 1], max(down[i - 1][j], up[i][j - 1])) + a[i][j];
	//  	}
	//  	for (i = m - 1; i >= 1; i--)
	//  	{
	//  		up[i][j] = max(up[i][j - 1], max(up[i + 1][j], down[i][j - 1])) + a[i][j];
	//  	}
	//  }
	//  // cout << endl;
	//  // for (i = 1; i <= m; i++)
	//  // {
	//  // 	for (j = 1; j <= n; j++)
	//  // 	{
	//  // 		cout << up[i][j] << " ";
	//  // 	}
	//  // 	cout << endl;
	//  // }
	//  // cout << endl;
	//  // for (i = 1; i <= m; i++)
	//  // {
	//  // 	for (j = 1; j <= n; j++)
	//  // 	{
	//  // 		cout << down[i][j] << " ";
	//  // 	}
	//  // 	cout << endl;
	//  // }
	//  cout << down[m][n];

	// P1980
	//  int n, v, tot = 0, x, b;
	//  string s;
	//  cin >> n >> x;
	//  x += '0';
	//  for (v = 1; v <= n; v++)
	//  {
	//  	s = to_string(v);
	//  	for (b = 0; b < s.length(); b++)
	//  	{
	//  		if (s[b] == x)
	//  		{
	//  			tot++;
	//  		}
	//  	}
	//  }
	//  cout << tot;

	// P2670
	//  ios::sync_with_stdio(false);
	//  int n, m, i, j, k;
	//  int xx[9] = {0, -1, 0, 1, 1, 1, 0, -1, -1},
	//  	yy[9] = {0, -1, -1, -1, 0, 1, 1, 1, 0};
	//  int a[102][102] = {0};
	//  char c[102][102] = {};
	//  cin >> m >> n;
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		cin >> c[i][j];
	//  	}
	//  }
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		if (c[i][j] == '*')
	//  		{
	//  			for (k = 1; k <= 8; k++)
	//  			{
	//  				a[i + xx[k]][j + yy[k]]++;
	//  			}
	//  		}
	//  	}
	//  }
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		if (c[i][j] != '*')
	//  		{
	//  			cout << a[i][j];
	//  		}
	//  		else
	//  		{
	//  			cout << '*';
	//  		}
	//  	}
	//  	cout << endl;
	//  }

	// P1781
	// int n, ans;
	// string a, s = "";
	// cin >> n;
	// for (int o = 1; o <= n; ++o)
	// {
	// 	cin >> a;
	// 	if (a.size() > s.size())
	// 	{
	// 		s = a;
	// 		ans = o;
	// 	}
	// 	else if (a.size() == s.size())
	// 	{
	// 		if (a > s)
	// 		{
	// 			s = a;
	// 			ans = o;
	// 		}
	// 	}
	// }
	// cout << ans << endl
	// 	 << s;

	// P7909_CSP-J2021��һ��
	// int n, l, r;
	// cin >> n >> l >> r;
	// if (r / n == l / n)
	// {
	// 	cout << r % n;
	// }
	// else
	// {
	// 	cout << n - 1;
	// }

	// P1739
	//  stack<char> sta;
	//  string s;
	//  cin >> s;
	//  char t;
	//  int i;
	//  for (i = 0; i < s.size(); ++i)
	//  {
	//  	t = s[i];
	//  	switch (t)
	//  	{
	//  	case '(':
	//  		sta.push(t);
	//  		break;
	//  	case '[':
	//  		sta.push(t);
	//  		break;
	//  	case ')':
	//  		if (sta.empty())
	//  		{
	//  			cout << "NO";
	//  			return 0;
	//  		}
	//  		else if (sta.top() == '(')
	//  		{
	//  			sta.pop();
	//  			break;
	//  		}
	//  		else
	//  		{
	//  			cout << "NO";
	//  			return 0;
	//  		}
	//  	case ']':
	//  		if (sta.empty())
	//  		{
	//  			cout << "NO";
	//  			return 0;
	//  		}
	//  		else if (sta.top() == '[')
	//  		{
	//  			sta.pop();
	//  			break;
	//  		}
	// 		else
	// 		{
	// 			cout << "NO";
	// 			return 0;
	// 		}
	// 	}
	// }
	// if (sta.empty())
	// {
	// 	cout << "YES";
	// }
	// else
	// {
	// 	cout << "NO";
	// }

	// P1071
	// map<char, char> mitoming, mingtomi;
	// string mi, ming, s;
	// cin >> mi >> ming >> s;
	// int z = mi.size(), sz = s.size();
	// int q;
	// for (q = 0; q < z; ++q)
	// {
	// 	if (mitoming.count(mi[q]) == 0)
	// 	{
	// 		mitoming[mi[q]] = ming[q];
	// 	}
	// 	else
	// 	{
	// 		if (mitoming[mi[q]] != ming[q])
	// 		{
	// 			cout << "Failed";
	// 			return 0;
	// 		}
	// 	}
	// }
	// for (q = 0; q < z; ++q)
	// {
	// 	if (mingtomi.count(ming[q]) == 0)
	// 	{
	// 		mingtomi[ming[q]] = mi[q];
	// 	}
	// 	else
	// 	{
	// 		if (mingtomi[ming[q]] != mi[q])
	// 		{
	// 			cout << "Failed";
	// 			return 0;
	// 		}
	// 	}
	// }
	// if (mitoming.size() < 26)
	// {
	// 	cout << "Failed";
	// 	return 0;
	// }
	// for (q = 0; q < sz; ++q)
	// {
	// 	cout << mitoming[s[q]];
	// }

	// P1060
	//  int a[30001] = {0};
	//  int n, m, w, p, v;
	//  cin >> n >> m;
	//  int q, i, j;
	//  for (q = 1; q <= m; ++q)
	//  {
	//  	cin >> w >> v;
	//  	v = w * v;
	//  	for (j = n; j >= w; --j)
	//  	{
	//  		a[j] = max(a[j], a[j - w] + v);
	//  	}
	//  }
	//  cout << a[n];

	// P1135
	//  int k[210] = {0}, b, step[210] = {0};
	//  int n, a;
	//  int i, j;
	//  memset(step, 0X3F, sizeof(step));
	//  cin >> n >> a >> b;
	//  if (a == b)
	//  {
	//  	cout << 0;
	//  	return 0;
	//  }
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> k[i];
	//  }
	//  queue<int> q;
	//  q.push(a);
	//  step[a] = 0;
	//  int floor, to;
	//  while (!q.empty())
	//  {
	//  	floor = q.front();
	//  	to = floor + k[floor];
	//  	if (to <= 200)
	//  	{
	//  		if (step[floor] + 1 < step[to])
	//  		{
	//  			step[to] = step[floor] + 1;
	//  			q.push(to);
	//  		}
	//  	}
	//  	to = floor - k[floor];
	//  	if (to >= 1)
	//  	{
	//  		if (step[floor] + 1 < step[to])
	//  		{
	//  			step[to] = step[floor] + 1;
	//  			q.push(to);
	//  		}
	//  	}
	//  	q.pop();
	//  }
	//  if (step[b] != 0X3F3F3F3F)
	//  {
	//  	cout << step[b];
	//  }
	//  else
	//  {
	//  	cout << -1;
	//  }

	// P2347
	//  int a[7] = {0, 1, 2, 3, 5, 10, 20};
	//  vector<short int> w;
	//  int dp[1010] = {0};
	//  int maxn = 0, t, tot = 0;
	//  register int i, j;
	//  w.push_back(0);
	//  for (i = 1; i <= 6; ++i)
	//  {
	//  	cin >> t;
	//  	for (j = 1; j <= t; ++j)
	//  	{
	//  		++tot;
	//  		w.push_back(a[i]);
	//  		maxn += w[tot];
	//  	}
	//  }
	//  dp[0] = 1;
	//  for (i = 1; i <= tot; ++i)
	//  {
	//  	for (j = maxn; j >= w[i]; --j)
	//  	{
	//  		dp[j] = dp[j] + dp[j - w[i]];
	//  	}
	//  }
	//  int ans = 0;
	//  for (j = 1; j <= maxn; ++j)
	//  {
	//  	if (dp[j] != 0)
	//  	{
	//  		++ans;
	//  	}
	//  }
	//  printf("Total=%d", ans);

	// P1177_������
	//  priority_queue<int, vector<int>, greater<int>> q;
	//  int n, a;
	//  cin >> n;
	//  register int i;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> a;
	//  	q.push(a);
	//  }
	//  while (!q.empty())
	//  {
	//  	cout << q.top() << ' ';
	//  	q.pop();
	//  }

	// P1466
	//  long long dp[800] = {0};
	//  int n;
	//  cin >> n;
	//  int t = n * (n + 1) / 2; //�ж���ż�ԣ����1+2+����+n����������û�з���
	//  register int i, j;
	//  if (t % 2)
	//  {
	//  	cout << 0;
	//  }
	//  else
	//  {
	//  	t = t / 2; //��1~t/2�ж������ֵĺ��ܹ��ճ�t/2
	//  	dp[0] = 1;
	//  	for (i = 1; i <= n; ++i)
	//  	{
	//  		for (j = t; j >= i; --j)
	//  		{
	//  			dp[j] = dp[j] + dp[j - i];
	//  		}
	//  	}
	//  	cout << dp[t] / 2; //��Ϊ���ظ����㣬���Գ���2
	//  }

	// P3146
	//  const int R = 250;
	//  int a[R], dp[R][R];
	//  int n;
	//  cin >> n;
	//  register int j;
	//  memset(dp, -0x3f, sizeof(dp));
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> a[j];
	//  	dp[j][j] = a[j];
	//  }
	//  register int len, left, right, cut;
	//  int ans = 0;
	//  for (len = 2; len <= n; ++len)
	//  {
	//  	for (left = 1; left <= n - len + 1; ++left)
	//  	{
	//  		right = left + len - 1;
	//  		for (cut = left; cut < right; ++cut)
	//  		{
	//  			if (dp[left][cut] == dp[cut + 1][right])
	//  			{
	//  				dp[left][right] = max(dp[left][right], dp[left][cut] + 1);
	//  				ans = max(ans, dp[left][right]);
	//  			}
	//  		}
	//  	}
	//  }
	//  cout << ans;

	// P2580_ʹ��unordered_map
	//  char s[55];
	//  unordered_map<string, short> ma;
	//  int n, m;
	//  cin >> n;
	//  while (n--)
	//  {
	//  	cin >> s;
	//  	ma[s] = 1;
	//  }
	//  cin >> m;
	//  while (m--)
	//  {
	//  	cin >> s;
	//  	if (ma[s] == 1)
	//  	{
	//  		cout << "OK\n";
	//  		ma[s] = 2;
	//  	}
	//  	else if (ma[s] == 2)
	//  	{
	//  		cout << "REPEAT\n";
	//  	}
	//  	else
	//  	{
	//  		cout << "WRONG\n";
	//  	}
	//  }

	// P1276
	// const int R = 1e4 + 10;
	// short a[R]; // 0��ʾ�ӣ�1��ʾ����2��ʾ����
	// int l, n, x, y, ans1 = 0, ans2 = 0;
	// char c;
	// register int i, j;
	// cin >> l >> n;
	// fill(a, a + l + 1, 1);
	// for (i = 1; i <= n; ++i)
	// {
	// 	cin >> c >> x >> y;
	// 	if (c == '0') // cut
	// 	{
	// 		for (j = x; j <= y; ++j)
	// 		{
	// 			if (a[j] == 2)
	// 			{
	// 				++ans2;
	// 			}
	// 			a[j] = 0;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		for (j = x; j <= y; ++j)
	// 		{
	// 			if (a[j] == 0)
	// 			{
	// 				a[j] = 2;
	// 			}
	// 		}
	// 	}
	// }
	// for (j = 0; j <= l; ++j)
	// {
	// 	if (a[j] == 2)
	// 	{
	// 		++ans1;
	// 	}
	// }
	// cout << ans1 << "\n"
	// 	 << ans2;

	// CF1A
	// long long n, m, a;
	// cin >> n >> m >> a;
	// cout << (long long)(ceil(n / double(a)) * ceil(m / double(a))); //ע���������͵�ת��

	// P1449
	//  int sta[60] = {0}, top = 0, now = 0, temp; // nowһ��Ҫ��ʼ��������
	//  char c;
	//  while (true)
	//  {
	//  	c = getchar();
	//  	if (c == '@')
	//  	{
	//  		break;
	//  	}
	//  	if (isdigit(c))
	//  	{
	//  		now *= 10;
	//  		now += c - '0';
	//  		continue;
	//  	}
	//  	switch (c)
	//  	{
	//  	case '.':
	//  		sta[++top] = now;
	//  		now = 0;
	//  		break;
	//  	case '+':
	//  		temp = sta[top--] + sta[top--];
	//  		sta[++top] = temp;
	//  		break;
	//  	case '-':
	//  		temp = sta[top--] - sta[top--];
	//  		sta[++top] = -temp; //ע�⣬����push����-temp
	//  		break;
	//  	case '*':
	//  		temp = sta[top--] * sta[top--];
	//  		sta[++top] = temp;
	//  		break;
	//  	case '/':
	//  		temp = sta[top - 1] / sta[top];
	//  		top -= 2;
	//  		sta[++top] = temp;
	//  		break;
	//  	}
	//  }
	//  cout << sta[top];

	// P1981
	// Python��⣺
	// import sys
	// sys.setrecursionlimit(100010) #һ���ǵ�����ջ������С����
	// print(eval(input()) % 10000)
	// C++��⣺
	// using ll = long long;
	// const int R = 1e5 + 10, MOD = 10000;
	// ll sta[R] = {0}, top = 0, x, temp, ans = 0;
	// char c;
	// cin >> x;
	// sta[++top] = x % MOD;
	// while (cin >> c >> x)
	// {
	// 	if (c == '+')
	// 	{
	// 		sta[++top] = x;
	// 	}
	// 	else // c=='*'
	// 	{
	// 		temp = x * sta[top--] % MOD; //һ��Ҫȡģ������
	// 		sta[++top] = temp;
	// 	}
	// }
	// for (register int j = 1; j <= top; ++j)
	// {
	// 	ans = (ans + sta[j]) % MOD;
	// }
	// cout << ans;

	// P8466
	//  int n, j;
	//  bool flag;
	//  char c[25];
	//  cin >> n;
	//  while (n--)
	//  {
	//  	for (j = 1; j <= 17; ++j)
	//  	{
	//  		cin >> c[j];
	//  	}
	//  	flag = false;
	//  	for (j = 1; j <= 14; ++j)
	//  	{
	//  		if (c[j] == 'D' && c[j + 1] == 'X' ||
	//  			c[j] == c[j + 1] && c[j + 1] == c[j + 2] && c[j + 2] == c[j + 3])
	//  		{
	//  			flag = true;
	//  			break;
	//  		}
	//  	}
	//  	cout << (flag ? "Yes\n" : "No\n");
	//  }

	// ��P3397_��άǰ׺��ģ����
	//  const int R = 1e3 + 10;
	//  int sum[R][R] = {0};
	//  int n, m, x1, y1, x2, y2;
	//  cin >> n >> m;
	//  register int x, y, j;
	//  for (j = 1; j <= m; ++j)
	//  {
	//  	cin >> x1 >> y1 >> x2 >> y2;
	//  	++sum[x1][y1];
	//  	--sum[x2 + 1][y1];
	//  	--sum[x1][y2 + 1];
	//  	++sum[x2 + 1][y2 + 1];
	//  	/*ͼʾ��'m'��ʾ��ǣ��Ա��4��4�ķ���Ϊ������
	//  	m������m
	//  	��������
	//  	��������
	//  	��������
	//  	m   m
	//  	��ʵ��һάǰ׺�����ƣ���������ʼλ��+x����(����λ��+1)-x*/
	//  }
	//  for (x = 1; x <= n; ++x)
	//  {
	//  	for (y = 1; y <= n; ++y)
	//  	{
	//  		sum[x][y] += sum[x - 1][y] + sum[x][y - 1] - sum[x - 1][y - 1];
	//  		cout << sum[x][y] << ' ';
	//  	}
	//  	cout << "\n";
	//  }

	// P1091
	// const int R = 110;
	// int a[R], dpup[R], dpdown[R];
	// int n, ans = INT_MAX;
	// cin >> n;
	// register int i, j;
	// for (j = 1; j <= n; ++j)
	// {
	// 	cin >> a[j];
	// }
	// for (i = 1; i <= n; ++i)
	// {
	// 	dpup[i] = 1;
	// 	for (j = 1; j < i; ++j)
	// 	{
	// 		if (a[j] < a[i])
	// 		{
	// 			dpup[i] = max(dpup[i], dpup[j] + 1);
	// 		}
	// 	}
	// }
	// for (i = n; i >= 1; --i)
	// {
	// 	dpdown[i] = 1;
	// 	for (j = n; j > i; --j)
	// 	{
	// 		if (a[j] < a[i]) //��������ϸ���������У�������������a[j]<a[i]
	// 		{
	// 			dpdown[i] = max(dpdown[i], dpdown[j] + 1);
	// 		}
	// 	}
	// 	ans = min(ans, n - (dpup[i] + dpdown[i] - 1));
	// }
	// cout << ans;

	// ��P1115_���������Ż�DPģ����_�з���
	//  /*dp[i]=max(s[i]-s[j]) (j>=i-m+1-1)
	//  ����s[i]�ǳ��������Կ��Ż�Ϊdp[i]=s[i]-min(s[j]) (j>=i-m+1-1)
	//  ��������ȡ���Ƕ�ͷԪ�أ�����ֻҪά�������ж�ͷԪ����С����������������*/
	//  const int R = 2e5 + 10;
	//  int s[R] = {0};
	//  int n, ans = INT_MIN;
	//  cin >> n;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> s[j];
	//  	s[j] += s[j - 1];
	//  }
	//  deque<int> q;
	//  q.push_back(0);
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	if (!q.empty() && q.front() < j - n) //��j-m+1��Ԫ�أ�������Ϊǰ׺�����ʱ����˵�Ҫ-1������+1-1����������j-m
	//  		q.pop_front();
	//  	ans = max(ans, s[j] - s[q.front()]);
	//  	while (!q.empty() && s[q.back()] > s[j])
	//  		q.pop_back();
	//  	q.push_back(j);
	//  }
	//  cout << ans;

	// ��P2627_���_��������ά���Ĳ�һ����ĳ��Ԫ�ص�ֵ�����ǿ���ά��ĳ�����ʽ��ֵ
	//  /*dp[i][0]=max(dp[i-1][0],dp[i-1][1])
	//  dp[i][1]=max(dp[j][0]+s[i]-s[j]) (i-k<=j<i)
	//  ������i=5��k=2ʱ������ǰ׺�͵���˵�Ҫ-1�����������ͣ�����j��5-2=3��ʼѭ�������Ҳ���ѡ��������k�����������䳤�����Ϊk����������Ҫ����һ������Ϊdp����ĵڶ�ά�Ѿ��������������ѡ��������ѭ����5-1=4
	//  ���ϵĵڶ���״̬ת�Ʒ��̿�������һ��һ�����Ż���
	//  dp[i][1]=s[i]+max(dp[j][0]-s[j]) (i-k<=j<i)
	//  �˴�����Ҫ�����ֵ���������еĶ�ͷȡ����Ԫ�������ģ�����Ҫά���������еĵ����ݼ��ԣ�����j���Ƕ�ͷԪ�أ�Ҳ�Ͳ���max��*/
	//  const int R = 1e5 + 10;
	//  long long s[R] = {0}, dp[R][2] = {0};
	//  int n, k, x;
	//  cin >> n >> k;
	//  register int i;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> s[i];
	//  	s[i] += s[i - 1];
	//  }
	//  deque<int> q;
	//  q.push_back(0);
	//  dp[0][0] = 0;
	//  dp[0][1] = LLONG_MIN;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	if (!q.empty() && q.front() < i - k)
	//  		q.pop_front();
	//  	dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
	//  	dp[i][1] = s[i] + dp[q.front()][0] - s[q.front()];					  // dp[x][0] - s[x]��һ������
	//  	while (!q.empty() && dp[q.back()][0] - s[q.back()] < dp[i][0] - s[i]) // dp[x][0] - s[x]��һ�����壬ά�������������ĵ�����
	//  		q.pop_back();
	//  	q.push_back(i);
	//  }
	//  cout << max(dp[n][0], dp[n][1]);

	// ���P1097
	// mapд��
	//  map<int, int> m;
	//  int n, x;
	//  cin >> n;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> x;
	//  	++m[x];
	//  }
	//  map<int, int>::iterator it = m.begin();
	//  while (!m.empty())
	//  {
	//  	x = it->first;
	//  	cout << x << ' ' << it->second << "\n";
	//  	++it;
	//  	m.erase(x);
	//  }
	// ��ɢ��д��
	//  vector<int> a, b;
	//  const int M = 1e4 + 10;
	//  int res[M];
	//  int main()
	//  {
	//  	ios::sync_with_stdio(false);
	//  	cin.tie(nullptr);
	//  	cout.tie(nullptr);
	//  	int n, x;
	//  	cin >> n;
	//  	int j;
	//  	for (j = 1; j <= n; ++j)
	//  	{
	//  		cin >> x;
	//  		a.push_back(x);
	//  		b.push_back(x);
	//  	}
	//  	sort(b.begin(), b.end());
	//  	b.erase(unique(b.begin(), b.end()), b.end());
	//  	for (j = 0; j < n; ++j)
	//  	{
	//  		x = lower_bound(b.begin(), b.end(), a[j]) - b.begin();
	//  		++res[x];
	//  	}
	//  	for (j = 0; j < b.size(); ++j)
	//  	{
	//  		cout << b[j] << ' ' << res[j] << '\n';
	//  	}
	//  	return 0;
	//  }

	// ��P1106_���˺þõ���
	//  string s;
	//  int k, p;
	//  cin >> s >> k;
	//  s = '\0' + s;
	//  register int i, j;
	//  for (i = 1; i <= k; ++i)
	//  {
	//  	p = s.size() - 1;
	//  	/*�������������һ�����ϸ񵥵��������У���ôɾ�����һ������
	//  	���Ե�3�����룺2567889 3�������2567
	//  	���������䣬��ô����ͽ����2889*/
	//  	for (j = 2; j < s.size(); ++j)
	//  	{
	//  		if (int(s[j]) - int(s[j - 1]) < 0)
	//  		{
	//  			p = j - 1;
	//  			break;
	//  		}
	//  	}
	//  	s.erase(p, 1);
	//  }
	//  while (s[1] - '0' == 0)
	//  	s.erase(1, 1);
	//  s.erase(0, 1);
	//  cout << (s.size() == 0 ? "0" : s);

	// P8586_ע��˳�򣡣���
	// const int R = 3e5;
	// int b[R + 10] = {0};
	// int n, k, d, m, ans = 0, t, maxd = 0;
	// cin >> n >> k;
	// register int j;
	// for (j = 1; j <= n; ++j)
	// {
	// 	cin >> d >> m;
	// 	b[d] += m;
	// 	if (d > maxd)
	// 		maxd = d;
	// }
	// for (j = 1; j <= maxd + 1; ++j)
	// {
	// 	t = k;		  //ע���ʼ��
	// 	if (b[j - 1]) //ǰһ�컹��û�������
	// 	{
	// 		if (b[j - 1] >= k)
	// 		{
	// 			ans += k;
	// 			b[j - 1] -= k;
	// 			t = 0;
	// 		}
	// 		else // b[j-1]<k
	// 		{
	// 			ans += b[j - 1];
	// 			t -= b[j - 1]; //�����������֮����컹�ܴ������
	// 			b[j - 1] = 0;//�����������˳�򣬿���һ�죡
	// 		}
	// 	}
	// 	if (b[j] && t) //���컹�в����ܴ���
	// 	{
	// 		if (t >= b[j]) //���������㹻
	// 		{
	// 			ans += b[j];
	// 			b[j] = 0;
	// 		}
	// 		else // t<b[j]
	// 		{
	// 			ans += t;
	// 			b[j] -= t;
	// 		}
	// 	}
	// }
	// cout << ans;

	// P1168_lower/upper_bound���ã��仯���ȵ������ڵ���λ��
	// const int R = 1e5 + 100;
	// int a[R] = {0};
	// vector<int> v;
	// int n;
	// cin >> n;
	// register int j;
	// for (j = 1; j <= n; ++j)
	// 	cin >> a[j];
	// for (j = 1; j <= n; ++j)
	// {
	// 	v.insert(upper_bound(v.begin(), v.end(), a[j]), a[j]);
	// 	if (j % 2)
	// 		cout << v[j / 2] << "\n";
	// }

	// P3811_��������Ԫģ����_Ŀǰֻ��exgcd
	// using ll = long long;
	// ll inv[3000100] = {0};
	// ll n, p, x, y;
	// cin >> n >> p;
	// inv[1] = 1;
	// cout << "1\n";
	// for (register int a = 2; a <= n; ++a)
	// {
	// 	inv[a] = p - (p / a) * inv[p % a] % p;
	// 	cout << inv[a] << "\n";
	// }

	// P3378
	// priority_queue<int, vector<int>, greater<int>> q;
	// int n, op, x;
	// cin >> n;
	// for (register int j = 1; j <= n; ++j)
	// {
	// 	cin >> op;
	// 	if (op == 1)
	// 		cin >> x, q.push(x);
	// 	else if (op == 2)
	// 		cout << q.top() << "\n";
	// 	else
	// 		q.pop();
	// }

	// P8814
	//  long long k, n, e, d, m, delta, p, q, tmp;
	//  cin >> k;
	//  while (k--)
	//  {
	//  	cin >> n >> e >> d;
	//  	m = n - e * d + 2;
	//  	delta = m * m - 4 * n;
	//  	tmp = sqrt(delta);
	//  	if (delta < 0 ||
	//  		tmp * tmp != delta ||
	//  		m - tmp <= 0 ||
	//  		((m - tmp) & 1))
	//  	{
	//  		cout << "NO\n";
	//  		continue;
	//  	}
	//  	p = (m - tmp) / 2;
	//  	q = (m + tmp) / 2;
	//  	cout << p << ' ' << q << '\n';
	//  }

	// ����ˢ��

	// P5657_ע���ҹ�����Ŀ�ķ���_https://watasky.blog.luogu.org/solution-p5657
	//  using ull = unsigned long long;
	//  int n;
	//  ull k;
	//  bool flag = false;
	//  cin >> n >> k;
	//  ull mid = pow(2, n - 1);
	//  while (mid)
	//  {
	//  	if (!flag) //������֪����һ����ǰ��Σ�������k<mid�����'0'���������'1'
	//  	{
	//  		if (k < mid)
	//  		{
	//  			cout << '0';
	//  			flag = false;
	//  		}
	//  		else if (k >= mid) // k>=mid
	//  		{
	//  			cout << '1';
	//  			flag = true;
	//  			k -= mid; //���k>=mid���´ξ�Ҫ���Ұ�β��ң�����Ҫ����mid
	//  		}
	//  	}
	//  	else //��һ����ǰ��Σ�������k<mid�����'1'���������'0'������ʱ��n=4���ɣ�
	//  	{
	//  		if (k < mid)
	//  		{
	//  			cout << '1';
	//  			flag = false;
	//  		}
	//  		else if (k >= mid) // k>=mid
	//  		{
	//  			cout << '0';
	//  			flag = true;
	//  			k -= mid;
	//  		}
	//  	}
	//  	mid = mid >> 1; //�۰�
	//  }

	// ��P7076_�����_λ����_ע��λ����ʱҲҪͳһ�������ͣ���pΪull������1<<pʱҪдΪull(1)<<p
	//  using ull = unsigned long long;
	//  ull n, m, c, k, a, p, q, anm = 0, g = 0, ans = 1; // anm��animal����д
	//  cin >> n >> m >> c >> k;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> a;
	//  	anm = anm | a;
	//  }
	//  for (j = 1; j <= m; ++j)
	//  {
	//  	cin >> p >> q;
	//  	if (!(anm & (ull(1) << p))) //��ѧ���ǣ�д!(anm & (1 << p))�Ͳ���
	//  	{
	//  		g = g | (ull(1) << p);
	//  	}
	//  }
	//  for (j = 0; j < k; ++j)
	//  {
	//  	if (!(g & (ull(1) << j))) //����Ҳ����ѧ
	//  	{
	//  		ans = ans << 1;
	//  	}
	//  }
	//  if (ans == 0 && n == 0)
	//  {
	//  	cout << "18446744073709551616";
	//  }
	//  else
	//  {
	//  	cout << ans - ull(n);
	//  }

	// P5019_P1969_P3078_ͬһ����_ע��P3078��longlong��
	// const int R = 1e5 + 1e2;
	// long long a[R] = {0}, dp[R] = {0};
	// int n;
	// cin >> n;
	// register int i;
	// for (i = 1; i <= n; ++i)
	// 	cin >> a[i];
	// // dp[1] = a[1]; //Ӧ���������ṩ�߽����������Ǿ�����֤������һ���ϲ���ѭ����Ҳ����
	// for (i = 1; i <= n; ++i) //��ȫ���Ժϲ���������֣�Ϊ�˺����Ͳ��ϲ���
	// {
	// 	if (a[i] <= a[i - 1]) //���ö�Ӳ�����ֱ�Ӽ̳о�����
	// 		dp[i] = dp[i - 1];
	// 	else //����ı�ǰ��Ķ༸����Ҫ���⼸���ӵ�dp[i]��
	// 		dp[i] = dp[i - 1] + (a[i] - a[i - 1]);
	// }
	// cout << dp[n];

	return 0;
}

// ���뺯��_���������ܳ�
//  double dist(double x1, double x2, double y1, double y2)
//  {
//  	double temp, able;
//  	temp = pow(x2 - x1, 2) + pow(y2 - y1, 2);
//  	able = sqrt(temp);
//  	return able;
//  }
//  int main()
//  {
//  	double x1, x2, y1, y2, x3, y3, c;
//  	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//  	c += dist(x1, x2, y1, y2);
//  	c += dist(x2, x3, y2, y3);
//  	c += dist(x1, x3, y1, y3);
//  	cout << fixed << setprecision(2) << c;
//  	return 0;
//  }

// ����ɸ
//  bool prime(int x)
//  {
//  	if (x <= 1)
//  	{
//  		return 0;
//  	}
//  	for (int i = 2; i <= sqrt(x); i++)
//  	{
//  		if (x % i == 0)
//  		{
//  			return 0; //��������
//  		}
//  	}
//  	return 1; //������
//  }
//  int main()
//  {
//  	int n, a[100];
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> a[i];
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		if (prime(a[i]) == 1)
//  		{
//  			cout << a[i] << " "; //�������������
//  		}
//  	}
//  	return 0;
//  }

// ���������ϣ�ʹ����һ���������
//  string s[25];
//  int n;
//  bool cmp(string a, string b)
//  {
//  	return a + b > b + a;
//  	//�Զ�������������һ���ǳ��������a=321��b=32��a+b=32132��b+a=32321��������sort����������32>321�������32132>32321�����
//  }
//  /*�������д��
//  bool cmp��string a��string b��{
//      return a>b;
//      �ᷢ��321>32�����������ԭ�����ַ����Լ��Ĺ�ϵ�����������趨��
//  }*/
//  int main()
//  {
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> s[i];
//  	}
//  	sort(s, s + n, cmp); //����֮��
//  	for (int i = 0; i < n; i++)
//  	{
//  		cout << s[i];
//  	}
//  	return 0;
//  }

// ������Ϸ
//  int a[10001][10001] = {0}, n;
//  long long int ans = -1e5, t;
//  bool place;
//  long long int sumhang(int i)
//  {
//  	long long int s = 0;
//  	for (int j = 0; j < n; j++)
//  		s += a[i][j];
//  	return s;
//  }
//  long long int sumlie(int j)
//  {
//  	long long int s = 0;
//  	for (int i = 0; i < n; i++)
//  		s += a[i][j];
//  	return s;
//  }
//  int main()
//  {
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		for (int j = 0; j < n; j++)
//  		{
//  			cin >> a[i][j];
//  			if (a[i][j] == 0)
//  			{
//  				place = true;
//  			}
//  		}
//  	}
//  	if (place == false)
//  	{
//  		cout << "Bad Game!" << endl;
//  		return 0;
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		for (int j = 0; j < n; j++)
//  		{
//  			if (a[i][j] == 0)
//  			{
//  				t = sumhang(i) + sumlie(j);
//  				ans = max(ans, t);
//  			}
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P1125
//  int t[26], maxn = -100, minn = 999999;
//  bool pr(int r)
//  {
//  	if (r == 0 || r == 1)
//  		return false;
//  	if (r == 2)
//  		return true;
//  	for (int o = 2; o < sqrt(r); o++)
//  	{
//  		if (r % o == 0)
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  int main()
//  {
//  	string a;
//  	getline(cin, a);
//  	for (int i = 0; i < a.size(); i++)
//  	{
//  		t[a[i] - 'a']++;
//  	}
//  	for (int x = 0; x < 26; x++)
//  	{
//  		maxn = max(t[x], maxn);
//  		if (t[x] != 0)
//  		{
//  			minn = min(t[x], minn);
//  		}
//  	}
//  	if (pr(maxn - minn) == true)
//  	{
//  		cout << "Lucky Word" << endl
//  			 << maxn - minn;
//  	}
//  	else
//  	{
//  		cout << "No Answer" << endl
//  			 << 0;
//  	}
//  	return 0;
//  }

// P1223
//  struct tim
//  {
//  	int ti, num;
//  };
//  bool cmp(tim a, tim b)
//  {
//  	return a.ti < b.ti;
//  }
//  int main()
//  {
//  	//freopen("test.txt", "r", stdin);
//  	int n, u;
//  	double sum = 0;
//  	cin >> n;
//  	tim a[1002];
//  	for (u = 1; u <= n; u++)
//  	{
//  		cin >> a[u].ti;
//  		a[u].num = u;
//  	}
//  	sort(a + 1, a + n + 1, cmp);
//  	for (u = 1; u <= n; u++)
//  	{
//  		cout << a[u].num << " ";
//  	}
//  	cout << endl;
//  	for (u = 1; u <= n; u++)
//  	{
//  		sum = sum + a[u].ti * (n - u);
//  	}
//  	cout << fixed << setprecision(2) << double(sum / n);
//  	return 0;
//  }

// P1075
//  int pri(int y)
//  {
//  	for (int u = 2; u <= sqrt(y); u++)
//  	{
//  		if (y % u == 0)
//  		{
//  			return y / u;
//  		}
//  	}
//  }
//  int main()
//  {
//  	int y;
//  	cin >> y;
//  	cout << pri(y);
//  	return 0;
//  }

// P2240
//  struct bp
//  {
//  	float m, v, pri;
//  };
//  bool cmp(bp a, bp b)
//  {
//  	return a.pri > b.pri;
//  }
//  int main()
//  {
//  	int n, c, t;
//  	float sum = 0;
//  	bp a[102];
//  	cin >> n >> t;
//  	for (c = 1; c <= n; c++)
//  	{
//  		cin >> a[c].m >> a[c].v;
//  		a[c].pri = a[c].v / a[c].m;
//  	}
//  	sort(a + 1, a + n + 1, cmp);
//  	for (c = 1; c <= n; c++)
//  	{
//  		if (t >= a[c].m)
//  		{
//  			t -= a[c].m;
//  			sum += a[c].v;
//  		}
//  		else
//  		{
//  			sum += a[c].pri * t;
//  			break;
//  		}
//  	}
//  	cout << fixed << setprecision(2) << sum;
//  	return 0;
//  }

// P1803
//  struct ti
//  {
//  	int beg, end;
//  };
//  bool cmp(ti a, ti b)
//  {
//  	return a.end < b.end;
//  }
//  int main()
//  {
//  	ti a[100001];
//  	int n, i, s = 1;
//  	cin >> n;
//  	for (i = 1; i <= n; i++)
//  	{
//  		cin >> a[i].beg >> a[i].end;
//  	}
//  	sort(a + 1, a + n + 1, cmp);
//  	int end = a[1].end;
//  	for (i = 2; i <= n; i++)
//  	{
//  		if (a[i].beg >= end)
//  		{
//  			s++;
//  			end = a[i].end;
//  		}
//  	}
//  	cout << s;
//  	return 0;
//  }

// ���P1096
// ʹ��Python���
//   string a[203] = {
//   	"0",
//   	"2",
//   	"6",
//   	"14",
//   	"30",
//   	"62",
//   	"126",
//   	"254",
//   	"510",
//   	"1022",
//   	"2046",
//   	"4094",
//   	"8190",
//   	"16382",
//   	"32766",
//   	"65534",
//   	"131070",
//   	"262142",
//   	"524286",
//   	"1048574",
//   	"2097150",
//   	"4194302",
//   	"8388606",
//   	"16777214",
//   	"33554430",
//   	"67108862",
//   	"134217726",
//   	"268435454",
//   	"536870910",
//   	"1073741822",
//   	"2147483646",
//   	"4294967294",
//   	"8589934590",
//   	"17179869182",
//   	"34359738366",
//   	"68719476734",
//   	"137438953470",
//   	"274877906942",
//   	"549755813886",
//   	"1099511627774",
//   	"2199023255550",
//   	"4398046511102",
//   	"8796093022206",
//   	"17592186044414",
//   	"35184372088830",
//   	"70368744177662",
//   	"140737488355326",
//   	"281474976710654",
//   	"562949953421310",
//   	"1125899906842622",
//   	"2251799813685246",
//   	"4503599627370494",
//   	"9007199254740990",
//   	"18014398509481982",
//   	"36028797018963966",
//   	"72057594037927934",
//   	"144115188075855870",
//   	"288230376151711742",
//   	"576460752303423486",
//   	"1152921504606846974",
//   	"2305843009213693950",
//   	"4611686018427387902",
//   	"9223372036854775806",
//   	"18446744073709551614",
//   	"36893488147419103230",
//   	"73786976294838206462",
//   	"147573952589676412926",
//   	"295147905179352825854",
//   	"590295810358705651710",
//   	"1180591620717411303422",
//   	"2361183241434822606846",
//   	"4722366482869645213694",
//   	"9444732965739290427390",
//   	"18889465931478580854782",
//   	"37778931862957161709566",
//   	"75557863725914323419134",
//   	"151115727451828646838270",
//   	"302231454903657293676542",
//   	"604462909807314587353086",
//   	"1208925819614629174706174",
//   	"2417851639229258349412350",
//   	"4835703278458516698824702",
//   	"9671406556917033397649406",
//   	"19342813113834066795298814",
//   	"38685626227668133590597630",
//   	"77371252455336267181195262",
//   	"154742504910672534362390526",
//   	"309485009821345068724781054",
//   	"618970019642690137449562110",
//   	"1237940039285380274899124222",
//   	"2475880078570760549798248446",
//   	"4951760157141521099596496894",
//   	"9903520314283042199192993790",
//   	"19807040628566084398385987582",
//   	"39614081257132168796771975166",
//   	"79228162514264337593543950334",
//   	"158456325028528675187087900670",
//   	"316912650057057350374175801342",
//   	"633825300114114700748351602686",
//   	"1267650600228229401496703205374",
//   	"2535301200456458802993406410750",
//   	"5070602400912917605986812821502",
//   	"10141204801825835211973625643006",
//   	"20282409603651670423947251286014",
//   	"40564819207303340847894502572030",
//   	"81129638414606681695789005144062",
//   	"162259276829213363391578010288126",
//   	"324518553658426726783156020576254",
//   	"649037107316853453566312041152510",
//   	"1298074214633706907132624082305022",
//   	"2596148429267413814265248164610046",
//   	"5192296858534827628530496329220094",
//   	"10384593717069655257060992658440190",
//   	"20769187434139310514121985316880382",
//   	"41538374868278621028243970633760766",
//   	"83076749736557242056487941267521534",
//   	"166153499473114484112975882535043070",
//   	"332306998946228968225951765070086142",
//   	"664613997892457936451903530140172286",
//   	"1329227995784915872903807060280344574",
//   	"2658455991569831745807614120560689150",
//   	"5316911983139663491615228241121378302",
//   	"10633823966279326983230456482242756606",
//   	"21267647932558653966460912964485513214",
//   	"42535295865117307932921825928971026430",
//   	"85070591730234615865843651857942052862",
//   	"170141183460469231731687303715884105726",
//   	"340282366920938463463374607431768211454",
//   	"680564733841876926926749214863536422910",
//   	"1361129467683753853853498429727072845822",
//   	"2722258935367507707706996859454145691646",
//   	"5444517870735015415413993718908291383294",
//   	"10889035741470030830827987437816582766590",
//   	"21778071482940061661655974875633165533182",
//   	"43556142965880123323311949751266331066366",
//   	"87112285931760246646623899502532662132734",
//   	"174224571863520493293247799005065324265470",
//   	"348449143727040986586495598010130648530942",
//   	"696898287454081973172991196020261297061886",
//   	"1393796574908163946345982392040522594123774",
//   	"2787593149816327892691964784081045188247550",
//   	"5575186299632655785383929568162090376495102",
//   	"11150372599265311570767859136324180752990206",
//   	"22300745198530623141535718272648361505980414",
//   	"44601490397061246283071436545296723011960830",
//   	"89202980794122492566142873090593446023921662",
//   	"178405961588244985132285746181186892047843326",
//   	"356811923176489970264571492362373784095686654",
//   	"713623846352979940529142984724747568191373310",
//   	"1427247692705959881058285969449495136382746622",
//   	"2854495385411919762116571938898990272765493246",
//   	"5708990770823839524233143877797980545530986494",
//   	"11417981541647679048466287755595961091061972990",
//   	"22835963083295358096932575511191922182123945982",
//   	"45671926166590716193865151022383844364247891966",
//   	"91343852333181432387730302044767688728495783934",
//   	"182687704666362864775460604089535377456991567870",
//   	"365375409332725729550921208179070754913983135742",
//   	"730750818665451459101842416358141509827966271486",
//   	"1461501637330902918203684832716283019655932542974",
//   	"2923003274661805836407369665432566039311865085950",
//   	"5846006549323611672814739330865132078623730171902",
//   	"11692013098647223345629478661730264157247460343806",
//   	"23384026197294446691258957323460528314494920687614",
//   	"46768052394588893382517914646921056628989841375230",
//   	"93536104789177786765035829293842113257979682750462",
//   	"187072209578355573530071658587684226515959365500926",
//   	"374144419156711147060143317175368453031918731001854",
//   	"748288838313422294120286634350736906063837462003710",
//   	"1496577676626844588240573268701473812127674924007422",
//   	"2993155353253689176481146537402947624255349848014846",
//   	"5986310706507378352962293074805895248510699696029694",
//   	"11972621413014756705924586149611790497021399392059390",
//   	"23945242826029513411849172299223580994042798784118782",
//   	"47890485652059026823698344598447161988085597568237566",
//   	"95780971304118053647396689196894323976171195136475134",
//   	"191561942608236107294793378393788647952342390272950270",
//   	"383123885216472214589586756787577295904684780545900542",
//   	"766247770432944429179173513575154591809369561091801086",
//   	"1532495540865888858358347027150309183618739122183602174",
//   	"3064991081731777716716694054300618367237478244367204350",
//   	"6129982163463555433433388108601236734474956488734408702",
//   	"12259964326927110866866776217202473468949912977468817406",
//   	"24519928653854221733733552434404946937899825954937634814",
//   	"49039857307708443467467104868809893875799651909875269630",
//   	"98079714615416886934934209737619787751599303819750539262",
//   	"196159429230833773869868419475239575503198607639501078526",
//   	"392318858461667547739736838950479151006397215279002157054",
//   	"784637716923335095479473677900958302012794430558004314110",
//   	"1569275433846670190958947355801916604025588861116008628222",
//   	"3138550867693340381917894711603833208051177722232017256446",
//   	"6277101735386680763835789423207666416102355444464034512894",
//   	"12554203470773361527671578846415332832204710888928069025790",
//   	"25108406941546723055343157692830665664409421777856138051582",
//   	"50216813883093446110686315385661331328818843555712276103166",
//   	"100433627766186892221372630771322662657637687111424552206334",
//   	"200867255532373784442745261542645325315275374222849104412670",
//   	"401734511064747568885490523085290650630550748445698208825342",
//   	"803469022129495137770981046170581301261101496891396417650686",
//   	"1606938044258990275541962092341162602522202993782792835301374",
//   	"3213876088517980551083924184682325205044405987565585670602750",
//   	"6427752177035961102167848369364650410088811975131171341205502"};
//   int main()
//   {
//   	int n;
//   	cin >> n;
//   	cout << a[n];
//   	return 0;
//   }
// �߾���_����
//   #define memset(p) memset(p, 0, sizeof(p))
//   string ans[210];
//   int x[200], y[200], ansa[200];
//   string _plus(string a, string b)
//   {
//   	string res;
//   	memset(x), memset(y), memset(ansa);
//   	int as = a.size(), bs = b.size();
//   	register int j;
//   	for (j = 0; j < as; ++j)
//   		x[j + 1] = a[as - j - 1] - '0';
//   	for (j = 0; j < bs; ++j)
//   		y[j + 1] = b[bs - j - 1] - '0';
//   	int anss = max(as, bs);
//   	for (j = 1; j <= anss; ++j)
//   	{
//   		ansa[j] += x[j] + y[j];
//   		if (ansa[j] >= 10)
//   		{
//   			ansa[j + 1] = ansa[j] / 10;
//   			ansa[j] = ansa[j] % 10;
//   		}
//   	}
//   	if (ansa[anss + 1])
//   		++anss;
//   	for (j = 1; j <= anss; ++j)
//   	{
//   		res = char(ansa[j] + '0') + res;
//   	}
//   	return res;
//   }
//   string cheng(string a, string b)
//   {
//   	string res;
//   	memset(x), memset(y), memset(ansa);
//   	int as = a.size(), bs = b.size();
//   	register int i, j;
//   	for (j = 0; j < as; ++j)
//   		x[j + 1] = a[as - j - 1] - '0';
//   	for (j = 0; j < bs; ++j)
//   		y[j + 1] = b[bs - j - 1] - '0';
//   	int anss = as + bs;
//   	for (i = 1; i <= as; ++i)
//   	{
//   		for (j = 1; j <= bs; ++j)
//   		{
//   			ansa[i + j - 1] += x[i] * y[j]; //����ӵ���x��y������a��b
//   		}
//   	}
//   	for (j = 1; j <= anss; ++j)
//   	{
//   		if (ansa[j] >= 10)
//   		{
//   			ansa[j + 1] += ansa[j] / 10;
//   			ansa[j] = ansa[j] % 10;
//   		}
//   	}
//   	while (!ansa[anss] && anss > 1)
//   		--anss;
//   	for (j = 1; j <= anss; ++j)
//   	{
//   		res = char(ansa[j] + '0') + res;
//   	}
//   	return res;
//   }
//   int main()
//   {
//   	int n;
//   	cin >> n;
//   	ans[1] = "1";
//   	for (register int j = 2; j <= n; ++j)
//   	{
//   		ans[j] = _plus("1", cheng("2", ans[j - 1])); // ans[j]=ans[j-1]*2+1
//   	}
//   	cout << cheng("2", ans[n]); //������˫�����������ս��Ҫ��2
//   	return 0;
//   }

// P1706
//  int a[10], n;
//  bool b[10];
//  void print()
//  {
//  	for (int u = 1; u <= n; u++)
//  	{
//  		cout << setw(5) << a[u];
//  	}
//  	cout << endl;
//  }
//  void dfs(int step)
//  {
//  	for (int q = 1; q <= n; q++)
//  	{
//  		if (b[q] == false)
//  		{
//  			b[q] = true;
//  			a[step] = q;
//  			if (step == n)
//  			{
//  				print();
//  			}
//  			else
//  			{
//  				dfs(step + 1);
//  			}
//  			b[q] = false;
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	dfs(1);
//  	return 0;
//  }

// P1219
//  int n, res[15];
//  long long tot;
//  bool lie[15], up_dui[30], down_dui[30];
//  /*
//  �϶Խ��ߣ������
//  �¶Խ��ߣ������
//  */
//  void print()
//  {
//  	++tot;
//  	if (tot > 3)
//  	{
//  		return;
//  	}
//  	else
//  	{
//  		for (int q = 1; q <= n; q++)
//  		{
//  			cout << res[q] << " ";
//  		}
//  		cout << endl;
//  	}
//  }
//  void dfs(int hang)
//  {
//  	if (hang > n)
//  	{
//  		print();
//  	}
//  	else
//  	{
//  		for (int i = 1; i <= n; ++i)
//  		{
//  			if (lie[i] == false &&
//  				up_dui[hang + i] == false &&
//  				down_dui[hang - i + n] == false)
//  			{
//  				lie[i] = true;
//  				up_dui[hang + i] = true;
//  				down_dui[hang - i + n] = true;
//  				res[hang] = i;
//  				dfs(hang + 1);
//  				lie[i] = false;
//  				up_dui[hang + i] = false;
//  				down_dui[hang - i + n] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	dfs(1);
//  	cout << tot;
//  	return 0;
//  }

// P1255_python
// n=int(input())
// if n == 0:
// 	print("0")
// elif n == 1:
// 	print("1")
// elif n == 2:
// 	print("2")
// else:
// 	a=1
// 	b=1
// 	ans=0
// 	for i in range(2,n+1):
// 		ans=a+b
// 		a=b
// 		b=ans
// 	print(ans)

// ���P1784
// ����ⷨ
//   int a[10][10];
//   bool kuai[10][10],			   //�ֱ��ʾ�ڼ������������i
//   	hang[10][10], lie[10][10]; //�ڼ��е�����i
//   void print()
//   {
//   	int j;
//   	for (int i = 1; i <= 9; ++i)
//   	{
//   		for (j = 1; j <= 9; ++j)
//   		{
//   			cout << a[i][j] << " ";
//   		}
//   		cout << endl;
//   	}
//   	exit(0);
//   }
//   void dfs(int x, int y) //�����ٵݹ�
//   {
//   	// if (x == 9 && y == 9)
//   	// {
//   	// 	print();
//   	// }
//   	// if (y > 9)
//   	// {
//   	// 	++x;
//   	// 	y = 1;
//   	// }
//   	if (a[x][y] != 0) //���ԭ�����λ�������֣�������
//   	{
//   		if (x == 9 && y == 9)
//   			print();
//   		else if (y == 9)
//   			dfs(x + 1, 1);
//   		else
//   			dfs(x, y + 1);
//   	}
//   	else if (a[x][y] == 0)
//   	{
//   		int xuhao = (x - 1) / 3 * 3 + (y - 1) / 3 + 1;
//   		for (int r = 1; r <= 9; ++r)
//   		{
//   			if (hang[x][r] == false &&
//   				lie[y][r] == false &&
//   				kuai[xuhao][r] == false)
//   			{
//   				kuai[xuhao][r] = true;
//   				a[x][y] = r;
//   				hang[x][r] = true;
//   				lie[y][r] = true;
//   				if (x == 9 && y == 9)
//   				{
//   					print();
//   				}
//   				else if (y == 9)
//   				{
//   					dfs(x + 1, 1);
//   				}
//   				else
//   				{
//   					dfs(x, y + 1);
//   				}
//   				kuai[xuhao][r] = false;
//   				a[x][y] = 0;
//   				hang[x][r] = false;
//   				lie[y][r] = false;
//   			}
//   		}
//   	}
//   }
//   int main()
//   {
//   	int j, xuhao;
//   	for (int i = 1; i <= 9; ++i)
//   	{
//   		for (j = 1; j <= 9; ++j)
//   		{
//   			cin >> a[i][j];
//   			if (a[i][j] != 0)
//   			{
//   				xuhao = (i - 1) / 3 * 3 + (j - 1) / 3 + 1;
//   				kuai[xuhao][a[i][j]] = true;
//   				hang[i][a[i][j]] = true;
//   				lie[j][a[i][j]] = true;
//   			}
//   		}
//   	}
//   	// cout << endl;
//   	dfs(1, 1);
//   	return 0;
//   }
// ����_�Լ��Ľⷨ_P1074ǰ����
//   int a[10][10];
//   bool hang[10][10], lie[10][10], kuai[10][10]; //�ڼ���/��/�������n�Ƿ�ռ
//   int xuhao[10][10] = {
//   	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//   	{0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
//   	{0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
//   	{0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
//   	{0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
//   	{0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
//   	{0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
//   	{0, 7, 7, 7, 8, 8, 8, 9, 9, 9},
//   	{0, 7, 7, 7, 8, 8, 8, 9, 9, 9},
//   	{0, 7, 7, 7, 8, 8, 8, 9, 9, 9}};
//   void print()
//   {
//   	int g, h;
//   	for (g = 1; g <= 9; g++)
//   	{
//   		for (h = 1; h <= 9; h++)
//   		{
//   			cout << a[g][h] << " ";
//   		}
//   		cout << '\n';
//   	}
//   	// exit(0);
//   }
//   void dfs(int step, int x, int y)
//   {
//   	if (step > 81)
//   	{
//   		print();
//   		return;
//   	}
//   	if (y > 9)
//   	{
//   		x += 1;
//   		y = 1;
//   	}
//   	if (a[x][y] != 0)
//   	{
//   		dfs(step + 1, x, y + 1);
//   	}
//   	else
//   	{
//   		for (int q = 1; q <= 9; q++)
//   		{
//   			if (hang[x][q] == false &&
//   				lie[y][q] == false &&
//   				kuai[xuhao[x][y]][q] == false)
//   			{
//   				hang[x][q] = true;
//   				lie[y][q] = true;
//   				kuai[xuhao[x][y]][q] = true;
//   				a[x][y] = q;
//   				dfs(step + 1, x, y + 1);
//   				hang[x][q] = false;
//   				lie[y][q] = false;
//   				kuai[xuhao[x][y]][q] = false;
//   				a[x][y] = 0;
//   			}
//   		}
//   	}
//   }
//   int main()
//   {
//   	int i, j, t;
//   	for (i = 1; i <= 9; i++)
//   	{
//   		for (j = 1; j <= 9; j++)
//   		{
//   			cin >> t;
//   			if (t != 0)
//   			{
//   				hang[i][t] = true;
//   				lie[j][t] = true;
//   				kuai[xuhao[i][j]][t] = true;
//   				a[i][j] = t;
//   			}
//   		}
//   	}
//   	dfs(1, 1, 1);
//   	return 0;
//   }

// ��P1074_��һ������
//  int a[10][10], maxn = -1, tt;
//  struct shun
//  {
//  	int num, cishu;
//  } shunxu[10];
//  bool hang[10][10], lie[10][10], kuai[10][10]; //�ڼ���/��/�������n�Ƿ�ռ
//  int xuhao[10][10] = {
//  	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  	{0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
//  	{0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
//  	{0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
//  	{0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
//  	{0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
//  	{0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
//  	{0, 7, 7, 7, 8, 8, 8, 9, 9, 9},
//  	{0, 7, 7, 7, 8, 8, 8, 9, 9, 9},
//  	{0, 7, 7, 7, 8, 8, 8, 9, 9, 9}};
//  int score[10][10] =
//  	{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//  	 {0, 6, 6, 6, 6, 6, 6, 6, 6, 6},
//  	 {0, 6, 7, 7, 7, 7, 7, 7, 7, 6},
//  	 {0, 6, 7, 8, 8, 8, 8, 8, 7, 6},
//  	 {0, 6, 7, 8, 9, 9, 9, 8, 7, 6},
//  	 {0, 6, 7, 8, 9, 10, 9, 8, 7, 6},
//  	 {0, 6, 7, 8, 9, 9, 9, 8, 7, 6},
//  	 {0, 6, 7, 8, 8, 8, 8, 8, 7, 6},
//  	 {0, 6, 7, 7, 7, 7, 7, 7, 7, 6},
//  	 {0, 6, 6, 6, 6, 6, 6, 6, 6, 6}};
//  void out()
//  {
//  	int g, h, temp, sum = 0;
//  	for (g = 1; g <= 9; g++)
//  	{
//  		for (h = 1; h <= 9; h++)
//  		{
//  			temp = a[g][h] * score[g][h];
//  			sum += temp;
//  		}
//  	}
//  	maxn = max(maxn, sum);
//  }
//  void dfs(int step, int x, int y, int k)
//  {
//  	if (step > 81)
//  	{
//  		out();
//  	}
//  	if (y > 9)
//  	{
//  		++k;
//  		x = shunxu[k].num;
//  		y = 1;
//  	}
//  	if (a[x][y] != 0)
//  	{
//  		dfs(step + 1, x, y + 1, k);
//  	}
//  	else
//  	{
//  		for (int q = 1; q <= 9; q++)
//  		{
//  			if (hang[x][q] == false &&
//  				lie[y][q] == false &&
//  				kuai[xuhao[x][y]][q] == false)
//  			{
//  				hang[x][q] = true;
//  				lie[y][q] = true;
//  				kuai[xuhao[x][y]][q] = true;
//  				a[x][y] = q;
//  				dfs(step + 1, x, y + 1, k);
//  				hang[x][q] = false;
//  				lie[y][q] = false;
//  				kuai[xuhao[x][y]][q] = false;
//  				a[x][y] = 0;
//  			}
//  		}
//  	}
//  }
//  bool cmp(shun a, shun b)
//  {
//  	return a.cishu > b.cishu;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	int i, j, t, time, x = 0;
//  	for (i = 1; i <= 9; i++)
//  	{
//  		time = 0;
//  		for (j = 1; j <= 9; j++)
//  		{
//  			cin >> t;
//  			if (t != 0)
//  			{
//  				a[i][j] = t;
//  				hang[i][t] = true;
//  				lie[j][t] = true;
//  				kuai[xuhao[i][j]][t] = true;
//  				time++;
//  			}
//  		}
//  		shunxu[i].cishu = time;
//  		shunxu[i].num = i;
//  	}
//  	sort(shunxu + 1, shunxu + 10, cmp);
//  	dfs(1, shunxu[1].num, 1, 1);
//  	cout << maxn;
//  	return 0;
//  }

// P1123_https://www.luogu.com.cn/discuss/330003
// int xx[10] = {0, -1, -1, -1, 0, 0, 0, 1, 1, 1};
// int yy[10] = {0, -1, 0, 1, -1, 0, 1, -1, 0, 1};
// int t, n, m, a[8][8], mark[8][8], temp, maxn;
// void dfs(int x, int y)
// {
// 	if (y == m + 1)
// 	{
// 		dfs(x + 1, 1);
// 		return;
// 	}
// 	if (x == n + 1)
// 	{
// 		maxn = max(temp, maxn);
// 		return;
// 	}
// 	// 1.��ȡ��ǰ��
// 	dfs(x, y + 1);
// 	// 2.ȡ��ǰ��
// 	if (mark[x][y] == 0)
// 	{
// 		int i;
// 		temp += a[x][y];
// 		for (i = 1; i <= 9; ++i)
// 		{
// 			++mark[x + xx[i]][y + yy[i]];
// 		}
// 		dfs(x, y + 1);
// 		temp -= a[x][y];
// 		for (i = 1; i <= 9; ++i)
// 		{
// 			--mark[x + xx[i]][y + yy[i]];
// 		}
// 	}
// }
// inline void _init()
// {
// 	int q, p;
// 	for (q = 0; q < 8; ++q)
// 	{
// 		for (p = 0; p < 8; ++p)
// 		{
// 			a[q][p] = 0;
// 			mark[q][p] = 0;
// 		}
// 	}
// 	temp = maxn = 0;
// }
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin >> t;
// 	for (int i = 1; i <= t; ++i)
// 	{
// 		_init();
// 		cin >> n >> m;
// 		for (int i = 1; i <= n; ++i)
// 		{
// 			for (int j = 1; j <= m; ++j)
// 			{
// 				cin >> a[i][j];
// 			}
// 		}
// 		dfs(1, 1);
// 		cout << maxn << '\n';
// 	}
// 	return 0;
// }

// P1506
//  int sx, sy, tot;
//  char c[501][501];
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void mark(int x, int y)
//  {
//  	c[x][y] = '*'; //����DFSҪ�ȱ�ǣ��������c[tx][ty]����'0'�Ļ��Ͳ�����б��
//  	int tx, ty, q;
//  	for (q = 1; q <= 4; ++q)
//  	{
//  		tx = x + xx[q];
//  		ty = y + yy[q];
//  		if (tx >= 1 && tx <= sx && ty >= 1 && ty <= sy &&
//  			c[tx][ty] == '0')
//  		{
//  			mark(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> sx >> sy;
//  	int q, p;
//  	for (q = 1; q <= sx; ++q)
//  	{
//  		for (p = 1; p <= sy; ++p)
//  		{
//  			cin >> c[q][p];
//  		}
//  	}
//  	for (p = 1; p <= sy; ++p)
//  	{
//  		if (c[1][p] == '0')
//  		{
//  			mark(1, p);
//  		}
//  		if (c[sx][p] == '0')
//  		{
//  			mark(sx, p);
//  		}
//  	}
//  	for (p = 1; p <= sx; ++p)
//  	{
//  		if (c[p][1] == '0')
//  		{
//  			mark(p, 1);
//  		}
//  		if (c[p][sy] == '0')
//  		{
//  			mark(p, sy);
//  		}
//  	}
//  	for (q = 1; q <= sx; ++q)
//  	{
//  		for (p = 1; p <= sy; ++p)
//  		{
//  			if (c[q][p] == '0')
//  			{
//  				++tot;
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// P1551
//  short father[5001];
//  //��
//  short locate(short num) //����numԪ�صĸ�
//  {
//  	if (father[num] == num)
//  	{
//  		return num;
//  	}
//  	else
//  	{
//  		return father[num] = locate(father[num]);
//  	}
//  }
//  //��
//  void merge(short a, short b) //�ϲ���������
//  {
//  	a = locate(a);
//  	b = locate(b);
//  	if (a != b)
//  	{
//  		father[b] = a;
//  	}
//  }
//  int main()
//  {
//  	short i, n, m, q, x, y;
//  	cin >> n >> m >> q;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		father[i] = i;
//  	}
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> x >> y;
//  		merge(x, y);
//  	}
//  	for (i = 1; i <= q; ++i)
//  	{
//  		cin >> x >> y;
//  		if (locate(x) == locate(y))
//  		{
//  			cout << "Yes\n";
//  		}
//  		else
//  		{
//  			cout << "No\n";
//  		}
//  	}
//  	return 0;
//  }

// P1443
// short que[200001][4];
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	short n, m, x, y, a[401][401], i, j;
// 	bool b[401][401];
// 	cin >> n >> m >> x >> y;
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			a[i][j] = -1;
// 		}
// 	}
// 	que[1][1] = x;
// 	que[1][2] = y;
// 	que[1][3] = 0;
// 	a[x][y] = 0;
// 	b[x][y] = true;
// 	int head = 1, tail = 1, tx, ty;
// 	short xx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
// 	short yy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
// 	while (head <= tail)
// 	{
// 		for (i = 1; i <= 8; ++i)
// 		{
// 			tx = que[head][1] + xx[i];
// 			ty = que[head][2] + yy[i];
// 			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
// 				b[tx][ty] == false)
// 			{
// 				b[tx][ty] = true;
// 				++tail;
// 				que[tail][1] = tx;
// 				que[tail][2] = ty;
// 				que[tail][3] = que[head][3] + 1;
// 				a[tx][ty] = que[tail][3];
// 			}
// 		}
// 		++head;
// 	}
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			printf("%-5d", a[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// ��P1086_https://www.luogu.com.cn/blog/a2954898606/solution-p1086
//   struct Pea
//   {
//   	int x, y, num;
//   } s[401];
//   int a[21][21];
//   bool cmp(Pea a, Pea b)
//   {
//   	return a.num > b.num;
//   }
//   int main()
//   {
//   	int m, n, k, i, j, tot = 0, ans = 0, time;
//   	cin >> m >> n >> k;
//   	for (i = 1; i <= m; ++i)
//   	{
//   		for (j = 1; j <= n; ++j)
//   		{
//   			cin >> a[i][j];
//   			if (a[i][j] != 0)
//   			{
//   				++tot;
//   				s[tot].x = i;
//   				s[tot].y = j;
//   				s[tot].num = a[i][j];
//   			}
//   		}
//   	}
//   	sort(s + 1, s + 1 + tot, cmp);
//   	int s1, s2, e1, e2, mdis;
//   	--k; //·�ϵ����ﻨ��һ������
//   	s1 = 1;
//   	s2 = s[1].y; //���뻨����󣬴ӵ�һ�У���y�п�ʼ
//   	for (i = 1; i <= tot; ++i)
//   	{
//   		e1 = s[i].x;
//   		e2 = s[i].y;
//   		mdis = abs(s1 - e1) + abs(s2 - e2); //�����پ���
//   		k -= mdis;	 //�ƶ�ʱ��
//   		--k;		 //��ժʱ��
//   		if (k >= e1) //��Ϊ���Ҫ���ص�·�ϣ������ж�k�Ƿ���ڵ��ڵ�ǰ�У�����˵�����Լ���
//   		{
//   			ans += a[e1][e2];
//   			s1 = e1;
//   			s2 = e2;
//   		}
//   		else //�������û��ʱ�䷵���ˣ�����ֹ����
//   		{
//   			cout << ans;
//   			return 0;
//   		}
//   	}
//   	cout << ans;
//   	return 0;
//   }

// P1572_ע��ѧϰ�߶����ݱߴ������ݵ�˼��
//  using ll = long long int;
//  ll gcd(ll a, ll b)
//  {
//  	ll t;
//  	while (b != 0)
//  	{
//  		t = a % b;
//  		a = b;
//  		b = t;
//  	}
//  	return abs(a);
//  }
//  int main()
//  {
//  	// freopen("test.txt", "r", stdin);
//  	ll a, b, fz, fm;
//  	char t1, fh; //��ʱ������
//  	cin >> a >> t1 >> b;
//  	fz = a;
//  	fm = b;
//  	while (cin >> fh)
//  	{
//  		cin >> a >> t1 >> b;
//  		if (fh == '+')
//  		{
//  			fz = fz * b + fm * a;
//  		}
//  		else if (fh == '-')
//  		{
//  			fz = fz * b - fm * a;
//  		}
//  		fm = fm * b;
//  	}
//  	if (fz == fm)
//  	{
//  		cout << 1;
//  	}
//  	else
//  	{
//  		ll g = gcd(fz, fm);
//  		fz = fz / g;
//  		fm = fm / g;
//  		if (fm == 1)
//  		{
//  			cout << fz;
//  		}
//  		else
//  		{
//  			cout << fz << '/' << fm;
//  		}
//  	}
//  	return 0;
//  }

// �����P7911_CSP-J2021������_�ر�ע��ʹ��������ʽsscanf�ж��Ƿ�Ϲ�ķ����������ֽⷨ��
//  /*
//  ����� i ̨�����Ϊ���������
//  ���Ϲ淶�ĵ�ַ���Ҳ��ظ�������ַ��� OK��
//  ������ṩ���Ϲ淶�ĵ�ַ�������ظ�������ַ��� FAIL��
//  ������ṩ�ĵ�ַ�����Ƿ��Ϲ淶�ĵ�ַ��������ַ��� ERR��
//  ����� i ̨�����Ϊ�ͻ�������
//  ���Ϲ淶�ҳɹ��������ӣ����������ı�š�
//  ������ṩ���Ϲ淶�ĵ�ַ������û�з�����������ַ��� FAIL��
//  ������ṩ�ĵ�ַ�����Ƿ��Ϲ淶�ĵ�ַ��������ַ��� ERR��
//  */
//  //����һ��check��������
//  bool check(string s)
//  {
//  	int len = s.size(),
//  		dian_cnt = 0,
//  		maohao_cnt = 0;
//  	int i, j;
//  	long long int temp;
//  	int p1, p2 = 0;
//  	string stemp;
//  	for (i = 0; i < len; ++i)
//  	{
//  		switch (s[i])
//  		{
//  		case '.':
//  			++dian_cnt;
//  			break;
//  		case ':':
//  			++maohao_cnt;
//  			p1 = i;
//  			break;
//  		}
//  	}
//  	if (dian_cnt == 3 && maohao_cnt == 1) //������������
//  	{
//  		s[p1] = '.';
//  		s = '.' + s + '.';
//  		for (i = 1; i <= 5; ++i)
//  		{
//  			p1 = p2;
//  			p2 = s.find(".", p1 + 1);
//  			stemp = s.substr(p1 + 1, p2 - p1 - 1);
//  			len = stemp.size();
//  			if (len == 0)
//  			{
//  				return false;
//  			}
//  			for (j = 0; j < len; ++j)
//  			{
//  				if (stemp[j] < '0' || stemp[j] > '9')
//  				{
//  					return false;
//  				}
//  			}
//  			temp = stoll(stemp);
//  			// cout << temp << endl;
//  			if (i <= 4)
//  			{
//  				if (stemp[0] == '0' && stemp.size() != 1)
//  				{
//  					return false;
//  				}
//  				if (temp > 255)
//  				{
//  					return false;
//  				}
//  			}
//  			else // i==5
//  			{
//  				if (stemp[0] == '0' && stemp.size() != 1)
//  				{
//  					return false;
//  				}
//  				if (temp > 65535)
//  				{
//  					return false;
//  				}
//  			}
//  		}
//  		return true;
//  	}
//  	else
//  	{
//  		return false;
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	int i, cnt = 1;
//  	unordered_map<string, int> m;
//  	string s, net;
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> s >> net;
//  		if (s == "Server")
//  		{
//  			if (check(net)) //�Ϲ�
//  			{
//  				if (m.count(net) == 0) //�޸�Ԫ�أ����Բ���
//  				{
//  					m[net] = i;
//  					cout << "OK" << endl;
//  				}
//  				else
//  				{
//  					cout << "FAIL" << endl;
//  				}
//  			}
//  			else
//  			{
//  				cout << "ERR" << endl;
//  			}
//  		}
//  		else // Client
//  		{
//  			if (check(net)) //�Ϲ�
//  			{
//  				if (m.count(net) == 0) //û�з�����
//  				{
//  					cout << "FAIL" << endl;
//  				}
//  				else //�з��������ɹ�����
//  				{
//  					cout << m[net] << endl;
//  				}
//  			}
//  			else
//  			{
//  				cout << "ERR" << endl;
//  			}
//  		}
//  	}
//  	return 0;
//  }
// ����ⷨ_https://www.luogu.com.cn/blog/320282/solution-P7911
//  bool check(string s)
//  {
//  	int len = s.length();
//  	long long tmp = 0;
//  	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
//  	for (int i = 0; i < len; i++)
//  	{
//  		if ((i == 0 || (s[i - 1] == '.' || s[i - 1] == ':')) && s[i] >= '0' && s[i] <= '9')
//  			cnt3++;
//  		//�����ǰΪ��һ��λ�û�ǰһ��Ϊ�ַ����������λ��Ϊ����
//  		if (s[i] == '.' || s[i] == ':')
//  		{
//  			if (s[i] == '.')
//  				cnt1++;
//  			else if (s[i] == ':')
//  				cnt2++;
//  			//ͳ���ַ����ֵĴ���
//  			if (cnt1 < 3 && cnt2)
//  				return false; //����˳���Ƿ�淶
//  			if (!cnt3)
//  				return false;			//����ַ��ڵ�һ������ǰ����
//  			if (0 <= tmp && tmp <= 255) //�ж�a,b,c,d�ķ�Χ�Ƿ�淶
//  			{
//  				tmp = 0;
//  				continue;
//  			}
//  			else
//  				return false;
//  		}
//  		else if (s[i] < '0' || s[i] > '9')
//  			return false; //��������ֵ��ַ�
//  		if (i && !tmp && s[i - 1] == '0')
//  			return false;			 //�ж�ǰ�� 0
//  		tmp = tmp * 10 + s[i] - '0'; //��ȡ����
//  	}
//  	if (cnt1 != 3 || cnt2 != 1 || cnt3 != 5)
//  		return false; //�ַ������ֳ��ֵ������Ƿ���ȷ
//  	if (0 <= tmp && tmp <= 65535)
//  		return true; //�ж�e�ķ�Χ
//  	else
//  		return false;
//  }
//  int main()
//  {
//  	int n;
//  	unordered_map<string, int> address;
//  	cin >> n;
//  	for (int i = 1; i <= n; i++)
//  	{
//  		string cpt, adr;
//  		cin >> cpt >> adr;
//  		if (check(adr) == false)
//  			cout << "ERR"; //�����ַ�������Ϲ淶
//  		else if (cpt == "Server")
//  		{
//  			if (address.count(adr))
//  				cout << "FAIL";
//  			else
//  			{
//  				address[adr] = i;
//  				cout << "OK";
//  			}
//  		}
//  		else if (cpt == "Client")
//  		{
//  			if (address.count(adr))
//  				cout << address[adr] << endl;
//  			else
//  				cout << "FAIL";
//  		}
//  	}
//  	return 0;
//  }
// ʹ��������ʽsscanf�ж��Ƿ�Ϲ棬�ɴ�󽵵��ѶȲ����ٴ�����
//  bool check(string s)
//  {
//  	long long a, b, c, d, e;
//  	if (sscanf(s.c_str(), "%lld.%lld.%lld.%lld:%lld", &a, &b, &c, &d, &e) != 5)
//  	{
//  		return false;
//  	}
//  	if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255 || e < 0 || e > 65535)
//  	{
//  		return false;
//  	}
//  	string ss;
//  	ss = to_string(a) + '.' + to_string(b) + '.' + to_string(c) + '.' + to_string(d) + ':' + to_string(e);
//  	return ss == s; //�ж�ǰ��0
//  }
//  unordered_map<string, int> m;
//  int main()
//  {
//  	int n;
//  	string t, s;
//  	cin >> n;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> t >> s;
//  		if (!check(s))
//  		{
//  			cout << "ERR\n";
//  		}
//  		else if (t[0] == 'S')
//  		{
//  			if (m[s])
//  			{
//  				cout << "FAIL\n";
//  			}
//  			else
//  			{
//  				m[s] = j;
//  				cout << "OK\n";
//  			}
//  		}
//  		else // t[0]=='C'
//  		{
//  			if (m[s])
//  			{
//  				cout << m[s] << "\n";
//  			}
//  			else
//  			{
//  				cout << "FAIL\n";
//  			}
//  		}
//  	}
//  	return 0;
//  }

// P7910_CSP-J2021�ڶ���
// int t[8001]; // t[]�洢���ǵ�i��Ԫ����a[]�е�ԭλ��
// struct Node
// {
// 	int num;
// 	int subscr;
// } a[8001];
// bool cmp(Node a, Node b)
// {
// 	if (a.num != b.num)
// 	{
// 		return a.num < b.num;
// 	}
// 	else
// 	{
// 		return a.subscr < b.subscr;
// 	}
// 	//������ͨ��ð�����򣬶������Ԫ����ͬ�Ͱ����±�����
// }
// int main()
// {
// 	int n, q, x, v, i = 0, j, p;
// 	short caozuo;
// 	cin >> n >> q;
// 	for (i = 1; i <= n; ++i)
// 	{
// 		cin >> a[i].num;
// 		a[i].subscr = i;
// 	}
// 	sort(a + 1, a + n + 1, cmp);
// 	for (i = 1; i <= n; ++i)
// 	{
// 		t[a[i].subscr] = i;
// 	}
// 	for (i = 1; i <= q; ++i)
// 	{
// 		cin >> caozuo;
// 		if (caozuo == 1)
// 		{
// 			cin >> x >> v;
// 			a[t[x]].num = v;
// 			for (j = 2; j <= n; ++j)
// 			{
// 				if (!cmp(a[j - 1], a[j]))
// 				{
// 					swap(a[j], a[j - 1]);
// 				}
// 			}
// 			for (j = n; j >= 2; --j)
// 			{
// 				if (!cmp(a[j - 1], a[j]))
// 				{
// 					swap(a[j], a[j - 1]);
// 				}
// 			}
// 			for (j = 1; j <= n; ++j)
// 			{
// 				t[a[j].subscr] = j;
// 			}
// 		}
// 		else // caozuo == 2
// 		{
// 			cin >> x;
// 			cout << t[x] << endl;
// 		}
// 	}
// 	return 0;
// }

// P1451
//  char c[101][101];
//  int n, m, tot = 0;
//  int xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  void dfs(int x, int y)
//  {
//  	int i, tx, ty;
//  	for (i = 1; i <= 4; ++i)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && c[tx][ty] != '0')
//  		{
//  			c[tx][ty] = '0';
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> m;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> c[i][j];
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			if (c[i][j] != '0')
//  			{
//  				dfs(i, j);
//  				++tot;
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// ��P1141_������˼��https://www.luogu.com.cn/blog/user49173/solution-p1141
//  char c[1001][1001];
//  bool b[1001][1001];
//  long long ans[1000001], tot; //ʮ��OIһ���գ�����longlong������
//  queue<int> xq;
//  queue<int> yq;
//  int n, m,
//  	xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  int map_cnt, _map[1001][1001];
//  inline void bfs(int x, int y)
//  {
//  	int tx, ty, i;
//  	++tot; //�Լ�Ҳ��
//  	b[x][y] = true;
//  	_map[x][y] = map_cnt;
//  	xq.push(x);
//  	yq.push(y);
//  	while (!xq.empty())
//  	{
//  		x = xq.front();
//  		y = yq.front();
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= n &&
//  				b[tx][ty] == false && c[tx][ty] != c[x][y])
//  			{
//  				xq.push(tx);
//  				yq.push(ty);
//  				b[tx][ty] = true;
//  				_map[tx][ty] = map_cnt;
//  				++tot;
//  			}
//  		}
//  		xq.pop();
//  		yq.pop();
//  	}
//  	ans[map_cnt] = tot;
//  }
//  int main()
//  {
//  	cin >> n >> m;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			cin >> c[i][j];
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (b[i][j] == false)
//  			{
//  				tot = 0;
//  				++map_cnt;
//  				bfs(i, j);
//  			}
//  		}
//  	}
//  	int x1, y1, x, y, tx, ty;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x1 >> y1;
//  		cout << ans[_map[x1][y1]] << "\n";
//  	}
//  	return 0;
//  }

// ��P1020
//  int a[100001], dp[100001], ma[100001];
//  inline int search(int k, int range)
//  {
//  	int left = 1, right = range, mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (dp[mid] >= k)
//  		{
//  			left = mid + 1;
//  		}
//  		else
//  		{
//  			right = mid - 1;
//  		}
//  	}
//  	return left;
//  }
//  int main()
//  {
//  	// freopen("test.txt", "r", stdin);
//  	int temp, tot = 1, n = 0, sys = 0;
//  	int q, j, p;
//  	//����&ϵͳ��
//  	while (cin >> temp)
//  	{
//  		++n;
//  		a[n] = temp;
//  		p = -1;
//  		for (q = 1; q <= sys; ++q)
//  		{
//  			if (ma[q] >= temp)
//  			{
//  				p = q;
//  				break;
//  			}
//  		}
//  		if (p == -1)
//  		{
//  			++sys;
//  			ma[sys] = temp;
//  		}
//  		else
//  		{
//  			ma[p] = temp;
//  		}
//  	}
//  	//������صĵ���
//  	dp[1] = a[1];
//  	for (q = 2; q <= n; ++q)
//  	{
//  		if (dp[tot] >= a[q])
//  		{
//  			++tot;
//  			dp[tot] = a[q];
//  		}
//  		else
//  		{
//  			p = search(a[q], tot);
//  			dp[p] = a[q];
//  		}
//  	}
//  	cout << tot << "\n"
//  		 << sys;
//  	return 0;
//  }

// P2678
//  const int R = 50001;
//  int a[R];
//  inline bool check(int mid, int l, int n, int m)
//  {
//  	int count = 0, place = 0, q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (a[q] - place < mid)
//  		{
//  			++count;
//  		}
//  		else
//  		{
//  			place = a[q];
//  		}
//  	}
//  	if (l - place < mid)
//  	{
//  		++count;
//  	}
//  	return count <= m;
//  }
//  int main()
//  {
//  	unsigned int l, n, m;
//  	cin >> l >> n >> m;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q];
//  	}
//  	int left = 1, right = l, mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (check(mid, l, n, m))
//  		{
//  			left = mid + 1;
//  		}
//  		else
//  		{
//  			right = mid - 1;
//  		}
//  	}
//  	cout << left - 1;
//  	return 0;
//  }

// ��P1439_LCSģ��_��һ������
//  const int R = 100010;
//  int a[R], b[R], t[R], num[R], dp[R];
//  int search(int left, int right, int x)
//  {
//  	int mid;
//  	while (left <= right)
//  	{
//  		mid = (left + right) >> 1;
//  		if (dp[mid] > x)
//  		{
//  			right = mid - 1;
//  		}
//  		else
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	return left;
//  }
//  int main()
//  {
//  	int n;
//  	register int j;
//  	cin >> n;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  		t[a[j]] = j;
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> b[j];
//  		num[j] = t[b[j]];
//  	}
//  	dp[1] = num[1];
//  	int len = 1, p, left, right, mid;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		if (dp[len] < num[j])
//  		{
//  			++len;
//  			dp[len] = num[j];
//  		}
//  		else
//  		{
//  			p = search(1, len, num[j]);
//  			dp[p] = num[j];
//  		}
//  	}
//  	cout << len;
//  	return 0;
//  }

// P1507
//  const int R = 51;
//  int dp[401][401];
//  int main()
//  {
//  	short vol[R], we[R], value[R];
//  	int mv, mw;
//  	int n;
//  	cin >> mv >> mw >> n;
//  	int i, j, k;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> vol[i] >> we[i] >> value[i];
//  		for (j = mv; j >= vol[i]; --j)
//  		{
//  			for (k = mw; k >= we[i]; --k)
//  			{
//  				dp[j][k] = max(dp[j][k], dp[j - vol[i]][k - we[i]] + value[i]);
//  			}
//  		}
//  	}
//  	cout << dp[mv][mw];
//  	return 0;
//  }

// P1003
//  struct Floor
//  {
//  	int a, b, g, k;
//  } a[10001];
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int i, x, y;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i].a >> a[i].b >> a[i].g >> a[i].k;
//  	}
//  	cin >> x >> y;
//  	for (i = n; i >= 1; --i) //����ѭ������ΪҪ�����������ǲ��̺�ı�ţ������¼���
//  	{
//  		if (x >= a[i].a && x <= a[i].a + a[i].g &&
//  			y >= a[i].b && y <= a[i].b + a[i].k)
//  		{
//  			cout << i;
//  			return 0;
//  		}
//  	}
//  	cout << -1;
//  	return 0;
//  }

// P1525
//  struct Cri
//  {
//  	int x, y, c;
//  } a[100001];
//  int fa[40001];
//  int find(int x)
//  {
//  	if (x == fa[x])
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  void merge(int x, int y)
//  {
//  	int fx = find(x),
//  		fy = find(y);
//  	if (fx != fy)
//  	{
//  		fa[fy] = fx;
//  	}
//  }
//  bool cmp(Cri c1, Cri c2)
//  {
//  	return c1.c > c2.c;
//  }
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	int i;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> a[i].x >> a[i].y >> a[i].c;
//  	}
//  	sort(a + 1, a + m + 1, cmp);
//  	int t = n * 2;
//  	for (i = 1; i <= t; ++i)
//  	{
//  		fa[i] = i;
//  	}
//  	for (i = 1; i <= m; ++i)
//  	{
//  		if (find(a[i].x) == find(a[i].y))
//  		{
//  			cout << a[i].c;
//  			return 0;
//  		}
//  		else
//  		{
//  			merge(a[i].x, a[i].y + n);
//  			merge(a[i].y, a[i].x + n);
//  			// cout << a[i].c << "\n";
//  		}
//  	}
//  	cout << 0;
//  	return 0;
//  }

// P1873
//  int a[1000001];
//  int n;
//  unsigned int m;
//  bool check(int mid)
//  {
//  	long long ans = 0;
//  	for (int q = 1; q <= n; ++q)
//  	{
//  		if (a[q] > mid)
//  		{
//  			ans += a[q] - mid;
//  		}
//  	}
//  	return ans >= m;
//  }
//  int main()
//  {
//  	int left = INT_MAX, right = INT_MIN;
//  	cin >> n >> m;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q];
//  		left = min(left, a[q]);
//  		right = max(right, a[q]);
//  	}
//  	int mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (check(mid))
//  		{
//  			left = mid + 1;
//  		}
//  		else
//  		{
//  			right = mid - 1;
//  		}
//  	}
//  	cout << left - 1;
//  	return 0;
//  }

// P1024
//  double a, b, c, d;
//  double res(double x)
//  {
//  	return (a * x * x * x) + (b * x * x) + (c * x) + d;
//  }
//  int main()
//  {
//  	cin >> a >> b >> c >> d;
//  	double left, right, mid, r1, r2;
//  	int tot = 0, q;
//  	for (q = -100; q < 100; ++q)
//  	{
//  		r1 = res(double(q));
//  		r2 = res(double(q + 1.0));
//  		if (r1 == 0)
//  		{
//  			cout << fixed << setprecision(2) << double(q) << ' ';
//  			++tot;
//  		}
//  		else if (r1 * r2 < 0)
//  		{
//  			left = q;
//  			right = q + 1;
//  			while (left + 0.001 <= right)
//  			{
//  				mid = (left + right) / 2;
//  				if (res(mid) * res(right) <= 0)
//  				{
//  					left = mid;
//  				}
//  				else
//  				{
//  					right = mid;
//  				}
//  			}
//  			cout << fixed << setprecision(2) << right << ' ';
//  			++tot;
//  		}
//  		if (tot == 3)
//  		{
//  			break;
//  		}
//  	}
//  	return 0;
//  }

// P1546
//  struct Node
//  {
//  	int x, y, len;
//  } a[5900];
//  int fa[101];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  bool cmp(Node x, Node y)
//  {
//  	return x.len < y.len;
//  }
//  int main()
//  {
//  	int n, q, p, k = 0, t;
//  	cin >> n;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= n; ++p)
//  		{
//  			cin >> t;
//  			if (q < p)
//  			{
//  				++k;
//  				a[k] = {q, p, t};
//  			}
//  		}
//  		fa[q] = q;
//  	}
//  	sort(a + 1, a + k + 1, cmp);
//  	int road = 0, ans = 0, fx, fy;
//  	for (q = 1; q <= k; ++q)
//  	{
//  		fx = find(a[q].x);
//  		fy = find(a[q].y);
//  		//��Ϊmerge���������ظ��Ĳ��Ҳ��������ԾͲ����ú�����ֱ����main�кϲ�
//  		if (fx != fy)
//  		{
//  			ans += a[q].len;
//  			fa[fy] = fx;
//  			++road;
//  		}
//  		if (road == n - 1)
//  		{
//  			break;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P1547
//  int fa[2001];
//  struct Node
//  {
//  	int x, y, len;
//  } a[10001];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  bool cmp(Node x, Node y)
//  {
//  	return x.len < y.len;
//  }
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> a[q].x >> a[q].y >> a[q].len;
//  	}
//  	sort(a + 1, a + m + 1, cmp);
//  	int fx, fy, ans = 0, e = 0;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		if (e == n - 1)
//  		{
//  			break;
//  		}
//  		else
//  		{
//  			fx = find(a[q].x);
//  			fy = find(a[q].y);
//  			if (fx != fy)
//  			{
//  				fa[fy] = fx;
//  				++e;
//  				ans = a[q].len;
//  			}
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P1111
//  int fa[1001];
//  struct Node
//  {
//  	int x, y, len;
//  } a[100001];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  bool cmp(Node x, Node y)
//  {
//  	return x.len < y.len;
//  }
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> a[q].x >> a[q].y >> a[q].len;
//  	}
//  	sort(a + 1, a + m + 1, cmp);
//  	int fx, fy, ans = 0, e = 0;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		if (e == n - 1)
//  		{
//  			break;
//  		}
//  		else
//  		{
//  			fx = find(a[q].x);
//  			fy = find(a[q].y);
//  			if (fx != fy)
//  			{
//  				fa[fy] = fx;
//  				++e;
//  				ans = a[q].len;
//  			}
//  		}
//  	}
//  	int root = 0;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (fa[q] == q)
//  		{
//  			++root;
//  		}
//  	}
//  	if (root == 1)
//  	{
//  		cout << ans;
//  	}
//  	else
//  	{
//  		cout << -1;
//  	}
//  	return 0;
//  }

// P5092
//  const int R = 30001;
// int fa[R];	//�����
// int dis[R]; //�����ľ���
// int len[R]; //��i�еĳ���
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		int t = fa[x];
//  		fa[x] = find(fa[x]);
//  		dis[x] = dis[x] + dis[t];
//  		//��Ϊ����һ�У�fa[x]��ֵ�Ѿ����£�����Ҫ��t��ʱ��find֮ǰ����x��·��ѹ��ǰ�ĸ�
//  		// cout << x << ", fa:" << fa[x] << ", dis:" << dis[x] << ", len:" << len[x] << "\n";
//  		return fa[x];
//  	}
//  }
//  void merge(int x, int y)
//  {
//  	int fx = find(x),
//  		fy = find(y);
//  	if (fx != fy)
//  	{
//  		fa[fx] = fy;
//  		dis[fx] = dis[fx] + len[fy];
//  		//�ȼ���ԭ�ȵ�len[fy]�ĳ��ȣ��ٸ���len[fy]
//  		len[fy] = len[fx] + len[fy];
//  		len[fx] = 0;
//  	}
//  }
//  int main()
//  {
//  	int p;
//  	char c;
//  	cin >> p;
//  	int q, x, y;
//  	for (q = 1; q <= 30000; ++q)
//  	{
//  		fa[q] = q;
//  		len[q] = 1;
//  	}
//  	for (q = 1; q <= p; ++q)
//  	{
//  		cin >> c;
//  		if (c == 'M')
//  		{
//  			cin >> x >> y;
//  			merge(x, y);
//  		}
//  		else
//  		{
//  			cin >> x;
//  			find(x);
//  			cout << dis[x] << "\n";
//  		}
//  	}
//  	return 0;
//  }

// P1196
//  const int R = 30001;
//  int fa[R], dis[R], len[R];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		int t = fa[x];
//  		fa[x] = find(fa[x]);
//  		dis[x] = dis[x] + dis[t];
//  		return fa[x];
//  	}
//  }
//  void merge(int x, int y)
//  {
//  	int fx = find(x),
//  		fy = find(y);
//  	if (fx != fy)
//  	{
//  		fa[fx] = fy;
//  		dis[fx] = dis[fx] + len[fy];
//  		len[fy] = len[fx] + len[fy];
//  		len[fx] = 0;
//  	}
//  }
//  int main()
//  {
//  	// freopen("test.txt", "w", stdout);
//  	int t, fx, fy;
//  	cin >> t;
//  	char c;
//  	int q, x, y;
//  	for (q = 1; q <= 30000; ++q)
//  	{
//  		fa[q] = q;
//  		len[q] = 1;
//  	}
//  	for (q = 1; q <= t; ++q)
//  	{
//  		cin >> c >> x >> y;
//  		if (c == 'M')
//  		{
//  			merge(x, y);
//  		}
//  		else
//  		{
//  			fx = find(x);
//  			fy = find(y);
//  			if (fx != fy)
//  			{
//  				cout << "-1\n";
//  			}
//  			else
//  			{
//  				cout << abs(dis[x] - dis[y]) - 1 << "\n";
//  			}
//  		}
//  	}
//  	return 0;
//  }

// P1195
//  struct Node
//  {
//  	int x, y, len;
//  } a[10001];
//  int fa[1001];
//  bool cmp(Node x, Node y)
//  {
//  	return x.len < y.len;
//  }
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  int main()
//  {
//  	int n, m, k;
//  	cin >> n >> m >> k;
//  	int i;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		fa[i] = i;
//  	}
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> a[i].x >> a[i].y >> a[i].len;
//  	}
//  	sort(a + 1, a + m + 1, cmp);
//  	int edge = 0, fx, fy;
//  	long long ans = 0;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		if (edge == n - k)
//  		{
//  			cout << ans;
//  			return 0;
//  		}
//  		else
//  		{
//  			fx = find(a[i].x);
//  			fy = find(a[i].y);
//  			if (fx != fy)
//  			{
//  				++edge;
//  				ans += a[i].len;
//  				fa[fx] = fy;
//  			}
//  		}
//  	}
//  	cout << "No Answer";
//  	return 0;
//  }

// P2658
//  const int R = 501;
//  int a[R][R];
//  bool flag[R][R], vis[R][R];
//  int n, m, tag;
//  int xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  inline void init()
//  {
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= m; ++p)
//  		{
//  			vis[q][p] = false;
//  		}
//  	}
//  }
//  bool bfs(int sx, int sy, int mid)
//  {
//  	queue<int> xq;
//  	queue<int> yq;
//  	int q, tot = 1;
//  	int x, y, tx, ty;
//  	vis[sx][sy] = true;
//  	xq.push(sx);
//  	yq.push(sy);
//  	while (!xq.empty())
//  	{
//  		if (tag == tot)
//  		{
//  			return true;
//  		}
//  		x = xq.front();
//  		y = yq.front();
//  		for (q = 1; q <= 4; ++q)
//  		{
//  			tx = x + xx[q];
//  			ty = y + yy[q];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				!vis[tx][ty] &&
//  				abs(a[tx][ty] - a[x][y]) <= mid)
//  			{
//  				xq.push(tx);
//  				yq.push(ty);
//  				vis[tx][ty] = true;
//  				if (flag[tx][ty])
//  				{
//  					++tot;
//  				}
//  			}
//  		}
//  		xq.pop();
//  		yq.pop();
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	cin >> n >> m;
//  	int i, j, sx, sy;
//  	int left = 0, right = -1;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> a[i][j];
//  			right = max(right, a[i][j]);
//  		}
//  	}
//  	bool sign = true;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> flag[i][j];
//  			if (flag[i][j] == 1)
//  			{
//  				++tag;
//  				if (sign)
//  				{
//  					sx = i;
//  					sy = j;
//  					sign = false;
//  				}
//  			}
//  		}
//  	}
//  	int mid;
//  	// cout << left << " " << right << "\n";
//  	while (left <= right)
//  	{
//  		mid = (left + right) >> 1;
//  		init();
//  		if (bfs(sx, sy, mid))
//  		{
//  			right = mid - 1;
//  		}
//  		else
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	cout << left;
//  	return 0;
//  }

// P2731
//  const int R = 501;
//  int e, tot, n;
//  int a[R][R], d[R], ans[R * 2];
//  void dfs(int x)
//  {
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (a[x][q] != 0)
//  		{
//  			--a[x][q];
//  			--a[q][x];
//  			dfs(q);
//  		}
//  	}
//  	++tot;
//  	ans[tot] = x;
//  }
//  inline int _max(int x, int y, int z)
//  {
//  	if (x > y)
//  	{
//  		return x > z ? x : z;
//  	}
//  	else // x <= y
//  	{
//  		return y > z ? y : z;
//  	}
//  }
//  int main()
//  {
//  	cin >> e;
//  	int q, x, y;
//  	for (q = 1; q <= e; ++q)
//  	{
//  		cin >> x >> y;
//  		n = _max(n, x, y);
//  		++a[x][y];
//  		++a[y][x];
//  		++d[x];
//  		++d[y];
//  	}
//  	int s = 1;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (d[q] % 2 == 1)
//  		{
//  			s = q;
//  			break;
//  		}
//  	}
//  	dfs(s);
//  	for (q = tot; q >= 1; --q)
//  	{
//  		cout << ans[q] << "\n";
//  	}
//  	return 0;
//  }

// P1341
//  const int R = 255; //��������һ�㣬��С��ans����ᱨRE
//  int n, tot;
//  int a[R][R], d[R], ans[R * 2];
//  void dfs(int x)
//  {
//  	int q;
//  	for (q = 1; q < R; ++q) //Ԫ�ظ���Ϊ255�������±�Ϊ0~254��������С�ڶ�����С�ڵ���
//  	{
//  		if (a[x][q] != 0)
//  		{
//  			--a[x][q];
//  			--a[q][x];
//  			dfs(q);
//  		}
//  	}
//  	++tot;
//  	ans[tot] = x;
//  }
//  inline int _min(int a, int b, int c)
//  {
//  	if (a < b)
//  	{
//  		return a < c ? a : c;
//  	}
//  	else // a>=b
//  	{
//  		return b < c ? b : c;
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	int s = 200;
//  	int q;
//  	char x, y;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> x >> y;
//  		++a[int(x)][int(y)];
//  		++a[int(y)][int(x)];
//  		++d[int(x)];
//  		++d[int(y)];
//  		s = _min(s, int(x), int(y));
//  	}
//  	int jidian = 0;
//  	bool sign = true;
//  	for (q = 1; q < R; ++q)
//  	{
//  		if (d[q] % 2 == 1)
//  		{
//  			++jidian;
//  			if (sign)
//  			{
//  				s = q;
//  				sign = false;
//  			}
//  		}
//  	}
//  	if (jidian == 2 || jidian == 0)
//  	{
//  		dfs(s);
//  		for (q = tot; q >= 1; --q)
//  		{
//  			cout << char(ans[q]);
//  		}
//  	}
//  	else
//  	{
//  		cout << "No Solution";
//  	}
//  	return 0;
//  }

// P1892
//  int fa[2010];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  void merge(int x, int y)
//  {
//  	int fx = find(x),
//  		fy = find(y);
//  	if (fx != fy)
//  	{
//  		fa[fy] = fx;
//  	}
//  }
//  int main()
//  {
//  	int n, m;
//  	char c;
//  	int x, y;
//  	cin >> n >> m;
//  	int q, t = 2 * n + 1;
//  	for (q = 1; q <= t; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> c >> x >> y;
//  		if (c == 'F')
//  		{
//  			merge(x, y);
//  		}
//  		else
//  		{
//  			merge(x, y + n);
//  			merge(y, x + n);
//  		}
//  	}
//  	int ans = 0;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (fa[q] == q)
//  		{
//  			++ans;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P3371
//  const int NR = 10010;
//  const int INF = 0x3f3f3f3f;
//  struct Node
//  {
//  	int to, len, next;
//  } edge[500010];
//  int pre[NR];
//  int d[NR];
//  bool b[NR];
//  int tot;
//  void add(int x, int y, int len)
//  {
//  	++tot;
//  	edge[tot].to = y;
//  	edge[tot].len = len;
//  	edge[tot].next = pre[x];
//  	pre[x] = tot;
//  }
//  int main()
//  {
//  	int n, e, s;
//  	cin >> n >> e >> s;
//  	int q, x, y, len;
//  	for (q = 1; q <= e; ++q)
//  	{
//  		cin >> x >> y >> len;
//  		add(x, y, len);
//  	}
//  	int i, j;
//  	memset(d, 0x3f, sizeof(d));
//  	int st, to;
//  	d[s] = 0;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		st = -1;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (!b[j] && (st == -1 || d[j] < d[st]))
//  			{
//  				st = j;
//  			}
//  		}
//  		b[st] = true;
//  		for (j = pre[st]; j != 0; j = edge[j].next)
//  		{
//  			to = edge[j].to;
//  			if (!b[to] && d[st] + edge[j].len < d[to])
//  			{
//  				d[to] = d[st] + edge[j].len;
//  			}
//  		}
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (d[q] != INF)
//  		{
//  			cout << d[q] << ' ';
//  		}
//  		else
//  		{
//  			cout << INT_MAX << ' ';
//  		}
//  	}
//  	return 0;
//  }

// ��P4779_Dijkstra�����ȶ����Ż�ģ����
//  struct Edge
//  {
//  	int to, len, next;
//  } edge[200010];
//  struct Node
//  {
//  	int pos, dis;
//  	bool operator<(const Node &a) const
//  	{
//  		return dis > a.dis;
//  	}
//  };
//  int pre[100010], d[100010];
//  bool b[100010];
//  int tot;
//  int n, m, s;
//  void add(int x, int y, int len)
//  {
//  	++tot;
//  	edge[tot].to = y;
//  	edge[tot].len = len;
//  	edge[tot].next = pre[x];
//  	pre[x] = tot;
//  }
//  void dijkstra()
//  {
//  	memset(d, 0x3f, sizeof(d));
//  	d[s] = 0;
//  	priority_queue<Node> q;
//  	q.push({s, 0});
//  	int i, j, st, to;
//  	while (!q.empty())
//  	{
//  		st = q.top().pos;
//  		if (!b[st])
//  		{
//  			b[st] = true;
//  			for (j = pre[st]; j != 0; j = edge[j].next)
//  			{
//  				to = edge[j].to;
//  				if (d[st] + edge[j].len < d[to])
//  				{
//  					d[to] = d[st] + edge[j].len;
//  					if (!b[to])
//  					{
//  						q.push({to, d[to]});
//  					}
//  				}
//  			}
//  		}
//  		q.pop();
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> m >> s;
//  	int q, x, y, len;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> x >> y >> len;
//  		add(x, y, len);
//  	}
//  	dijkstra();
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cout << d[q] << ' ';
//  	}
//  	return 0;
//  }

// ��P2024_�߼��ģ����֣����ಢ�鼯
//  int fa[150010];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  void merge(int x, int y)
//  {
//  	int fx = find(x),
//  		fy = find(y);
//  	if (fx != fy)
//  	{
//  		fa[fy] = fx;
//  	}
//  }
//  int main()
//  {
//  	int n, k, lie = 0;
//  	char c;
//  	int q, x, y, fx, fy;
//  	int ty;
//  	cin >> n >> k;
//  	int t = n * 3;
//  	for (q = 1; q <= t; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	for (q = 1; q <= k; ++q)
//  	{
//  		cin >> c >> x >> y;
//  		if (x > n || y > n)
//  		{
//  			++lie;
//  			continue;
//  		}
//  		if (c == '1') //ͬ��
//  		{
//  			ty = find(y);
//  			if (find(x + n) == ty || find(x + n + n) == ty)
//  			{
//  				++lie;
//  			}
//  			else
//  			{
//  				merge(x, y);
//  				merge(x + n, y + n);
//  				merge(x + n + n, y + n + n);
//  			}
//  		}
//  		else // c=='2'
//  		{
//  			ty = find(y);
//  			if (x == y || find(x) == ty || find(x + n) == ty)
//  			{
//  				++lie;
//  			}
//  			else
//  			{
//  				//��ͬ�ֵ�����ϲ�
//  				merge(x + n + n, y);
//  				merge(x + n, y + n + n);
//  				merge(x, y + n);
//  			}
//  		}
//  	}
//  	cout << lie;
//  	return 0;
//  }

// P1078
//  const int INF = 0x3f3f3f3f;
//  int d[101][101];
//  bool b[101][101];
//  int c[101];
//  int main()
//  {
//  	int n, k1, m, s, t;
//  	cin >> n >> k1 >> m >> s >> t;
//  	int k, i, j;
//  	int x, y, len;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (i != j)
//  			{
//  				d[i][j] = INF;
//  			}
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> c[i];
//  	}
//  	for (i = 1; i <= k1; ++i)
//  	{
//  		for (j = 1; j <= k1; ++j)
//  		{
//  			cin >> b[i][j]; // false�ǲ��ų⣬true���ų�
//  		}
//  	}
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> x >> y >> len;
//  		if (!b[c[x]][c[y]] && c[x] != c[y])
//  		{
//  			d[x][y] = min(len, d[x][y]);
//  		}
//  		if (!b[c[y]][c[x]] && c[y] != c[x])
//  		{
//  			d[y][x] = min(len, d[y][x]);
//  		}
//  	}
//  	if (c[s] == c[t])
//  	{
//  		cout << -1;
//  		return 0;
//  	}
//  	for (k = 1; k <= n; ++k)
//  	{
//  		for (i = 1; i <= n; ++i)
//  		{
//  			if (i != k)
//  			{
//  				for (j = 1; j <= n; ++j)
//  				{
//  					if (i != j && j != k)
//  					{
//  						if (/*!b[i][j] && d[i][j] != INF && */ d[i][k] + d[k][j] < d[i][j])
//  						{ //�ų�ľ�û�н��ߣ����Բ����ж���û���ų�
//  							d[i][j] = d[i][k] + d[k][j];
//  						}
//  					}
//  				}
//  			}
//  		}
//  	}
//  	if (d[s][t] != INF)
//  	{
//  		cout << d[s][t];
//  	}
//  	else
//  	{
//  		cout << -1;
//  	}
//  	return 0;
//  }

// ���P7771
// ��vector�������ṹ�����ʽǰ���ǣ��Ϻ����_��ע��
//   const int R = 100010;
//   struct
//   {
//   	int chu, ru;
//   } du[R];
//   struct Node
//   {
//   	int to, num;
//   };
//   vector<Node> v[R];
//   stack<int> ans;
//   bool b[200010];
//   bool cmp(Node x, Node y)
//   {
//   	return x.to < y.to;
//   }
//   void dfs(int x)
//   {
//   	int j;
//   	for (j = 0; j < v[x].size(); ++j)
//   	{
//   		if (!b[v[x][j].num])
//   		{
//   			b[v[x][j].num] = true;
//   			dfs(v[x][j].to);
//   		}
//   	}
//   	ans.push(x);
//   }
//   int main()
//   {
//   	int q, j, x, y;
//   	int n, m;
//   	//����
//   	cin >> n >> m;
//   	for (q = 1; q <= m; ++q)
//   	{
//   		cin >> x >> y;
//   		v[x].push_back({y, q});
//   		//�±��0��ʼ
//   		// to��y��num����ţ�Ϊq
//   		++du[x].chu;
//   		++du[y].ru;
//   	}
//   	//�ж�
//   	int s = 0, e = 0;
//   	int cnt = 0;
//   	for (q = 1; q <= n; ++q)
//   	{
//   		if (du[q].chu != du[q].ru)
//   		{
//   			++cnt;
//   			if (du[q].chu == du[q].ru + 1)
//   			{
//   				s = q;
//   			}
//   			if (du[q].ru == du[q].chu + 1)
//   			{
//   				e = q;
//   			}
//   		}
//   	}
//   	if (cnt != 0 && cnt != 2)
//   	{
//   		cout << "No";
//   		return 0;
//   	}
//   	//������е�ĳ��Ⱥ������ȣ����ȸ�s��e��ֵ
//   	//��Ϊ����ִ������ĵڶ���if����ֹ��������
//   	if (cnt == 0)
//   	{
//   		s = e = 1;
//   	}
//   	//�����һ����û����ֵ���ͱ���û�����/�յ�
//   	if (s == 0 || e == 0)
//   	{
//   		cout << "No";
//   		return 0;
//   	}
//   	//����
//   	for (q = 1; q <= n; ++q)
//   	{
//   		sort(v[q].begin(), v[q].end(), cmp);
//   	}
//   	//����
//   	dfs(s);
//   	while (!ans.empty())
//   	{
//   		cout << ans.top() << ' ';
//   		ans.pop();
//   	}
//   	return 0;
//   }
// ���⣬��now����ά�����ĸ��㿪ʼ_��ע��
//   const int R = 100010;
//   struct
//   {
//   	int chu, ru;
//   } du[R];
//   vector<int> v[R];
//   stack<int> ans;
//   int now[R];
//   void dfs(int x)
//   {
//   	int j;
//   	for (j = now[x]; j < v[x].size(); j = now[x])
//   	{
//   		now[x] = j + 1;
//   		//�൱�ڲ�߲�����������һ���ߺ��ٷ��ʴ˽�㣬���Ǵ���һ���߿�ʼ�������ʣ���ѭ������е�j = now[x]
//   		dfs(v[x][j]);
//   	}
//   	ans.push(x);
//   }
//   int main()
//   {
//   	int q, j, x, y;
//   	int n, m;
//   	//����
//   	cin >> n >> m;
//   	for (q = 1; q <= m; ++q)
//   	{
//   		cin >> x >> y;
//   		v[x].push_back(y);
//   		//�±��0��ʼ
//   		// to��y��num����ţ�Ϊq
//   		++du[x].chu;
//   		++du[y].ru;
//   	}
//   	//�ж�
//   	int s = 0, e = 0;
//   	int cnt = 0;
//   	for (q = 1; q <= n; ++q)
//   	{
//   		if (du[q].chu != du[q].ru)
//   		{
//   			++cnt;
//   			if (du[q].chu == du[q].ru + 1)
//   			{
//   				s = q;
//   			}
//   			if (du[q].ru == du[q].chu + 1)
//   			{
//   				e = q;
//   			}
//   		}
//   	}
//   	if (cnt != 0 && cnt != 2)
//   	{
//   		cout << "No";
//   		return 0;
//   	}
//   	//������е�ĳ��Ⱥ������ȣ����ȸ�s��e��ֵ
//   	//��Ϊ����ִ������ĵڶ���if����ֹ��������
//   	if (cnt == 0)
//   	{
//   		s = e = 1;
//   	}
//   	//�����һ����û����ֵ���ͱ���û�����/�յ�
//   	if (s == 0 || e == 0)
//   	{
//   		cout << "No";
//   		return 0;
//   	}
//   	//����
//   	for (q = 1; q <= n; ++q)
//   	{
//   		sort(v[q].begin(), v[q].end());
//   	}
//   	//����
//   	dfs(s);
//   	while (!ans.empty())
//   	{
//   		cout << ans.top() << ' ';
//   		ans.pop();
//   	}
//   	return 0;
//   }

// P1529
//  const int R = 130, INF = 0x3f3f3f3f;
//  int a[R][R];
//  int d[R];
//  bool b[R];
//  int main()
//  {
//  	int n, len;
//  	char x, y;
//  	int i, j;
//  	memset(a, 0x3f, sizeof(a)); //Ĭ�������
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> x >> y >> len;
//  		a[x][y] = a[y][x] = min(a[x][y], len);
//  	}
//  	// dijkstra
//  	memset(d, 0x3f, sizeof(d));
//  	d['Z'] = 0;
//  	int st;
//  	for (i = 'A'; i <= 'z'; ++i)
//  	{
//  		st = -1;
//  		for (j = 'A'; j <= 'z'; ++j)
//  		{
//  			if (!b[j] && (st == -1 || d[j] < d[st]))
//  			{
//  				st = j;
//  			}
//  		}
//  		b[st] = true;
//  		for (j = 'A'; j <= 'z'; ++j)
//  		{
//  			if (!b[j] && a[st][j] != INF &&
//  				a[st][j] + d[st] < d[j]) //��st������i������
//  			{
//  				d[j] = a[st][j] + d[st];
//  			}
//  		}
//  	}
//  	char c = 'A';
//  	int ans = INT_MAX;
//  	for (j = 'A'; j < 'Z'; ++j)
//  	{
//  		if (d[j] < ans)
//  		{
//  			ans = d[j];
//  			c = j;
//  		}
//  	}
//  	cout << c << ' ' << ans;
//  	return 0;
//  }

// P1576
//  const int R = 2001;
//  struct Node
//  {
//  	int num;
//  	double len;
//  	bool operator<(const Node &a) const
//  	{
//  		return a.len > len;
//  	}
//  };
//  vector<Node> a[R];
//  double d[R];
//  bool b[R];
//  int s, e;
//  void dijkstra()
//  {
//  	priority_queue<Node> q;
//  	int st, j;
//  	int to;
//  	double len;
//  	memset(d, -0x3f, sizeof(d));
//  	d[s] = 1.0;
//  	q.push({s, 1.0});
//  	while (!q.empty())
//  	{
//  		st = q.top().num;
//  		if (!b[st])
//  		{
//  			b[st] = true;
//  			for (j = 0; j < a[st].size(); ++j)
//  			{
//  				to = a[st][j].num;
//  				len = a[st][j].len;
//  				if (!b[to] && d[st] * len > d[to])
//  				//���յĽ����100/d[e]������d[e]Խ�󻨷Ѿ�ԽС
//  				{
//  					d[to] = d[st] * len;
//  					q.push({to, d[to]});
//  				}
//  			}
//  		}
//  		q.pop();
//  	}
//  }
//  int main()
//  {
//  	int x, y, n, m;
//  	double z;
//  	cin >> n >> m;
//  	int i;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> x >> y >> z;
//  		z = 1.0 - z / 100;
//  		a[x].push_back({y, z});
//  		a[y].push_back({x, z});
//  	}
//  	cin >> s >> e;
//  	dijkstra();
//  	cout << fixed << setprecision(8) << 100.0 / d[e] << ' ';
//  	return 0;
//  }

// U129172_���ģ����_��O2�Ż��ɹ�
//  template <typename T>
//  inline void d_read(T &a)
//  {
//  	int fh = 1;
//  	a = 0;
//  	char c = getchar();
//  	for (; c < '0' || c > '9'; c = getchar())
//  	{
//  		if (c == '-')
//  		{
//  			fh = -1;
//  		}
//  	}
//  	for (; c >= '0' && c <= '9'; c = getchar())
//  	{
//  		a = (a << 1) + (a << 3) + (c ^ 48);
//  	}
//  	a = a * fh;
//  }
//  int main()
//  {
//  	int a, n, ans = 0;
//  	register int y;
//  	d_read(n);
//  	d_read(ans);
//  	for (y = 2; y <= n; ++y)
//  	{
//  		d_read(a);
//  		ans ^= a;
//  	}
//  	printf("%d", ans);
//  	return 0;
//  }

// ��P5663
//  const int R = 100010;
//  struct Node
//  {
//  	int num, len;
//  };
//  vector<int> a[R];
//  int ji[R], ou[R];
//  int main()
//  {
//  	int n, m, q, x, y, l;
//  	int from, len, to;
//  	register int i, j;
//  	cin >> n >> m >> q;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	memset(ji, 0X3F, sizeof(ji));
//  	memset(ou, 0X3F, sizeof(ou));
//  	queue<Node> que;
//  	// que.push({1, 0});
//  	// ou[1] = 0;
//	//����ǹٷ���������������дҲ���ԣ����������������ݾͻ���Ϊ��û���ǵ�����ͨͼ��WAһ����
//  	for (i = 0; i < a[1].size(); ++i)
//  	{
//  		ji[a[1][i]] = 1;
//  		que.push({a[1][i], 1});
//  	}
//  	while (!que.empty()) //BFS
//  	{
//  		from = que.front().num;
//  		len = que.front().len;
//  		for (j = 0; j < a[from].size(); ++j)
//  		{
//  			to = a[from][j];
//  			if (len % 2 == 1)
//  			{
//  				if (len + 1 < ou[to])
//  				{
//  					ou[to] = len + 1;
//  					que.push({to, len + 1});
//  				}
//  			}
//  			else
//  			{
//  				if (len + 1 < ji[to])
//  				{
//  					ji[to] = len + 1;
//  					que.push({to, len + 1});
//  				}
//  			}
//  		}
//  		que.pop();
//  	}
//  	for (j = 1; j <= q; ++j)
//  	{
//  		cin >> x >> l;
//  		if (l % 2 == 1)
//  		{
//  			if (l >= ji[x])
//  			{
//  				cout << "Yes\n";
//  			}
//  			else
//  			{
//  				cout << "No\n";
//  			}
//  		}
//  		else
//  		{
//  			if (l >= ou[x])
//  			{
//  				cout << "Yes\n";
//  			}
//  			else
//  			{
//  				cout << "No\n";
//  			}
//  		}
//  	}
//  	return 0;
//  }

// P1064
//  struct
//  {
//  	int w, v, w1, v1, w2, v2;
//  } a[70];
//  int dp[32010];
//  int main()
//  {
//  	int c, m, w, p, q;
//  	cin >> c >> m;
//  	register int i, j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> w >> p >> q;
//  		if (q == 0)
//  		{
//  			a[j].w = w;
//  			a[j].v = w * p;
//  		}
//  		else
//  		{
//  			if (!a[q].v1)
//  			{
//  				a[q].w1 = w;
//  				a[q].v1 = w * p;
//  			}
//  			else
//  			{
//  				a[q].w2 = w;
//  				a[q].v2 = w * p;
//  			}
//  		}
//  	}
//  	for (i = 1; i <= m; ++i)
//  	{
//  		if (a[i].w)
//  		{
//  			for (j = c; j >= a[i].w; --j)
//  			{
//  				//ֻѡ����
//  				dp[j] = max(dp[j], dp[j - a[i].w] + a[i].v);
//  				//ѡ����������1
//  				if (j >= a[i].w + a[i].w1) //Ҫ�ӡ�=���������WA
//  				{
//  					dp[j] = max(dp[j],
//  								dp[j - a[i].w - a[i].w1] +
//  									a[i].v + a[i].v1);
//  				}
//  				//ѡ����������2
//  				if (j >= a[i].w + a[i].w2)
//  				{
//  					dp[j] = max(dp[j],
//  								dp[j - a[i].w - a[i].w2] +
//  									a[i].v + a[i].v2);
//  				}
//  				//ѡ����������1��2
//  				if (j >= a[i].w + a[i].w1 + a[i].w2)
//  				{
//  					dp[j] = max(dp[j],
//  								dp[j - a[i].w - a[i].w1 - a[i].w2] +
//  									a[i].v + a[i].v1 + a[i].v2);
//  				}
//  			}
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// ��P1417_������Ʒ����_�������ŷ�������ķ��ö���
//  /*
//  ����kkksc03��https://www.luogu.com.cn/blog/wjfff/pai-xu-bei-bao����⣺
//  �����tʱ����ɣ�ע�⣬����ɣ�
//  ���Ѿ���ɵ�ʱ��Ϊt_pre
//  ����̰�ĵ�˼�룬���������ڵ���ƷΪx��y����ô��ǰ����Ʒʱ����ʧ��С
//  ��v1Ϊx����yǰ��ʱ��x��y���ܼ�ֵ
//  v2Ϊy����xǰ��ʱ��x��y���ܼ�ֵ
//  �����г����漸����ʾ��ֵ��ʽ�ӣ�
//  v1 = a[x] - (t_pre + c[x]) * b[x] +
//  	 a[y] - (t_pre + c[x] + c[y]) * b[y]
//  v2 = a[y] - (t_pre + c[y]) * b[y] +
//  	 a[x] - (t_pre + c[y] + c[x]) * b[x]
//  �����ȼٶ��õ�һ�ַ�ʽ�ɻ�ȡ�ļ�ֵ�󣬼�v1>v2��ͨ����������֪����
//  �ⲻ��ʽ��֪��ʱ��
//  b[x] * c[y] > b[y] * c[x]
//  ���԰������ַ������򣬿��Ա�֤ȡ�����ֵ��Ȼ��Ϳ�����01������
//  */
//  struct Node
//  {
//  	int a, b, c;
//  	/*
//  	����ҲҪ��longlong����Ȼÿ������������ʱ���ᳬ��1e5
//  	�����ڽ���״̬ת�Ʒ���ʱ�����int��a[i].a - j * a[i].b�ͻᱻת����int����Ľ��Ҳ�ͻ���int����longlong
//  	*/
//  } a[60];
//  bool cmp(Node x, Node y)
//  {
//  	return x.b * y.c > y.b * x.c;
//  }
//  long long dp[100010];
//  int main()
//  {
//  	int t, n;
//  	long long ans = 0;
//  	cin >> t >> n;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j].a;
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j].b;
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j].c;
//  	}
//  	sort(a + 1, a + n + 1, cmp);
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = t; j >= a[i].c; --j)
//  		{
//  			dp[j] = max(dp[j], dp[j - a[i].c] + (a[i].a - j * a[i].b));
//  		}
//  	}
//  	for (j = 1; j <= t; ++j)
//  	{
//  		ans = max(ans, dp[j]);
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P3366
//  int fa[5010];
//  struct Node
//  {
//  	int x, y, len;
//  	bool operator<(const Node &a) const
//  	{
//  		return len < a.len;
//  	}
//  } a[200010];
//  int find(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		return x;
//  	}
//  	else
//  	{
//  		fa[x] = find(fa[x]);
//  		return fa[x];
//  	}
//  }
//  int main()
//  {
//  	int n, m, edge = 0;
//  	cin >> n >> m;
//  	register int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		fa[i] = i;
//  	}
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> a[j].x >> a[j].y >> a[j].len;
//  	}
//  	sort(a + 1, a + m + 1);
//  	long long ans = 0;
//  	int fx, fy;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		fx = find(a[i].x);
//  		fy = find(a[i].y);
//  		if (fx != fy)
//  		{
//  			fa[fy] = fx;
//  			ans += a[i].len;
//  			++edge;
//  		}
//  	}
//  	if (edge == n - 1)
//  	{
//  		cout << ans;
//  	}
//  	else
//  	{
//  		cout << "orz";
//  	}
//  	return 0;
//  }

// ��P5662
//  long long dp[10010];
//  int price[110][110];
//  int main()
//  {
//  	int t, n;
//  	long long m;
//  	cin >> t >> n >> m;
//  	if (t == 1)
//  	{
//  		cout << m;
//  		return 0;
//  	}
//  	register int i, j, k;
//  	for (i = 1; i <= t; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			cin >> price[i][j]; //��i���j����Ʒ�ļ۸�
//  		}
//  	}
//  	for (i = 1; i < t; ++i)
//  	{
//  		memset(dp, 0, sizeof(dp));
//  		for (j = 1; j <= n; ++j)
//  		{
//  			for (k = price[i][j]; k <= m; ++k)
//  			{
//  				dp[k] = max(dp[k], dp[k - price[i][j]] + price[i + 1][j] - price[i][j]);
//  				//��Ϊ������i+1��������ѭ��1~t-1����1~t
//  				// i+1�ĺ���ο���https://www.luogu.com.cn/blog/fxltsblxssxyby/solution-p5662
//  				// dp����ǵ��ǵ�Ǯ��Ϊkʱ����������
//  			}
//  		}
//  		m = m + dp[m];
//  	}
//  	cout << m;
//  	return 0;
//  }

// P2437
//  int a[1000], b[1000], aans[1000];
//  string ans[3][1010];
//  string add(string x, string y)
//  {
//  	memset(a, 0, sizeof(a));
//  	memset(b, 0, sizeof(b));
//  	memset(aans, 0, sizeof(aans));
//  	string sans;
//  	int alen = x.size(), blen = y.size(), anslen = max(alen, blen);
//  	register int j;
//  	for (j = 1; j <= alen; ++j)
//  	{
//  		a[j] = x[alen - j] - '0';
//  	}
//  	for (j = 1; j <= blen; ++j)
//  	{
//  		b[j] = y[blen - j] - '0';
//  	}
//  	for (j = 1; j <= anslen; ++j)
//  	{
//  		aans[j] += a[j] + b[j];
//  		if (aans[j] >= 10)
//  		{
//  			aans[j + 1] += aans[j] / 10;
//  			aans[j] %= 10;
//  		}
//  	}
//  	if (aans[anslen + 1] != 0)
//  	{
//  		++anslen;
//  	}
//  	for (j = anslen; j >= 1; --j)
//  	{
//  		sans += aans[j] + '0';
//  	}
//  	return sans;
//  }
//  int main()
//  {
//  	register int i, j, k;
//  	int s, e, t;
//  	// init
//  	for (k = 0; k <= 1005; ++k)
//  	{
//  		ans[1][k] = ans[2][k] = "0";
//  	}
//  	cin >> s >> e;
//  	if (s == e)
//  	{
//  		cout << '0';
//  		return 0;
//  	}
//  	if (s % 2 == 1)
//  	{
//  		t = s / 2 + 1;
//  		ans[1][t] = "0";
//  		ans[1][t + 1] = "2";
//  		ans[2][t + 1] = "1";
//  		for (j = t + 2; j <= 1001; ++j)
//  		{
//  			ans[2][j] = add(ans[1][j - 1], ans[2][j - 1]);
//  			ans[1][j] = add(ans[1][j - 1], ans[2][j]);
//  		}
//  	}
//  	else
//  	{
//  		t = s / 2 + 1;
//  		ans[2][t] = "0";
//  		ans[1][t] = "1";
//  		ans[2][t + 1] = "2";
//  		for (j = t + 1; j <= 1001; ++j)
//  		{ //��д��yi�У���д��er��
//  			ans[1][j] = add(ans[1][j - 1], ans[2][j]);
//  			ans[2][j + 1] = add(ans[1][j], ans[2][j]);
//  		}
//  	}
//  	if (e % 2 == 1)
//  	{
//  		cout << ans[1][e / 2 + 1];
//  	}
//  	else
//  	{
//  		cout << ans[2][e / 2 + 1];
//  	}
//  	return 0;
//  }

// P1886_��������
//  int a[1000010];
//  int main()
//  {
//  	int n, k;
//  	scanf("%d%d", &n, &k);
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		scanf("%d", &a[j]);
//  	}
//  	deque<int> q;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (!q.empty() && q.front() < j - k + 1)
//  		{
//  			q.pop_front();
//  		}
//  		while (!q.empty() && a[j] <= a[q.back()]) //����д��!(a[j]>a[q.back()])
//  		{
//  			q.pop_back();
//  		}
//  		q.push_back(j);
//  		if (j - k >= 0)
//  		{
//  			printf("%d ", a[q.front()]);
//  		}
//  	}
//  	printf("\n");
//  	q.clear();
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (!q.empty() && q.front() < j - k + 1)
//  		{
//  			q.pop_front();
//  		}
//  		while (!q.empty() && a[j] >= a[q.back()]) //����д��!(a[j]<a[q.back()])
//  		{
//  			q.pop_back();
//  		}
//  		q.push_back(j);
//  		if (j - k >= 0)
//  		{
//  			printf("%d ", a[q.front()]);
//  		}
//  	}
//  	return 0;
//  }

// P2032_��Ҫ��short��
//  int a[2000010];
//  int main()
//  {
//  	int n, k;
//  	scanf("%d%d", &n, &k);
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		scanf("%d", &a[j]);
//  	}
//  	deque<int> q;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (!q.empty() && q.front() < j - k + 1)
//  			q.pop_front();
//  		while (!q.empty() && !(a[j] < a[q.back()]))
//  			q.pop_back();
//  		q.push_back(j);
//  		if (j - k >= 0)
//  			printf("%d\n", a[q.front()]);
//  	}
//  	return 0;
//  }

// P4961
// /*���֣���Χ�˸��С��ס��������ǡ��ס��ķ���
// �ո���Χ�˸�û�С��ס��������ǡ��ס��ķ���
// һ���գ�����Χ�˸�û�С��ס��������ǡ��ס��ķ�����ɵ���ͨ��
// //һ���գ��ɡ��ո���ɵİ���ͨ��
// 3bv=__��Χ�˸�û�С��ո񡱵�__�����֡�����+����"�ĸ���*/
// const int R = 1010;
// struct Node
// {
// 	int x, y;
// };
// bool a[R][R], vis[R][R];
// char c[R][R]; // k=�գ�n=���֣�l=��(���������жϣ���a[][]���ж�)
// int xx[9] = {0, 0, 1, 1, 1, 0, -1, -1, -1},
// 	yy[9] = {0, 1, 1, 0, -1, -1, -1, 0, 1};
// int main()
// {
// 	int n, m, x, y, tx, ty, num = 0, kong = 0;
// 	register int i, j, k;
// 	bool b;
// 	cin >> n >> m;
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			cin >> a[i][j];
// 			if (a[i][j] == 1)
// 			{
// 				c[i][j] = 'l';
// 			}
// 			else
// 			{
// 				c[i][j] = ' ';
// 			}
// 		}
// 	}
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			if (!a[i][j])
// 			{
// 				for (k = 1; k <= 8; ++k)
// 				{
// 					tx = i + xx[k];
// 					ty = j + yy[k];
// 					if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
// 						a[tx][ty])
// 					{
// 						c[i][j] = 'n';
// 						break;
// 					}
// 				}
// 			}
// 		}
// 	}
// 	queue<Node> q; //ͳ�ƿյĸ���ʱ�ù���
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			if (c[i][j] == ' ')
// 			{
// 				++kong;
// 				c[i][j] = 'k';
// 				vis[i][j] = true;
// 				q.push({i, j});
// 				while (!q.empty())
// 				{
// 					x = q.front().x;
// 					y = q.front().y;
// 					for (k = 1; k <= 8; ++k)
// 					{
// 						tx = x + xx[k];
// 						ty = y + yy[k];
// 						if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
// 							!vis[tx][ty] && c[tx][ty] == ' ')
// 						{
// 							vis[tx][ty] = true;
// 							c[tx][ty] = 'k';
// 							q.push({tx, ty});
// 						}
// 					}
// 					q.pop();
// 				}
// 			}
// 		}
// 	}
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			if (c[i][j] == 'n')
// 			{
// 				b = false;
// 				for (k = 1; k <= 8; ++k)
// 				{
// 					tx = i + xx[k];
// 					ty = j + yy[k];
// 					if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
// 						c[tx][ty] == 'k')
// 					{
// 						b = true;
// 						break;
// 					}
// 				}
// 				if (!b)
// 				{
// 					++num;
// 					// cout << i << ' ' << j << endl;
// 				}
// 			}
// 		}
// 	}
// 	cout << num + kong;
// 	return 0;
// }

// P1460
//  int need[30], a[20][30], sum[30], ans[30], t[30],
//  	ansx = 100;
//  int v, n;
//  bool b[30];
//  bool check(int tot)
//  {
//  	memset(sum, 0, sizeof(sum));
//  	register int i, j;
//  	for (i = 1; i <= tot; ++i)
//  	{
//  		for (j = 1; j <= v; ++j)
//  		{
//  			sum[j] = sum[j] + a[t[i]][j];
//  		}
//  	}
//  	for (j = 1; j <= v; ++j)
//  	{
//  		if (sum[j] < need[j])
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  void dfs(int tot)
//  {
//  	if (tot > ansx || tot > n)
//  	{
//  		return;
//  	}
//  	if (check(tot))
//  	{
//  		if (tot < ansx)
//  		{
//  			ansx = tot;
//  			register int j;
//  			for (j = 1; j <= tot; ++j)
//  			{
//  				ans[j] = t[j];
//  			}
//  		}
//  	}
//  	else
//  	{
//  		int start = t[tot];
//  		for (register int j = start; j <= n; ++j)
//  		{
//  			if (!b[j])
//  			{
//  				b[j] = true;
//  				t[tot + 1] = j; //����һ��+1�����ǵ�ǰ��һ��
//  				dfs(tot + 1);
//  				t[tot + 1] = 0;
//  				b[j] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> v;
//  	register int i, j;
//  	for (j = 1; j <= v; ++j)
//  	{
//  		cin >> need[j];
//  	}
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= v; ++j)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	dfs(0);
//  	cout << ansx;
//  	for (j = 1; j <= ansx; ++j)
//  	{
//  		cout << ' ' << ans[j];
//  	}
//  	return 0;
//  }

// P1025
//  int a[10];
//  int ans, n, k;
//  void dfs(int step, int sum)
//  {
//  	if (step == k + 1)
//  	{
//  		if (sum == n)
//  		{
//  			++ans;
//  			// for (register int j = 1; j <= k; ++j)
//  			// {
//  			// 	cout << a[j] << ' ';
//  			// }
//  			// cout << endl;
//  		}
//  	}
//  	else
//  	{
//  		int t = n - sum;
//  		for (register int j = a[step - 1]; j <= t; ++j)
//  		{
//  			if (j == 0)
//  			{
//  				continue;
//  			}
//  			a[step] = j;
//  			sum = sum + j;
//  			dfs(step + 1, sum);
//  			sum = sum - j;
//  			a[step] = 0;
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> k;
//  	dfs(1, 0);
//  	cout << ans;
//  	return 0;
//  }

// P5638
// using ll = unsigned long long;
// const int R = 1000010;
// ll a[R];
// inline ll _max(ll x, ll y)
// {
// 	if (x > y)
// 	{
// 		return x;
// 	}
// 	return y;
// }
// int main()
// {
// 	ll n, k, t, j;
// 	ll skip = 0;
// 	cin >> n >> k;
// 	t = n - 1;
// 	for (j = 2; j <= n; ++j)
// 	{
// 		cin >> t;
// 		a[j] = t + a[j - 1];
// 	}
// 	for (j = k + 1; j <= n; ++j)
// 	{
// 		skip = _max(skip, a[j] - a[j - k]);
// 	}
// 	cout << a[n] - skip;
// 	return 0;
// }

// ��P1731
//  int ans = INT_MAX, n, m, s;
//  int minsce[20], minv[20];
//  void dfs(int lr, int lh, int s, int v, int floor)
//  {
//  	if (floor == 0)
//  	{
//  		if (v == n)
//  		{
//  			ans = min(ans, s);
//  		}
//  		return;
//  	}
//  	if (v + minv[floor] > n) //������
//  	{
//  		return;
//  	}
//  	if (s + minsce[floor] > ans || s + 2 * (n - v) / lr > ans) //������
//   //�ڶ�����֦��ͨ�������֪v=r*r*h��s=2*r*h
//  	//��vһ��ʱ��r��һ�㣬r*r�ͻ��ܶ࣬��Ҫv����h��Ҫ��ܶࣻ
//  	//����s=2*r*h�У�r����һ�㣬����hС�˺ܶ࣬�ۺ���������sС�˺ܶ�
//  	{
//  		return;
//  	}
//  	register int r, h;
//  	for (r = lr - 1; r >= floor; --r)
//  	{
//  		if (floor == m)
//  		{
//  			s = r * r;
//  		}
//  		int maxh = min(lh - 1, (n - v - minv[floor - 1]) / (r * r));
//  		for (h = maxh; h >= floor; --h)
//  		{
//  			dfs(r, h, s + 2 * r * h, v + r * r * h, floor - 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> m;
//  	for (register int j = 1; j <= m; ++j)
//  	{
//  		minsce[j] = 2 * j * j;
//  		minv[j] = j * j * j;
//  		minsce[j] += minsce[j - 1];
//  		minv[j] += minv[j - 1];
//  	}
//  	dfs(sqrt(n), n, 0, 0, m); //�Ӵ���С�ѣ�����������
//  	//���²�Ϊm�����ϲ�Ϊ1
//  	if (ans == INT_MAX)
//  	{
//  		cout << '0';
//  	}
//  	else
//  	{
//  		cout << ans;
//  	}
//  	return 0;
//  }

// P1656
//  const int R = 160;
//  vector<int> a[R];
//  int cnt, dfn[R], low[R];
//  int ansc;
//  pair<int, int> ans[1510];
//  void tarjan(int x, int fa)
//  {
//  	++cnt;
//  	dfn[x] = low[x] = cnt;
//  	int to;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		to = a[x][j];
//  		if (to == fa)
//  		{
//  			continue;
//  		}
//  		if (!dfn[to])
//  		{
//  			tarjan(to, x);
//  			low[x] = min(low[x], low[to]);
//  			if (low[to] > dfn[x])
//  			{
//  				++ansc;
//  				if (x > to)
//  				{
//  					ans[ansc] = {to, x};
//  				}
//  				else
//  				{
//  					ans[ansc] = {x, to};
//  				}
//  			}
//  		}
//  		else
//  		{
//  			low[x] = min(low[x], dfn[to]); //���µ���x�ܹ����ʵ������ʱ���
//  		}
//  	}
//  }
//  bool cmp(pair<int, int> x, pair<int, int> y)
//  {
//  	if (x.first == y.first)
//  	{
//  		return x.second < y.second;
//  	}
//  	else
//  	{
//  		return x.first < y.first;
//  	}
//  }
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	register int j;
//  	int x, y;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	tarjan(1, 0);
//  	sort(ans + 1, ans + ansc + 1, cmp);
//  	for (j = 1; j <= ansc; ++j)
//  	{
//  		cout << ans[j].first << ' ' << ans[j].second << "\n";
//  	}
//  	return 0;
//  }

// P1030
//  string a, b;
//  void dfs(int l1, int r1, int l2, int r2)
//  {
//  	int mid = a.find(b[r2]);
//  	cout << b[r2];
//  	if (mid > l1)
//  	{
//  		dfs(l1, mid - 1, l2, l2 + mid - l1 - 1);
//  	}
//  	if (mid < r1)
//  	{
//  		dfs(mid + 1, r1, r2 - r1 + mid, r2 - 1);
//  	}
//  }
//  int main()
//  {
//  	cin >> a >> b;
//  	dfs(0, a.size() - 1, 0, b.size() - 1);
//  	return 0;
//  }

// P1775
//  const int R = 1010;
//  int dp[R][R];
//  int main()
//  {
//  	int n;
//  	int a[R] = {0}, sum[R] = {0};
//  	cin >> n;
//  	memset(dp, 0x3f, sizeof(dp));
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  		sum[j] = sum[j - 1] + a[j];
//  		dp[j][j] = 0;
//  	}
//  	int left, r, len, cut;
//  	for (len = 2; len <= n; ++len)
//  	{
//  		for (left = 1; left <= n - len + 1; ++left)
//  		{
//  			r = left + len - 1;
//  			for (cut = left; cut < r; ++cut)
//  			{
//  				dp[left][r] = min(dp[left][r],
//  								  dp[left][cut] + dp[cut + 1][r] + sum[r] - sum[left - 1]);
//  			}
//  		}
//  	}
//  	cout << dp[1][n];
//  	return 0;
//  }

// P1880
//  const int R = 810;
//  int mindp[R][R], maxdp[R][R], sum[R] = {0};
//  int main()
//  {
//  	int n, n2;
//  	cin >> n;
//  	n2 = n << 1;
//  	memset(mindp, 0x3f, sizeof(mindp));
//  	memset(maxdp, -0x3f, sizeof(maxdp));
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> sum[j];
//  		sum[j + n] = sum[j];
//  	}
//  	for (j = 1; j <= n2; ++j)
//  	{
//  		sum[j] += sum[j - 1];
//  		mindp[j][j] = maxdp[j][j] = 0;
//  	}
//  	register int len, left, right, cut;
//  	for (len = 2; len <= n; ++len)
//  	{
//  		for (left = 1; left <= n2 - len + 1; ++left)
//  		{
//  			right = left + len - 1;
//  			for (cut = left; cut < right; ++cut)
//  			{
//  				mindp[left][right] = min(mindp[left][right],
//  										 mindp[left][cut] + mindp[cut + 1][right] + sum[right] - sum[left - 1]);
//  				maxdp[left][right] = max(maxdp[left][right],
//  										 maxdp[left][cut] + maxdp[cut + 1][right] + sum[right] - sum[left - 1]);
//  			}
//  		}
//  	}
//  	int QWQ = INT_MAX, QAQ = INT_MIN;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		QWQ = min(QWQ, mindp[j][j + n - 1]);
//  		QAQ = max(QAQ, maxdp[j][j + n - 1]);
//  	}
//  	cout << QWQ << "\n"
//  		 << QAQ;
//  	return 0;
//  }

// ��P1028_���仯����
//   int num[1010];
//   int fun(int x)
//   {
//   	if (num[x])
//   	{
//   		return num[x];
//   	}
//   	else
//   	{
//   		int mid = x >> 1;
//   		for (int j = 1; j <= mid; ++j)
//   		{
//   			num[x] += fun(j);
//   		}
//   		num[x] += 1; //���ֱ���ҲҪ����
//   		return num[x];
//   	}
//   }
//   int main()
//   {
//   	int n;
//   	cin >> n;
//   	num[0] = num[1] = 1;
//   	fun(n);
//   	cout << num[n];
//   	return 0;
//   }

// P3370
//  using ull = unsigned long long;
//  const int R = 1E5 + 10, B = 131;
//  char s[1510];
//  ull a[R], h[1510], b[1510];
//  ull ha(int len)
//  {
//  	for (register int j = 1; j <= len; ++j)
//  	{
//  		h[j] = h[j - 1] * B + s[j];
//  	}
//  	return h[len];
//  }
//  int main()
//  {
//  	int n;
//  	scanf("%d", &n);
//  	register int j;
//  	b[0] = 1;
//  	for (j = 1; j <= 1500; ++j)
//  	{
//  		b[j] = b[j - 1] * B;
//  	}
//  	int len;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		scanf("%s", s + 1);
//  		len = strlen(s + 1);
//  		a[j] = ha(len);
//  	}
//  	sort(a + 1, a + n + 1);
//  	int ans = 0;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (a[j] != a[j + 1])
//  		{
//  			++ans;
//  		}
//  	}
//  	printf("%d", ans);
//  	return 0;
//  }

// P3375
//  const int R = 1e6 + 10;
//  char a[R], b[R];
//  int pre[R];
//  int main()
//  {
//  	scanf("%s%s", a + 1, b + 1);
//  	register int i, j;
//  	int lena = strlen(a + 1), lenb = strlen(b + 1);
//  	for (i = 1, j = 0; i < lenb; ++i)
//  	{
//  		while (j && b[i + 1] != b[j + 1])
//  		{
//  			j = pre[j];
//  		}
//  		if (b[i + 1] == b[j + 1])
//  		{
//  			++j;
//  		}
//  		pre[i + 1] = j;
//  	}
//  	for (i = j = 0; i < lena; ++i)
//  	{
//  		while (j && a[i + 1] != b[j + 1])
//  		{
//  			j = pre[j];
//  		}
//  		if (a[i + 1] == b[j + 1])
//  		{
//  			++j;
//  		}
//  		if (j == lenb)
//  		{
//  			printf("%d\n", (i + 1) - lenb + 1);
//  		}
//  	}
//  	for (j = 1; j <= lenb; ++j)
//  	{
//  		printf("%d ", pre[j]);
//  	}
//  	return 0;
//  }

// P4391
//  const int R = 1e6 + 10;
//  char s[R];
//  int pre[R] = {0};
//  int main()
//  {
//  	int n;
//  	scanf("%d", &n);
//  	scanf("%s", s + 1);
//  	register int i, j;
//  	int len = strlen(s + 1);
//  	for (i = 1, j = 0; i < len; ++i)
//  	{
//  		while (j && s[i + 1] != s[j + 1])
//  		{
//  			j = pre[j];
//  		}
//  		if (s[i + 1] == s[j + 1])
//  		{
//  			++j;
//  		}
//  		pre[i + 1] = j;
//  	}
//  	printf("%d", n - pre[n]);
//  	return 0;
//  }

// UVA10298
//  const int R = 1e6 + 10;
//  char s[R];
//  int pre[R];
//  int main()
//  { /*
//   pre[len]=(k-1)*len(p)
//   len(p)=len(s)-pre[len(s)]
//   k=len(s)/(len(s)-pre[len])
//   */
//  	register int i, j;
//  	int len;
//  	while (scanf("%s", s + 1))
//  	{
//  		if (s[1] == '.')
//  			break;
//  		len = strlen(s + 1);
//  		for (i = 1, j = 0; i < len; ++i)
//  		{
//  			while (j && s[i + 1] != s[j + 1])
//  				j = pre[j];
//  			if (s[i + 1] == s[j + 1])
//  				++j;
//  			pre[i + 1] = j;
//  		}
//  		if (len % (len - pre[len]) == 0) //���ܻ���abcab�������������������ȡ��Ϊ1������Ҫ�ж��ܷ�����
//  			printf("%d\n", len / (len - pre[len]));
//  		else
//  			printf("1\n");
//  	}
//  	return 0;
//  }

// P2580_ʹ��Trie��
// const int R = 5e5 + 10;
// int ch[R][30], cnt[R], tot;
// char s[55];
// void add()
// {
// 	int p = 0, x;
// 	for (register int j = 1; s[j]; ++j)
// 	{
// 		x = s[j] - 'a';
// 		if (!ch[p][x])
// 		{
// 			++tot;
// 			ch[p][x] = tot;
// 		}
// 		p = ch[p][x];
// 	}
// 	cnt[p] = 1;
// }
// string find()
// {
// 	int p = 0, x;
// 	for (register int j = 1; s[j]; ++j)
// 	{
// 		x = s[j] - 'a';
// 		if (!ch[p][x])
// 		{
// 			return "WRONG";
// 		}
// 		p = ch[p][x];
// 	}
// 	if (cnt[p] == 1) //��û�����
// 	{
// 		cnt[p] = 2;
// 		return "OK";
// 	}
// 	else
// 	{
// 		return "REPEAT";
// 	}
// }
// int main()
// {
// 	int n, m;
// 	cin >> n;
// 	while (n--)
// 	{
// 		cin >> (s + 1);
// 		add();
// 	}
// 	cin >> m;
// 	while (m--)
// 	{
// 		cin >> (s + 1);
// 		cout << find() << "\n";
// 	}
// 	return 0;
// }

// ��P3808_AC�Զ���ģ����
//  const int N = 1e6 + 10;
//  class AC
//  {
//  private:
//  	int ch[N][27], cnt[N],
//  		pre[N], tot = 0;
//  	char s[N];
//  public:
//  	void add()
//  	{
//  		int x, p = 0;
//  		for (register int j = 0; s[j]; ++j)
//  		{
//  			x = s[j] - 'a';
//  			if (!ch[p][x])
//  			{
//  				++tot;
//  				ch[p][x] = tot;
//  			}
//  			p = ch[p][x];
//  		}
//  		++cnt[p];
//  	}
//  	void input(int n)
//  	{
//  		for (register int j = 1; j <= n; ++j)
//  		{
//  			cin >> s;
//  			add();
//  		}
//  	}
//  	void bfs()
//  	{
//  		queue<int> q;
//  		register int i, j;
//  		for (i = 0; i < 26; ++i)
//  		{
//  			if (ch[0][i])
//  			{
//  				q.push(ch[0][i]);
//  			}
//  		}
//  		int from, to;
//  		while (!q.empty())
//  		{
//  			from = q.front();
//  			for (i = 0; i < 26; ++i)
//  			{
//  				to = ch[from][i];
//  				if (to)
//  				{
//  					pre[to] = ch[pre[from]][i];
//  					q.push(to);
//  				}
//  				else
//  				{
//  					ch[from][i] = ch[pre[from]][i];
//  				}
//  			}
//  			q.pop();
//  		}
//  	}
//  	void inputar()
//  	{
//  		cin >> s;
//  	}
//  	int solve() //�����󷨲�̫һ��
//  	{
//  		int res = 0, x;
//  		for (register int i = 0, j = 0; s[i]; ++i) //i,j�ֱ�����s[]�ı����Ͷ�trie�ı���
//  		{
//  			x = s[i] - 'a';
//  			while (!ch[j][x])
//  			{
//  				j = pre[j];
//  			}
//  			j = ch[j][x];
//  			res += cnt[j];
//  			cnt[j] = 0;
//  		}
//  		return res;
//  	}
//  } ac;
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	ac.input(n);
//  	ac.inputar();
//  	ac.bfs();
//  	cout << ac.solve();
//  	return 0;
//  }

// P3374
//  const int R = 5e5 + 10;
//  int a[R];
//  int lowbit(int x) { return x & -x; }
//  void add(int x, int k, int n)
//  {
//  	for (register int j = x; j <= n; j += lowbit(j))
//  		a[j] += k;
//  }
//  int query(int x)
//  {
//  	int res = 0;
//  	for (register int j = x; j > 0; j -= lowbit(j))
//  		res += a[j];
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, x, y;
//  	char t;
//  	register int j;
//  	cin >> n >> m;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		add(j, x, n);
//  	}
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> t >> x >> y;
//  		if (t == '1')
//  			add(x, y, n);
//  		else
//  			cout << query(y) - query(x - 1) << "\n";
//  	}
//  	return 0;
//  }

// P3368
//  using ll = long long;
//  const int N = 5e5 + 10;
//  ll a[N];
//  int n;
//  int lowbit(int x)
//  {
//  	return x & -x;
//  }
//  void add(int p, int x)
//  {
//  	for (register int j = p; j <= n; j += lowbit(j))
//  	{
//  		a[j] += x;
//  	}
//  }
//  ll query(int x)
//  {
//  	ll res = 0;
//  	for (register int j = x; j > 0; j -= lowbit(j))
//  	{
//  		res += a[j];
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int x, m, last = 0;
//  	cin >> n >> m;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		add(j, x - last);
//  		last = x;
//  	}
//  	char t;
//  	int l, r, k;
//  	for (register int j = 1; j <= m; ++j)
//  	{
//  		cin >> t;
//  		if (t == '1')
//  		{
//  			cin >> l >> r >> k;
//  			add(l, k);
//  			add(r + 1, -k);
//  		}
//  		else
//  		{
//  			cin >> x;
//  			cout << query(x) << "\n";
//  		}
//  	}
//  	return 0;
//  }

// ���P3372
// ���棺�߶���
//   using ll = long long;
//   const int R = 1e5 + 10;
//   ll a[R], sum[R << 2], add[R << 2];
//   void build(int k, int l, int r)
//   {
//   	if (l == r)
//   	{
//   		sum[k] = a[l];
//   		return;
//   	}
//   	int mid = l + r >> 1;
//   	build(k << 1, l, mid);
//   	build(k << 1 | 1, mid + 1, r);
//   	sum[k] = sum[k << 1] + sum[k << 1 | 1];
//   }
//   void change(int k, int l, int r, int v)
//   {
//   	sum[k] += ll(v * (r - l + 1));
//   	add[k] += v;
//   }
//   void pushdown(int k, int l, int r)
//   {
//   	if (add[k])
//   	{
//   		int mid = l + r >> 1;
//   		change(k << 1, l, mid, add[k]);
//   		change(k << 1 | 1, mid + 1, r, add[k]);
//   		add[k] = 0;
//   	}
//   }
//   void update(int k, int l, int r, int x, int y, int v)
//   {
//   	if (l >= x && r <= y)
//   	{
//   		change(k, l, r, v);
//   		return;
//   	}
//   	pushdown(k, l, r);
//   	int mid = l + r >> 1;
//   	if (x <= mid)
//   	{
//   		update(k << 1, l, mid, x, y, v);
//   	}
//   	if (y > mid)
//   	{
//   		update(k << 1 | 1, mid + 1, r, x, y, v);
//   	}
//   	sum[k] = sum[k << 1] + sum[k << 1 | 1];
//   }
//   ll query(int k, int l, int r, int x, int y)
//   {
//   	if (l >= x && r <= y)
//   	{
//   		return sum[k];
//   	}
//   	pushdown(k, l, r); //���ﲻҪ����pushdown�������·�
//   	ll res = 0;
//   	int mid = l + r >> 1;
//   	if (x <= mid)
//   	{
//   		res += query(k << 1, l, mid, x, y);
//   	}
//   	if (y > mid)
//   	{
//   		res += query(k << 1 | 1, mid + 1, r, x, y);
//   	}
//   	return res;
//   }
//   int main()
//   {
//   	int n, m, x, y, k;
//   	cin >> n >> m;
//   	register int j;
//   	for (j = 1; j <= n; ++j)
//   	{
//   		cin >> a[j];
//   	}
//   	build(1, 1, n);
//   	char c;
//   	for (j = 1; j <= m; ++j)
//   	{
//   		cin >> c >> x >> y;
//   		if (c == '1')
//   		{
//   			cin >> k;
//   			update(1, 1, n, x, y, k);
//   		}
//   		else
//   		{
//   			cout << query(1, 1, n, x, y) << "\n";
//   		}
//   	}
//   	return 0;
//   }
// �ǳ��棺ƽ����
//  using ll = long long;
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int l, r, size, tag;
//  	ll sum, key, val;
//  } tree[R];
//  int tot, root;
//  mt19937 rd;
//  int crt(ll val)
//  {
//  	tree[++tot].size = 1;
//  	tree[tot].key = rd();
//  	tree[tot].sum = tree[tot].val = val; // �������õ�
//  	return tot;
//  }
//  void pushdown(int k)
//  {
//  	if (tree[k].tag)
//  	{
//  		tree[k].sum += ll(tree[k].tag) * ll(tree[k].size);
//  		tree[k].val += tree[k].tag; // �����õ�
//  		if (tree[k].l)
//  			tree[tree[k].l].tag += tree[k].tag;
//  		if (tree[k].r)
//  			tree[tree[k].r].tag += tree[k].tag;
//  		tree[k].tag = 0;
//  	}
//  }
//  void pushup(int k)
//  {
//  	pushdown(tree[k].l);
//  	pushdown(tree[k].r);
//  	tree[k].size = tree[tree[k].l].size + tree[tree[k].r].size + 1;
//  	tree[k].sum = tree[tree[k].l].sum + tree[tree[k].r].sum + tree[k].val; // �����õ���Ҳ��������3����
//  }
//  void split(int k, int sz, int &x, int &y)
//  {
//  	if (k == 0)
//  	{
//  		x = y = 0;
//  		return;
//  	}
//  	pushdown(k);
//  	if (tree[tree[k].l].size + 1 <= sz)
//  	{
//  		x = k;
//  		split(tree[k].r, sz - (tree[tree[k].l].size + 1), tree[k].r, y);
//  	}
//  	else
//  	{
//  		y = k;
//  		split(tree[k].l, sz, x, tree[k].l);
//  	}
//  	pushup(k);
//  }
//  int merge(int x, int y)
//  {
//  	if (x == 0 || y == 0)
//  		return x + y;
//  	if (tree[x].key < tree[y].key)
//  	{
//  		pushdown(x);
//  		tree[x].r = merge(tree[x].r, y);
//  		pushup(x);
//  		return x;
//  	}
//  	else
//  	{
//  		pushdown(y);
//  		tree[y].l = merge(x, tree[y].l);
//  		pushup(y);
//  		return y;
//  	}
//  }
//  void update(int l, int r, int val)
//  {
//  	int x, y, z;
//  	split(root, l - 1, x, y);
//  	split(y, r - l + 1, y, z);
//  	tree[y].tag += val;
//  	root = merge(merge(x, y), z);
//  }
//  ll query(int l, int r)
//  {
//  	int x, y, z;
//  	split(root, l - 1, x, y);
//  	split(y, r - l + 1, y, z);
//  	pushdown(y);
//  	ll res = tree[y].sum;
//  	root = merge(merge(x, y), z);
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, x, y, k;
//  	char t;
//  	cin >> n >> m;
//  	int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		root = merge(root, crt(x));
//  	}
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> t;
//  		if (t == '1')
//  		{
//  			cin >> x >> y >> k;
//  			update(x, y, k);
//  		}
//  		else
//  		{
//  			cin >> x >> y;
//  			cout << query(x, y) << '\n';
//  		}
//  	}
//  	return 0;
//  }

// P1019
// #define reg register int
// string a[25];
// int d[25][25], f[25];
// int n, ans;
// void dfs(int p, int len)
// {
// 	ans = max(ans, len);
// 	++f[p];
// 	for (reg j = 1; j <= n; ++j)
// 	{
// 		if (f[j] < 2 && d[p][j])
// 		{
// 			dfs(j, len + a[j].size() - d[p][j]);
// 		}
// 	}
// 	--f[p];
// }
// int main()
// {
// 	cin >> n;
// 	reg i, j, k;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> a[j];
// 	}
// 	char s;
// 	cin >> s;
// 	int l1, l2, m;
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= n; ++j)
// 		{
// 			l1 = a[i].size();
// 			l2 = a[j].size();
// 			m = min(l1, l2);
// 			for (k = 1; k < m; ++k) //�����������ַ��������Բ���>=
// 			{
// 				if (a[i].substr(l1 - k) == a[j].substr(0, k))
// 				{
// 					d[i][j] = k;
// 					break;
// 				}
// 			}
// 		}
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		if (a[j][0] == s)
// 		{
// 			dfs(j, a[j].size()); //Ĭ�ϳ���Ϊ���ַ������ȣ���a[j].size()
// 		}
// 	}
// 	cout << ans;
// 	return 0;
// }

// P1120_66��
//  #define reg register int
//  const int R = 70;
//  int a[R], n, maxlen;
//  bool b[R];
//  inline bool cmp(int x, int y)
//  {
//  	return x > y;
//  }
//  bool dfs(int cnt, int sum, int p, int expect)
//  {
//  	if (cnt * expect == maxlen)
//  	{
//  		return true;
//  	}
//  	if (sum == expect)
//  	{
//  		return dfs(cnt + 1, 0, 1, expect);
//  	}
//  	else
//  	{
//  		int fail = 0;
//  		for (reg j = p; j <= n; ++j)
//  		{
//  			if (b[j] || a[j] + sum > expect || a[j] == fail)
//  			{
//  				continue;
//  			}
//  			b[j] = true;
//  			if (dfs(cnt, sum + a[j], p, expect)) //�ɹ�
//  			{
//  				return true;
//  			}
//  			else //ʧ��
//  			{
//  				b[j] = false;
//  				fail = a[j];
//  				if (sum == 0 || sum + a[j] == expect) //�����ǰ�ǵ�һ������ʧ�ܣ����ߵ�ǰ�����һ������ʧ�ܣ��򷽰�ʧ��
//  				{
//  					return false;
//  				}
//  			}
//  		}
//  	}
//  	return false; //����ɹ�����һ������֮ǰreturn true�����Ե��˽�βһ��ʧ��
//  }
//  int main()
//  {
//  	cin >> n;
//  	for (reg j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  		maxlen += a[j];
//  	}
//  	sort(a + 1, a + n + 1, cmp);
//  	reg len;
//  	for (len = a[1]; len <= maxlen; ++len)
//  	{
//  		if (!(maxlen % len) && dfs(0, 0, 1, len))
//  		{
//  			break;
//  		}
//  	}
//  	cout << len;
//  	return 0;
//  }

// ���P1253
// ʹ������ά��
//   #define ls k << 1
//   #define rs k << 1 | 1
//   #define MIN -1e14
//   using ll = long long;
//   const int R = 1e6 + 10;
//   ll ma[R << 3], rep[R << 3], add[R << 3]; //��Ҷ�ӽ����ܻ���ַ���Ҷ�ӽ����ӽ�㣬����Ч�ڴ��еĽ��
//  	int t[R];
//   inline void pushup(int k)
//   {
//   	ma[k] = max(ma[ls], ma[rs]);
//   }
//   inline void repdown(int k)
//   {
//   	if (rep[k] != MIN)
//   	{
//   		add[ls] = add[rs] = 0;
//   		rep[ls] = rep[rs] = rep[k];
//   		ma[ls] = ma[rs] = rep[k];
//   		rep[k] = MIN;
//   	}
//   }
//   inline void adddown(int k)
//   {
//   	if (add[k])
//   	{
//   		repdown(k);
//   		ma[ls] += add[k], ma[rs] += add[k];
//   		add[ls] += add[k], add[rs] += add[k];
//   		add[k] = 0;
//   	}
//   }
//   inline void pushdown(int k)
//   {
//   	repdown(k);
//   	adddown(k);
//   }
//   void build(int k, int l, int r)
//   {
//   	if (l == r)
//   	{
//   		ma[k] = t[l];
//   		return; //��Ҫ����return
//   	}
//   	int mid = l + r >> 1;
//   	build(ls, l, mid);
//   	build(rs, mid + 1, r);
//   	pushup(k);
//   }
//   void repupdate(int k, int l, int r, int x, int y, int v)
//   {
//   	if (l >= x && r <= y)
//   	{
//   		add[k] = 0;
//   		rep[k] = v;
//   		ma[k] = v;
//   		return;
//   	}
//   	pushdown(k);
//   	int mid = l + r >> 1;
//   	if (x <= mid)
//   	{
//   		repupdate(ls, l, mid, x, y, v);
//   	}
//   	if (y > mid)
//   	{
//   		repupdate(rs, mid + 1, r, x, y, v);
//   	}
//   	pushup(k);
//   }
//   void addupdate(int k, int l, int r, int x, int y, int v)
//   {
//   	if (l >= x && r <= y)
//   	{
//   		repdown(k);
//   		ma[k] += v;
//   		add[k] += v;
//   		return;
//   	}
//   	pushdown(k);
//   	int mid = l + r >> 1;
//   	if (x <= mid)
//   	{
//   		addupdate(ls, l, mid, x, y, v);
//   	}
//   	if (y > mid)
//   	{
//   		addupdate(rs, mid + 1, r, x, y, v);
//   	}
//   	pushup(k);
//   }
//   ll query(int k, int l, int r, int x, int y)
//   {
//   	if (l >= x && r <= y)
//   	{
//   		return ma[k];
//   	}
//   	pushdown(k);
//   	ll res = MIN;
//   	int mid = l + r >> 1;
//   	if (x <= mid)
//   	{
//   		res = max(res, query(ls, l, mid, x, y));
//   	}
//   	if (y > mid)
//   	{
//   		res = max(res, query(rs, mid + 1, r, x, y));
//   	}
//   	return res;
//   }
//   int main()
//   {
//   	int n, q;
//   	cin >> n >> q;
//   	register int j;
//   	for (j = 1; j <= n; ++j)
//   	{
//   		cin >> t[j];
//   	}
//   	build(1, 1, n);
//   	int t = n << 2;
//   	for (j = 1; j <= t; ++j)
//   	{
//   		rep[j] = MIN;
//   	}
//   	int x, y, k;
//   	char c;
//   	for (j = 1; j <= q; ++j)
//   	{
//   		cin >> c >> x >> y;
//   		if (c == '1')
//   		{
//   			cin >> k;
//   			repupdate(1, 1, n, x, y, k);
//   		}
//   		else if (c == '2')
//   		{
//   			cin >> k;
//   			addupdate(1, 1, n, x, y, k);
//   		}
//   		else
//   		{
//   			cout << query(1, 1, n, x, y) << "\n";
//   		}
//   	}
//   	return 0;
//   }
// ʹ�ýṹ��ά��_��Ҫ����buildʱ��Ҷ�ӽ�㸳ֵ
//   #define ls k << 1
//   #define rs k << 1 | 1
//   using ll = long long;
//   const int R = 1e6 + 10;
//   struct Node
//   {
//   	int l, r;
//   	ll ma, add, rep = LLONG_MIN; //���ܳ��ֽ������޸�Ϊ0�����
//   } a[R << 3]; //��Ҷ�ӽ����ܻ���ַ���Ҷ�ӽ����ӽ�㣬����Ч�ڴ��еĽ��
//   int t[R];
//   inline void pushup(int k)
//   {
//   	a[k].ma = max(a[ls].ma, a[rs].ma);
//   }
//   inline void repdown(int k)
//   {
//   	if (a[k].rep != LLONG_MIN)
//   	{
//   		a[ls].add = a[rs].add = 0;
//   		a[ls].rep = a[rs].rep = a[k].rep;
//   		a[ls].ma = a[rs].ma = a[k].rep;
//   		a[k].rep = LLONG_MIN;
//   	}
//   }
//   inline void adddown(int k)
//   {
//   	if (a[k].add)
//   	{
//   		repdown(k); //�ȸ�����ȥ
//   		a[ls].ma += a[k].add, a[rs].ma += a[k].add;
//   		a[ls].add += a[k].add, a[rs].add += a[k].add;
//   		a[k].add = 0;
//   	}
//   }
//   inline void pushdown(int k)
//   {
//   	repdown(k); //�ȸ�����ȥ
//   	adddown(k);
//   }
//   void build(int k, int l, int r)
//   {
//   	if (l == r)
//   	{
//   		a[k].l = l;
//   		a[k].r = r; //һ����Ҫ�����������Ҷ�ӽ������������丳ֵ��
//   		a[k].ma = t[l];
//   		return; //��Ҫ����return
//   	}
//   	a[k].l = l;
//   	a[k].r = r;
//   	int mid = l + r >> 1;
//   	build(ls, l, mid);
//   	build(rs, mid + 1, r);
//   	pushup(k);
//   }
//   void repupdate(int k, int x, int y, int v)
//   {
//   	if (a[k].l >= x && a[k].r <= y)
//   	{
//   		a[k].add = 0;
//   		a[k].rep = v;
//   		a[k].ma = v;
//   		return;
//   	}
//   	pushdown(k);
//   	int mid = a[k].l + a[k].r >> 1;
//   	if (x <= mid)
//   	{
//   		repupdate(ls, x, y, v);
//   	}
//   	if (y > mid)
//   	{
//   		repupdate(rs, x, y, v);
//   	}
//   	pushup(k);
//   }
//   void addupdate(int k, int x, int y, int v)
//   {
//   	if (a[k].l >= x && a[k].r <= y)
//   	{
//   		repdown(k);
//   		a[k].ma += v;
//   		a[k].add += v;
//   		return;
//   	}
//   	pushdown(k);
//   	int mid = a[k].l + a[k].r >> 1;
//   	if (x <= mid)
//   	{
//   		addupdate(ls, x, y, v);
//   	}
//   	if (y > mid)
//   	{
//   		addupdate(rs, x, y, v);
//   	}
//   	pushup(k);
//   }
//   ll query(int k, int x, int y)
//   {
//   	if (a[k].l >= x && a[k].r <= y)
//   	{
//   		return a[k].ma;
//   	}
//   	pushdown(k);
//   	ll res = LLONG_MIN;
//   	int mid = a[k].l + a[k].r >> 1;
//   	if (x <= mid)
//   	{
//   		res = max(res, query(ls, x, y));
//   	}
//   	if (y > mid)
//   	{
//   		res = max(res, query(rs, x, y));
//   	}
//   	return res;
//   }
//   int main()
//   {
//   	int n, q;
//   	cin >> n >> q;
//   	register int j;
//   	for (j = 1; j <= n; ++j)
//   	{
//   		cin >> t[j];
//   	}
//   	build(1, 1, n);
//   	int x, y, k;
//   	char c;
//   	for (j = 1; j <= q; ++j)
//   	{
//   		cin >> c >> x >> y;
//   		if (c == '1')
//   		{
//   			cin >> k;
//   			repupdate(1, x, y, k);
//   		}
//   		else if (c == '2')
//   		{
//   			cin >> k;
//   			addupdate(1, x, y, k);
//   		}
//   		else
//   		{
//   			cout << query(1, x, y) << "\n";
//   		}
//   	}
//   	return 0;
//   }

// P5057
//  const int R = 1e5 + 10;
//  int a[R];
//  int n;
//  inline int lowbit(int x)
//  {
//  	return x & -x;
//  }
//  inline void update(int x, int v)
//  {
//  	for (register int j = x; j <= n; j += lowbit(j))
//  	{
//  		a[j] += v;
//  	}
//  }
//  inline int query(int x)
//  {
//  	int res = 0;
//  	for (register int j = x; j > 0; j -= lowbit(j))
//  	{
//  		res += a[j];
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int m, x, y;
//  	char c;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> c;
//  		if (c == '1')
//  		{
//  			cin >> x >> y;
//  			update(x, 1); //������ʾȡ����ż����ʾ��ȡ��
//  			update(y + 1, -1);
//  		}
//  		else
//  		{
//  			cin >> x;
//  			cout << abs(query(x)) % 2 << "\n";
//  		}
//  	}
//  	return 0;
//  }

// P1434
//  #define reg register int
//  #define check(x, y) (x >= 1 && x <= n && y >= 1 && y <= m)
//  int n, m, a[110][110], mem[110][110],
//  	xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  int dfs(int x, int y)
//  {
//  	if (mem[x][y])
//  	{
//  		return mem[x][y];
//  	}
//  	int tx, ty, ans = 1;
//  	for (reg j = 1; j <= 4; ++j)
//  	{
//  		tx = x + xx[j];
//  		ty = y + yy[j];
//  		if (check(tx, ty) && a[tx][ty] < a[x][y]) //�޺�Ч�ԣ����Բ��ñ������b
//  		{
//  			ans = max(ans, dfs(tx, ty) + 1);
//  		}
//  	}
//  	return ans;
//  }
//  int main()
//  {
//  	int ans = 0;
//  	cin >> n >> m;
//  	reg i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			mem[i][j] = dfs(i, j);
//  			ans = max(ans, mem[i][j]);
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P2196
// #define reg register int
// vector<int> v[25];
// int a[25], mem[25], ans, ansStep[25], len, path[25];
// void dfs(int x, int step, int sum) // k��ʾ�ߵ��˵ڼ���
// {
// 	if (!v[x].size())
// 	{
// 		if (sum > ans)
// 		{
// 			len = step; //�п��ܳ������Ž�ȴ��Ž��·���̵����������ж�����дpath[j]!=0����ֽ����Ⱦ�����
// 			ans = sum;
// 			for (reg j = 1; j <= len; ++j)
// 			{
// 				ansStep[j] = path[j];
// 			}
// 		}
// 		return;
// 	}
// 	int to;
// 	for (reg j = 0; j < v[x].size(); ++j)
// 	{
// 		to = v[x][j];
// 		path[step + 1] = to;
// 		dfs(to, step + 1, sum + a[to]);
// 	}
// }
// int main()
// {
// 	int n, t;
// 	cin >> n;
// 	reg i, j;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> a[j];
// 	}
// 	for (i = 1; i <= n - 1; ++i)
// 	{
// 		for (j = i + 1; j <= n; ++j)
// 		{
// 			cin >> t;
// 			if (t == 1)
// 			{
// 				v[i].push_back(j);
// 			}
// 		}
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		memset(path, 0, sizeof(path));
// 		path[1] = j;
// 		dfs(j, 1, a[j]);
// 	}
// 	for (j = 1; j <= len; ++j)
// 	{
// 		cout << ansStep[j] << ' ';
// 	}
// 	cout << "\n"
// 		 << ans;
// 	return 0;
// }

// P1828
//  const int R = 810;
//  struct Node
//  {
//  	int point, len;
//  	bool operator<(const Node &x) const
//  	{
//  		return len > x.len;
//  	}
//  };
//  vector<Node> v[R];
//  priority_queue<Node> q;
//  bool b[R], have_p[R]; // have_p������������hack���ݵģ����ĳһ�����ǹµ㣬��ôdijkstra�޷����¸õ��ֵ���������һ����������Ϊ����ˣ�
//  int start[R], dis[R]; // startţ����ʼ��
//  inline void dijkstra(int s)
//  {
//  	q.push({s, 0});
//  	dis[s] = 0;
//  	int from, to, sz;
//  	register int j;
//  	while (!q.empty())
//  	{
//  		from = q.top().point;
//  		b[from] = true;
//  		q.pop();
//  		sz = v[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].point;
//  			if (!b[to] && dis[from] + v[from][j].len < dis[to])
//  			{
//  				dis[to] = dis[from] + v[from][j].len;
//  				q.push({to, dis[to]});
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, p, c, x, y, len, ans = INT_MAX, temp;
//  	cin >> n >> p >> c;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		++start[x];
//  	}
//  	for (j = 1; j <= c; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		have_p[x] = have_p[y] = true;
//  		v[x].push_back({y, len});
//  		v[y].push_back({x, len});
//  	}
//  	for (i = 1; i <= p; ++i) //ö�������յ㣬���յ���Ϊ��ʼ��
//  	{
//  		if (have_p[i]) //������ǹµ�
//  		{
//  			memset(b, 0, sizeof(b));
//  			memset(dis, 0x3f, sizeof(dis));
//  			temp = 0;
//  			dijkstra(i);
//  			for (j = 1; j <= p; ++j)
//  			{
//  				temp += start[j] * dis[j]; //ÿ��������ж������0������ţ������Ҫ�˾���
//  			}
//  			ans = min(ans, temp);
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// �����P3956
//  BFS_��ʹ�����ȶ���_�Ժ�ʹ��BFSʱ������ʹ�����ȶ���
//   const int R = 110;
//   struct Node
//   {
//   	int x, y, color, len; // 0white 1red 2yellow
//   	bool magic;			  //δʹ��ħ��0��ʹ�ù�ħ��1
//   	bool operator<(const Node &a) const
//   	{
//   		return len > a.len;
//   	}
//   } _map[R][R];
//   int dis[R][R],
//   	xx[5] = {0, 0, 1, 0, -1},
//   	yy[5] = {0, 1, 0, -1, 0};
//   bool b[R][R];
//   priority_queue<Node> q; //����ʹ�����ȶ��У��������ܱ�֤ÿ��ȡ��������֪����Сֵ
//   int main()
//   {
//   	int n, m, x, y, c, tx, ty;
//   	bool magic;
//   	cin >> n >> m;
//   	register int j;
//   	for (j = 1; j <= m; ++j)
//   	{
//   		cin >> x >> y >> c;
//   		_map[x][y].color = c + 1;
//   	}
//   	memset(dis, 0x3f, sizeof(dis));
//   	dis[1][1] = 0;
//   	q.push({1, 1, _map[1][1].color, 0}); //��һ����һ������ɫ�����ÿ���û����ɫ�����
//   	Node temp;
//   	while (!q.empty())
//   	{
//   		temp = q.top();
//   		x = temp.x;
//   		y = temp.y;
//   		c = temp.color;
//   		magic = temp.magic;
//   		b[x][y] = true; //����ʱȷ���õ���Сֵ
//   		q.pop();
//   		for (j = 1; j <= 4; ++j)
//   		{
//   			tx = x + xx[j];
//   			ty = y + yy[j];
//   			if (!b[tx][ty] && tx >= 1 && tx <= n && ty >= 1 && ty <= n) //��һ�����ӻ�δȷ����Сֵ��ȷ���˾Ͳ��ø����ˣ����ڵ�ͼ��Χ��
//   			{
//   				if (magic) //����ǰ������ħ�����ɵ�
//   				{
//   					if (!_map[tx][ty].color) //��һ������û����ɫ
//   					{
//   						continue;
//   					}
//   					else
//   					{
//   						if (_map[tx][ty].color == c) //��ɫһ���������ѽ��
//   						{
//   							if (dis[x][y] < dis[tx][ty])
//   							{
//   								dis[tx][ty] = dis[x][y];
//   								q.push({tx, ty, c, dis[tx][ty], 0});
//   								//��ɫһ����push(c)��push(_map[tx][ty].color)Ч����һ����
//   								//��ħ�����Ϊδʹ��
//   							}
//   						}
//   						else //��ɫ��һ�������ѽ��
//   						{
//   							if (dis[x][y] + 1 < dis[tx][ty])
//   							{
//   								dis[tx][ty] = dis[x][y] + 1;
//   								q.push({tx, ty, _map[tx][ty].color, dis[tx][ty], 0}); //��ħ�����Ϊδʹ��
//   							}
//   						}
//   					}
//   				}
//   				else //��ǰ�㱾������ɫ
//   				{
//   					if (_map[tx][ty].color == c) //��ɫһ���������ѽ��
//   					{
//   						if (dis[x][y] < dis[tx][ty])
//   						{
//   							dis[tx][ty] = dis[x][y];
//   							q.push({tx, ty, c, dis[tx][ty], 0});
//   							//��ɫһ����push(c)��push(_map[tx][ty].color)Ч����һ����
//   						}
//   					}
//   					else if (_map[tx][ty].color) //��ɫ��һ�������ѽ��1
//   					{
//   						if (dis[x][y] + 1 < dis[tx][ty])
//   						{
//   							dis[tx][ty] = dis[x][y] + 1;
//   							q.push({tx, ty, _map[tx][ty].color, dis[tx][ty], 0});
//   						}
//   					}
//   					else //�հף�ʹ��ħ�������ѽ��2
//   					{
//   						if (dis[x][y] + 2 < dis[tx][ty])
//   						{
//   							_map[tx][ty].magic = true;
//   							dis[tx][ty] = dis[x][y] + 2;
//   							q.push({tx, ty, _map[x][y].color, dis[tx][ty], 1});
//   						}
//   					}
//   				}
//   			}
//   		}
//   		//���ó���ħ������Ϊһ����ʼ��ǰ�����չ�ͱ�����ǰ���Ѿ�ȷ��
//   	}
//   	// for (j = 1; j <= n; ++j)
//   	// {
//   	// 	for (int i = 1; i <= n; ++i)
//   	// 	{
//   	// 		cout << setw(10) << dis[j][i] << " ";
//   	// 	}
//   	// 	cout << "\n";
//   	// }
//   	if (dis[n][n] == 0x3f3f3f3f)
//   	{
//   		cout << "-1";
//   	}
//   	else
//   	{
//   		cout << dis[n][n];
//   	}
//   	return 0;
//   }
//  DFS_ע���ж������Ҫ����ʱ�����ȷ�ԣ������ԣ������ÿ����Լ�֦
//  #define reg register int
//  const int N = 110,
//  		  xx[5] = {0, 0, 1, 0, -1},
//  		  yy[5] = {0, 1, 0, -1, 0};
//  struct Node
//  {
//  	short color;
//  	bool magic;
//  } _map[N][N];
//  int dis[N][N], n;
//  bool b[N][N];
//  void dfs(int x, int y, int lx, int ly)
//  {
//  	if (_map[lx][ly].magic)
//  	{
//  		_map[lx][ly].color = 0; //�����ħ�����ɵģ���ô����֮��Ҫ����ȥ
//  		if (_map[x][y].magic)
//  		{
//  			return;
//  		}
//  	}
//  	if (x == n && y == n)
//  	{
//  		return;
//  	}
//  	int tx, ty, len;
//  	bool magic = false;
//  	reg j;
//  	for (j = 1; j <= 4; ++j)
//  	{
//  		tx = x + xx[j];
//  		ty = y + yy[j];
//  		if (tx == lx && ty == ly) //��֦����ֹ����ȥ
//  		{
//  			continue;
//  		}
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= n &&
//  			!b[tx][ty])
//  		{
//  			if (_map[tx][ty].magic) //��һ��������Ҫ�õ�ħ��
//  			{
//  				if (_map[x][y].magic)
//  				/*ע������������dfs��������������ֵ���ֱ�Ϊ(lx, ly)��(x, y)��(tx, ty)
//  				����������Ļ�(x, y)��ħ�����ɵĵ�������û�п��ǵ�
//  				hack��������
//  				4 5
//  				1 1 0
//  				1 3 0
//  				2 2 1
//  				2 4 0
//  				4 4 1
//  				disӦ�洢��
//  						 0          2          2          4
//  						 2          3          4          4
//  				1061109567          5 1061109567          6
//  				1061109567 1061109567 1061109567          7
//  				��������������Լ�֦�����洢��
//  						 0          2          2          4
//  						 2          2          4          4
//  						 4          4          6          6
//  				1061109567          6 1061109567          7*/
//  				{
//  					continue;
//  				}
//  				magic = true;
//  				_map[tx][ty].color = _map[x][y].color;
//  				len = 2;
//  			}
//  			else if (_map[x][y].color == _map[tx][ty].color) //��һ���㲻����ħ�����ɣ�����ɫ�뵱ǰ�����
//  			{
//  				len = 0;
//  			}
//  			else //������ɫ������ɫ��ͬ
//  			{
//  				len = 1;
//  			}
//  			if (dis[x][y] + len < dis[tx][ty])
//  			{
//  				b[tx][ty] = true;
//  				dis[tx][ty] = dis[x][y] + len;
//  				dfs(tx, ty, x, y);
//  				b[tx][ty] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int m, x, y, color;
//  	cin >> n >> m;
//  	reg i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			_map[i][j].magic = true; //�ȼ���ÿ�����Ӷ��ǰ�ɫ��
//  		}
//  	}
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> color;
//  		_map[x][y].color = color + 1;
//  		_map[x][y].magic = false; //����ɫ�����ǰ�ɫ
//  	}
//  	memset(dis, 0x3f, sizeof(dis));
//  	dis[1][1] = 0;
//  	b[1][1] = true;
//  	dfs(1, 1, 0, 0); // lx��ly�ȸ�һ�������ܵ�ֵ(0, 0)
//  	if (dis[n][n] == 0x3f3f3f3f)
//  	{
//  		cout << "-1";
//  	}
//  	else
//  	{
//  		cout << dis[n][n];
//  	}
//  	return 0;
//  }

// P4554
//  const int R = 510;
//  struct Node
//  {
//  	int x, y;
//  };
//  char c[R][R];
//  int dis[R][R],
//  	xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  deque<Node> q;
//  int main()
//  {
//  	int n, m, x, y, tx, ty, sx, sy, ex, ey, len;
//  	register int i, j;
//  	while (true)
//  	{
//  		cin >> n >> m;
//  		if (n == 0 && m == 0)
//  		{
//  			break;
//  		}
//  		memset(c, 0, sizeof(c));
//  		memset(dis, 0x3f, sizeof(dis));
//  		for (i = 0; i < n; ++i)
//  		{
//  			for (j = 0; j < m; ++j)
//  			{
//  				cin >> c[i][j];
//  			}
//  		}
//  		cin >> sx >> sy >> ex >> ey;
//  		dis[sx][sy] = 0;
//  		q.push_front({sx, sy});
//  		while (!q.empty())
//  		{
//  			x = q.front().x;
//  			y = q.front().y;
//  			q.pop_front();
//  			for (j = 1; j <= 4; ++j)
//  			{
//  				tx = x + xx[j];
//  				ty = y + yy[j];
//  				if (tx >= 0 && tx < n && ty >= 0 && ty < m)
//  				{
//  					len = (c[x][y] == c[tx][ty] ? 0 : 1);
//  					if (dis[x][y] + len < dis[tx][ty])
//  					{
//  						dis[tx][ty] = dis[x][y] + len;
//  						if (len)
//  						{
//  							q.push_back({tx, ty});
//  						}
//  						else
//  						{
//  							q.push_front({tx, ty});
//  						}
//  					}
//  				}
//  			}
//  		}
//  		cout << dis[ex][ey] << "\n";
//  	}
//  	return 0;
//  }

// ��P2901_K��·����ģ����_��һ������
//  #define reg register int
//  const int N = 1e3 + 10;
//  struct Node
//  {
//  	int point, len;
//  	bool operator<(const Node &x) const
//  	{
//  		return len > x.len;
//  	}
//  };
//  struct ASN
//  {
//  	int point, guess, len;
//  	bool operator<(const ASN &x) const
//  	{
//  		return guess > x.guess;
//  	}
//  };
//  vector<Node> v[N], p[N];
//  bool b[N];
//  int pre[N], ans[110], tot, cnt[N], maxk, k = 1;
//  inline void dijkstra(int start)
//  {
//  	priority_queue<Node> q;
//  	memset(pre, 0x3f, sizeof(pre));
//  	pre[start] = 0;
//  	int from, to, sz;
//  	reg j;
//  	q.push({start, 0});
//  	while (!q.empty())
//  	{
//  		from = q.top().point;
//  		q.pop();
//  		b[from] = true;
//  		sz = p[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = p[from][j].point;
//  			if (!b[to] && pre[from] + p[from][j].len < pre[to])
//  			{
//  				pre[to] = pre[from] + p[from][j].len;
//  				q.push({to, pre[to]});
//  			}
//  		}
//  	}
//  }
//  inline void astar(int start, int end)
//  {
//  	priority_queue<ASN> q;
//  	ASN temp;
//  	memset(ans, -1, sizeof(ans));
//  	q.push({start, pre[start], 0});
//  	int from, to, len, sz;
//  	reg j;
//  	while (!q.empty())
//  	{
//  		temp = q.top();
//  		from = temp.point;
//  		len = temp.len;
//  		++cnt[from];
//  		q.pop();
//  		if (cnt[end] == k)
//  		{
//  			++tot;
//  			ans[tot] = len;
//  			++k;
//  			if (k > maxk)
//  			{
//  				return;
//  			}
//  		}
//  		sz = v[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].point;
//  			if (cnt[to] < k)
//  			{
//  				q.push({to, len + v[from][j].len + pre[to], len + v[from][j].len});
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, m, x, y, len;
//  	cin >> n >> m >> maxk;
//  	reg j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		v[x].push_back({y, len});
//  		p[y].push_back({x, len});
//  	}
//  	dijkstra(1);
//  	astar(n, 1);
//  	for (j = 1; j <= maxk; ++j)
//  	{
//  		cout << ans[j] << "\n";
//  	}
//  	return 0;
//  }

// P2324
//  #define reg register int
//  const char r[10][10] = {
//  	"",
//  	" 11111",
//  	" 01111",
//  	" 00*11",
//  	" 00001",
//  	" 00000",
//  };
//  const int xx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2},
//  		  yy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
//  int maxdep, sx, sy;
//  char c[10][10];
//  inline int cnt()
//  {
//  	reg i, j;
//  	int res = 0;
//  	for (i = 1; i <= 5; ++i)
//  	{
//  		for (j = 1; j <= 5; ++j)
//  		{
//  			res += (r[i][j] == c[i][j] ? 0 : 1);
//  		}
//  	}
//  	return res;
//  }
//  bool dfs(int x, int y, int step)
//  {
//  	if (step == maxdep)
//  	{
//  		if (!cnt())
//  		{
//  			return true;
//  		}
//  		else
//  		{
//  			return false;
//  		}
//  	}
//  	reg j;
//  	int tx, ty;
//  	for (j = 1; j <= 8; ++j)
//  	{
//  		tx = x + xx[j];
//  		ty = y + yy[j];
//  		if (tx >= 1 && tx <= 5 && ty >= 1 && ty <= 5)
//  		{
//  			swap(c[x][y], c[tx][ty]);
//  			if (step + cnt() <= maxdep)
//  			{
//  				if (dfs(tx, ty, step + 1))
//  				{
//  					return true;
//  				}
//  			}
//  			swap(c[x][y], c[tx][ty]);
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int T;
//  	cin >> T;
//  	reg i, j;
//  	bool flag;
//  	while (T--)
//  	{
//  		for (i = 1; i <= 5; ++i)
//  		{
//  			for (j = 1; j <= 5; ++j)
//  			{
//  				cin >> c[i][j];
//  				if (c[i][j] == '*')
//  				{
//  					sx = i;
//  					sy = j;
//  				}
//  			}
//  		}
//  		flag = false;
//  		for (maxdep = 0; maxdep <= 15; ++maxdep)
//  		{
//  			if (dfs(sx, sy, 0))
//  			{
//  				flag = true;
//  				break;
//  			}
//  		}
//  		cout << (flag ? maxdep : -1) << "\n";
//  	}
//  	return 0;
//  }

// ���P1379
//  IDDFS
//  #define reg register int
//  const char r[5][5] = {
//  	"",
//  	" 123",
//  	" 804",
//  	" 765"};
//  const int xx[5] = {0, 0, 1, 0, -1},
//  		  yy[5] = {0, 1, 0, -1, 0};
//  char c[5][5];
//  int maxdep, tot;
//  inline int f()
//  {
//  	int res = 0;
//  	reg i, j;
//  	for (i = 1; i <= 3; ++i)
//  	{
//  		for (j = 1; j <= 3; ++j)
//  		{
//  			res += r[i][j] != c[i][j];
//  		}
//  	}
//  	return res;
//  }
//  bool dfs(int x, int y, int step, int lastx, int lasty) // lastx��lasty�Ǽ�֦����ֹ����ȥ�������������
//  {
//  	if (step == maxdep)
//  	{
//  		if (!f())
//  		{
//  			return true;
//  		}
//  		else
//  		{
//  			return false;
//  		}
//  	}
//  	reg j;
//  	int tx, ty;
//  	for (j = 1; j <= 4; ++j)
//  	{
//  		tx = x + xx[j];
//  		ty = y + yy[j];
//  		if (tx == lastx && ty == lasty)
//  		{
//  			continue;
//  		}
//  		if (c[tx][ty])
//  		{
//  			swap(c[x][y], c[tx][ty]);
//  			if (step + f() <= maxdep) //��һ��д��Ҳ�ɣ�����ƶ˲�������
//  			{
//  				if (dfs(tx, ty, step + 1, x, y))
//  				{
//  					return true;
//  				}
//  			}
//  			swap(c[x][y], c[tx][ty]);
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	reg i, j;
//  	int sx, sy;
//  	for (i = 1; i <= 3; ++i)
//  	{
//  		for (j = 1; j <= 3; ++j)
//  		{
//  			cin >> c[i][j];
//  			if (c[i][j] == '0')
//  			{
//  				sx = i;
//  				sy = j;
//  			}
//  		}
//  	}
//  	for (maxdep = 0;; ++maxdep)
//  	{
//  		if (dfs(sx, sy, 0, -1, -1)) // lx��ly�ȸ�һ�������ܵ�ֵ
//  		{
//  			break;
//  		}
//  	}
//  	cout << maxdep;
//  	return 0;
//  }
// ˫��BFS
//   #define check(x) x >= 1 && x <= 3
//   using ll = long long;
//   const char RES[5][5] = {
//   	"",
//   	" 123",
//   	" 804",
//   	" 765"};
//   const int xx[5] = {0, 0, 1, 0, -1},
//   		  yy[5] = {0, 1, 0, -1, 0};
//   struct Node
//   {
//   	int step, x, y;
//   	char c[4][4];
//   };
//   queue<Node> q[2];				 // q[0]��ǰ����q[1]�Ӻ���ǰ
//   unordered_map<ll, int> stepm[2]; //��״̬ӳ��Ϊ����
//   unordered_map<ll, int> vism[2];	 //��״̬ӳ��Ϊ�Ƿ����
//   inline int sqrtod(Node x)
//   {
//   	ll res = 0;
//   	register int i, j;
//   	for (i = 1; i <= 3; ++i)
//   	{
//   		for (j = 1; j <= 3; ++j)
//   		{
//   			res = res * 10 + (x.c[i][j] - '0');
//   		}
//   	}
//   	return res;
//   }
//   inline bool expand(int a)
//   {
//   	Node temp;
//   	temp = q[a].front();
//   	q[a].pop();
//   	ll t2;
//   	int tx, ty, x = temp.x, y = temp.y;
//   	for (register int j = 1; j <= 4; ++j)
//   	{
//   		tx = x + xx[j];
//   		ty = y + yy[j];
//   		if (check(tx) && check(ty))
//   		{
//   			swap(temp.c[x][y], temp.c[tx][ty]);
//   			t2 = sqrtod(temp);
//   			if (!vism[a][t2])
//   			{
//   				vism[a][t2] = true;
//   				++temp.step;
//   				temp.x = tx;
//   				temp.y = ty;
//   				stepm[a][t2] = temp.step;
//   				q[a].push(temp);
//   				--temp.step; //����
//   				if (vism[!a][t2])
//   				{
//   					cout << stepm[!a][t2] + stepm[a][t2];
//   					return true;
//   				}
//   			}
//   			swap(temp.c[x][y], temp.c[tx][ty]);
//   		}
//   	}
//   	return false;
//   }
//   inline void bfs()
//   {
//   	while (!q[0].empty())
//   	{
//   		if (expand(0))
//   		{
//   			return;
//   		}
//   		if (expand(1))
//   		{
//   			return;
//   		}
//   	}
//   }
//   int main()
//   {
//   	ll t = 0;
//   	Node t1, t2;
//   	bool flag = true;
//   	register int i, j;
//   	for (i = 1; i <= 3; ++i)
//   	{
//   		for (j = 1; j <= 3; ++j)
//   		{
//   			cin >> t1.c[i][j];
//   			if (t1.c[i][j] == '0')
//   			{
//   				t1.x = i, t1.y = j;
//   			}
//   			t2.c[i][j] = RES[i][j];
//   			if (t1.c[i][j] != RES[i][j])
//   			{
//   				flag = false;
//   			}
//   			t = t * 10 + (t1.c[i][j] - '0');
//   		}
//   	}
//   	if (flag)
//   	{
//   		cout << '0';
//   		return 0;
//   	}
//   	t2.x = 2, t2.y = 2;
//   	vism[0][t] = true;
//   	stepm[0][t] = 0;
//   	t1.step = 0, t2.step = 0;
//   	q[0].push(t1);
//   	q[1].push(t2);
//   	bfs();
//   	return 0;
//   }

// P1189
//  const int N = 1010,
//  		  xx[5] = {0, -1, 1, 0, 0},
//  		  yy[5] = {0, 0, 0, -1, 1}; //�ֱ�Ϊ�ϡ��¡����ң�NORTH��SOUTH��WEST��EAST��
//  struct Node
//  {
//  	int x, y, step; // drc_step��ʾ��ǰ�����˶��ٴ�
//  };
//  int kk[N]; //���j��Ҫ�������ߣ��Ӵ�����Կ���
//  char c[60][60];
//  int turn[60][60];
//  queue<Node> q;
//  int main()
//  {
//  	int n, m, k, sx, sy;
//  	char opt[10];
//  	cin >> n >> m;
//  	register int i, j;
//  	for (i = 1; i <= n; ++i) //��ͼ
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> c[i][j];
//  			if (c[i][j] == '*')
//  			{
//  				sx = i;
//  				sy = j;
//  			}
//  		}
//  	}
//  	cin >> k;
//  	for (j = 1; j <= k; ++j) //���뷽��
//  	{
//  		cin >> opt;
//  		if (opt[0] == 'N')
//  			kk[j] = 1;
//  		else if (opt[0] == 'S')
//  			kk[j] = 2;
//  		else if (opt[0] == 'W')
//  			kk[j] = 3;
//  		else
//  			kk[j] = 4;
//  	}
//  	turn[sx][sy] = 0;
//  	q.push({sx, sy, 1}); //���������ݣ�������֪��3��������ʵ�����ǹ�2�Σ���Ҫ��step���յ���k����Ҫ��������Ĺ����������Ϊ1
//  	int x, y, step, tx, ty;
//  	Node temp;
//  	while (!q.empty())
//  	{
//  		temp = q.front();
//  		q.pop();
//  		x = temp.x;
//  		y = temp.y;
//  		step = temp.step;
//  		if (step > k)
//  		{
//  			continue;
//  		}
//  		while (true)
//  		{
//  			// cout << x << ' ' << y << "\n";
//  			tx = x + xx[kk[step]];
//  			ty = y + yy[kk[step]];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				c[tx][ty] != 'X' && turn[tx][ty] != step) //���һ�������BFS��MLE�������ķ�֧�޽磨������DFS�ļ�֦�������Ҫȥ�ĵ��Ѿ���չ���˵�ǰ������չ�ķ�����ô������ĵ�Ҳһ������չ�������Ծ�ֱ��break
//  			{
//  				turn[tx][ty] = step;
//  				q.push({tx, ty, step + 1});
//  				x = tx, y = ty; //��������ԭ���ĵ�����Ϊ��һ�εĳ�����
//  			}
//  			else
//  			{
//  				break;
//  			}
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cout << (turn[i][j] == k ? '*' : (c[i][j] == '*' ? '.' : c[i][j]));
//  			// cout << turn[i][j] << ' ';
//  		}
//  		cout << "\n";
//  	}
//  	return 0;
//  }

// P1044
//  int dp[20][20];
//  int dfs(int que, int sta) //���У���û��ջ��������ջ
//  {
//  	if (dp[que][sta])
//  	{
//  		return dp[que][sta];
//  	}
//  	if (sta > 0)
//  	{
//  		dp[que][sta] = dfs(que, sta - 1) + dfs(que - 1, sta + 1); //�ֱ��ʾpop��push
//  	}
//  	else if (sta == 0)
//  	{
//  		dp[que][sta] = dfs(que - 1, sta + 1); //ջ��û��Ԫ�أ�ֻ��push
//  	}
//  	return dp[que][sta];
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		dp[0][j] = 1; //����Ѿ�ȫ����ջ����ôֻ��һ���������ȫ������˳���ջ
//  	}
//  	cout << dfs(n, 0);
//  	return 0;
//  }

// P1177_�鲢����_�������ǰ����
//  const int N = 1e5 + 10;
//  int a[N], t[N];
//  void msort(int l, int r)
//  {
//  	if (l >= r)
//  	{
//  		return;
//  	}
//  	int mid = l + r >> 1;
//  	msort(l, mid);
//  	msort(mid + 1, r);
//  	register int i = l, j = mid + 1, p = l;
//  	while (i <= mid && j <= r)
//  	{
//  		if (a[i] <= a[j])
//  		{
//  			t[p] = a[i];
//  			++p, ++i;
//  		}
//  		else
//  		{
//  			t[p] = a[j];
//  			++p, ++j;
//  		}
//  	}
//  	while (i <= mid)
//  	{
//  		t[p] = a[i];
//  		++p, ++i;
//  	}
//  	while (j <= r)
//  	{
//  		t[p] = a[j];
//  		++p, ++j;
//  	}
//  	for (j = l; j <= r; ++j)
//  	{
//  		a[j] = t[j];
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	msort(1, n);
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cout << a[j] << ' ';
//  	}
//  	return 0;
//  }

// P1908_�鲢�����������ģ����_P5149ǰ����
//  int a[500010], t[500010];
//  long long ans; //ʮ��OIһ���գ�����longlong������
//  void mergesort(int l, int r)
//  {
//  	if (l >= r)
//  	{
//  		return;
//  	}
//  	int mid = l + r >> 1, i = l, j = mid + 1, p = l;
//  	mergesort(l, mid);
//  	mergesort(mid + 1, r);
//  	while (i <= mid && j <= r)
//  	{
//  		if (a[i] <= a[j])
//  		{
//  			t[p] = a[i];
//  			++p, ++i;
//  		}
//  		else
//  		{
//  			ans += mid - i + 1;
//  			t[p] = a[j];
//  			++p, ++j;
//  		}
//  	}
//  	while (i <= mid)
//  	{
//  		t[p] = a[i];
//  		++p, ++i;
//  	}
//  	while (j <= r)
//  	{
//  		t[p] = a[j];
//  		++p, ++j;
//  	}
//  	for (j = l; j <= r; ++j)
//  	{
//  		a[j] = t[j];
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	mergesort(1, n);
//  	cout << ans;
//  	return 0;
//  }

// ���P5149
// ʹ��unordered_mapά������˳��
//   unordered_map<string, int> m;
//   const int N = 1e5 + 10;
//   int a[N], t[N];
//   long long ans;
//   void msort(int l, int r)
//   {
//   	if (l == r)
//   	{
//   		return;
//   	}
//   	int mid = l + r >> 1, i = l, j = mid + 1, p = l;
//   	msort(l, mid);
//   	msort(mid + 1, r);
//   	while (i <= mid && j <= r)
//   	{
//   		if (a[i] <= a[j])
//   		{
//   			t[p] = a[i];
//   			++p, ++i;
//   		}
//   		else
//   		{
//   			ans += mid - i + 1;
//   			t[p] = a[j];
//   			++p, ++j;
//   		}
//   	}
//   	while (i <= mid)
//   	{
//   		t[p] = a[i];
//   		++p, ++i;
//   	}
//   	while (j <= r)
//   	{
//   		t[p] = a[j];
//   		++p, ++j;
//   	}
//   	for (j = l; j <= r; ++j) //ǧ������˰�t��ֵ��a������
//   	{
//   		a[j] = t[j];
//   	}
//   }
//   int main()
//   {
//   	int n;
//   	string s;
//   	cin >> n;
//   	for (register int j = 1; j <= n; ++j)
//   	{
//   		cin >> s;
//   		m[s] = j;
//   	}
//   	for (register int j = 1; j <= n; ++j)
//   	{
//   		cin >> s;
//   		a[m[s]] = j;
//   	}
//   	msort(1, n);
//   	cout << ans;
//   	return 0;
//   }
// ʹ��Trie�ֵ���ά������˳��
//  #define reg register int
//  const int N = 1e5 + 10;
//  int a[N], t[N];
//  long long ans;
//  class Trie
//  {
//  private:
//  	int ch[N * 5][60], end[N * 5], tot = 0, name_tot = 0;
//  public:
//  	inline void add(char s[])
//  	{
//  		int x, p = 0;
//  		for (reg j = 0; s[j]; ++j)
//  		{
//  			x = s[j] - 'A';
//  			if (!ch[p][x])
//  			{
//  				++tot;
//  				ch[p][x] = tot;
//  			}
//  			p = ch[p][x];
//  		}
//  		end[p] = ++name_tot;
//  	}
//  	inline int find(char s[])
//  	{
//  		int x, p = 0;
//  		for (reg j = 0; s[j]; ++j)
//  		{
//  			x = s[j] - 'A';
//  			p = ch[p][x];
//  		}
//  		return end[p];
//  	}
//  } tree;
//  void msort(int l, int r)
//  {
//  	if (l == r)
//  	{
//  		return;
//  	}
//  	int mid = l + r >> 1, i = l, j = mid + 1, p = l;
//  	msort(l, mid);
//  	msort(mid + 1, r);
//  	while (i <= mid && j <= r)
//  	{
//  		if (a[i] <= a[j])
//  		{
//  			t[p] = a[i];
//  			++p, ++i;
//  		}
//  		else
//  		{
//  			ans += mid - i + 1;
//  			t[p] = a[j];
//  			++p, ++j;
//  		}
//  	}
//  	while (i <= mid)
//  	{
//  		t[p] = a[i];
//  		++p, ++i;
//  	}
//  	while (j <= r)
//  	{
//  		t[p] = a[j];
//  		++p, ++j;
//  	}
//  	for (j = l; j <= r; ++j) //ǧ������˰�t��ֵ��a������
//  	{
//  		a[j] = t[j];
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	char name[10];
//  	cin >> n;
//  	reg j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> name;
//  		tree.add(name);
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> name;
//  		a[j] = tree.find(name);
//  	}
//  	msort(1, n);
//  	cout << ans;
//  	return 0;
//  }

// P3865_RMQģ����
// const int N = 1e5 + 10, K = 17; // log��2Ϊ��1e5��ֵ����ȡ��Ϊ17
// int a[N], f[N][K], log2_[N];
// int main()
// {
// 	int n, m;
// 	cin >> n >> m;
// 	register int i, j;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> a[j];
// 	}
// 	log2_[1] = 0;
// 	for (j = 2; j <= n; ++j)
// 	{
// 		log2_[j] = log2_[j / 2] + 1;
// 	}
// 	// n=r-l+1 ? r=l+n-1 ? l=r-n+1
// 	for (j = 0; j < K; ++j)
// 	{
// 		for (i = 1; i + (1 << j) - 1 <= n; ++i)
// 		{
// 			if (j == 0)
// 			{
// 				f[i][j] = a[i];
// 			}
// 			else
// 			{
// 				f[i][j] = max(f[i][j - 1], f[i + (1 << (j - 1))][j - 1]);
// 				//��������Ϊi~i+2^(j-1)-1��i+2^(j-1)~i+2^(j-1)+2^(j-1)-1
// 				//����i+2^(j-1)+2^(j-1)-1=1+2^j-1
// 			}
// 		}
// 	}
// 	int l, r, k;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> l >> r;
// 		k = log2_[r - l + 1];
// 		cout << max(f[l][k], f[r - (1 << k) + 1][k]) << "\n";
// 	}
// 	return 0;
// }

// P3379_������LCAģ����
// const int R = 5e5 + 10, K = 20;
// vector<int> v[R];
// int dep[R], f[R][K], log2_[R];
// void dfs(int x, int fa)
// {
// 	dep[x] = dep[fa] + 1;
// 	f[x][0] = fa;
// 	int sz = v[x].size(), to;
// 	for (register int j = 0; j < sz; ++j)
// 	{
// 		to = v[x][j];
// 		if (to != fa)
// 		{
// 			dfs(to, x);
// 		}
// 	}
// }
// inline int lca(int x, int y)
// {
// 	if (dep[x] < dep[y])
// 	{
// 		swap(x, y); //��֤x�����>����y�����
// 	}
// 	while (dep[x] > dep[y])
// 	{
// 		x = f[x][log2_[dep[x] - dep[y]]];
// 	}
// 	if (x == y)
// 	{
// 		return x;
// 	}
// 	for (register int j = K - 1; j >= 0; --j)
// 	{
// 		if (f[x][j] != f[y][j])
// 		{
// 			x = f[x][j];
// 			y = f[y][j];
// 		}
// 	}
// 	return f[x][0];
// }
// int main()
// {
// 	int n, m, root, x, y;
// 	register int i, j;
// 	cin >> n >> m >> root;
// 	for (j = 2; j <= n; ++j)
// 	{
// 		cin >> x >> y;
// 		v[x].push_back(y);
// 		v[y].push_back(x);
// 	}
// 	dfs(root, 0);
// 	log2_[1] = 0;
// 	for (j = 2; j <= n; ++j)
// 	{
// 		log2_[j] = log2_[j / 2] + 1;
// 	}
// 	for (j = 1; j < K; ++j) // dfsʱ�Ѿ���j=0������������
// 	{
// 		for (i = 1; i <= n; ++i)
// 		{
// 			f[i][j] = f[f[i][j - 1]][j - 1];
// 		}
// 	}
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y;
// 		cout << lca(x, y) << "\n";
// 	}
// 	return 0;
// }

// ��P3373_���߶�������·��и�������
//   #define lc k << 1
//   #define rc k << 1 | 1
//   using ll = long long;
//   const int R = 1e5 + 10;
//   struct Node
//   {
//   	ll sum, add, mult; //Ҫע�⣬add��multҲҪ��ll����Ϊ�ڽ���sum[lc].sum * sum[k].mult����ʱ���������ll������᷵��int���������
//   	int l, r;
//   } sum[R << 3];
//   ll a[R], mod;
//   void build(int k, int l, int r)
//   {
//   	sum[k].l = l;
//   	sum[k].r = r;
//   	sum[k].mult = 1; //���ܳ��ֳ���0���������ֵΪ1�Ϳ��Ա���
//   	if (l == r)
//   	{
//   		sum[k].sum = a[l] % mod;
//   		return;
//   	}
//   	int mid = (l + r) >> 1;
//   	build(lc, l, mid);
//   	build(rc, mid + 1, r);
//   	sum[k].sum = (sum[lc].sum + sum[rc].sum) % mod;
//   }
//   inline void pushdown(int k)
//   {
//   	//�ȳ˺�ӣ����https://www.luogu.com.cn/blog/lhr/solution-p3373
//   	//�����ӽ��sum��ע�⣬������µ����ӽ���sum������k��sum�����������ϵ�ģ������µ�Ҳ���ӽ���sum��
//   	sum[lc].sum = ((sum[lc].sum * sum[k].mult) % mod +
//   				   ((sum[lc].r - sum[lc].l + 1) * sum[k].add) % mod) %
//   				  mod;
//   	sum[rc].sum = ((sum[rc].sum * sum[k].mult) % mod + //����Ҳ�п��������ҲҪȡ��
//   				   ((sum[rc].r - sum[rc].l + 1) * sum[k].add) % mod) %
//   				  mod;
//   	//�����ӽ��mult��ǣ�ע�⣬�������·Ŷ���Ҫд�ж�����������Ƿ��б�Ǹ��ӽ���Ƿ��б���޹أ�
//   	sum[lc].mult = (sum[lc].mult * sum[k].mult) % mod;
//   	sum[rc].mult = (sum[rc].mult * sum[k].mult) % mod;
//   	//�����ӽ��add���
//   	sum[lc].add = (sum[lc].add * sum[k].mult + sum[k].add) % mod;
//   	sum[rc].add = (sum[rc].add * sum[k].mult + sum[k].add) % mod;
//   	//���øý����
//   	sum[k].mult = 1; // mult�����ñ���ŵ������Ϊadd�ļ���������mult
//   	sum[k].add = 0;
//   }
//   void multupdate(int k, int x, int y, int val)
//   {
//   	if (sum[k].l >= x && sum[k].r <= y)
//   	{
//   		sum[k].add = (sum[k].add * val) % mod;
//   		sum[k].mult = (sum[k].mult * val) % mod;
//   		sum[k].sum = (sum[k].sum * val) % mod;
//   		return;
//   	}
//   	pushdown(k);
//   	int mid = (sum[k].l + sum[k].r) >> 1;
//   	if (x <= mid)
//   	{
//   		multupdate(lc, x, y, val);
//   	}
//   	if (y > mid)
//   	{
//   		multupdate(rc, x, y, val);
//   	}
//   	sum[k].sum = (sum[lc].sum + sum[rc].sum) % mod;
//   }
//   void addupdate(int k, int x, int y, int val)
//   {
//   	if (sum[k].l >= x && sum[k].r <= y)
//   	{
//   		sum[k].add = (val + sum[k].add) % mod;
//   		sum[k].sum = (val * (sum[k].r - sum[k].l + 1) + sum[k].sum) % mod;
//   		return;
//   	}
//   	pushdown(k);
//   	int mid = (sum[k].l + sum[k].r) >> 1;
//   	if (x <= mid)
//   	{
//   		addupdate(lc, x, y, val);
//   	}
//   	if (y > mid)
//   	{
//   		addupdate(rc, x, y, val);
//   	}
//   	sum[k].sum = (sum[lc].sum + sum[rc].sum) % mod;
//   }
//   ll query(int k, int x, int y)
//   {
//   	if (sum[k].l >= x && sum[k].r <= y)
//   	{
//   		return sum[k].sum;
//   	}
//   	pushdown(k);
//   	int res = 0, mid = (sum[k].l + sum[k].r) >> 1;
//   	if (x <= mid)
//   	{
//   		res = (res + query(lc, x, y) % mod) % mod;
//   	}
//   	if (y > mid)
//   	{
//   		res = (res + query(rc, x, y) % mod) % mod;
//   	}
//   	return res;
//   }
//   int main()
//   {
//   	int n, m, x, y, k;
//   	cin >> n >> m >> mod;
//   	register int j;
//   	for (j = 1; j <= n; ++j)
//   	{
//   		cin >> a[j];
//   	}
//   	build(1, 1, n);
//   	char opt;
//   	for (j = 1; j <= m; ++j)
//   	{
//   		cin >> opt;
//   		if (opt == '1')
//   		{
//   			cin >> x >> y >> k;
//   			multupdate(1, x, y, k);
//   		}
//   		else if (opt == '2')
//   		{
//   			cin >> x >> y >> k;
//   			addupdate(1, x, y, k);
//   		}
//   		else // opt=='3'
//   		{
//   			cin >> x >> y;
//   			cout << query(1, x, y) << "\n";
//   		}
//   	}
//   	return 0;
//   }

// ��P1347_��������Ӧ��
//  vector<int> v[30];
//  int rd[30], temp[30], n, from[610], to[610];
//  int head, tail, q[30];
//  int ctod(char c)
//  {
//  	return c - 'A' + 1;
//  }
//  int tpsort() // 0�������㣬1��ȷ����-1�г�ͻ
//  {
//  	head = 1;
//  	tail = 0;
//  	int too, x, sz, tmp = 0; //������ͼ�в�ֻ��һ��������Ϊ0���������������
//  	register int j;
//  	bool flag = true;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (temp[j] == 0) //���Ϊ0�ĵ㶼������һ��������У������ȵ������������ɷ���
//  		{
//  			++tail;
//  			q[tail] = j;
//  			++tmp;
//  		}
//  	}
//  	if (tmp > 1) //��ֻ��һ�������Ϊ0
//  	{
//  		flag = false;
//  	}
//  	while (head <= tail)
//  	{
//  		tmp = 0;
//  		x = q[head];
//  		++head;
//  		sz = v[x].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			too = v[x][j];
//  			--temp[too];
//  			if (temp[too] == 0)
//  			{
//  				++tail;
//  				q[tail] = too;
//  				++tmp;
//  			}
//  		}
//  		if (tmp > 1) //��ֻ��һ�������Ϊ0
//  		{
//  			flag = false;
//  		}
//  	}
//  	if (tail != n)
//  		return -1; //��ȱ��������������ͻͬʱ���㣬Ӧȡ������ͻ�������Ϊʲôtmp>1ʱ��ֱ��return
//  	else if (flag)
//  		return 1;
//  	else
//  		return 0;
//  }
//  int main()
//  {
//  	int m, flag;
//  	char x, t, y;
//  	register int i, j;
//  	cin >> n >> m;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> t >> y;
//  		from[j] = ctod(y);
//  		to[j] = ctod(x);
//  	}
//  	for (j = 1; j <= m; ++j)
//  	{
//  		x = from[j];
//  		y = to[j];		   // x��y��������
//  		v[y].push_back(x); //��ԭ����ʱ������
//  		++rd[x];
//  		copy(rd + 1, rd + n + 1, temp + 1);
//  		flag = tpsort();
//  		if (flag == 1)
//  		{
//  			cout << "Sorted sequence determined after " << j << " relations: ";
//  			//�������Ѿ��洢���˶����У������Ϊʲô����STL
//  			for (i = 1; i <= n; ++i)
//  			{
//  				cout << char(q[i] - 1 + 'A');
//  			}
//  			cout << '.';
//  			return 0;
//  		}
//  		else if (flag == -1)
//  		{
//  			cout << "Inconsistency found after " << j << " relations.";
//  			return 0;
//  		}
//  	}
//  	cout << "Sorted sequence cannot be determined.";
//  	return 0;
//  }

// P3385
//  const int R = 2e3 + 10;
//  struct Node
//  {
//  	int p, len;
//  };
//  vector<Node> v[R];
//  int dis[R], cnt[R];
//  bool b[R];
//  queue<int> q;
//  inline void init(int n)
//  {
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  		v[j].clear();
//  	while (!q.empty())
//  		q.pop();
//  }
//  inline bool spfa(int n)
//  {
//  	register int j;
//  	memset(dis, 0x3f, sizeof(dis));
//  	memset(cnt, 0, sizeof(cnt));
//  	memset(b, 0, sizeof(b));
//  	dis[1] = 0;
//  	q.push(1);
//  	b[1] = true; //�������ȷ˵����1��Ϊ�����㣬���Բ��ð�ÿ���㶼���
//  	int from, to, sz;
//  	while (!q.empty())
//  	{
//  		from = q.front();
//  		q.pop();
//  		b[from] = false;
//  		sz = v[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].p;
//  			if (dis[from] + v[from][j].len < dis[to])
//  			{
//  				dis[to] = dis[from] + v[from][j].len;
//  				cnt[to] = cnt[from] + 1;
//  				if (cnt[to] >= n)
//  				{
//  					return true;
//  				}
//  				if (!b[to])
//  				{
//  					q.push(to);
//  					b[to] = true;
//  				}
//  			}
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int T, n, m, x, y, len;
//  	cin >> T;
//  	register int j;
//  	while (T--)
//  	{
//  		cin >> n >> m;
//  		init(n); //ע�⣬Ҫ�ڴ�ͼǰ��ʼ����
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> x >> y >> len;
//  			if (len >= 0)
//  			{
//  				v[x].push_back({y, len});
//  				v[y].push_back({x, len});
//  			}
//  			else // len<0
//  			{
//  				v[x].push_back({y, len});
//  			}
//  		}
//  		if (spfa(n))
//  		{
//  			cout << "YES\n";
//  		}
//  		else
//  		{
//  			cout << "NO\n";
//  		}
//  	}
//  	return 0;
//  }

// P2136
//  #define memset(p, val) memset(p, val, sizeof(p))
//  const int R = 1e3 + 10;
//  struct Node
//  {
//  	int p, len;
//  };
//  vector<Node> v[R];
//  int dis[R], cnt[R], n;
//  bool b[R];
//  inline bool spfa(int s)
//  {
//  	memset(dis, 0x3f);
//  	memset(b, 0);
//  	memset(cnt, 0);
//  	queue<int> q;
//  	q.push(s);
//  	b[s] = true;
//  	dis[s] = 0;
//  	register int j;
//  	int from, to, sz;
//  	while (!q.empty())
//  	{
//  		from = q.front();
//  		q.pop();
//  		b[from] = false;
//  		sz = v[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].p;
//  			if (dis[from] + v[from][j].len < dis[to])
//  			{
//  				dis[to] = dis[from] + v[from][j].len;
//  				cnt[to] = cnt[from] + 1;
//  				if (cnt[to] >= n)
//  				{
//  					return true;
//  				}
//  				if (!b[to])
//  				{
//  					q.push(to);
//  					b[to] = true;
//  				}
//  			}
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int m, x, y, len; //��Ҫ�ٴζ���n�ˣ���������ȫ�ֱ���n���ᱻ�޸ģ�����
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		v[x].push_back({y, -len});
//  	}
//  	if (spfa(1))
//  	{
//  		cout << "Forever love";
//  	}
//  	else
//  	{
//  		int ans = INT_MAX;
//  		ans = dis[n];
//  		spfa(n); //С������׷С�죬С��Ҳ����׷С��
//  		ans = min(dis[1], ans);
//  		cout << ans;
//  	}
//  	return 0;
//  }

// P5960
// const int R = 5e3 + 10;
// struct Node
// {
// 	int p, len;
// };
// vector<Node> v[R];
// queue<int> q;
// bool b[R];
// int dis[R], cnt[R];
// bool spfa(int n)
// {
// 	memset(dis, 0x3f, sizeof(dis));
// 	dis[0] = 0;
// 	q.push(0);
// 	b[0] = true;
// 	int from, to, sz;
// 	register int j;
// 	while (!q.empty())
// 	{
// 		from = q.front();
// 		q.pop();
// 		b[from] = false;
// 		sz = v[from].size();
// 		for (j = 0; j < sz; ++j)
// 		{
// 			to = v[from][j].p;
// 			if (dis[from] + v[from][j].len < dis[to])
// 			{
// 				dis[to] = dis[from] + v[from][j].len;
// 				++cnt[to];
// 				if (cnt[to] == n)
// 				{
// 					return true;
// 				}
// 				if (!b[to])
// 				{
// 					q.push(to);
// 					b[to] = true;
// 				}
// 			}
// 		}
// 	}
// 	return false;
// }
// int main()
// {
// 	int n, m, x, y, len;
// 	cin >> n >> m;
// 	register int j;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y >> len;
// 		v[y].push_back({x, len}); // x-y<=len -> x<=y+len�������ֵ�������·���и������޽�
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		v[0].push_back({j, 1});
// 	}
// 	if (spfa(n))
// 	{
// 		cout << "NO";
// 	}
// 	else
// 	{
// 		for (j = 1; j <= n; ++j)
// 		{
// 			cout << dis[j] << ' ';
// 		}
// 	}
// 	return 0;
// }

// P3275_�����⣬ֻ�ܹ�ԭ������
// //����Сֵ��ת��Ϊ���·
// //�����Լ�����ⶼҪ������ת��Ϊx>=y+k������Сֵ���·����x<=y+l�������ֵ�����·����kΪ��������������ȷ���ߵĳ��ȣ�
// //����Сֵ�Ĳ��Լ���������У���������������·��������������޽�
// ʹ���ڽӱ�+ջ
//  using ll = long long;
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int to, len, next;
//  } edge[(R << 1) + R];
//  int pre[R], tot = 0;
//  int cnt[R];
//  ll dis[R];
//  bool b[R];
//  class Stack
//  {
//  public:
//  	int top_ = 0, a[R << 1];
//  	void push(int x) { ++top_, a[top_] = x; }
//  	void pop() { --top_; }
//  	bool empty() { return !top_; } //ע������Ҫ��top_ȡ��
//  	int top() { return a[top_]; }
//  } q;
//  inline void add(int x, int y, int len)
//  {
//  	++tot;
//  	edge[tot].to = y;
//  	edge[tot].len = len;
//  	edge[tot].next = pre[x];
//  	pre[x] = tot;
//  }
//  ll spfa(int n)
//  {
//  	memset(dis, -0x3f, sizeof(dis));
//  	dis[0] = 0;
//  	b[0] = true;
//  	q.push(0);
//  	cnt[0] = 0;
//  	int from, to;
//  	register int j;
//  	while (!q.empty())
//  	{
//  		from = q.top();
//  		q.pop();
//  		b[from] = false;
//  		for (j = pre[from]; j; j = edge[j].next)
//  		{
//  			to = edge[j].to;
//  			if (dis[from] + edge[j].len > dis[to])
//  			{
//  				dis[to] = dis[from] + edge[j].len;
//  				cnt[to] = cnt[from] + 1;
//  				if (cnt[to] > n)
//  				{
//  					return -1;
//  				}
//  				if (!b[to])
//  				{
//  					q.push(to);
//  					b[to] = true;
//  				}
//  			}
//  		}
//  	}
//  	ll ans = 0;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		ans += dis[j];
//  	}
//  	return ans;
//  }
//  int main()
//  {
//  	int n, k, x, y;
//  	char opt;
//  	cin >> n >> k;
//  	register int j;
//  	for (j = 1; j <= k; ++j)
//  	{
//  		cin >> opt >> x >> y;
//  		if (opt == '1') // x==y -> x>=y+0 && y>=x+0
//  		{
//  			add(x, y, 0);
//  			add(y, x, 0);
//  			// v[x].push_back({y, 0});
//  			// v[y].push_back({x, 0});
//  		}
//  		else if (opt == '2') // x<y -> x<=y-1 -> y>=x+1
//  		{
//  			add(x, y, 1);
//  			// v[x].push_back({y, 1});
//  		}
//  		else if (opt == '3') // x>=y -> x>=y+0
//  		{
//  			add(y, x, 0);
//  			// v[y].push_back({x, 0});
//  		}
//  		else if (opt == '4') // x>y -> x>=y+1
//  		{
//  			add(y, x, 1);
//  			// v[y].push_back({x, 1});
//  		}
//  		else // opt=='5' // x<=y -> y>=x+0
//  		{
//  			add(x, y, 0);
//  			// v[x].push_back({y, 0});
//  		}
//  	}
//  	//��������ԭ��0�㣬ʹ��ÿһ���߶����ߵ����ҵ�ÿһ����ĳ���Ϊ1����Ϊÿ��С����������1���ǹ���
//  	for (j = 1; j <= n; ++j)
//  	{
//  		add(0, j, 1); // v[0].push_back({j, 1}); // dis[j]>=dis[0]+1
//  	}
//  	cout << spfa(n);
//  	return 0;
//  }
// ʹ��vector+����_��ѧ���ǣ�ʹ���ڽӱ�+ջ����vector+���ж��ܹ������ǻ����Ͳ���
// using ll = long long;
// const int R = 1e5 + 10;
// struct Node
// {
// 	int p, len;
// };
// vector<Node> v[R];
// int cnt[R];
// ll dis[R];
// bool b[R];
// queue<int> q;
// ll spfa(int n)
// {
// 	memset(dis, -0x3f, sizeof(dis));
// 	dis[0] = 0;
// 	b[0] = true;
// 	q.push(0);
// 	cnt[0] = 0;
// 	int from, to, sz;
// 	register int j;
// 	while (!q.empty())
// 	{
// 		from = q.front();
// 		q.pop();
// 		b[from] = false;
// 		sz = v[from].size();
// 		for (j = 0; j < sz; ++j)
// 		{
// 			to = v[from][j].p;
// 			if (dis[from] + v[from][j].len > dis[to])
// 			{
// 				dis[to] = dis[from] + v[from][j].len;
// 				++cnt[to];
// 				if (cnt[to] > n)
// 				{
// 					return -1;
// 				}
// 				if (!b[to])
// 				{
// 					q.push(to);
// 					b[to] = true;
// 				}
// 			}
// 		}
// 	}
// 	ll ans = 0;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		ans += dis[j];
// 	}
// 	return ans;
// }
// int main()
// {
// 	int n, k, x, y;
// 	char opt;
// 	cin >> n >> k;
// 	register int j;
// 	for (j = 1; j <= k; ++j)
// 	{
// 		cin >> opt >> x >> y;
// 		if (opt == '1') // x==y -> x>=y+0 && y>=x+0
// 		{
// 			v[x].push_back({y, 0});
// 			v[y].push_back({x, 0});
// 		}
// 		else if (opt == '2') // x<y -> x<=y-1 -> y>=x+1
// 		{
// 			v[x].push_back({y, 1});
// 			if (x == y) //��Ҫ��������������������������Ż��������TLE
// 			{
// 				cout << "-1";
// 				return 0;
// 			}
// 		}
// 		else if (opt == '3') // x>=y -> x>=y+0
// 		{
// 			v[y].push_back({x, 0});
// 		}
// 		else if (opt == '4') // x>y -> x>=y+1
// 		{
// 			v[y].push_back({x, 1});
// 			if (x == y)
// 			{
// 				cout << "-1";
// 				return 0;
// 			}
// 		}
// 		else // opt=='5' // x<=y -> y>=x+0
// 		{
// 			v[x].push_back({y, 0});
// 		}
// 	}
// 	//��������ԭ��0�㣬ʹ��ÿһ���߶����ߵ����ҵ�ÿһ����ĳ���Ϊ1����Ϊÿ��С����������1���ǹ���
// 	for (j = 1; j <= n; ++j)
// 	{
// 		v[0].push_back({j, 1}); // dis[j]>=dis[0]+1
// 	}
// 	cout << spfa(n);
// 	return 0;
// }

// P2850
// #define memset(p, v) memset(p, v, sizeof(p))
// const int R = 510;
// struct Node
// {
// 	int p, len;
// };
// vector<Node> v[R];
// int dis[R], cnt[R];
// bool b[R];
// inline void init(int n)
// {
// 	memset(b, 0);
// 	memset(cnt, 0);
// 	for (register int j = 1; j <= n; ++j)
// 	{
// 		v[j].clear();
// 	}
// }
// bool spfa(int s, int n)
// {
// 	queue<int> q;
// 	memset(dis, 0x3f);
// 	dis[s] = 0;
// 	q.push(s);
// 	b[s] = true;
// 	int from, to, sz;
// 	register int j;
// 	while (!q.empty())
// 	{
// 		from = q.front();
// 		q.pop();
// 		b[from] = false;
// 		sz = v[from].size();
// 		for (j = 0; j < sz; ++j)
// 		{
// 			to = v[from][j].p;
// 			if (dis[from] + v[from][j].len < dis[to])
// 			{
// 				dis[to] = dis[from] + v[from][j].len;
// 				++cnt[to]; //д��cnt[to] = cnt[from] + 1Ҳ�ܹ�
// 				if (cnt[to] > n)
// 				{
// 					return true;
// 				}
// 				if (!b[to])
// 				{
// 					q.push(to);
// 					b[to] = true;
// 				}
// 			}
// 		}
// 	}
// 	return false;
// }
// int main()
// {
// 	int T, n, m, w, x, y, len;
// 	bool flag;
// 	cin >> T;
// 	register int j;
// 	while (T--)
// 	{
// 		cin >> n >> m >> w;
// 		init(n);
// 		for (j = 1; j <= m; ++j)
// 		{
// 			cin >> x >> y >> len;
// 			if (x != y) //���Ի��Ż�
// 			{
// 				v[x].push_back({y, len});
// 				v[y].push_back({x, len}); //������ߣ�����������ߣ�����������ߣ�����
// 			}
// 		}
// 		for (j = 1; j <= w; ++j)
// 		{
// 			cin >> x >> y >> len;
// 			v[x].push_back({y, -len});
// 		}
// 		if (spfa(1, n)) // SPFA�и�������һ������������ԣ������Ҫ��ÿ�����������һ�黹Ҫÿ�ν�b��cnt��ʼ��
// 		{
// 			cout << "YES\n";
// 		}
// 		else
// 		{
// 			cout << "NO\n";
// 		}
// 	}
// 	return 0;
// }

// P2346_��ѧ���ǣ��������ܹ��������ύAC��˼·�ʹ�����û����ģ�
//  #define mmm(x, y) x >= 1 && x <= 4 && y >= 1 && y <= 4
//  const int xx[5] = {0, 0, 1, 0, -1},
//  		  yy[5] = {0, 1, 0, -1, 0};
//  char c[10][10];
//  int n;
//  inline bool check()
//  {
//  	for (register int j = 1; j <= 4; ++j)
//  	{
//  		if (c[j][1] == c[j][2] && c[j][2] == c[j][3] && c[j][3] == c[j][4])
//  		{
//  			return true;
//  		}
//  		if (c[1][j] == c[2][j] && c[2][j] == c[3][j] && c[3][j] == c[4][j])
//  		{
//  			return true;
//  		}
//  	}
//  	if (c[1][1] == c[2][2] && c[2][2] == c[3][3] && c[3][3] == c[4][4])
//  	{
//  		return true;
//  	}
//  	if (c[1][4] == c[2][3] && c[2][3] == c[3][2] && c[3][2] == c[4][1])
//  	{
//  		return true;
//  	}
//  	return false;
//  }
//  bool dfs(int step, int wx, int wy, int bx, int by, char lastc)
//  {
//  	if (step == n) //����Ŀ�경��
//  	{
//  		if (check())
//  		{
//  			return true;
//  		}
//  		return false;
//  	}
//  	int wtx, wty, btx, bty;
//  	for (register int j = 1; j <= 4; ++j)
//  	{
//  		wtx = wx + xx[j];
//  		wty = wy + yy[j];
//  		if (mmm(wtx, wty) && c[wtx][wty] != lastc)
//  		{
//  			swap(c[wx][wy], c[wtx][wty]);
//  			if (dfs(step + 1, wtx, wty, bx, by, (lastc == 'B' ? 'W' : 'B'))) //��������д��(dfs(step + 1, wtx, wty, bx, by, c[wtx][wty]))�����ܻ���'O'�����
//  			{
//  				return true;
//  			}
//  			swap(c[wx][wy], c[wtx][wty]);
//  		}
//  		btx = bx + xx[j];
//  		bty = by + yy[j];
//  		if (mmm(btx, bty) && c[btx][bty] != lastc)
//  		{
//  			swap(c[bx][by], c[btx][bty]);
//  			if (dfs(step + 1, wx, wy, btx, bty, (lastc == 'B' ? 'W' : 'B'))) //(dfs(step + 1, wx, wy, btx, bty, c[btx][bty]))
//  			{
//  				return true;
//  			}
//  			swap(c[bx][by], c[btx][bty]);
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	register int i, j;
//  	int sx1, sy1, sx2, sy2;
//  	for (i = 1; i <= 4; ++i)
//  	{
//  		for (j = 1; j <= 4; ++j)
//  		{
//  			cin >> c[i][j];
//  			if (c[i][j] == 'O')
//  			{
//  				if (sx1) //�Ѿ���һ����������
//  				{
//  					sx2 = i, sy2 = j;
//  				}
//  				else
//  				{
//  					sx1 = i, sy1 = j;
//  				}
//  			}
//  		}
//  	}
//  	for (n = 0;; ++n)
//  	{
//  		//��Ŀ˵����˼�ǵ�һ��������ɫ�����ԣ����Ǻ���Ĳ���Ҫ���棬��ÿ��һ���嶼Ҫ����һ�������������������һ����
//  		if (dfs(0, sx1, sy1, sx2, sy2, 'W')) //�Ⱥڣ���һ���ǰ�
//  		{
//  			break;
//  		}
//  		if (dfs(0, sx1, sy1, sx2, sy2, 'B')) //�Ȱף���һ���Ǻ�
//  		{
//  			break;
//  		}
//  	}
//  	cout << n;
//  	return 0;
//  }

// P1226
//  using ll = long long;
//  ll fun(ll x, ll p, ll m)
//  {
//  	if (p == 0)
//  	{
//  		return 1;
//  	}
//  	if (p == 1)
//  	{
//  		return x % m;
//  	}
//  	ll res = 0;
//  	if (p % 2)
//  	{
//  		res = fun(x, p / 2, m) % m;
//  		res = res * res % m;
//  		res = res * x % m;
//  	}
//  	else
//  	{
//  		res = fun(x, p / 2, m) % m;
//  		res = res * res % m;
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	ll x, p, m, ans = 0;
//  	cin >> x >> p >> m;
//  	ans = fun(x, p, m);
//  	printf("%lld^%lld mod %lld=%lld", x, p, m, ans);
//  	return 0;
//  }

// P2345_�����⣬ֻ����Ϊ����ˮ�����ܹ�
//  const int R = 2e4 + 10;
//  struct Node
//  {
//  	int v, x;
//  } a[R];
//  inline int _max(int x, int y) { return x > y ? x : y; }
//  inline int _abs(int x) { return x > 0 ? x : -x; }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j].v >> a[j].x;
//  	}
//  	unsigned long long res = 0;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = i; j <= n; ++j)
//  		{
//  			res += _max(a[j].v, a[i].v) * _abs(a[j].x - a[i].x);
//  		}
//  	}
//  	cout << res;
//  	return 0;
//  }

// P1082
//  using ll = long long;
//  void exgcd(ll a, ll b, ll &x, ll &y)
//  {
//  	if (b == 0)
//  	{
//  		x = 1;
//  		y = 0;
//  		return;
//  	}
//  	exgcd(b, a % b, x, y);
//  	ll t = x;
//  	x = y;
//  	y = t - a / b * y;
//  }
//  int main()
//  {
//  	ll a, b, x, y;
//  	cin >> a >> b;
//  	exgcd(a, b, x, y);
//  	cout << ((x % b) + b) % b;
//  	return 0;
//  }

// P1352
//  const int R = 6e3 + 10;
//  int a[R], dp[R][2], fa[R];
//  vector<int> v[R];
//  void dfs(int x)
//  {
//  	dp[x][0] = 0;
//  	dp[x][1] = a[x];
//  	int sz = v[x].size(), to;
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		to = v[x][j];
//  		dfs(to);
//  		dp[x][0] += max(dp[to][0], dp[to][1]); //��ѡ��ǰ�㣬�ӽڵ�ѡ��ѡ����
//  		dp[x][1] += dp[to][0];				   //ѡ��ǰ�㣬�ӽڵ�ֻ�ܲ�ѡ
//  	}
//  }
//  int main()
//  {
//  	int n, x, y;
//  	register int j;
//  	cin >> n;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y; // y��x�ĸ�
//  		v[y].push_back(x);
//  		fa[x] = y;
//  	}
//  	int root = 1;
//  	while (fa[root])
//  	{
//  		root = fa[root];
//  	}
//  	dfs(root);
//  	cout << max(dp[root][0], dp[root][1]);
//  	return 0;
//  }

// AT28_AtCoder���ԣ���β���뻻��
// int n, m,
// 	xx[5] = {0, 0, 1, 0, -1},
// 	yy[5] = {0, 1, 0, -1, 0}; //��1��2��3��4
// char c[30][30];
// bool b[30][30][20][10]; // x,y,cnt,drt
// void dfs(int x, int y, int cnt, int drt)
// {
// 	if (x < 1)
// 	{
// 		x = n;
// 	}
// 	else if (x > n)
// 	{
// 		x = 1;
// 	}
// 	if (y < 1)
// 	{
// 		y = m;
// 	}
// 	else if (y > m)
// 	{
// 		y = 1;
// 	}
// 	if (b[x][y][cnt][drt]) //��ֹ��ѭ��
// 	{
// 		return;
// 	}
// 	b[x][y][cnt][drt] = true;
// 	switch (c[x][y])
// 	{
// 	case '<':
// 		dfs(x + xx[3], y + yy[3], cnt, 3);
// 		break;
// 	case '>':
// 		dfs(x + xx[1], y + yy[1], cnt, 1);
// 		break;
// 	case '^':
// 		dfs(x + xx[4], y + yy[4], cnt, 4);
// 		break;
// 	case 'v':
// 		dfs(x + xx[2], y + yy[2], cnt, 2);
// 		break;
// 	case '_':
// 		if (cnt)
// 		{
// 			dfs(x + xx[3], y + yy[3], cnt, 3);
// 		}
// 		else
// 		{
// 			dfs(x + xx[1], y + yy[1], cnt, 1);
// 		}
// 		break;
// 	case '|':
// 		if (cnt)
// 		{
// 			dfs(x + xx[4], y + yy[4], cnt, 4);
// 		}
// 		else
// 		{
// 			dfs(x + xx[2], y + yy[2], cnt, 2);
// 		}
// 		break;
// 	case '?':
// 		for (register int j = 1; j <= 4; ++j)
// 		{
// 			dfs(x + xx[j], y + yy[j], cnt, j);
// 		}
// 		break;
// 	case '.':
// 		dfs(x + xx[drt], y + yy[drt], cnt, drt);
// 		break;
// 	case '@':
// 		cout << "YES\n";
// 		exit(0);
// 		break;
// 	case '+':
// 		++cnt;
// 		if (cnt > 15)
// 		{
// 			cnt = 0;
// 		}
// 		// cnt = (cnt + 1) % 16;					 //�൱��++cnt��ͬʱ������������
// 		dfs(x + xx[drt], y + yy[drt], cnt, drt); // cnt��Ϊ�������ݣ��Ͳ��û�����
// 		break;
// 	case '-':
// 		--cnt;
// 		if (cnt < 0)
// 		{
// 			cnt = 15;
// 		}
// 		// cnt = (cnt + 15) % 16; //�൱��--cnt��ͬʱ������������
// 		dfs(x + xx[drt], y + yy[drt], cnt, drt);
// 		break;
// 	default: // 0~9
// 		cnt = c[x][y] - '0';
// 		dfs(x + xx[drt], y + yy[drt], cnt, drt);
// 		break;
// 	}
// }
// int main()
// {
// 	cin >> n >> m;
// 	register int i, j;
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			cin >> c[i][j];
// 		}
// 	}
// 	dfs(1, 1, 0, 1);
// 	cout << "NO\n";
// 	return 0;
// }

// P2015
//  const int R = 110;
//  struct Node
//  {
//  	int p, len;
//  };
//  int a[R], dp[R][R], lc[R], rc[R];
//  vector<Node> v[R];
//  void build(int x, int fa)
//  {
//  	int to;
//  	for (register int j = 0; j < v[x].size(); ++j)
//  	{
//  		to = v[x][j].p;
//  		if (to != fa)
//  		{
//  			if (lc[x] == 0)
//  			{
//  				lc[x] = to;
//  				a[to] = v[x][j].len; //���ߵ�Ȩת��Ϊ�ӽ���Ȩ��������a[to]����a[x]
//  			}
//  			else if (rc[x] == 0)
//  			{
//  				rc[x] = to;
//  				a[to] = v[x][j].len;
//  			}
//  			build(to, x);
//  		}
//  	}
//  }
//  int dfs(int x, int left) //�Ա��xΪ������������left�����
//  {
//  	if (left == 0) //��ʣ�����
//  	{
//  		return 0;
//  	}
//  	if (lc[x] == 0 && rc[x] == 0) // x��Ҷ�ӽ��
//  	{
//  		return a[x];
//  	}
//  	if (dp[x][left] != -1)
//  	{
//  		return dp[x][left];
//  	}
//  	for (register int k = 0; k < left; ++k) //�Ӳ�����㣨k=0�������Լ���һ����㣬����k<=left-1
//  	{
//  		dp[x][left] = max(dp[x][left], dfs(lc[x], k) + dfs(rc[x], left - 1 - k) + a[x]);
//  	}
//  	return dp[x][left];
//  }
//  int main()
//  {
//  	int n, q, x, y, len;
//  	cin >> n >> q;
//  	register int j;
//  	for (j = 1; j < n; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		v[x].push_back({y, len});
//  		v[y].push_back({x, len});
//  	}
//  	memset(dp, -1, sizeof(dp));
//  	build(1, 0);
//  	cout << dfs(1, q + 1);
//  	return 0;
//  }

// P2016
// ʹ��vector����_��ע��
//  const int R = 1510;
//  vector<int> v[R];
//  bitset<R> b; //��ǷǸ����
//  int dp[R][2];
//  void dfs(int x)
//  {
//  	dp[x][0] = 0;
//  	dp[x][1] = 1;
//  	int to, sz = v[x].size();
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		to = v[x][j];
//  		dfs(to);
//  		dp[x][0] += dp[to][1];				   //��ǰ�㲻ѡ���ӽ���Ҫѡ
//  		dp[x][1] += min(dp[to][0], dp[to][1]); //��ǰ��ѡ���ӽ��ѡ��ѡ���У���������Сֵ
//  	}
//  }
//  int main()
//  {
//  	int n, x, num, y;
//  	cin >> n;
//  	register int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> x >> num;
//  		for (j = 1; j <= num; ++j)
//  		{
//  			cin >> y;
//  			v[x].push_back(y);
//  			b[y] = true;
//  		}
//  	}
//  	int root = 0;
//  	for (j = 0; j < n; ++j) //��Ŀ�н��ı��Ϊ0~n-1
//  	{
//  		if (!b[j])
//  		{
//  			root = j;
//  			break;
//  		}
//  	}
//  	dfs(root);
//  	cout << min(dp[root][0], dp[root][1]);
//  	return 0;
//  }
// ʹ���ڽӱ����
//  const int R = 1510;
//  struct Node
//  {
//  	int to, next;
//  } edge[R];
//  bitset<R> b;
//  int dp[R][2], pre[R], tot;
//  inline void add(int x, int y)
//  {
//  	++tot;
//  	edge[tot] = {y, pre[x]};
//  	pre[x] = tot;
//  }
//  void dfs(int x)
//  {
//  	dp[x][0] = 0;
//  	dp[x][1] = 1;
//  	int to;
//  	for (register int j = pre[x]; j; j = edge[j].next)
//  	{
//  		to = edge[j].to;
//  		dfs(to);
//  		dp[x][0] += dp[to][1];
//  		dp[x][1] += min(dp[to][0], dp[to][1]);
//  	}
//  }
//  int main()
//  {
//  	int n, x, num, y;
//  	cin >> n;
//  	register int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> x >> num;
//  		for (j = 1; j <= num; ++j)
//  		{
//  			cin >> y;
//  			add(x, y);
//  			b[y] = true;
//  		}
//  	}
//  	int root = 0;
//  	for (j = 0; j < n; ++j)
//  	{
//  		if (!b[j])
//  		{
//  			root = j;
//  			break;
//  		}
//  	}
//  	dfs(root);
//  	cout << min(dp[root][0], dp[root][1]);
//  	return 0;
//  }

// ��P2168_��������ģ����
//  using ll = long long;
//  struct Node
//  {
//  	ll w, h;
//  	bool operator<(const Node &x) const
//  	{
//  		return (w != x.w ? w > x.w : h > x.h); //ע�⣬������w!=x.w������Ϊ�˷�ֹ������û���дif
//  	}
//  };
//  priority_queue<Node> q;
//  int main()
//  {
//  	ll n, k, x, ans1 = 0, ans2 = 0, maxh;
//  	register int j;
//  	cin >> n >> k;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		q.push({x, 1}); //���е��Ĭ�ϸ߶�Ϊ1
//  	}
//  	if ((n - 1) % (k - 1)) //ÿ��ȡ��k���㣬��push��1���㣬�൱��ÿ��ȡ��k-1���㣻��q�б�����n���㣬���������1���㣬����ȡ��n-1��
//  	{
//  		x = (k - 1) - (n - 1) % (k - 1); //ÿ��ȡ���Ľ����-���һ��ʣ�µĽ����=Ҫ����Ľ����
//  		for (j = 1; j <= x; ++j)
//  		{
//  			q.push({0, 1}); //Ϊ�˲�Ӱ�����������Ȩ�ظ�ֵΪ0
//  		}
//  	}
//  	while (q.size() > 1)
//  	{
//  		maxh = x = 0;
//  		for (j = 1; j <= k; ++j)
//  		{
//  			x += q.top().w;
//  			maxh = max(maxh, q.top().h);
//  			q.pop();
//  		}
//  		q.push({x, maxh + 1});
//  		ans1 += x;
//  		ans2 = max(ans2, maxh);
//  	}
//  	cout << ans1 << "\n"
//  		 << ans2;
//  	return 0;
//  }

// P1993
//  const int R = 5e3 + 10;
//  struct Node
//  {
//  	int to, len;
//  };
//  int dis[R], cnt[R], n;
//  bitset<R> b;
//  vector<Node> v[R];
//  inline bool spfa() //�·�����������򷵻�true
//  {
//  	memset(dis, -0x3f, sizeof(dis));
//  	stack<int> q; //��ѧ���ǣ���stack�ܹ�����queue��TLE
//  	q.push(0);
//  	b[0] = true;
//  	dis[0] = 0;
//  	int from, to, sz;
//  	register int j;
//  	while (!q.empty())
//  	{
//  		from = q.top();
//  		q.pop();
//  		b[from] = false;
//  		sz = v[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].to;
//  			if (dis[from] + v[from][j].len > dis[to])
//  			{
//  				dis[to] = dis[from] + v[from][j].len;
//  				++cnt[to];
//  				if (cnt[to] >= n)
//  				{
//  					return true;
//  				}
//  				if (!b[to])
//  				{
//  					q.push(to);
//  					b[to] = true;
//  				}
//  			}
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int m, x, y, c;
//  	cin >> n >> m;
//  	register int j;
//  	char t;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> t;
//  		if (t == '1')
//  		{
//  			cin >> x >> y >> c;
//  			v[x].push_back({y, c});
//  		}
//  		else if (t == '2')
//  		{
//  			cin >> x >> y >> c;
//  			v[y].push_back({x, -c});
//  		}
//  		else // t=='3'
//  		{
//  			cin >> x >> y;
//  			v[x].push_back({y, 0});
//  			v[y].push_back({x, 0});
//  		}
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		v[0].push_back({j, 0});
//  	}
//  	if (spfa())
//  	{
//  		cout << "No";
//  	}
//  	else
//  	{
//  		cout << "Yes";
//  	}
//  	return 0;
//  }

// ��P5507_���ۺ�����ҪŪ����
//  struct Node
//  {
//  	string state;
//  	int step, guess, ans[18]; //��Ŀ˵���и����������Ϊ17
//  	bool operator<(const Node &x) const
//  	{
//  		return step + guess > x.step + x.guess;
//  	}
//  };
//  inline int cnt(string state) //����Ҫת��Ŀ��״̬���ٻ��輸��
//  {
//  	int res = 0;
//  	for (register int j = 1; j <= 12; ++j)
//  	{
//  		res += (5 - (state[j] ^ '0')) % 4;//���������Ҫ��Ƴɻ��ж��ٲ���1������Ҫ�����ÿ���㵽1���ٻ���Ҫ�Ĳ���
//  	}
//  	return res;
//  }
//  priority_queue<Node> q;
//  unordered_map<string, bool> m;
//  int main()
//  {
//  	int a[13][5] = {0}; //��¼��ť֮���Ӱ�����
//  	char c;
//  	register int i, j;
//  	Node temp, next;
//  	temp.state += ' ';
//  	for (i = 1; i <= 12; ++i)
//  	{
//  		cin >> c;
//  		temp.state = temp.state + c;
//  		for (j = 1; j <= 4; ++j)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	m[temp.state] = true;
//  	temp.step = 0;
//  	temp.guess = cnt(temp.state);
//  	q.push(temp);
//  	while (!q.empty())
//  	{
//  		temp = q.top();
//  		q.pop();
//  		if (!temp.guess)
//  		{
//  			cout << temp.step << "\n";
//  			for (j = 1; j <= temp.step; ++j)
//  			{
//  				cout << temp.ans[j] << ' ';
//  			}
//  			break;
//  		}
//  		for (j = 1; j <= 12; ++j)
//  		{ // x+1�滻Ϊx%4+1
//  			next = temp;
//  			next.state[a[j][next.state[j] ^ '0']] =							   //^'0'���ַ�תΪ����
//  				((next.state[a[j][next.state[j] ^ '0']] ^ '0') % 4 + 1) + '0'; //�ȴ���ð�ť��Ӱ��İ�ť
//  			next.state[j] = ((next.state[j] ^ '0') % 4 + 1) + '0';
//  			if (!m[next.state]) //��û�������״̬�Ž�������Ĳ���
//  			{
//  				m[next.state] = true;
//  				++next.step;
//  				next.ans[next.step] = j;
//  				next.guess = cnt(next.state);
//  				q.push(next);
//  			}
//  		}
//  	}
//  	return 0;
//  }

// P1179
//  int get(int l, int r, int a[])
//  {
//  	int res = 0;
//  	for (register int j = l; j >= r; --j)
//  		res = res * 10 + a[j];
//  	return res;
//  }
//  int pow10(int p)
//  {
//  	int res = 1;
//  	while (p--)
//  		res *= 10;
//  	return res;
//  }
//  int dp(int n, int a[])
//  {
//  	if (n == 0)
//  		return 0;
//  	int k = 0;
//  	while (n)
//  	{
//  		a[++k] = n % 10;
//  		n /= 10;
//  	}
//  	int res = 0;
//  	for (register int j = k; j >= 1; --j)
//  	{
//  		if (j != k)
//  			res += get(k, j + 1, a) * pow10(j - 1);
//  		if (2 == a[j])
//  			res += get(j - 1, 1, a) + 1;
//  		else if (2 < a[j])
//  			res += pow10(j - 1);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int l, r, a[10];
//  	cin >> l >> r;
//  	cout << dp(r, a) - dp(l - 1, a);
//  	return 0;
//  }

// P2602_��λDPģ����
//  using ll = long long;
//  int a[20];
//  ll get(int l, int r)
//  {
//  	ll res = 0;
//  	for (register int j = l; j >= r; --j)
//  		res = res * 10 + a[j];
//  	return res;
//  }
//  inline ll pow10(int p)
//  {
//  	ll res = 1;
//  	while (p--)
//  		res *= 10;
//  	return res;
//  }
//  inline ll dp(ll n, int x) //nһ��Ҫ��longlong������
//  {
//  	if (n == 0)
//  		return 0;
//  	int k = 0;
//  	while (n)
//  	{
//  		a[++k] = n % 10;
//  		n /= 10;
//  	}
//  	ll res = 0;
//  	for (register int j = k - !x; j >= 1; --j)
//  	{
//  		if (j != k)
//  			res += (get(k, j + 1) - !x) * pow10(j - 1);
//  		if (x == a[j])
//  			res += get(j - 1, 1) + 1;
//  		else if (x < a[j])
//  			res += pow10(j - 1);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	ll l, r;
//  	cin >> l >> r;
//  	for (register int j = 0; j <= 9; ++j)
//  		cout << dp(r, j) - dp(l - 1, j) << ' ';
//  	return 0;
//  }

// ���P2082_U59472_�������Һܾõ���
// ��������
//   using ll = long long;
//   const int R = 1e5 + 10;
//   struct Node
//   {
//   	char sqrb;
//   	ll x;
//   	bool operator<(const Node &a) const
//   	{
//   		if (x == a.x)
//   			return sqrb < a.sqrb;
//   		else
//   			return x < a.x;
//   	}
//   } a[R << 1];
//   class CStack
//   {
//   	Node sta[R];
//   	int _top = 0;
//   public:
//   	Node top() { return sta[_top]; }
//   	void pop() { --_top; }
//   	void push(Node x) { sta[++_top] = x; }
//   	int size() { return _top; }
//   } sta;
//   int main()
//   {
//   	int n;
//   	cin >> n;
//   	int l, r, k = 0;
//   	register int j;
//   	for (j = 1; j <= n; ++j)
//   	{
//   		cin >> l >> r;
//   		a[++k] = {'[', l};
//   		a[++k] = {']', r};
//   	}
//   	sort(a + 1, a + k + 1);
//   	ll ans = 0;
//   	for (j = 1; j <= k; ++j)
//   	{
//   		if (a[j].sqrb == '[')
//   		{
//   			sta.push({'[', a[j].x});
//   		}
//   		else // a[j].sqrb==']'
//   		{
//   			if (sta.size() == 1) //û���ص�����
//   			{
//   				ans += a[j].x - sta.top().x + 1;
//   				sta.pop();
//   			}
//   			else
//   			{
//   				sta.pop();
//   			}
//   		}
//   	}
//   	cout << ans;
//   	return 0;
//   }
// �������
//  using ll = long long;
//  struct Node
//  {
//  	ll l, r;
//  	mutable bool val;
//  	Node(ll a, ll b = 0, bool c = false) { l = a, r = b, val = c; }
//  	bool operator<(const Node &x) const
//  	{
//  		return l < x.l;
//  	}
//  };
//  using st = set<Node>::iterator;
//  set<Node> s;
//  st split(ll pos)
//  {
//  	st it = s.lower_bound(Node(pos));
//  	if (it != s.end() && it->l == pos)
//  		return it;
//  	--it; //�����ˣ�����
//  	ll l = it->l, r = it->r, v = it->val;
//  	s.erase(it);
//  	s.insert(Node(l, pos - 1, v));
//  	return s.insert(Node(pos, r, v)).first;
//  }
//  void assign(ll l, ll r, ll v)
//  {
//  	st it2 = split(r + ll(1)), it1 = split(l); //��Ҫ�ȿ��ҵ���������Ϊsplit���ص��Ƿָ�����ҽڵ㣬ԭ���ᱻɾ������������������������  ��  �ܣ���һ����ʧЧ
//  	s.erase(it1, it2);
//  	s.insert(Node(l, r, v));
//  }
//  ll query(ll l, ll r)
//  {
//  	st it2 = split(r + ll(1)), it1 = split(l);
//  	ll res = 0;
//  	for (; it1 != it2; ++it1)
//  	{
//  		res += (it1->r - it1->l + 1) * ll(it1->val);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	ll n, l, r;
//  	cin >> n;
//  	s.insert(Node(1, 1e17 + 1, 0));
//  	for (int j = 1; j <= n; ++j)
//  	{
//  		cin >> l >> r;
//  		assign(l, r, 1);
//  	}
//  	cout << query(1, ll(1e17 + 1));
//  	return 0;
//  }

// P8306
//  const int R = 3e6 + 10;
//  class CTrie
//  {
//  	int ch[R][65], cnt[R], tot = 0;
//  	int ctod(char c) //2.һ��Ҫ���л�ӳ�䣬������һЩ���WA
//  	{
//  		if (c >= 'a' && c <= 'z')
//  			return c - 'a' + 1; // a~zӳ��Ϊ1~26
//  		else if (c >= 'A' && c <= 'Z')
//  			return c - 'A' + 27; // A~Zӳ��Ϊ27~52
//  		else
//  			return c - '0' + 53; // 0~9ӳ��Ϊ53~62
//  	}
//  public:
//  	void rset() //1.ע��һ����Ҫ��memset�������TLE
//  	{
//  		register int i, j;
//  		for (i = 0; i <= tot; ++i)
//  		{
//  			for (j = 1; j < 65; ++j)
//  			{
//  				ch[i][j] = 0;
//  			}
//  			cnt[i] = 0;
//  		}
//  		tot = 0;
//  	}
//  	void add(char s[])
//  	{
//  		int p = 0, x;
//  		for (register int j = 0; s[j]; ++j)
//  		{
//  			x = ctod(s[j]);
//  			if (!ch[p][x])
//  			{
//  				ch[p][x] = ++tot;
//  			}
//  			++cnt[p];
//  			p = ch[p][x];
//  		}
//  		++cnt[p];
//  	}
//  	int query(char s[])
//  	{
//  		int p = 0, x;
//  		for (register int j = 0; s[j]; ++j)
//  		{
//  			x = ctod(s[j]);
//  			if (!ch[p][x])
//  			{
//  				return 0;
//  			}
//  			p = ch[p][x];
//  		}
//  		return cnt[p];
//  	}
//  } tree;
//  char s[R];
//  int main()
//  {
//  	int T, n, q;
//  	cin >> T;
//  	register int j;
//  	while (T--)
//  	{
//  		tree.rset();
//  		cin >> n >> q;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			cin >> s;
//  			tree.add(s);
//  		}
//  		for (j = 1; j <= q; ++j)
//  		{
//  			cin >> s;
//  			cout << tree.query(s) << "\n";
//  		}
//  	}
//  	return 0;
//  }

// ��P2014_���α���DP
//  const int R = 310;
//  vector<int> v[R];
//  int a[R], dp[R][R], m; // dp[x][j]��ʾ��xΪ����������������j����㣬�ܹ�ȡ�������ֵ
//  void dfs(int x)
//  {
//  	dp[x][1] = a[x];
//  	register int i, j, k;
//  	int sz = v[x].size(), to;
//  	for (i = 0; i < sz; ++i)
//  	{
//  		dfs(v[x][i]); //�ȴ����ӽ��
//  	}
//  	for (i = 0; i < sz; ++i)
//  	{
//  		to = v[x][i];
//  		for (j = m; j >= 1; --j) //��xΪ����������������1�����
//  		{
//  			for (k = 0; k < j; ++k)
//  			{
//  				dp[x][j] = max(dp[x][j], dp[x][j - k] + dp[to][k]); // xΪ������������j-k����㣬��toΪ������������k�����
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, fa;
//  	cin >> n >> m;
//  	++m; // 0�Ž�������һ��
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> fa >> a[j];
//  		v[fa].push_back(j);
//  	}
//  	dfs(0);
//  	cout << dp[0][m];
//  	return 0;
//  }

// LGR-117 ���8������ II
// div.2A_P8474_��һ������
// using ll = long long;
// const int MOD = 1e9 + 7, R = 1e7 + 10;
// ll arrPow2[R], ans[R];
// int main()
// {
// 	int n;
// 	cin >> n;
// 	register int j;
// 	arrPow2[0] = 1;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		arrPow2[j] = arrPow2[j - 1] * 2 % MOD;
// 	}
// 	ans[1] = 1;
// 	for (j = 2; j <= n; ++j)
// 	{
// 		ans[j] = (((arrPow2[j] - 1) % MOD) * (ans[j - 1] % MOD)) % MOD;
// 	}
// 	cout << ans[n];
// 	return 0;
// }

// ��P1763_ע��struct������������͹��캯����ʹ��
//  #define reg register int
//  const int R = 1e7 + 10;
//  int temp[R], ans[R], maxdep = 1;
//  inline int gcd(int x, int y)
//  {
//  	int z;
//  	while (y)
//  	{
//  		z = x % y;
//  		x = y;
//  		y = z;
//  	}
//  	return x;
//  }
//  struct Node
//  {
//  	int a, b;
//  	Node(int c, int d)
//  	{
//  		int g = gcd(c, d);
//  		a = c / g, b = d / g;
//  	}
//  	Node() { a = 0, b = 1; } //һ��Ҫд��䣬����ᱨ��
//  	bool operator<(const Node &t) const { return a * t.b < b * t.a; }
//  	bool operator<=(const Node &t) const { return a * t.b <= b * t.a; }
//  	bool operator>(const Node &t) const { return a * t.b > b * t.a; }
//  	bool operator>=(const Node &t) const { return a * t.b >= b * t.a; }
//  	bool operator==(const Node &t) const { return a * t.b == b * t.a; }
//  	Node operator+(const Node &t) const
//  	{
//  		int fz = (a * t.b) + (b * t.a), fm = b * t.b, g = gcd(fz, fm);
//  		return {fz / g, fm / g};
//  	}
//  	Node operator-(const Node &t) const
//  	{
//  		int fz = (a * t.b) - (b * t.a), fm = b * t.b, g = gcd(fz, fm);
//  		return {fz / g, fm / g};
//  	}
//  } x;
//  void dfs(int p, Node sum, int last)
//  {
//  	if (sum > x || p > maxdep)
//  	{
//  		return;
//  	}
//  	if (p == maxdep)
//  	{
//  		Node left = x - sum;
//  		if (left.a == 1 && left.b <= 1e7 && left.b > last)
//  		{
//  			if (left.b < ans[maxdep])
//  			{
//  				for (reg j = 1; j < maxdep; ++j)
//  				{
//  					ans[j] = temp[j];
//  				}
//  				ans[maxdep] = left.b;
//  			}
//  		}
//  		return;
//  	}
//  	for (reg j = last + 1; j <= ans[maxdep] && sum + Node(maxdep - p + 1, j) >= x; ++j)
//  	{
//  		temp[p] = j;
//  		dfs(p + 1, sum + Node(1, j), j);
//  	}
//  	return;
//  }
//  int main()
//  {
//  	int a, b;
//  	cin >> a >> b;
//  	x = Node(a, b);
//  	while (true)
//  	{
//  		ans[maxdep] = INT_MAX;
//  		dfs(1, {0, 1}, 0);
//  		if (ans[maxdep] != INT_MAX)
//  		{
//  			for (reg j = 1; j <= maxdep; ++j)
//  			{
//  				cout << ans[j] << ' ';
//  			}
//  			return 0;
//  		}
//  		++maxdep;
//  	}
//  	return 0;
//  }

// ��P1516
//  /*������ã�(x+mt)-(y+nt)=lk
//  ����������(n-m)t+lk=x-y
//  ��a=n-m,b=l,c=x-y
//  ��ԭʽת��Ϊat+bk=c
//  ��at+bk=gcd(a,b)��õ���t��Ϊ�÷���һ����
//  ������ԭ��Ҫ��at+bk=c��һ���⣬����Ϊ������gcd(a,b)����������Ҫͬʱ��c/gcd(a,b)
//  ��������֮��t��Ӧ�õ���t*(c/gcd(a,b))��ע��Ҫ��t�Ļ����ϳˣ�*/
//  using ll = long long;
//  ll exgcd(ll a, ll b, ll &x, ll &y)
//  {
//  	if (b == 0)
//  	{
//  		x = 1;
//  		y = 0;
//  		return a;
//  	}
//  	ll d = exgcd(b, a % b, x, y);
//  	ll t = x;
//  	x = y;
//  	y = t - a / b * y;
//  	return d;
//  }
//  int main()
//  {
//  	ll x, y, m, n, l, x1, y1;
//  	cin >> x >> y >> m >> n >> l;
//  	ll a = n - m, b = l, c = x - y;
//  	if (a < 0)
//  	{
//  		a = -a;
//  		c = -c;
//  	}
//  	ll d = exgcd(a, b, x1, y1), r = b / d;
//  	x1 = x1 * (c / d);
//  	if (a == 0 || c % d != 0)
//  	{
//  		cout << "Impossible";
//  		return 0;
//  	}
//  	cout << (x1 % r + r) % r;
//  	return 0;
//  }

// P1577_������������int
//  const int R = 1e4 + 10;
//  int n, k, len[R];
//  inline bool check(int leng)
//  {
//  	if (leng == 0)
//  		return true;
//  	int tot = 0;
//  	for (register int j = 1; j <= n; ++j)
//  		tot += len[j] / leng;
//  	return tot >= k;
//  }
//  int main()
//  {
//  	cin >> n >> k;
//  	register int j;
//  	double x;
//  	int mid, left = 0, right = INT_MAX;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		len[j] = x * 100.0;
//  	}
//  	while (left <= right)
//  	{
//  		mid = (left + right) / 2;
//  		if (check(mid))
//  			left = mid + 1;
//  		else
//  			right = mid - 1;
//  	}
//  	cout << (right / 100.0);
//  	return 0;
//  }

// P1896
//  using ll = long long;
//  const int N = 12, S = (1 << 10) + 10, K = 110;
//  ll dp[N][S][K];
//  /*dp[i][x][c]��ʾǰi�в��õ�x�ַ�������ǰi�а�c����ʿ���ܷ�����
//  dp[i][x][c]=sum(dp[i-1][1~tot][c-cnt[x]])*/
//  int s[S], tot, cnt[S]; //��һ�ַ�����Ӧ����һ��������
//  // cnt[x]��ʾ��x�ַ���������һ���ڷż�����ʿ
//  int main()
//  {
//  	int n, k;
//  	cin >> n >> k;
//  	register int i, j, x, c, y;
//  	for (i = 0; i < (1 << n); ++i) // 0~2^n-1����2^n�ַ��������д��i <= (1 << n)���������
//  	{
//  		if (!(i & (i << 1)))
//  		{
//  			s[++tot] = i;
//  			for (j = 0; j <= n; ++j)
//  			{
//  				if (i & (1 << j))
//  				{
//  					++cnt[tot];
//  				}
//  			}
//  		}
//  	}
//  	dp[0][1][0] = 1;
//  	for (i = 1; i <= n + 1; ++i)
//  	{
//  		for (x = 1; x <= tot; ++x)
//  		{
//  			for (c = 0; c <= k; ++c)
//  			{
//  				if (c >= cnt[x])
//  				{
//  					for (y = 1; y <= tot; ++y)
//  					{
//  						if (!(s[x] & s[y]) && !(s[x] & (s[y] << 1)) && !(s[x] & (s[y] >> 1))) //����ͻ
//  						{
//  							dp[i][x][c] += dp[i - 1][y][c - cnt[x]];
//  						}
//  					}
//  				}
//  			}
//  		}
//  	}
//  	cout << dp[n + 1][1][k];
//  	return 0;
//  }

// SP2
//  bool pr(int x)
//  {
//  	if (x == 0 || x == 1)
//  		return false;
//  	for (int j = 2; j <= sqrt(x); ++j)
//  		if (x % j == 0)
//  			return false;
//  	return true;
//  }
//  int main()
//  {
//  	int T, m, n;
//  	cin >> T;
//  	bool flag;
//  	register int i, j;
//  	while (T--)
//  	{
//  		cin >> m >> n;
//  		for (i = m; i <= n; ++i)
//  			if (pr(i))
//  				cout << i << "\n";
//  		cout << "\n";
//  	}
//  	return 0;
//  }

// P8584
// using ll = long long;
// ll gcd(ll a, ll b)
// {
// 	ll c;
// 	while (a % b != 0)
// 	{
// 		c = a % b;
// 		a = b;
// 		b = c;
// 	}
// 	return abs(b);
// }
// struct Node
// {
// 	ll a, b;
// 	Node(int c, int d)
// 	{
// 		ll g = gcd(c, d);
// 		a = c / g, b = d / g;
// 	}
// 	Node() { a = 0, b = 1; }
// 	Node operator+(const Node &t) const
// 	{
// 		ll fz = (a * t.b) + (b * t.a), fm = b * t.b, g = gcd(fz, fm);
// 		return {fz / g, fm / g};
// 	}
// 	Node operator-(const Node &t) const
// 	{
// 		ll fz = (a * t.b) - (b * t.a), fm = b * t.b, g = gcd(fz, fm);
// 		return {fz / g, fm / g};
// 	}
// } a[1010];
// int opt[1010];
// int main()
// {
// 	Node sum = {0, 1};
// 	int n, x, y;
// 	ll g;
// 	cin >> n;
// 	register int j;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> x >> y >> opt[j];
// 		a[j] = {x, y};
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		if (opt[j] == 1)
// 			sum = sum + a[j];
// 		else
// 			sum = sum - a[j];
// 	}
// 	if (sum.b == 1)
// 		cout << sum.a;
// 	else
// 		cout << sum.a << '/' << sum.b;
// 	return 0;
// }

// P2085
//  #define a fun[j].a1
//  #define b fun[j].b1
//  #define c fun[j].c1
//  const int R = 1e4 + 10;
//  struct Fun
//  {
//  	int a1, b1, c1;
//  } fun[R];
//  int x[R];
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a >> b >> c;
//  		x[j] = 1; //��ʵ��Ŀ���ľ���һ��ÿ���ڵ��������Ķ�ά���飬�����������������С��m����
//  				  // x[]�൱��һ��pointer������https://www.luogu.com.cn/blog/LonecharmRiver/SmallestFx
//  	}
//  	int fmin, xmin;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		fmin = INT_MAX;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (a * x[j] * x[j] + b * x[j] + c < fmin)
//  			{
//  				fmin = a * x[j] * x[j] + b * x[j] + c;
//  				xmin = j;
//  			}
//  		}
//  		cout << fmin << ' ';
//  		++x[xmin];
//  	}
//  	return 0;
//  }

// AT_arc044_a_����ע���1���жϣ�����
//  bool pr(int n)
//  {
//  	if (n == 1)
//  		return false;
//  	for (register int j = 2; j <= sqrt(n); ++j)
//  		if (n % j == 0)
//  			return false;
//  	return true;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	if (pr(n))
//  		cout << "Prime\n";
//  	else if (n == 1)
//  		cout << "Not Prime\n";
//  	else
//  	{
//  		if (n % 2 != 0 && n % 5 != 0 && n % 3 != 0)
//  			cout << "Prime\n";
//  		else
//  			cout << "Not Prime\n";
//  	}
//  	return 0;
//  }

// P5142_�������߶������еı���һ���ǵó�ʼ��������
// using ll = long long;
// const int R = 1e5 + 1e2;
// const ll M = 1e9 + 7;
// struct Node
// {
// 	int l, r;
// 	ll sum[2];
// } s[R << 2]; //�ڶ�ά��ʾ����ͣ�0��������ƽ���ĺͣ�1��
// ll a[R];
// inline void pushup(int k)
// {
// 	s[k].sum[0] = (s[k << 1].sum[0] + s[k << 1 | 1].sum[0]) % M;
// 	s[k].sum[1] = (s[k << 1].sum[1] + s[k << 1 | 1].sum[1]) % M;
// }
// void build(int k, int l, int r)
// {
// 	s[k].l = l;
// 	s[k].r = r;
// 	if (l == r)
// 	{
// 		s[k].sum[0] = a[l] % M;		   //ά����
// 		s[k].sum[1] = a[l] * a[l] % M; //ά��ƽ���ĺ�
// 		return;
// 	}
// 	int mid = (l + r) >> 1;
// 	build(k << 1, l, mid);
// 	build(k << 1 | 1, mid + 1, r);
// 	pushup(k);
// }
// void update(int k, int p, ll v)
// {
// 	if (s[k].l == p && s[k].r == p)
// 	{
// 		s[k].sum[0] = v % M;
// 		s[k].sum[1] = v * v % M;
// 		return;
// 	}
// 	int mid = (s[k].l + s[k].r) >> 1;
// 	if (p <= mid)
// 		update(k << 1, p, v);
// 	else
// 		update(k << 1 | 1, p, v);
// 	pushup(k);
// }
// ll query(int k, int x, int y, int tp)
// {
// 	if (s[k].l >= x && s[k].r <= y)
// 	{
// 		return s[k].sum[tp] % M;
// 	}
// 	int mid = (s[k].l + s[k].r) >> 1;
// 	ll res = 0; //��������ʼ�����������������ֻ�������������У�res�ͻ�õ�����Ľ��
// 	if (x <= mid)
// 		res = query(k << 1, x, y, tp) % M;
// 	if (y > mid)
// 		res = (res + query(k << 1 | 1, x, y, tp)) % M;
// 	return res;
// }
// void exgcd(ll a, ll b, ll &x, ll &y)
// {
// 	if (b == 0)
// 	{
// 		x = 1, y = 0;
// 		return;
// 	}
// 	exgcd(b, a % b, x, y);
// 	ll t = x;
// 	x = y;
// 	y = t - a / b * y;
// }
// int main()
// {
// 	int n, m, c;
// 	ll x, y, t, sum0, sum1, avg, inv;
// 	cin >> n >> m;
// 	register int j;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> a[j];
// 	}
// 	build(1, 1, n);
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> c >> x >> y;
// 		if (c == 1)
// 			update(1, x, y % M);
// 		else
// 		{
// 			sum0 = query(1, x, y, 0) % M; //��
// 			sum1 = query(1, x, y, 1) % M; //ƽ���ĺ�
// 			exgcd(y - x + 1, M, inv, y);
// 			avg = sum0 * inv % M;
// 			t = sum1 * inv % M - avg * avg % M;
// 			t = (t % M + M) % M;
// 			cout << t << "\n";
// 		}
// 	}
// 	return 0;
// }

// P2880
//  const int R = 5e4 + 10, L = 17;
//  int stmax[R][L], stmin[R][L], h[R];
//  int main()
//  {
//  	int n, q, l, r;
//  	cin >> n >> q;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> h[j];
//  		stmax[j][0] = stmin[j][0] = h[j];
//  	}
//  	int k, lg;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		for (i = 1; i + pow(2, j) - 1 <= n; ++i)
//  		{
//  			k = i + pow(2, j - 1);
//  			stmax[i][j] = max(stmax[i][j - 1], stmax[k][j - 1]);
//  			stmin[i][j] = min(stmin[i][j - 1], stmin[k][j - 1]);
//  		}
//  	}
//  	for (j = 1; j <= q; ++j)
//  	{
//  		cin >> l >> r;
//  		lg = log2(r - l + 1); //��Ϊȡ����������
//  		k = r - pow(2, lg) + 1;
//  		cout << max(stmax[l][lg], stmax[k][lg]) - min(stmin[l][lg], stmin[k][lg]) << '\n';
//  	}
//  	return 0;
//  }

// P2671_�ο�https://www.luogu.com.cn/blog/_post/86810��https://www.luogu.com.cn/blog/_post/183452���ⷨ����Ҳ�ɲο�https://www.luogu.com.cn/blog/_post/178267��
// const int R = 1e5 + 10, MOD = 10007;
// struct Node
// {
// 	int x, num; // v�б��x��number[x]��sum��xǰ׺��x��numberǰ׺��number[x]
// };
// vector<Node> v[R][2], sum[R][2];
// int num[R];
// int main()
// {
// 	int n, m, color;
// 	cin >> n >> m;
// 	register int j, i;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> num[j];
// 		num[j] %= MOD; //��ʱȡ��
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> color;
// 		v[color][j & 1].push_back({j, num[j]}); //�˴�&1��%2��Ч����һ����
// 	}
// 	int ans = 0, sz, resx, resnum;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		sz = v[j][0].size();
// 		if (sz < 2) //����������������Ԫ��ʱ�Ż��й��׷�ֵ
// 		{
// 			continue;
// 		}
// 		resx = resnum = 0;
// 		// sum[j][0][0].x = v[j][0][0].x;
// 		// sum[j][0][0].num = v[j][0][0].num;
// 		for (i = 0; i < sz; ++i)
// 		{
// 			// sum[j][0][i].x = (sum[j][0][i - 1].x + v[j][0][i].x) % MOD;
// 			resx = (resx + v[j][0][i].x) % MOD;
// 			resnum = (resnum + v[j][0][i].num) % MOD;
// 		}
// 		ans = (ans + resx * resnum) % MOD;
// 		for (i = 0; i < sz; ++i)
// 		{
// 			resx = ((v[j][0][i].x % MOD) * v[j][0][i].num % MOD * (sz - 2) % MOD) % MOD;
// 			ans = (ans + resx) % MOD;
// 		}
// 	}
// 	for (j = 1; j <= m; ++j)
// 	{
// 		sz = v[j][1].size();
// 		if (sz < 2)
// 		{
// 			continue;
// 		}
// 		resx = resnum = 0;
// 		for (i = 0; i < sz; ++i)
// 		{
// 			resx = (resx + v[j][1][i].x) % MOD;
// 			resnum = (resnum + v[j][1][i].num) % MOD;
// 		}
// 		ans = (ans + resx * resnum) % MOD;
// 		for (i = 0; i < sz; ++i)
// 		{
// 			resx = ((v[j][1][i].x % MOD) * v[j][1][i].num % MOD * (sz - 2) % MOD) % MOD;
// 			ans = (ans + resx) % MOD;
// 		}
// 	}
// 	cout << ans % MOD;
// 	return 0;
// }

// ��P1310
//  //+�൱��|��*�൱��&�����ȼ���()>*>+
//  const int R = 1e5 + 10, MOD = 10007;
//  char c[R];
//  template <typename T>
//  class CStack
//  {
//  	T sta[R];
//  	int tp = 0;
//  public:
//  	T top0() { return sta[tp]; }	 //������ϵ�Ԫ��
//  	T top1() { return sta[tp - 1]; } //���صڶ����ϵ�Ԫ��
//  	void pop() { --tp; }
//  	void push(T a) { sta[++tp] = a; }
//  	void clear() { tp = 0; }
//  };
//  CStack<char> stac;
//  CStack<int> sta0, sta1;
//  void solve()
//  {
//  	int ans0, ans1,
//  		top0_0 = sta0.top0(), top0_1 = sta0.top1(),
//  		top1_0 = sta1.top0(), top1_1 = sta1.top1();
//  	if (stac.top0() == '*')
//  	{
//  		ans0 = ((top0_0 * top0_1 % MOD) + (top0_1 * top1_0 % MOD) + (top1_1 * top0_0 % MOD)) % MOD;
//  		ans1 = (top1_0 * top1_1) % MOD;
//  		//Ϊ�˵õ�0���еȺ�����Ϊ(0,0),(0,1),(1,0)�������
//  		//Ϊ�˵õ�1���еȺ�����Ϊ(1,1)һ�����
//  	}
//  	else
//  	{
//  		ans0 = (top0_0 * top0_1) % MOD;
//  		ans1 = ((top1_0 * top1_1 % MOD) + (top0_1 * top1_0 % MOD) + (top1_1 * top0_0 % MOD)) % MOD;
//  		//Ϊ�˵õ�0���еȺ�����Ϊ(0,0)һ�����
//  		//Ϊ�˵õ�1���еȺ�����Ϊ(1,0),(0,1),(1,1)�������
//  	}
//  	sta0.pop(), sta0.pop(), sta0.push(ans0);
//  	sta1.pop(), sta1.pop(), sta1.push(ans1);
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin.tie(nullptr);
//  	cout.tie(nullptr); //��ͬʱʹ��scanf��cout
//  	int len;
//  	scanf("%d%s", &len, c + 2);
//  	c[1] = '(';		  //��Ϊ���Ӻ�����ʱ�������ŲŻ����������Ҫ�������(
//  	c[len + 2] = ')'; //���������ӵ��������
//  	len += 2;
//  	register int j;
//  	for (j = 1; j <= len; ++j)
//  	{
//  		// cout << c[j];
//  		if (c[j] == '(')
//  		{
//  			stac.push('(');
//  			if (c[j + 1] != '(')
//  			{
//  				sta0.push(1);
//  				sta1.push(1);
//  			}
//  		}
//  		else if (c[j] == ')')
//  		{
//  			while (stac.top0() != '(')
//  			{
//  				solve();
//  				stac.pop();
//  			}
//  			stac.pop();
//  		}
//  		else if (c[j] == '*')
//  		{
//  			while (stac.top0() == '*') //*�����ȼ��ϸߣ�ֻ�ܼ���ͬ���ģ��ο�https://www.luogu.com.cn/blog/user29261/solution-p1310
//  			{
//  				solve();
//  				stac.pop();
//  			}
//  			stac.push('*'); //�ô����������ڽ�ԭʽת��Ϊ��׺���ʽ���������ڴ�����֮��Ž�����ѹ��ջ
//  			if (c[j + 1] != '(')
//  			{
//  				sta0.push(1);
//  				sta1.push(1);
//  			}
//  		}
//  		else //+
//  		{
//  			while (stac.top0() != '(') //+�����ȼ��ͣ����Լ��㵽������
//  			{
//  				solve();
//  				stac.pop();
//  			}
//  			stac.push('+');
//  			if (c[j + 1] != '(')
//  			{
//  				sta0.push(1);
//  				sta1.push(1);
//  			}
//  		}
//  	}
//  	cout << sta0.top0() % MOD; //�ڲ�����ʱ��ǵ�ȡ�࣡����
//  	return 0;
//  }

// P1351_�޷��Ը��Ӷȼ����Ż�ʱע����ѧ����
//  /*n-1����㣬����ȷ������
//  ������һ����ѧ��
//  ����ĵ���Χ��2����ab����Ȩֵ�ֱ�Ϊxy���������������ȨֵΪ2xy=(x+y)^2-(x^2+y^2)
//  ����ĵ���Χ��3����abc����Ȩֵ�ֱ�Ϊxyz���������������ȨֵΪ2xy+2xz+2yz=(x+y+z)^2-(x^2+y^2+z^2)*/
//  using ll = long long; //�ǵÿ�longlong
//  const int R = 2e5 + 10, MOD = 10007;
//  vector<int> v[R];
//  ll w[R];
//  inline void to_max2(ll &m1, ll &m2, ll x)
//  {
//  	if (x > m1)
//  		m2 = m1, m1 = x;
//  	else if (x > m2)
//  		m2 = x;
//  }
//  int main()
//  {
//  	int n, x, y, from, to, sz;
//  	ll ans1 = -1, ans2 = 0, sum, powsum, max1, max2;
//  	register int i, j, k;
//  	cin >> n;
//  	for (i = 1; i < n; ++i)
//  	{
//  		cin >> x >> y;
//  		v[x].push_back(y);
//  		v[y].push_back(x);
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w[i];
//  	}
//  	for (i = 1; i <= n; ++i) //ö�ٽ�i�ŵ�
//  	{
//  		sz = v[i].size();
//  		if (sz < 2)
//  		{
//  			continue;
//  		}
//  		sum = powsum = 0; //�������������ʼ����
//  		max1 = max2 = 0;  //̰��˼�룬����������ĳ˻�һ��������
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[i][j];
//  			sum = (sum + w[to]) % MOD;
//  			powsum = (powsum + w[to] * w[to]) % MOD;
//  			to_max2(max1, max2, w[to]);
//  		}
//  		ans1 = max(ans1, max1 * max2);
//  		ans2 = (ans2 % MOD + ((sum * sum - powsum) % MOD + MOD) % MOD) % MOD;
//  		//�Կ��ܵĸ���ȡ�ࣺ(x%m+m)%m���˴�x=sum*sum-powsum
//  	}
//  	cout << ans1 << ' ' << ans2 % MOD;
//  	return 0;
//  }

// P5018_�ο����https://www.luogu.com.cn/blog/Bonjour-Suart/solution-p5018
// const int R = 1e6 + 10;
// int w[R], lc[R], rc[R];
// bool flag;
// void check(int x, int y) //�������Ƿ�Գ�
// {
// 	if (!x && !y) //��������Ҷ�ӽ����
// 	{
// 		return;
// 	}
// 	else if (!x || !y || w[x] != w[y]) //�����Ѿ��жϹ��������㶼��Ҷ�ӽ�����������������һ����û���˻�������Ȩֵ������˾�һ�����Գ�
// 	{
// 		flag = false;
// 		return;
// 	}
// 	check(lc[x], rc[y]);
// 	check(rc[x], lc[y]);
// }
// int cnt(int x)
// {
// 	int sum = 1; //�Լ�Ҫ����
// 	if (lc[x])
// 	{
// 		sum += cnt(lc[x]);
// 	}
// 	if (rc[x])
// 	{
// 		sum += cnt(rc[x]);
// 	}
// 	return sum;
// }
// int main()
// {
// 	int n, l, r, ans = 1, sz;
// 	cin >> n;
// 	register int j, k;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> w[j];
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> l >> r;
// 		if (l != -1)
// 		{
// 			lc[j] = l;
// 		}
// 		if (r != -1)
// 		{
// 			rc[j] = r;
// 		}
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		flag = true;
// 		check(lc[j], rc[j]);
// 		if (flag)
// 		{
// 			ans = max(ans, cnt(j));
// 		}
// 	}
// 	cout << ans;
// 	return 0;
// }

// ��P3952_ϸ�ھ޶�
//  struct Node
//  {
//  	char v;
//  	bool b; //�ж��ܷ����һ��ѭ��
//  	int dep;
//  };
//  set<char> var;
//  stack<Node> sta;
//  int main()
//  {
//  	int T, n, comp, maxsz, start, end, emptot = 0; // comp��¼���Ӷȣ�0��ʾO(1)��1��ʾO(n^1)���Դ�����
//  	string comps, from, to, temp;
//  	char c, v;
//  	int flag; // 1��ʾ�Ϲ棬-1��ʾERR
//  	cin >> T;
//  	register int j;
//  	while (T--)
//  	{
//  		while (!sta.empty())
//  			sta.pop();
//  		var.clear(); //��ʼ������
//  		flag = 1;
//  		maxsz = emptot = 0;
//  		//��ʼ��
//  		cin >> n >> comps;
//  		if (n % 2) //��ĳһ���Ƕ�����ģ��޷����
//  			flag = -1;
//  		if (comps.size() == 4) // O(1)
//  			comp = 0;
//  		else
//  			sscanf(comps.c_str(), "O(n^%d)", &comp);
//  		for (j = 1; j <= n; ++j)
//  		{
//  			cin >> c;
//  			if (c == 'F')
//  			{
//  				cin >> v >> from >> to;
//  				if (flag != -1)
//  				{
//  					if (var.count(v)) //���ظ�������
//  					{
//  						flag = -1;
//  						continue;
//  					}
//  					if (from[0] == 'n')
//  						start = 114514;
//  					else
//  						start = stoi(from);
//  					if (to[0] == 'n')
//  						end = 114514;
//  					else
//  						end = stoi(to);
//  					//���start<=end�������ջ��ѭ����ѭ����Ҫ����һ��ѭ����״̬��
//  					if (start <= end) // start>=end������maxsz���Ӷ�
//  					{
//  						if (!sta.empty() && sta.top().b) //�ܽ���һ��ѭ��
//  						{
//  							if (end - start > 100)							   // O(n)
//  								sta.push({v, sta.top().b, sta.top().dep + 1}); //�̳��ϸ�ѭ���ܷ�����״̬
//  							else											   // O(1)
//  								sta.push({v, sta.top().b, sta.top().dep});	   // O(1)���������帴�Ӷ�
//  						}
//  						else if (sta.empty()) //ջ��
//  						{
//  							++emptot;			   // maxsz��1��ʼ����
//  							if (end - start > 100) // O(n)
//  								sta.push({v, true, 1});
//  							else						// O(1)
//  								sta.push({v, true, 0}); // O(1)���������帴�Ӷ�
//  						}
//  						else									 // sta.top().b==false
//  							sta.push({v, false, sta.top().dep}); //�̳��ϸ�ѭ���ܷ�����״̬�͸��Ӷ�
//  					}
//  					else // start>end��������ʱ�临�Ӷȣ����޷�����ѭ��
//  						sta.push({v, false});
//  					var.insert(v);
//  				}
//  			}
//  			else
//  			{
//  				if (flag != -1)
//  				{
//  					if (sta.empty())
//  					{
//  						flag = -1;
//  						continue;
//  					}
//  					else
//  					{
//  						v = sta.top().v;
//  						maxsz = max(maxsz, sta.top().dep);//ÿ�ν���һ��ѭ����Ҫ��������Ӷ�
//  						sta.pop();
//  						var.erase(v);
//  					}
//  				}
//  			}
//  		}
//  		if (flag == -1 || !sta.empty())
//  			cout << "ERR\n";
//  		else
//  		{
//  			if (comp == maxsz)
//  				cout << "Yes\n";
//  			else
//  				cout << "No\n";
//  		}
//  	}
//  	return 0;
//  }

// ��P7914_����DP��ע��״̬�����_https://www.luogu.com.cn/blog/wsyear/solution-p7914
//  /*dp[l][r][0]��***��ȫ����*��
//  dp[l][r][1]��(...)����(��ͷ��)��β��
//  dp[l][r][2]��(...)...*����(...)��ͷ��*Ϊ��β��
//  dp[l][r][3]��(...)...(...)����ͷ�ͽ�β��(...)��
//  dp[l][r][4]��*...(...)����*��ͷ��(...)Ϊ��β��
//  dp[l][r][5]��*...(...)...*����ͷ�ͽ�β��*��
//  �������ݿ������https://www.luogu.com.cn/blog/wsyear/solution-p7914 */
//  using ll = long long;
//  const int MOD = 1e9 + 7, L = 510;
//  char s[L];
//  int n, k;
//  ll dp[L][L][6];
//  bool check(int l, int r) //�ж��ܷ����һ������
//  {
//  	return (s[l] == '(' || s[l] == '?') && (s[r] == ')' || s[r] == '?');
//  }
//  int main()
//  {
//  	cin >> n >> k >> (s + 1);
//  	register int len, l, r, cut;
//  	for (register int i = 1; i <= n; ++i)
//  		dp[i][i - 1][0] = 1;
//  	for (len = 1; len <= n; ++len)
//  	{
//  		for (l = 1; l <= n - len + 1; ++l)
//  		{
//  			r = l + len - 1;
//  			if (len <= k) //��0�����
//  				if ((s[r] == '*' || s[r] == '?'))
//  					dp[l][r][0] = dp[l][r - 1][0];
//  			if (len >= 2)
//  			{
//  				if (check(l, r)) //�����ܼ�����
//  					dp[l][r][1] = (dp[l + 1][r - 1][0] + dp[l + 1][r - 1][2] + dp[l + 1][r - 1][3] + dp[l + 1][r - 1][4]) % MOD;
//  				//������ʱ���������ȫ��*��������һ����*��Ҳ���������߶�����*��Ψ���������߶���*���м����������У����5��
//  				for (cut = l; cut < r; ++cut)
//  				{
//  					dp[l][r][2] = (dp[l][r][2] + dp[l][cut][3] * dp[cut + 1][r][0]) % MOD;					 //�ɵ�3�ֺ͵�0��ƴ�Ӷ�����ע��˳��
//  					dp[l][r][3] = (dp[l][r][3] + (dp[l][cut][2] + dp[l][cut][3]) * dp[cut + 1][r][1]) % MOD; //�ɵ�2/3�ֺ͵�1��ƴ�Ӷ���
//  					dp[l][r][4] = (dp[l][r][4] + (dp[l][cut][4] + dp[l][cut][5]) * dp[cut + 1][r][1]) % MOD; //�ɵ�4/5�ֺ͵�1��ƴ�Ӷ���
//  					dp[l][r][5] = (dp[l][r][5] + dp[l][cut][4] * dp[cut + 1][r][0]) % MOD;					 //�ɵ�4�ֺ͵�0��ƴ�Ӷ���
//  				}
//  			}
//  			dp[l][r][5] = (dp[l][r][5] + dp[l][r][0]) % MOD; //��5�����������0�������ҲҪ����
//  			dp[l][r][3] = (dp[l][r][3] + dp[l][r][1]) % MOD; //ֵ��ע����ǣ���3�����������1�����������Ҫ�ۼ���
//  		}
//  	}
//  	cout << dp[1][n][3];
//  	return 0;
//  }

// P5658_��ϸ����_�ݹ�ʱһ��Ҫ����Ҫ��Ҫ����
//  using ll = long long;
//  const int R = 5e5 + 10;
//  vector<int> v[R];
//  char c[R];
//  ll sum[R], last[R], ans = 0;
//  int fa[R], sta[R], top; //ջ��¼����λ��
//  void dfs(int p)			// p��¼����λ��
//  {
//  	int temp = 0;
//  	if (c[p] == '(')
//  	{
//  		sta[++top] = p;
//  	}
//  	else // c[p]==')'
//  	{
//  		if (top)
//  		{
//  			temp = sta[top];
//  			last[p] = last[fa[temp]] + 1;
//  			--top;
//  		}
//  	}
//  	sum[p] = sum[fa[p]] + last[p];
//  	// if (v[p].size() == 0)
//  	// 	return; //����������ֱ��return����Ϊ���滹�л��ݵĹ���
//  	for (register int j = 0; j < v[p].size(); ++j)
//  		dfs(v[p][j]);
//  	//����
//  	if (temp) //�������ջ��ͬʱ֤����һλ��')'
//  		sta[++top] = temp;
//  	else if (top) //���ջ�����գ����һ���else if��˵����һλһ����'('����Ҫ����
//  		--top;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> c[j];
//  	}
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> fa[j];
//  		v[fa[j]].push_back(j);
//  	}
//  	dfs(1);
//  	for (j = 1; j <= n; ++j)
//  	{
//  		ans ^= sum[j] * j;
//  	}
//  	cout << ans;
//  	return 0;
//  }

// P1313_ע�������±���ĸ���ʼ��
//  const int R = 1010, MOD = 10007;
//  int yh[R][R];
//  int pow_(int x, int p)
//  {
//  	int ans = 1;
//  	for (register int j = 1; j <= p; ++j)
//  		ans = ans * x % MOD;
//  	return ans;
//  }
//  int main()
//  {
//  	int a, b, k, n, m;
//  	cin >> a >> b >> k >> n >> m;
//  	a = a % MOD;
//  	b = b % MOD;
//  	register int i, j;
//  	for (i = 1; i <= k; ++i)
//  	{
//  		yh[i][0] = yh[i][i] = 1; //���ܵ����ش�yh[1][1]��ʼʹ�ã���Ϊ�������������߽�������C(i,0)=C(i,i)=1
//  		for (j = 1; j <= i - 1; ++j)
//  			yh[i][j] = (yh[i - 1][j - 1] + yh[i - 1][j]) % MOD;
//  	}
//  	int ans = yh[k][m] % MOD * pow_(a, n) % MOD * pow_(b, m) % MOD;
//  	cout << ans;
//  	return 0;
//  }

// ��P7913_ע��ϸ�ڣ�����_���ȶ��е����ã������/С���
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int s, e, num;
//  	bool operator<(const Node &x) const
//  	{
//  		if (e != x.e)
//  			return e > x.e;
//  		else
//  			return num > x.num;
//  	}
//  } a[R];
//  int n, resa[R], resb[R];
//  bool cmp(Node x, Node y)
//  {
//  	return x.s < y.s; //�����ܵ�ͬʱ����
//  					  //ע��ϸ�ڣ��������yд��x������
//  }
//  void solve(int m, int res[])
//  {
//  	priority_queue<int, vector<int>, greater<int>> num; //���
//  	priority_queue<Node> q;								//����ʱ��ͱ�Ű�
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  		num.push(j);
//  	for (j = 1; j <= m; ++j)
//  	{
//  		while (!q.empty() && q.top().e <= a[j].s)
//  		{
//  			num.push(q.top().num);
//  			q.pop();
//  		}
//  		if (!num.empty())
//  		{
//  			++res[num.top()];
//  			q.push({a[j].s, a[j].e, num.top()}); //�˴�sû�����ˣ���ɾ
//  			num.pop();
//  		}
//  	}
//  	for (j = 1; j <= n; ++j)
//  		res[j] = res[j] + res[j - 1];
//  }
//  int main()
//  {
//  	int m1, m2, ans = 0;
//  	cin >> n >> m1 >> m2;
//  	register int j;
//  	for (j = 1; j <= m1; ++j)
//  		cin >> a[j].s >> a[j].e;
//  	sort(a + 1, a + m1 + 1, cmp);
//  	solve(m1, resa);
//  	for (j = 1; j <= m2; ++j)
//  		cin >> a[j].s >> a[j].e; //����һ�����飬��Ϊ��һ�������Ѿ���������
//  	sort(a + 1, a + m2 + 1, cmp);
//  	solve(m2, resb);
//  	for (j = 0; j <= n; ++j)
//  		ans = max(ans, resa[j] + resb[n - j]);
//  	cout << ans;
//  	return 0;
//  }

// �����P7915
//  /*������汾��ע�͸�ȫ�棩��a[]�е�Ԫ�طŵ�����deque�еĵ�һ�ֽⷨ�����д���ĺô��Ƕ�������ı�ʾ�����һ�㣨Ҳ���������һ�㣩*/
//  const int R = 5e5 + 10;
//  int a[R << 1], n, n2;
//  char ans[R << 1];
//  class CDeque
//  {
//  	int que[R << 1], fro = 1, bck = 0;
//  public:
//  	inline bool empty() { return fro > bck; }
//  	inline void clear() { fro = 1, bck = 0; }
//  	inline void push(int x) { que[++bck] = x; } //�����ڴӶ�ͷ����Ԫ�ص������Ҳ���Ƕ����Ż���ֻ�Ӷ�ͷѹ�룩�������������൱����һ��ջ
//  	inline int front() { return que[fro]; }
//  	inline int back() { return que[bck]; }
//  	inline void pop_front() { ++fro; }
//  	inline void pop_back() { --bck; }
//  	inline int size() { return bck - fro + 1; }
//  } q1, q2;
//  int find(int l, int r, int v)
//  {
//  	for (register int j = l; j <= r; ++j)
//  	{
//  		if (a[j] == v)
//  		{
//  			return j;
//  		}
//  	}
//  	return -1;
//  }
//  bool solve()
//  {
//  	int now = 2;
//  	while (true)
//  	{
//  		if (q1.empty() && q2.empty())
//  			break;
//  		else if (q2.empty())
//  		{
//  			if (q1.front() == q1.back())
//  			{
//  				q1.pop_front();
//  				q1.pop_back(); //һ������Ԫ�ظ���Ϊ0���ټ�ȥ��ʼ��֪��˳�������Ԫ�أ����ų����������ж��յ������ʣ�µ�Ԫ�ظ���һ����ż��
//  				ans[now] = ans[n2 - now + 1] = 'L';
//  			}
//  			else
//  			{
//  				return false;
//  			}
//  		}
//  		else if (q1.empty())
//  		{
//  			if (q2.front() == q2.back())
//  			{
//  				q2.pop_front();
//  				q2.pop_back();
//  				ans[now] = ans[n2 - now + 1] = 'R';
//  			}
//  			else
//  			{
//  				return false;
//  			}
//  		}
//  		else //������
//  		{
//  			if (q1.size() > 1 && q1.front() == q1.back()) //����д��q1.size()%2==0������������3��Ԫ��Ҳ�ܽ��д˲���
//  			{
//  				q1.pop_front();
//  				q1.pop_back();
//  				ans[now] = ans[n2 - now + 1] = 'L';
//  			}
//  			else if (q1.back() == q2.front())
//  			{
//  				q1.pop_back();
//  				q2.pop_front();
//  				ans[now] = 'L';
//  				ans[n2 - now + 1] = 'R';
//  			}
//  			else if (q1.front() == q2.back())
//  			{
//  				q1.pop_front();
//  				q2.pop_back();
//  				ans[now] = 'R';
//  				ans[n2 - now + 1] = 'L';
//  			}
//  			else if (q2.size() > 1 && q2.front() == q2.back())
//  			{
//  				q2.pop_front();
//  				q2.pop_back();
//  				ans[now] = ans[n2 - now + 1] = 'R';
//  			}
//  			else
//  			{
//  				return false;
//  			}
//  		}
//  		++now;
//  	}
//  	return true;
//  }
//  int main()
//  {
//  	int T, pos;
//  	bool flag;
//  	register int j;
//  	cin >> T;
//  	while (T--)
//  	{
//  		//��ʼ��
//  		for (j = 1; j <= n2; ++j)
//  			a[j] = 0, ans[j] = 0;
//  		flag = false;
//  		cin >> n;
//  		n2 = (n << 1);
//  		for (j = 1; j <= n2; ++j)
//  			cin >> a[j];
//  		//���1����һ����L
//  		q1.clear(), q2.clear();
//  		ans[1] = 'L', ans[n2] = 'L';
//  		pos = find(2, n2, a[1]); //��(1,2n]����
//  		for (j = pos - 1; j > 1; --j)
//  			q1.push(a[j]);
//  		for (j = pos + 1; j <= n2; ++j)
//  			q2.push(a[j]);
//  		if (solve())
//  			flag = true;
//  		//���2�������ֵ������ƣ�������1�����������ǵ�һ����R
//  		if (!flag)
//  		{
//  			q1.clear(), q2.clear();
//  			ans[1] = 'R', ans[n2] = 'L';
//  			pos = find(1, n2 - 1, a[n2]); //��[1,2n)����
//  			for (j = pos - 1; j >= 1; --j)
//  				q1.push(a[j]);
//  			for (j = pos + 1; j < n2; ++j)
//  				q2.push(a[j]);
//  			if (solve())
//  				flag = true;
//  		}
//  		if (flag)
//  			for (j = 1; j <= n2; ++j)
//  				cout << ans[j];
//  		else
//  			cout << "-1";
//  		cout << "\n";
//  	}
//  	return 0;
//  }
//  /*��ԭ˼·����a[]�е�Ԫ�طŵ�����deque�еĵڶ��ֽⷨ��������Ľⷨ�Ƿ�������*/
//  const int R = 5e5 + 10;
//  int a[R << 1], n, n2;
//  char ans[R << 1];
//  class CDeque
//  {
//  	int que[R << 1], fro = 1, bck = 0;
//  public:
//  	inline bool empty() { return fro > bck; }
//  	inline void clear() { fro = 1, bck = 0; }
//  	inline void push(int x) { que[++bck] = x; } //�����ڴӶ�ͷ����Ԫ�ص������Ҳ���Ƕ����Ż���ֻ�Ӷ�ͷѹ�룩�������������൱����һ��ջ
//  	inline int front() { return que[fro]; }
//  	inline int back() { return que[bck]; }
//  	inline void pop_front() { ++fro; }
//  	inline void pop_back() { --bck; }
//  	inline int size() { return bck - fro + 1; }
//  } q1, q2;
//  int find(int l, int r, int v)
//  {
//  	for (register int j = l; j <= r; ++j)
//  	{
//  		if (a[j] == v)
//  		{
//  			return j;
//  		}
//  	}
//  	return -1;
//  }
//  bool solve()
//  {
//  	int now = 2;
//  	register int j;
//  	while (true)
//  	{
//  		if (q1.empty() && q2.empty())
//  			break;
//  		else if (q2.empty())
//  		{
//  			if (q1.front() == q1.back())
//  			{
//  				q1.pop_front();
//  				q1.pop_back(); //һ������Ԫ�ظ���Ϊ0���ټ�ȥ��ʼ��֪��˳�������Ԫ�أ����ų����������ж��յ������ʣ�µ�Ԫ�ظ���һ����ż��
//  				ans[now] = ans[n2 - now + 1] = 'L';
//  			}
//  			else
//  			{
//  				return false;
//  			}
//  		}
//  		else if (q1.empty())
//  		{
//  			if (q2.front() == q2.back())
//  			{
//  				q2.pop_front();
//  				q2.pop_back();
//  				ans[now] = ans[n2 - now + 1] = 'R';
//  			}
//  			else
//  			{
//  				return false;
//  			}
//  		}
//  		else //������
//  		{
//  			if (q1.size() > 1 && q1.front() == q1.back())
//  			{
//  				q1.pop_front();
//  				q1.pop_back();
//  				ans[now] = ans[n2 - now + 1] = 'L';
//  			}
//  			else if (q1.front() == q2.back())
//  			{
//  				q1.pop_front();
//  				q2.pop_back();
//  				ans[now] = 'L';
//  				ans[n2 - now + 1] = 'R';
//  			}
//  			else if (q1.back() == q2.front())
//  			{
//  				q1.pop_back();
//  				q2.pop_front();
//  				ans[now] = 'R';
//  				ans[n2 - now + 1] = 'L';
//  			}
//  			else if (q2.size() > 1 && q2.front() == q2.back())
//  			{
//  				q2.pop_front();
//  				q2.pop_back();
//  				ans[now] = ans[n2 - now + 1] = 'R';
//  			}
//  			else
//  			{
//  				return false;
//  			}
//  		}
//  		++now;
//  	}
//  	return true;
//  }
//  int main()
//  {
//  	int T, pos;
//  	bool flag;
//  	register int j;
//  	cin >> T;
//  	while (T--)
//  	{
//  		//��ʼ��
//  		for (j = 1; j <= n2; ++j)
//  			a[j] = 0, ans[j] = 0;
//  		flag = false;
//  		cin >> n;
//  		n2 = (n << 1);
//  		for (j = 1; j <= n2; ++j)
//  			cin >> a[j];
//  		//���1
//  		q1.clear(), q2.clear();
//  		ans[1] = 'L', ans[n2] = 'L';
//  		pos = find(2, n2, a[1]);
//  		for (j = 2; j < pos; ++j)
//  			q1.push(a[j]);
//  		for (j = n2; j > pos; --j)
//  			q2.push(a[j]);
//  		if (solve())
//  			flag = true;
//  		//���2
//  		if (!flag)
//  		{
//  			q1.clear(), q2.clear();
//  			ans[1] = 'R', ans[n2] = 'L';
//  			pos = find(1, n2 - 1, a[n2]);
//  			for (j = 1; j < pos; ++j)
//  				q1.push(a[j]);
//  			for (j = n2 - 1; j > pos; --j)
//  				q2.push(a[j]);
//  			if (solve())
//  				flag = true;
//  		}
//  		if (flag)
//  			for (j = 1; j <= n2; ++j)
//  				cout << ans[j];
//  		else
//  			cout << "-1";
//  		cout << "\n";
//  	}
//  	return 0;
//  }

// P7960_һ��Ҫע�����ֵ�Ĵ�������_���������ַ����������1e7�ķ�����һ����ֱ��nxt[1e7]=1e7+1����һ���ǽ�X����1������ڶ���AC�ļ�¼��
//  const int X = 1e7;
//  bool b[X + 10];
//  int nxt[X + 10]; //ֱ�Ӽ���һ������
//  int main()
//  {
//  	register int i, j, t, x;
//  	register bool flag;
//  	for (i = 1; i <= X; ++i)
//  	{
//  		//��λ�����ж��Ƿ�7
//  		t = 1, x = i, flag = false;
//  		while (x)
//  		{
//  			if (x % 10 == 7)
//  			{
//  				flag = true;
//  				break;
//  			}
//  			x /= 10;
//  		}
//  		if (flag) //��7
//  		{
//  			for (j = i; j <= X; j += i)
//  			{
//  				b[j] = true;
//  			}
//  		}
//  	}
//  	for (i = X; i >= 1; --i)
//  	{
//  		if (!b[i]) //������������
//  		{
//  			for (j = i - 1; j >= 1; --j)
//  			{
//  				if (!b[j])
//  				{
//  					nxt[j] = i;
//  					i = j + 1;
//  					break;
//  				}
//  			}
//  		}
//  	}
//  	nxt[X] = X + 1; // 1e7����һ������1e7+1������
//  	int T;
//  	cin >> T;
//  	while (T--)
//  	{
//  		cin >> x;
//  		if (b[x])
//  			cout << "-1\n";
//  		else
//  			cout << nxt[x] << "\n";
//  	}
//  	return 0;
//  }

// P8813
// inline bool judge(int res)
// {
// 	if (res < 0 || res > 1e9)
// 		return false;
// 	return true;
// }
// int pow(int a, int b)
// {
// 	if (b == 0)
// 		return 1;
// 	int res = 1;
// 	if (b & 1)
// 	{
// 		res = pow(a, b / 2);
// 		if (!judge(res))
// 		{
// 			cout << -1;
// 			exit(0);
// 		}
// 		res = res * res;
// 		res = res * a;
// 		if (!judge(res))
// 		{
// 			cout << -1;
// 			exit(0);
// 		}
// 	}
// 	else
// 	{
// 		res = pow(a, b / 2);
// 		if (!judge(res))
// 		{
// 			cout << -1;
// 			exit(0);
// 		}
// 		res = res * res;
// 		if (!judge(res))
// 		{
// 			cout << -1;
// 			exit(0);
// 		}
// 	}
// 	return res;
// }
// int main()
// {
// 	int a, b, ans;
// 	cin >> a >> b;
// 	ans = pow(a, b);
// 	cout << ((ans > 1e9 || ans < 0) ? -1 : ans);
// 	return 0;
// }

// P8819
// using ull = unsigned long long;
// const int R = 5e5 + 10;
// ull w[R], fht, now, rd[R], org[R]; //��Ϊ�ݻ�ĳ���ʹ���������Ϊ�յ�ĳ涴ʧЧ������ά������ĳ�����ȶ��ǳ���
// /*rd���ʵ�����ǽ��涴������ɢ�����rd[v]�е�ֵ���������е����ʱ����
// ������1��2,1��3,1��4
// �������Ǵݻ�4�ŵ�
// ��ôrd[4]-=w[1]����Ϊ1�ŵ���������й����Ѿ���ɢ��2��3��4�ŵ����ˣ�*/
// int main()
// {
// 	int n, m, q, x, y, t;
// 	cin >> n >> m;
// 	register int j;
// 	mt19937 rnd;
// 	ull fht = 0, now = 0;
// 	for (j = 1; j <= n; ++j)
// 		fht += (w[j] = rnd());
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y;
// 		org[y] += w[x]; //�洢ԭ���ĳ涴��ʲô����
// 		rd[y] = org[y];
// 		now += w[x];
// 	}
// 	cin >> q;
// 	for (j = 1; j <= q; ++j)
// 	{
// 		cin >> t;
// 		if (t == 1)
// 		{
// 			cin >> x >> y;
// 			rd[y] -= w[x]; //��֤�ó涴������δ���ݻ�
// 			now -= w[x];
// 		}
// 		else if (t == 2)
// 		{
// 			cin >> y;
// 			//����þݵ�ĳ涴��ȫ�����ݻ٣���ô���Ϯ���������κ�Ч��
// 			//��Ϊ�ݻ�ĳ���ʹ���������Ϊ�յ�ĳ涴ʧЧ������ά������ĳ�����ȶ��ǳ���
// 			now -= rd[y];
// 			rd[y] = 0;
// 		}
// 		else if (t == 3)
// 		{
// 			cin >> x >> y;
// 			rd[y] += w[x];
// 			now += w[x];
// 		}
// 		else
// 		{
// 			cin >> x;
// 			now += org[x] - rd[x];
// 			rd[x] = org[x];
// 		}
// 		cout << (fht == now ? "YES\n" : "NO\n");
// 	}
// 	return 0;
// }

// P8818
// using ll = long long;
// const int R = 1e5 + 1e2, LG = 20, INF = 0x3f3f3f3f;
// int a[R], b[R], lg[R];
// int azmax[R][LG], afmax[R][LG], azmin[R][LG], afmin[R][LG], bmax[R][LG], bmin[R][LG]; // 6��ST��QAQ
// //��2^p
// inline ll pow(int p) { return (1 << p); }
// signed main()
// {
// 	int n, m, q, l1, r1, l2, r2, p;
// 	ll ans, bmaxv, bminv;
// 	cin >> n >> m >> q;
// 	register int i, j, k, mid;
// 	lg[1] = 0;
// 	for (j = 2; j <= n; ++j)
// 		lg[j] = lg[j >> 1] + 1;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> a[j];
// 		if (a[j] < 0)
// 		{
// 			afmin[j][0] = afmax[j][0] = a[j];
// 			azmax[j][0] = -1, azmin[j][0] = INF;
// 		}
// 		else //��0��Ϊ����������ΪaΪ0ʱb����ѡʲô������һ����
// 		{
// 			azmax[j][0] = azmin[j][0] = a[j];
// 			afmax[j][0] = -INF, afmin[j][0] = 0;
// 		}
// 	}
// 	for (j = 1; j <= log2(n) /*lg[n]*/; ++j) //��ѧ���ǣ�ʹ��lg[n]�͹���������3���㣬������log2(n)���ܹ�
// 	{
// 		for (i = 1; i + pow(j) - 1 <= n; ++i)
// 		{
// 			mid = i + pow(j - 1);
// 			azmax[i][j] = max(azmax[i][j - 1], azmax[mid][j - 1]);
// 			azmin[i][j] = min(azmin[i][j - 1], azmin[mid][j - 1]);
// 			afmax[i][j] = max(afmax[i][j - 1], afmax[mid][j - 1]);
// 			afmin[i][j] = min(afmin[i][j - 1], afmin[mid][j - 1]);
// 		}
// 	}
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> b[j];
// 		bmax[j][0] = bmin[j][0] = b[j];
// 	}
// 	for (j = 1; j <= log2(m) /*lg[m]*/; ++j)
// 	{
// 		for (i = 1; i + pow(j) - 1 <= m; ++i)
// 		{
// 			mid = i + pow(j - 1);
// 			bmax[i][j] = max(bmax[i][j - 1], bmax[mid][j - 1]);
// 			bmin[i][j] = min(bmin[i][j - 1], bmin[mid][j - 1]);
// 		}
// 	}
// 	while (q--)
// 	{
// 		ans = -0x3f3f3f3f3f3f3f3f;
// 		cin >> l1 >> r1 >> l2 >> r2;
// 		// k = lg[r2 - l2 + 1];
// 		k = log2(r2 - l2 + 1);
// 		p = r2 - pow(k) + 1;
// 		bmaxv = max(bmax[l2][k], bmax[p][k]);
// 		bminv = min(bmin[l2][k], bmin[p][k]);
// 		// k = lg[r1 - l1 + 1];
// 		k = log2(r1 - l1 + 1);
// 		p = r1 - pow(k) + 1;
// 		/*���ÿ���b����������Ϊa��b֮ǰѡ��bΪ�˵õ��𰸻��߼���
// 		1.��a���ڸ�����ans=max(a������С*b�����,a�������*b�����)
// 		2.��a����������ans=max(a�������*b����С,a������С*b����С)*/
// 		if (afmax[l1][k] != -INF)
// 			ans = max(ans,
// 					  max(afmax[l1][k] * bmaxv,
// 						  afmin[l1][k] * bmaxv));
// 		if (azmin[l1][k] != INF)
// 			ans = max(ans,
// 					  max(azmax[l1][k] * bminv,
// 						  azmin[l1][k] * bminv));
// 		if (afmax[p][k] != -INF)
// 			ans = max(ans,
// 					  max(afmax[p][k] * bmaxv,
// 						  afmin[p][k] * bmaxv));
// 		if (azmin[p][k] != INF)
// 			ans = max(ans,
// 					  max(azmax[p][k] * bminv,
// 						  azmin[p][k] * bminv));
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }

// P8862_����˼ά_�߶���ϸ�ڣ�
//  using ll = long long;
//  const int R = 1e5 + 10;
//  ll a[R], b[R];
//  struct Q
//  {
//  	int type, l, r;
//  	ll x;
//  } query[R];
//  class Segtree
//  {
//  public:
//  #define lc (k << 1)
//  #define rc (k << 1 | 1)
//  	struct Node
//  	{
//  		int l, r;
//  		ll v, tag;
//  	} s[R << 2];
//  	inline void pushup(int k) { s[k].v = min(s[lc].v, s[rc].v); }
//  	inline void pushdown(int k)
//  	{
//  		if (s[k].tag) //�б�ǲ��·�
//  		{
//  			s[lc].tag += s[k].tag;
//  			s[rc].tag += s[k].tag;
//  			s[lc].v += s[k].tag;
//  			s[rc].v += s[k].tag;
//  			s[k].tag = 0;
//  		}
//  	}
//  	void build(int k, int l, int r)
//  	{
//  		s[k].l = l;
//  		s[k].r = r;
//  		if (l == r)
//  		{
//  			s[k].v = b[l];
//  			return;
//  		}
//  		int mid = (l + r) >> 1;
//  		build(lc, l, mid);
//  		build(rc, mid + 1, r);
//  		pushup(k);
//  	}
//  	void update(int k, int x, int y, int v)
//  	{
//  		if (s[k].l >= x && s[k].r <= y)
//  		{
//  			s[k].tag += v;
//  			s[k].v += v;
//  			return;
//  		}
//  		pushdown(k);
//  		int mid = (s[k].l + s[k].r) >> 1;
//  		if (x <= mid)
//  			update(lc, x, y, v);
//  		if (y > mid)
//  			update(rc, x, y, v);
//  		pushup(k);
//  	}
//  	ll query(int k, int x, int y)
//  	{
//  		if (s[k].l >= x && s[k].r <= y)
//  			return s[k].v;
//  		pushdown(k);
//  		ll ans = LLONG_MAX;
//  		int mid = (s[k].l + s[k].r) >> 1;
//  		if (x <= mid)
//  			ans = min(ans, query(lc, x, y));
//  		if (y > mid)
//  			ans = min(ans, query(rc, x, y));
//  		return ans;
//  	}
//  } t;
//  int main()
//  {
//  	int T, n = 0, q = 0;
//  	cin >> T;
//  	register int j;
//  	while (T--)
//  	{
//  		for (j = 1; j <= (n << 2); ++j)
//  			t.s[j] = {0, 0, 0, 0};
//  		for (j = 1; j <= n; ++j)
//  			a[j] = b[j] = 0;
//  		for (j = 1; j <= q; ++j)
//  			query[j] = {0, 0, 0, 0};
//  		cin >> n >> q;
//  		for (j = 1; j <= n; ++j)
//  			cin >> a[j];
//  		for (j = 1; j <= q; ++j)
//  		{
//  			cin >> query[j].type >> query[j].l >> query[j].r;
//  			if (query[j].type == 1)
//  				cin >> query[j].x;
//  		}
//  		for (j = 1; j <= n; ++j)
//  			cin >> b[j];
//  		t.build(1, 1, n);
//  		for (j = q; j >= 1; --j)
//  		{
//  			if (query[j].type == 1)
//  			{
//  				t.update(1, query[j].l, query[j].r, -query[j].x);
//  			}
//  			else
//  			{
//  				query[j].x = t.query(1, query[j].l, query[j].r);
//  			}
//  		}
//  		for (j = 1; j <= q; ++j)
//  			if (query[j].type == 2)
//  				cout << query[j].x << ' ';
//  	}
//  	return 0;
//  }

// P1807_ע����û�и�Ȩ�ߣ�����
// using ll = long long;
// const int R = 1600;
// struct Node
// {
// 	int p;
// 	ll len;
// };
// vector<Node> v[R];
// queue<Node> q;
// ll dis[R];
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	cout.tie(nullptr);
// 	int n, m, x, y, from, to;
// 	ll len;
// 	cin >> n >> m;
// 	register int j;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y >> len;
// 		v[x].push_back({y, len});
// 	}
// 	memset(dis, -0x3f, sizeof(dis));
// 	dis[1] = 0;
// 	q.push({1, 0});
// 	while (!q.empty()) // dijkstra��SPFAд����ĺ���
// 	{
// 		from = q.front().p;
// 		q.pop();
// 		// b[from] = true;
// 		for (j = 0; j < v[from].size(); ++j)
// 		{
// 			to = v[from][j].p;
// 			if (v[from][j].len + dis[from] > dis[to])
// 			{
// 				dis[to] = v[from][j].len + dis[from];
// 				// if (!b[to])
// 				// {
// 				q.push({to, dis[to]});
// 				// }
// 			}
// 		}
// 	}
// 	if (dis[n] == -4485090715960753727)
// 		cout << -1;
// 	else
// 		cout << dis[n];
// 	return 0;
// }

// P5318
//  const int R = 1e5 + 10;
//  vector<int> v[R];
//  bool b[R];
//  void dfs(int x)
//  {
//  	b[x] = true;
//  	cout << x << ' ';
//  	int to;
//  	for (int j = 0; j < v[x].size(); ++j)
//  	{
//  		to = v[x][j];
//  		if (!b[to])
//  			dfs(to);
//  	}
//  }
//  void bfs()
//  {
//  	queue<int> q;
//  	q.push(1);
//  	cout << "1 ";
//  	b[1] = true;
//  	int from, to;
//  	register int j;
//  	while (!q.empty())
//  	{
//  		from = q.front();
//  		q.pop();
//  		for (j = 0; j < v[from].size(); ++j)
//  		{
//  			to = v[from][j];
//  			if (!b[to])
//  			{
//  				q.push(to);
//  				cout << to << ' ';
//  				b[to] = true;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, m, x, y;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		v[x].push_back(y);
//  	}
//  	for (j = 1; j <= n; ++j)
//  		sort(v[j].begin(), v[j].end());
//  	dfs(1);
//  	memset(b, 0, sizeof(b));
//  	cout << "\n";
//  	bfs();
//  	return 0;
//  }

// T293529_�ֲ�ͼģ��
// const int R = 1e4 + 5, K = 25;
// using ll = long long;
// struct Edge
// {
// 	int to;
// 	ll len;
// };
// struct Q
// {
// 	int p, times;
// 	ll sum;
// 	bool operator<(const Q &oth) const
// 	{
// 		return sum > oth.sum;
// 	}
// };
// int k;
// ll dis[R][K];
// bool b[R][K];
// vector<Edge> v[R];
// void dj()
// {
// 	priority_queue<Q> q;
// 	int from, to, times;
// 	ll sum, len;
// 	memset(dis, 0x3f, sizeof(dis));
// 	dis[1][0] = 0;
// 	q.push(Q{1, 0, 0});
// 	register int j;
// 	while (!q.empty())
// 	{
// 		from = q.top().p;
// 		times = q.top().times;
// 		sum = q.top().sum;
// 		q.pop();
// 		if (!b[from][times])
// 		{
// 			b[from][times] = true; //��Ǹ��¹�
// 			dis[from][times] = sum;
// 			for (j = 0; j < int(v[from].size()); ++j)
// 			{
// 				to = v[from][j].to;
// 				len = v[from][j].len;
// 				if (sum + len < dis[to][times])
// 				{
// 					q.push({to, times, sum + len});
// 				}
// 				if (times < k && sum < dis[to][times + 1])
// 				{
// 					q.push({to, times + 1, sum});
// 				}
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	int n, m, x, y;
// 	ll len;
// 	cin >> n >> m >> k;
// 	register int j;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y >> len;
// 		v[x].push_back({y, len});
// 		v[y].push_back({x, len});
// 	}
// 	dj();
// 	ll ans = LLONG_MAX;
// 	for (j = 0; j <= k; ++j)
// 	{
// 		ans = min(ans, dis[n][j]);
// 	}
// 	cout << ans;
// 	return 0;
// }

// P4568_һ����_�ֲ�ͼ��b[][]Ҫ����ά�ģ��Լ�¼ÿһ���״̬�Ƿ񱻷��ʹ�
//  const int R = 1e4 + 10;
//  int dis[R][15];
//  struct Edge
//  {
//  	int to, len;
//  };
//  vector<Edge> v[R];
//  struct Q
//  {
//  	int p, times, sum;
//  	bool operator<(const Q &x) const { return sum > x.sum; }
//  };
//  bool b[R][15];
//  priority_queue<Q> q;
//  int main()
//  {
//  	int n, m, k, s, t, x, y, len;
//  	cin >> n >> m >> k >> s >> t;
//  	int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		v[x].push_back({y, len});
//  		v[y].push_back({x, len});
//  	}
//  	// DJ
//  	int to, times, sum;
//  	memset(dis, 0x3f, sizeof(dis));
//  	dis[s][0] = 0;
//  	q.push({s, 0, 0});
//  	while (!q.empty())
//  	{
//  		x = q.top().p;
//  		times = q.top().times;
//  		sum = q.top().sum;
//  		q.pop();
//  		if (!b[x][times])
//  		{
//  			b[x][times] = true;
//  			for (j = 0; j < v[x].size(); ++j)
//  			{
//  				to = v[x][j].to;
//  				len = v[x][j].len;
//  				if (sum + len < dis[to][times])
//  				{
//  					dis[to][times] = sum + len;
//  					q.push({to, times, dis[to][times]});
//  				}
//  				if (times < k && sum < dis[to][times + 1])
//  				{
//  					dis[to][times + 1] = sum;
//  					q.push({to, times + 1, dis[to][times + 1]});
//  				}
//  			}
//  		}
//  	}
//  	int ans = INT_MAX;
//  	for (j = 0; j <= k; ++j)
//  	{
//  		ans = min(ans, dis[t][j]);
//  	}
//  	cout << ans;
//  	return 0;
//  }

// T292863_Ȩֵ�߶���_ע��ϸ�ڣ���0��ʼ����������
//  #define lc s[k].l
//  #define rc s[k].r
//  const int A = 2e5 + 10;
//  struct
//  {
//  	int l, r, pos; //���l,r���岻ͬ����������Ҷ��ӵı�Ŷ��ǹ��������
//  } s[A << 2];
//  struct Q
//  {
//  	int i, l, r;
//  	bool operator<(const Q &oth) const //Ҫ��ά��С�ģ���Ϊ����������˵����������͸���3~5������3����Ȼ����0,1,2���Ͷ����µ��������ֵ�λ�ã������һ��Ҫ��ѯ1~2���ǻ�Ҫ�ع���һ��ֻ��2������״̬���Ǿ�̫�鷳��
//  	{
//  		return r < oth.r;
//  	}
//  } qry[A];
//  int a[A], ans[A], tot, root = 0; // tot��¼�ܵĽڵ��������ڳ���������[0,0]�����Բ���ʹ�ô�ͳ��*2�Ĺ���ʽ
//  void build(int &k, int l, int r)
//  {
//  	k = ++tot;
//  	if (l == r)
//  	{
//  		return;
//  	}
//  	int mid = (l + r) >> 1;
//  	build(lc, l, mid);
//  	build(rc, mid + 1, r);
//  	//���Բ�pushup��org����0
//  }
//  void update(int k, int l, int r, int x, int v)
//  {
//  	if (l == r)
//  	{
//  		s[k].pos = v;
//  		return;
//  	}
//  	int mid = (l + r) >> 1;
//  	if (x <= mid)
//  		update(lc, l, mid, x, v);
//  	else
//  		update(rc, mid + 1, r, x, v);
//  	s[k].pos = min(s[lc].pos, s[rc].pos);
//  }
//  int query(int k, int l, int r, int x) // x��ʾ����λ��
//  {
//  	if (l == r)
//  	{
//  		return l;
//  	}
//  	int mid = (l + r) >> 1;
//  	if (s[lc].pos <= x) //���ڸ�С��
//  		return query(lc, l, mid, x);
//  	else
//  		return query(rc, mid + 1, r, x);
//  }
//  int main()
//  {
//  	int n, q, mv = 0;
//  	cin >> n >> q;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  		mv = max(mv, a[j]);
//  	}
//  	for (j = 1; j <= q; ++j)
//  	{
//  		qry[j].i = j;
//  		cin >> qry[j].l >> qry[j].r;
//  	}
//  	build(root, 0, ++mv);		//ע���0��ʼ����������
//  	sort(qry + 1, qry + q + 1); //��������
//  	for (i = 1; i <= q; ++i)
//  	{
//  		for (j = qry[i - 1].r + 1; j <= qry[i].r; ++j)
//  		{
//  			update(1, 0, mv, a[j], j); //�߶���ά��ÿ�������һ�γ��ֵ�λ��
//  		}
//  		/*e.g.��1~5��û���ֵ���С��Ȼ��������ֻ����һ��ѯ�ʣ�
//  		��ô�ȸ���[1]~[5]��ÿ���������ֵ�λ��
//  		�������
//  		0��������[3]
//  		1��������[5]
//  		2��������[4]
//  		3��������[0]����û�з��ֹ�3��
//  		query��ʱ��Ҫ�ҵ�һ��<qry[l]������Ҳ���ǵ�һ��<=qry[l]-1����*/
//  		ans[qry[i].i] = query(1, 0, mv, qry[i].l - 1);
//  	}
//  	for (j = 1; j <= q; ++j)
//  	{
//  		cout << ans[j] << "\n";
//  	}
//  	return 0;
//  }

// ���P3388
//   const int R = 2e4;
//   int low[R + 10], dfn[R + 10], times;
//   bool ans[R + 10];
//   struct Edge
//   {
//   	int to, next;
//   } e[200010];
//   int head[200010], cnt;
//   void add(int x, int y)
//   {
//   	++cnt;
//   	e[cnt] = {y, head[x]};
//   	head[x] = cnt;
//   }
//   void tarjan(int x, int fa = -1)
//   {
//   	dfn[x] = low[x] = ++times;
//   	int ch = 0, to;
//   	for (int i = head[x]; i; i = e[i].next)
//   	{
//   		to = e[i].to;
//   		if (!dfn[to])
//   		{
//   			tarjan(to, x);
//   			low[x] = min(low[x], low[to]);
//   			if (fa != -1 && low[to] >= dfn[x])
//   				ans[x] = true;
//   			++ch;
//   		}
//   		low[x] = min(low[x], dfn[to]);
//   	}
//   	if (fa == -1 && ch >= 2)
//   		ans[x] = true;
//   }
//   int main()
//   {
//   	int n, m;
//   	cin >> n >> m;
//   	register int j;
//   	for (j = 1; j <= m; ++j)
//   	{
//   		int x, y;
//   		cin >> x >> y;
//   		if (x == y)
//   			continue;
//   		add(x, y);
//   		add(y, x);
//   	}
//   	for (j = 1; j <= n; ++j)
//   	{
//   		if (!dfn[j])
//   		{
//   			tarjan(j);
//   		}
//   	}
//   	int ans2 = 0;
//   	for (j = 1; j <= n; ++j)
//   	{
//   		if (ans[j])
//   		{
//   			++ans2;
//   		}
//   		// printf("%d  dfn:%d low:%d\n", j, dfn[j], low[j]);
//   	}
//   	cout << ans2 << "\n";
//   	for (j = 1; j <= n; ++j)
//   	{
//   		if (ans[j])
//   		{
//   			cout << j << " ";
//   		}
//   	}
//   	return 0;
//   }
//  const int R = 2e4;
//  vector<int> v[R + 10]; //��Χ������
//  int low[R + 10], dfn[R + 10], times, fa[R + 10];
//  bool ans[R + 10], b[R + 10];
//  void tarjan(int x)
//  {
//  	dfn[x] = low[x] = ++times;
//  	int ch = 0, to;
//  	b[x] = true;
//  	for (int i = 0; i < v[x].size(); ++i)
//  	{
//  		to = v[x][i];
//  		if (!b[to])
//  		{
//  			++ch;
//  			fa[to] = x;
//  			tarjan(to);
//  			low[x] = min(low[x], low[to]);
//  			if (x != fa[x] && low[to] >= dfn[x])
//  				ans[x] = true;
//  		}
//  		else if (to != fa[x])
//  			low[x] = min(low[x], dfn[to]);
//  	}
//  	if (fa[x] == x && ch >= 2)
//  		ans[x] = true;
//  }
//  int main()
//  {
//  	int n, m, x, y;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		v[x].push_back(y);
//  		v[y].push_back(x);
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (!b[j])
//  		{
//  			// printf("test");
//  			fa[j] = j;
//  			times = 0;
//  			tarjan(j);
//  		}
//  	}
//  	int ans2 = 0;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (ans[j])
//  		{
//  			++ans2;
//  		}
//  	}
//  	cout << ans2 << "\n";
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (ans[j])
//  		{
//  			cout << j << " ";
//  		}
//  	}
//  	return 0;
//  }

// T294305
//  const int R = 2e5 + 10;
//  int w[R], rd[R];
//  double pp[R >> 1], edgep[R];
//  struct Edge
//  {
//  	int to, id;
//  };
//  vector<Edge> v[R >> 1];
//  queue<int> q;
//  int main()
//  {
//  	int n, m, x, y;
//  	cin >> n >> m;
//  	int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> w[j];
//  		v[x].push_back({y, j});
//  		++rd[y];
//  	}
//  	pp[1] = 1;
//  	q.push(1);
//  	int to;
//  	while (!q.empty()) //��������O(n+m)
//  	{
//  		x = q.front();
//  		q.pop();
//  		for (j = 0; j < v[x].size(); ++j)
//  		{
//  			to = v[x][j].to;
//  			edgep[v[x][j].id] = pp[x] / double(v[x].size()); //�ߵĸ�����x�ĸ���/x�ĳ���
//  			pp[to] += edgep[v[x][j].id];					 //��ĸ����ۼ�
//  			--rd[to];
//  			if (rd[to] == 0)
//  			{
//  				q.push(to);
//  			}
//  		}
//  	}
//  	double ans = 0;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		ans += edgep[j] * double(w[j]);
//  	}
//  	cout << fixed << setprecision(2) << ans;
//  	return 0;
//  }

// ��T293526_ǿ���STL����������������������ľ���_set������
//  struct Con
//  {
//  	int l, r;
//  	bool operator<(const Con &x) const
//  	{
//  		return r < x.l; //���ܣ�������<��>��==��>=��<=�Ͷ��Զ��������
//  	}
//  };
//  set<Con> s;
//  int main()
//  {
//  	int n, l, r;
//  	cin >> n;
//  	char t;
//  	for (int j = 1; j <= n; ++j)
//  	{
//  		cin >> t;
//  		if (t == 'A')
//  		{
//  			cin >> l >> r;
//  			int sz = s.size();
//  			auto it1 = s.lower_bound({l, r}); //���������һ��������ģ������غϵģ�����now(l,r)=3,5���ҵ����Ҷ˵�Ϊ3�����С����
//  			auto it2 = s.upper_bound({l, r}); //����ͬ�������������>r�ģ���Ϊerase��ʱ����[,)��Ҳ�Ͳ���ɾ���Ԫ��
//  			s.erase(it1, it2);
//  			cout << sz - s.size() << '\n';
//  			s.insert({l, r});
//  		}
//  		else
//  		{
//  			cout << s.size() << '\n';
//  		}
//  	}
//  	return 0;
//  }

// P1047_�ܴ�ģ�⣬Ҳ�ǵ�һ��AC�������������
//  struct Node
//  {
//  	int l, r, v;
//  	bool operator<(const Node &x) const
//  	{
//  		return l < x.l;
//  	}
//  };
//  set<Node> s;
//  #define st set<Node>::iterator
//  st split(int pos)
//  {
//  	st it = s.lower_bound({pos, 0, 0});
//  	if (it != s.end() && pos == it->l)
//  	{
//  		return it;
//  	}
//  	--it;
//  	if (pos > it->r)
//  	{
//  		return s.end();
//  	}
//  	int l = it->l, r = it->r, v = it->v;
//  	s.erase(it);
//  	s.insert({l, pos - 1, v});
//  	return s.insert({pos, r, v}).first;
//  	// return it;
//  }
//  void assign(int l, int r) // v=0
//  {
//  	st it2 = split(r + 1), it1 = split(l);
//  	s.erase(it1, it2);
//  	s.insert({l, r, 0});
//  }
//  int query(int l, int r)
//  {
//  	int res = 0;
//  	st it2 = split(r + 1), it1 = split(l);
//  	for (; it1 != it2; ++it1)
//  	{
//  		res += (it1->r - it1->l + 1) * (it1->v);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, l, r;
//  	cin >> n >> m;
//  	s.insert({0, n, 1});
//  	int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> l >> r;
//  		assign(l, r);
//  	}
//  	cout << query(0, n);
//  	return 0;
//  }

// T294014
//  const int N = 5e3 + 10, M = 1e4 + 10;
//  struct Edge
//  {
//  	int to, next;
//  } e[M << 1];
//  int cnt = 1, head[N];
//  void add(int x, int y)
//  {
//  	++cnt;
//  	e[cnt] = {y, head[x]};
//  	head[x] = cnt;
//  }
//  int low[N], dfn[N], times, g[N], gtot, du[N];
//  stack<int> s;
//  bool b[N];
//  void tarjan(int x, int frome) // frome�������ر�
//  {
//  	dfn[x] = low[x] = ++times;
//  	s.push(x);
//  	b[x] = true;
//  	for (int i = head[x]; i; i = e[i].next)
//  	{
//  		int to = e[i].to;
//  		if ((i ^ frome) == 1) //���ԣ������ڱߵ����ֵΪ1����ֹ�ر�Ӱ��
//  		{
//  			continue;
//  		}
//  		if (dfn[to] == 0)
//  		{
//  			tarjan(to, i);
//  			low[x] = min(low[to], low[x]);
//  		}
//  		else if (b[to])
//  		{
//  			low[x] = min(low[x], dfn[to]);
//  		}
//  	}
//  	if (low[x] == dfn[x])
//  	{
//  		++gtot;
//  		while (s.top() != x)
//  		{
//  			g[s.top()] = gtot;
//  			b[s.top()] = false;
//  			s.pop();
//  		}
//  		g[s.top()] = gtot;
//  		b[s.top()] = false;
//  		s.pop();
//  	}
//  }
//  int main()
//  {
//  	int n, m, x, y;
//  	cin >> n >> m;
//  	int i, j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		add(x, y);
//  		add(y, x);
//  	}
//  	tarjan(1, 0);
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = head[i]; j; j = e[j].next)
//  		{
//  			int to = e[j].to;
//  			if (g[to] != g[i])
//  			{
//  				++du[g[to]];
//  				++du[g[i]];
//  			}
//  		}
//  	}
//  	int ans = 0;
//  	for (j = 1; j <= gtot; ++j)
//  	{
//  		if (du[j] == 2)
//  		{
//  			++ans;
//  		}
//  	}
//  	cout << (ans + 1) / 2;
//  	return 0;
//  }

// P1008
// bool b[10];
// int a[10];
// void print() { printf("%d%d%d %d%d%d %d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]); }
// bool check()
// {
// 	int x[5] = {0}, cur = 0, j = 1;
// 	while (j <= 9)
// 	{
// 		if (j % 3 == 1)
// 			++cur;
// 		x[cur] = x[cur] * 10 + a[j];
// 		++j;
// 	}
// 	if (x[1] * 2 == x[2] && x[1] * 3 == x[3])
// 		return true;
// 	else
// 		return false;
// }
// void dfs(int now)
// {
// 	if (now == 10 && check())
// 		print();
// 	for (int j = 1; j <= 9; ++j)
// 	{
// 		if (!b[j])
// 		{
// 			b[j] = true;
// 			a[now] = j;
// 			dfs(now + 1);
// 			b[j] = false;
// 		}
// 	}
// }
// int main()
// {
// 	dfs(1);
// 	return 0;
// }

// T294948
// const int R = 1e5 + 10;
// using ll = long long;
// ll a[R], b[R];
// ll gcd(ll x, ll y)
// {
// 	if (y == 0)
// 		return x;
// 	return gcd(y, x % y);
// }
// int main()
// {
// 	int t, n, i, j, pos;
// 	bool flag;
// 	ll m;
// 	cin >> t;
// 	while (t--)
// 	{
// 		cin >> n >> m;
// 		for (j = 1; j < n; ++j)
// 			cin >> a[j];
// 		flag = true;
// 		for (j = 2; j < n; ++j)
// 			if (a[j] != a[j - 1])
// 			{
// 				b[j] = gcd(a[j], a[j - 1]);
// 				pos = j;
// 				break;
// 			}
// 		for (j = pos - 1; j >= 1; --j)
// 			b[j] = a[j] / b[j + 1];
// 		for (j = pos + 1; j <= n; ++j)
// 			b[j] = a[j - 1] / b[j - 1];
// 		for (j = 1; j <= n; ++j)
// 			if (b[j] > m)
// 			{
// 				flag = false;
// 				break;
// 			}
// 		if (flag)
// 		{
// 			for (j = 1; j <= n; ++j)
// 				cout << b[j] << ' ';
// 			cout << '\n';
// 		}
// 		else
// 			cout << "-1\n";
// 	}
// 	return 0;
// }

// CF896C_�������ģ����_ULL������
//  using ull = unsigned long long;
//  const int R = 1e5 + 10, MOD = 1e9 + 7;
//  ull a[R];
//  struct Node
//  {
//  	int l, r;
//  	mutable ull val;
//  	Node(int a, int b = 0, ull c = 0) { l = a, r = b, val = c; }
//  	bool operator<(const Node &x) const { return l < x.l; }
//  };
//  set<Node> s;
//  using st = set<Node>::iterator;
//  st split(int pos)
//  {
//  	st it = s.lower_bound(Node(pos));
//  	if (it != s.end() && it->l == pos)
//  		return it;
//  	--it;
//  	int l = it->l, r = it->r;
//  	ull val = it->val;
//  	s.erase(it);
//  	s.insert(Node(l, pos - 1, val));
//  	return s.insert(Node(pos, r, val)).first;
//  }
//  void assign(int l, int r, ull val)
//  {
//  	st it2 = split(r + 1), it1 = split(l);
//  	s.erase(it1, it2);
//  	s.insert(Node(l, r, val));
//  }
//  void add(int l, int r, ull val)
//  {
//  	st it2 = split(r + 1), it1 = split(l);
//  	for (; it1 != it2; ++it1)
//  		it1->val += val;
//  }
//  ull kth(int l, int r, int k)
//  {
//  	st it2 = split(r + 1), it1 = split(l);
//  	vector<pair<ull, int>> v;
//  	// v.clear();
//  	for (st t = it1; t != it2; ++t)
//  		v.push_back({t->val, t->r - t->l + 1});
//  	sort(v.begin(), v.end());
//  	int i;
//  	for (i = 0; i < v.size(); ++i)
//  	{
//  		k -= v[i].second;
//  		if (k <= 0)
//  			return v[i].first;
//  	}
//  	return ull(-1);
//  }
//  ull pow(ull a, ull p, ull mod)
//  {
//  	if (p == 0)
//  		return 1;
//  	ull res = pow(a, p / 2, mod) % mod;
//  	if (p & 1)
//  	{
//  		res = res * res % mod;
//  		res = res * a % mod;
//  	}
//  	else
//  		res = res * res % mod;
//  	return res;
//  }
//  ull query(int l, int r, ull x, ull mod)
//  {
//  	st it2 = split(r + 1), it1 = split(l);
//  	ull res = 0;
//  	for (; it1 != it2; ++it1)
//  		res = (res + ull(it1->r - it1->l + 1) * pow(it1->val, x, mod)) % mod;
//  	return res;
//  }
//  ull seed;
//  ull rnd()
//  {
//  	ull res = seed;
//  	seed = (seed * 7 + 13) % MOD;
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, i, op, l, r;
//  	ull x, y, vmax;
//  	cin >> n >> m >> seed >> vmax;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		a[i] = (rnd() % vmax) + 1;
//  		s.insert(Node(i, i, a[i]));
//  	}
//  	for (i = 1; i <= m; ++i)
//  	{
//  		op = (rnd() % 4) + 1;
//  		l = (rnd() % n) + 1;
//  		r = (rnd() % n) + 1;
//  		if (l > r)
//  			swap(l, r);
//  		if (op == 3)
//  			x = (rnd() % (r - l + 1)) + 1;
//  		else
//  			x = (rnd() % vmax) + 1;
//  		if (op == 4)
//  			y = (rnd() % vmax) + 1;
//  		if (op == 1)
//  			add(l, r, x);
//  		else if (op == 2)
//  			assign(l, r, x);
//  		else if (op == 3)
//  			cout << kth(l, r, x) << '\n';
//  		else
//  			cout << query(l, r, x, y) << '\n';
//  	}
//  	return 0;
//  }

// P3919_��ϯ��ģ��
//  const int R = 1e6 + 10;
//  int a[R], root[R], tot, vtot;
//  struct Node
//  {
//  	int l, r, val;
//  } tree[R << 5];
//  void build(int &k, int l, int r)
//  {
//  	k = ++tot;
//  	if (l == r)
//  	{
//  		tree[k].val = a[l];
//  		return;
//  	}
//  	int mid = (l + r) >> 1;
//  	build(tree[k].l, l, mid);
//  	build(tree[k].r, mid + 1, r);
//  }
//  void update(int &k, int prek, int l, int r, int pos, int val)
//  {
//  	k = ++tot;
//  	tree[k] = tree[prek];
//  	if (l == r)
//  	{
//  		tree[k].val = val;
//  		return;
//  	}
//  	int mid = (l + r) >> 1;
//  	if (pos <= mid)
//  		update(tree[k].l, tree[prek].l, l, mid, pos, val);
//  	else
//  		update(tree[k].r, tree[prek].r, mid + 1, r, pos, val);
//  }
//  int query(int k, int l, int r, int pos)
//  {
//  	if (l == r)
//  		return tree[k].val;
//  	int mid = (l + r) >> 1;
//  	if (pos <= mid)
//  		return query(tree[k].l, l, mid, pos);
//  	else
//  		return query(tree[k].r, mid + 1, r, pos);
//  }
//  int main()
//  {
//  	int ver, t, pos, val;
//  	int n, m;
//  	cin >> n >> m;
//  	for (int j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	build(root[0], 1, n);
//  	for (int nowver = 1; nowver <= m; ++nowver)
//  	{
//  		cin >> ver >> t;
//  		if (t == 1)
//  		{
//  			cin >> pos >> val;
//  			update(root[nowver], root[ver], 1, n, pos, val);
//  		}
//  		else
//  		{
//  			cin >> pos;
//  			cout << query(root[ver], 1, n, pos) << '\n';
//  			root[nowver] = root[ver];
//  		}
//  	}
//  	return 0;
//  }

// P1342
//  using ll = long long;
//  const int R = 1e6 + 10;
//  ll dis[2][R];
//  bool b[R][2];
//  class CGraph
//  {
//  	struct Edge
//  	{
//  		int to, next;
//  		ll w;
//  	} e[R];
//  	int tot;
//  	struct Q
//  	{
//  		int p;
//  		ll sum;
//  		bool operator<(const Q &x) const { return sum > x.sum; }
//  	};
//  public:
//  	int head[R];
//  	void add(int x, int y, ll w)
//  	{
//  		e[++tot] = {y, head[x], w};
//  		head[x] = tot;
//  	}
//  	void djks(int opt)
//  	{
//  		priority_queue<Q> q;
//  		memset(dis[opt], 0x3f, sizeof(dis[opt]));
//  		dis[opt][1] = 0;
//  		q.push({1, 0});
//  		int from, to, j;
//  		while (!q.empty())
//  		{
//  			from = q.top().p;
//  			q.pop();
//  			if (!b[from][opt])
//  			{
//  				b[from][opt] = true;
//  				for (j = head[from]; j; j = e[j].next)
//  				{
//  					to = e[j].to;
//  					if (dis[opt][from] + e[j].w < dis[opt][to])
//  					{
//  						dis[opt][to] = dis[opt][from] + e[j].w;
//  						q.push({to, dis[opt][to]});
//  					}
//  				}
//  			}
//  		}
//  	}
//  } g[2]; // 0��1��
//  int main()
//  {
//  	int n, m, x, y;
//  	ll w, ans = 0;
//  	cin >> n >> m;
//  	int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> w;
//  		g[0].add(x, y, w);
//  		g[1].add(y, x, w);
//  	}
//  	g[0].djks(0);
//  	g[1].djks(1);
//  	for (j = 1; j <= n; ++j)
//  	{
//  		ans += dis[0][j] + dis[1][j];
//  	}
//  	cout << ans << '\n';
//  	return 0;
//  }

// P1629
//  using ll = long long;
//  const int M = 1e5 + 10, R = 1e3 + 10;
//  ll dis[2][R];
//  bool b[R][2];
//  class CGraph
//  {
//  	struct Edge
//  	{
//  		int to, next;
//  		ll w;
//  	} e[M];
//  	int tot;
//  	struct Q
//  	{
//  		int p;
//  		ll sum;
//  		bool operator<(const Q &x) const { return sum > x.sum; }
//  	};
//  public:
//  	int head[R];
//  	void add(int x, int y, ll w)
//  	{
//  		e[++tot] = {y, head[x], w};
//  		head[x] = tot;
//  	}
//  	void djks(int opt)
//  	{
//  		priority_queue<Q> q;
//  		memset(dis[opt], 0x3f, sizeof(dis[opt]));
//  		dis[opt][1] = 0;
//  		q.push({1, 0});
//  		int from, to, j;
//  		while (!q.empty())
//  		{
//  			from = q.top().p;
//  			q.pop();
//  			if (!b[from][opt])
//  			{
//  				b[from][opt] = true;
//  				for (j = head[from]; j; j = e[j].next)
//  				{
//  					to = e[j].to;
//  					if (dis[opt][from] + e[j].w < dis[opt][to])
//  					{
//  						dis[opt][to] = dis[opt][from] + e[j].w;
//  						q.push({to, dis[opt][to]});
//  					}
//  				}
//  			}
//  		}
//  	}
//  } g[2]; // 0��1��
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin.tie(nullptr);
//  	cout.tie(nullptr);
//  	int n, m, x, y;
//  	ll w, ans = 0;
//  	cin >> n >> m;
//  	int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> w;
//  		g[0].add(x, y, w);
//  		g[1].add(y, x, w);
//  	}
//  	g[0].djks(0);
//  	g[1].djks(1);
//  	for (j = 1; j <= n; ++j)
//  	{
//  		ans += dis[0][j] + dis[1][j];
//  	}
//  	cout << ans << '\n';
//  	return 0;
//  }

// B3609
//  const int N = 1e4 + 10;
//  int dfn[N], low[N], times, tot, belong[N];
//  vector<int> v[N], ans[N];
//  stack<int> s;
//  bool b[N], outb[N];
//  void tarjan(int x)
//  {
//  	dfn[x] = low[x] = ++times;
//  	s.push(x);
//  	b[x] = true;
//  	for (int j = 0; j < v[x].size(); ++j)
//  	{
//  		int to = v[x][j];
//  		if (!dfn[to])
//  		{
//  			tarjan(to);
//  			low[x] = min(low[x], low[to]);
//  		}
//  		else if (b[to])
//  			low[x] = min(low[x], dfn[to]);
//  	}
//  	if (dfn[x] == low[x])
//  	{
//  		++tot;
//  		while (x != s.top())
//  		{
//  			ans[tot].push_back(s.top());
//  			b[s.top()] = false;
//  			belong[s.top()] = tot;
//  			s.pop();
//  		}
//  		ans[tot].push_back(s.top());
//  		b[s.top()] = false;
//  		belong[s.top()] = tot;
//  		s.pop();
//  	}
//  }
//  int main()
//  {
//  	int n, m, i, j, x, y;
//  	cin >> n >> m;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		v[x].push_back(y);
//  	}
//  	for (j = 1; j <= n; ++j)
//  		if (!dfn[j])
//  			tarjan(j);
//  	cout << tot << '\n';
//  	for (i = 1; i <= n; ++i)
//  	{
//  		if (outb[belong[i]]) //��ǰ��ǿ��ͨ���������
//  			continue;
//  		outb[belong[i]] = true;
//  		sort(ans[belong[i]].begin(), ans[belong[i]].end());
//  		for (j = 0; j < ans[belong[i]].size(); ++j)
//  		{
//  			cout << ans[belong[i]][j] << ' ';
//  		}
//  		cout << '\n';
//  	}
//  	return 0;
//  }

// ��P3369_ƽ����ģ��_FHQ Treapд��
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int l, r, val, key, size;
//  } tree[R];
//  mt19937 rd;
//  int tot, root; //ÿ�β�����Ҫ����root
//  int create(int val)
//  {
//  	tree[++tot].key = rd();
//  	tree[tot].val = val;
//  	tree[tot].size = 1;
//  	return tot;
//  }
//  void pushup(int k)
//  {
//  	tree[k].size = tree[tree[k].l].size + tree[tree[k].r].size + 1;
//  }
//  void split(int k, int val, int &x, int &y)
//  {
//  	if (k == 0)
//  	{
//  		x = y = 0;
//  		return;
//  	}
//  	if (tree[k].val <= val)
//  	{
//  		x = k;
//  		split(tree[k].r, val, tree[k].r, y);
//  	}
//  	else
//  	{
//  		y = k;
//  		split(tree[k].l, val, x, tree[k].l);
//  	}
//  	pushup(k);
//  }
//  int merge(int x, int y)
//  {
//  	if (x == 0 || y == 0)
//  		return (x == 0 ? y : x);
//  	if (tree[x].key > tree[y].key)
//  	{
//  		tree[x].r = merge(tree[x].r, y);
//  		pushup(x);
//  		return x;
//  	}
//  	else
//  	{
//  		tree[y].l = merge(x, tree[y].l);
//  		pushup(y);
//  		return y;
//  	}
//  }
//  int x, y, z; //��ʱ���������ӻ��ʵ�ʺ���
//  void insert(int val)
//  {
//  	split(root, val, x, y);
//  	root = merge(merge(x, create(val)), y);
//  }
//  void del(int val)
//  {
//  	split(root, val, x, y);
//  	split(x, val - 1, x, z);
//  	if (tree[z].size)
//  	{
//  		z = merge(tree[z].l, tree[z].r); //���ڵ㲻Ҫ�ˣ������������ϲ��������൱��ȥ�����ڵ�
//  		root = merge(merge(x, z), y);
//  	}
//  }
//  int rankx(int val)
//  {
//  	split(root, val - 1, x, y); //ע����Ҫ������<val�����ֵ�����x�ϣ�����<=
//  	int res = tree[x].size + 1;
//  	root = merge(x, y);
//  	return res;
//  }
//  int kth(int k)
//  {
//  	x = root;
//  	while (x)
//  	{
//  		if (tree[tree[x].l].size + 1 == k)
//  			return tree[x].val;
//  		if (tree[tree[x].l].size >= k)
//  			x = tree[x].l;
//  		else
//  		{
//  			k = k - (tree[tree[x].l].size + 1); //ע��������������Ĵ�С+1
//  			x = tree[x].r;
//  		}
//  	}
//  	return -1;
//  }
//  int pre(int val)
//  {
//  	split(root, val - 1, x, y);
//  	z = x;
//  	while (tree[z].r)
//  		z = tree[z].r;
//  	root = merge(x, y);
//  	return tree[z].val;
//  }
//  int ext(int val)
//  {
//  	split(root, val, x, y);
//  	z = y;
//  	while (tree[z].l)
//  		z = tree[z].l;
//  	root = merge(x, y);
//  	return tree[z].val;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin.tie(nullptr);
//  	cout.tie(nullptr);
//  	int n, opt;
//  	cin >> n;
//  	while (n--)
//  	{
//  		cin >> opt >> x;
//  		if (opt == 1)
//  			insert(x);
//  		else if (opt == 2)
//  			del(x);
//  		else if (opt == 3)
//  			cout << rankx(x) << '\n';
//  		else if (opt == 4)
//  			cout << kth(x) << '\n';
//  		else if (opt == 5)
//  			cout << pre(x) << '\n';
//  		else
//  			cout << ext(x) << '\n';
//  	}
//  	return 0;
//  }

// P6136_Ҳ�Ǹ�ƽ����ģ��
//  const int R = 1e5 + 1e6 + 10;
//  struct Node
//  {
//  	int l, r, val, key, size;
//  } tree[R];
//  mt19937 rd;
//  int tot, root; //ÿ�β�����Ҫ����root
//  int create(int val)
//  {
//  	tree[++tot].key = rd();
//  	tree[tot].val = val;
//  	tree[tot].size = 1;
//  	return tot;
//  }
//  void pushup(int k)
//  {
//  	tree[k].size = tree[tree[k].l].size + tree[tree[k].r].size + 1;
//  }
//  void split(int k, int val, int &x, int &y)
//  {
//  	if (k == 0)
//  	{
//  		x = y = 0;
//  		return;
//  	}
//  	if (tree[k].val <= val)
//  	{
//  		x = k;
//  		split(tree[k].r, val, tree[k].r, y);
//  	}
//  	else
//  	{
//  		y = k;
//  		split(tree[k].l, val, x, tree[k].l);
//  	}
//  	pushup(k);
//  }
//  int merge(int x, int y)
//  {
//  	if (x == 0 || y == 0)
//  		return (x == 0 ? y : x);
//  	if (tree[x].key > tree[y].key)
//  	{
//  		tree[x].r = merge(tree[x].r, y);
//  		pushup(x);
//  		return x;
//  	}
//  	else
//  	{
//  		tree[y].l = merge(x, tree[y].l);
//  		pushup(y);
//  		return y;
//  	}
//  }
//  int x, y, z; //��ʱ���������ӻ��ʵ�ʺ���
//  void insert(int val)
//  {
//  	split(root, val, x, y);
//  	root = merge(merge(x, create(val)), y);
//  }
//  void del(int val)
//  {
//  	split(root, val, x, y);
//  	split(x, val - 1, x, z);
//  	if (tree[z].size)
//  	{
//  		z = merge(tree[z].l, tree[z].r); //���ڵ㲻Ҫ�ˣ������������ϲ��������൱��ȥ�����ڵ�
//  		root = merge(merge(x, z), y);
//  	}
//  }
//  int rankx(int val)
//  {
//  	split(root, val - 1, x, y); //ע����Ҫ������<val�����ֵ�����x�ϣ�����<=
//  	int res = tree[x].size + 1;
//  	root = merge(x, y);
//  	return res;
//  }
//  int kth(int k)
//  {
//  	x = root;
//  	while (x)
//  	{
//  		if (tree[tree[x].l].size + 1 == k)
//  			return tree[x].val;
//  		if (tree[tree[x].l].size >= k)
//  			x = tree[x].l;
//  		else
//  		{
//  			k = k - (tree[tree[x].l].size + 1); //ע��������������Ĵ�С+1
//  			x = tree[x].r;
//  		}
//  	}
//  	return -1;
//  }
//  int pre(int val)
//  {
//  	split(root, val - 1, x, y);
//  	z = x;
//  	while (tree[z].r)
//  		z = tree[z].r;
//  	root = merge(x, y);
//  	return tree[z].val;
//  }
//  int ext(int val)
//  {
//  	split(root, val, x, y);
//  	z = y;
//  	while (tree[z].l)
//  		z = tree[z].l;
//  	root = merge(x, y);
//  	return tree[z].val;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin.tie(nullptr);
//  	cout.tie(nullptr);
//  	int n, m, opt, last = 0, ans = 0;
//  	cin >> n >> m;
//  	for (int j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		insert(x);
//  	}
//  	while (m--)
//  	{
//  		cin >> opt >> x;
//  		x = x ^ last;
//  		if (opt == 1)
//  			insert(x);
//  		else if (opt == 2)
//  			del(x);
//  		else if (opt == 3)
//  			last = rankx(x), ans ^= last;
//  		else if (opt == 4)
//  			last = kth(x), ans ^= last;
//  		else if (opt == 5)
//  			last = pre(x), ans ^= last;
//  		else
//  			last = ext(x), ans ^= last;
//  	}
//  	cout << ans << '\n';
//  	return 0;
//  }

// P3391
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int l, r, val, size, key;
//  	bool tag;
//  } tree[R];
//  int tot, root;
//  mt19937 rd;
//  int crt(int val)
//  {
//  	tree[++tot].val = val;
//  	tree[tot].size = 1;
//  	tree[tot].key = rd();
//  	return tot;
//  }
//  void pushup(int k)
//  {
//  	tree[k].size = tree[tree[k].l].size + tree[tree[k].r].size + 1;
//  }
//  void pushdown(int k)
//  {
//  	swap(tree[k].l, tree[k].r);
//  	tree[tree[k].l].tag ^= 1; // 0->1, 1->0
//  	tree[tree[k].r].tag ^= 1;
//  	tree[k].tag = false;
//  }
//  void split(int k, int sz, int &x, int &y)
//  {
//  	if (k == 0)
//  	{
//  		x = y = 0;
//  		return;
//  	}
//  	if (tree[k].tag)
//  		pushdown(k);
//  	if (tree[tree[k].l].size + 1 <= sz)
//  	{
//  		x = k;
//  		split(tree[k].r, sz - (tree[tree[k].l].size + 1), tree[k].r, y);
//  	}
//  	else
//  	{
//  		y = k;
//  		split(tree[k].l, sz, x, tree[k].l);
//  	}
//  	pushup(k);
//  }
//  int merge(int x, int y)
//  {
//  	if (x == 0 || y == 0)
//  	{
//  		return (x == 0 ? y : x);
//  	}
//  	if (tree[x].key < tree[y].key) // less root
//  	{
//  		if (tree[x].tag)
//  			pushdown(x);
//  		tree[x].r = merge(tree[x].r, y);
//  		pushup(x);
//  		return x;
//  	}
//  	else
//  	{
//  		if (tree[y].tag)
//  			pushdown(y);
//  		tree[y].l = merge(x, tree[y].l);
//  		pushup(y);
//  		return y;
//  	}
//  }
//  int x, y, z;
//  void rev(int l, int r)
//  {
//  	split(root, l - 1, x, y);
//  	split(y, r - l + 1, y, z);
//  	tree[y].tag ^= 1;
//  	root = merge(merge(x, y), z);
//  }
//  void print(int x)
//  {
//  	if (x == 0)
//  		return;
//  	if (tree[x].tag)
//  		pushdown(x);
//  	print(tree[x].l);
//  	cout << tree[x].val << ' ';
//  	print(tree[x].r);
//  }
//  int main()
//  {
//  	int n, m, l, r;
//  	cin >> n >> m;
//  	int j;
//  	for (j = 1; j <= n; ++j)
//  		root = merge(root, crt(j));
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> l >> r;
//  		rev(l, r);
//  	}
//  	print(root);
//  	return 0;
//  }

// P3367
//  const int R = 1e4 + 10;
//  int fa[R];
//  auto read()
//  {
//  	auto res = 0;
//  	bool fh = true;
//  	char c = getchar();
//  	while (!isdigit(c))
//  	{
//  		if (c == '-')
//  			fh = ~fh;
//  		c = getchar();
//  	}
//  	while (isdigit(c))
//  	{
//  		res = (res << 1) + (res << 3) + (c ^ 48);
//  		c = getchar();
//  	}
//  	return (fh ? res : -res);
//  }
//  int fndfa(int x)
//  {
//  	if (x == fa[x])
//  		return x;
//  	return fa[x] = fndfa(fa[x]);
//  }
//  void merge(int x, int y)
//  {
//  	int fx = fndfa(x), fy = fndfa(y);
//  	fa[fy] = fx;
//  }
//  int main()
//  {
//  	int n = read(), m = read(), z, x, y, fx, fy;
//  	int j;
//  	for (j = 1; j <= n; ++j)
//  		fa[j] = j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		z = read(), x = read(), y = read();
//  		fx = fndfa(x), fy = fndfa(y);
//  		if (z == 1)
//  			fa[fy] = fx;
//  		else
//  			printf("%c\n", (fx == fy ? 'Y' : 'N'));
//  	}
//  	return 0;
//  }

// P8865
//  using ll = long long;
//  const int N = 1010, M = 998244353;
//  char c[N][N];
//  int c1[N][N], c2[N][N], f1[N][N], f2[N][N]; // c2������һ��ǰ׺��
//  void pre(int n, int m)
//  {
//  	int i, j, cnt;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cnt = 0;
//  		for (j = m; j >= 1; --j)
//  		{
//  			if (c[i][j] == '1')
//  			{
//  				cnt = 0;
//  				continue;
//  			}
//  			c1[i][j] = cnt;
//  			++cnt;
//  		}
//  	} // Ԥ����C
//  	for (j = 1; j <= m; ++j)
//  	{
//  		for (i = n; i >= 1; --i)
//  		{
//  			c2[i][j] = (c[i][j] == '0' ? c1[i][j] + c2[i + 1][j] : 0);
//  		}
//  	} // Ԥ����Cǰ׺��
//  	for (j = 1; j <= m; ++j)
//  	{
//  		for (i = n - 1; i >= 1; --i)
//  		{
//  			if (c[i][j] == '1' || c[i + 1][j] == '1')
//  				continue;
//  			f1[i][j] = f1[i + 1][j] + 1;
//  		}
//  	} // Ԥ����F
//  	for (j = 1; j <= m; ++j)
//  	{
//  		for (i = n; i >= 1; --i)
//  		{
//  			f2[i][j] = (c[i][j] == '0' ? f2[i + 1][j] + c1[i][j] * f1[i][j] : 0);
//  		}
//  	} // Ԥ����Fǰ׺��
//  }
//  int main()
//  {
//  	int t, id, n, m, cc, f, cnt;
//  	cin >> t >> id;
//  	ll ansc, ansf;
//  	int i, j, k;
//  	while (t--)
//  	{
//  		ansc = ansf = 0;
//  		cin >> n >> m >> cc >> f;
//  		for (i = 1; i <= n; ++i)
//  			for (j = 1; j <= m; ++j)
//  				cin >> c[i][j];
//  		pre(n, m);
//  		for (i = 1; i <= n; ++i)
//  		{
//  			for (j = 1; j <= m; ++j)
//  			{
//  				if (c[i + 1][j] == '0') // ��Ҫ��֤�����жϵ�
//  				{
//  					ansc = (ansc + ll(c1[i][j]) * ll(c2[i + 2][j])) % M;
//  					ansf = (ansf + ll(c1[i][j]) * ll(f2[i + 2][j])) % M;
//  					// ansc = (c[i + 1][j] == '0' ? (ansc + ll(c1[i][j]) * ll(c2[i + 2][j])) % M : ansc); // �м䲻���жϵģ�����Ҫ�������Ŀ���㣬��֤ÿ���ۼӵĶ��Ǻ���Ľ��
//  					// ansf = (c[i + 1][j] == '0' ? (ansf + ll(c1[i][j]) * ll(c2[i + 2][j]) * ll(f2[i + 2][j])) % M : ansf);
//  				}
//  			}
//  		}
//  		// for (j = 1; j <= m; ++j)
//  		// {
//  		// 	for (i = 1; i <= n; ++i)
//  		// 	{
//  		// 		if (c[i][j] == '1' || c[i + 1][j] == '1')
//  		// 			continue;
//  		// 		for (k = i + 2; k <= n && c[k][j] == '0'; ++k) // �����жϵ�
//  		// 		{
//  		// 			ansc = (ansc + ll(c1[i][j]) * ll(c1[k][j])) % M;
//  		// 			ansf = (ansf + ll(c1[i][j]) * ll(c1[k][j]) * ll(f1[k][j])) % M;
//  		// 		}
//  		// 	}
//  		// }
//  		cout << (ansc * cc) % M << ' ' << (ansf * f) % M << '\n';
//  		// ������
//  		for (i = 1; i <= n; ++i)
//  			for (j = 1; j <= m; ++j)
//  				c[i][j] = c1[i][j] = c2[i][j] = f1[i][j] = f2[i][j] = 0;
//  	}
//  	return 0;
//  }

// P3871
//  const int R = 1e5 + 1e4 + 10;
//  struct Node
//  {
//  	int l, r, val, key, sz;
//  } t[R];
//  int tot, root;
//  void pushup(int k) { t[k].sz = t[t[k].l].sz + t[t[k].r].sz + 1; }
//  void split(int k, int val, int &x, int &y)
//  {
//  	if (k == 0)
//  	{
//  		x = y = 0;
//  		return;
//  	}
//  	if (t[k].val <= val)
//  	{
//  		x = k;
//  		split(t[k].r, val, t[k].r, y);
//  	}
//  	else
//  	{
//  		y = k;
//  		split(t[k].l, val, x, t[k].l);
//  	}
//  	pushup(k);
//  }
//  mt19937 rd;
//  int crt(int a)
//  {
//  	t[++tot].val = a;
//  	t[tot].key = rd();
//  	t[tot].sz = 1;
//  	return tot;
//  }
//  int merge(int x, int y)
//  {
//  	if (x == 0 || y == 0)
//  		return x + y;
//  	if (t[x].key < t[y].key)
//  	{
//  		t[x].r = merge(t[x].r, y);
//  		pushup(x);
//  		return x;
//  	}
//  	else
//  	{
//  		t[y].l = merge(x, t[y].l);
//  		pushup(y);
//  		return y;
//  	}
//  }
//  int x, y, z;
//  void insert(int v)
//  {
//  	split(root, v - 1, x, y);
//  	split(y, v, y, z);
//  	root = merge(merge(x, merge(y, crt(v))), z);
//  }
//  int kth(int k)
//  {
//  	int res;
//  	x = root;
//  	while (x)
//  	{
//  		if (t[t[x].l].sz + 1 == k)
//  		{
//  			res = t[x].val;
//  			break;
//  		}
//  		if (t[t[x].l].sz >= k)
//  		{
//  			x = t[x].l;
//  		}
//  		else
//  		{
//  			k -= t[t[x].l].sz + 1;
//  			x = t[x].r;
//  		}
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, x, k, ans1, ans2;
//  	string s;
//  	cin >> n;
//  	int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x;
//  		insert(x);
//  	}
//  	cin >> m;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> s;
//  		if (s[0] == 'a')
//  		{
//  			cin >> x;
//  			insert(x);
//  		}
//  		else
//  		{
//  			ans1 = kth(tot / 2 + 1);
//  			if (tot & 1) // ������
//  			{
//  				cout << ans1 << '\n';
//  			}
//  			else
//  			{
//  				ans2 = kth(tot / 2);
//  				cout << min(ans1, ans2) << '\n';
//  			}
//  		}
//  	}
//  	return 0;
//  }

// ��P1471
// using db = double;
// const int R = 1e5 + 10;
// db a[R]; // ҲҪ��double������
// #define lc k << 1
// #define rc k << 1 | 1
// struct Node
// {
// 	int l, r;
// 	db sum, sum1, tag; // һ��ά��a1+a2+...+an��һ��ά��a1^2+a2^2+...+an^2
// } s[R << 2];
// void pushup(int k)
// {
// 	s[k].sum = s[lc].sum + s[rc].sum;
// 	s[k].sum1 = s[lc].sum1 + s[rc].sum1;
// }
// void add(int k, db val)
// {
// 	s[k].tag += val;
// 	s[k].sum1 += 2 * val * s[k].sum + db(s[k].r - s[k].l + 1) * val * val; // �������������ȴ���ƽ����
// 	s[k].sum += val * db(s[k].r - s[k].l + 1);
// }
// void pushdown(int k)
// { // Ϊʲôlazytag��ֵ���Ѿ����ϵ�ֵҪͬʱ���ڣ�˼��һ��Ҷ�ӽ������ˡ����update����Ҷ�ӽ�㣬��ôҶ�ӽ���ֵ����Զ���ᱻ����
// 	// ������֣������Ҷ�ӽ����й�add����ô����tag�Ͳ��ᱻ���㣬����Ҳ����Ӱ����
// 	add(lc, s[k].tag);
// 	add(rc, s[k].tag);
// 	s[k].tag = 0;
// }
// void build(int k, int l, int r)
// {
// 	s[k].l = l;
// 	s[k].r = r;
// 	if (l == r)
// 	{
// 		s[k].sum = a[l];
// 		s[k].sum1 = a[l] * a[l];
// 		return;
// 	}
// 	int mid = (l + r) >> 1;
// 	build(lc, l, mid);
// 	build(rc, mid + 1, r);
// 	pushup(k);
// }
// void update(int k, int x, int y, db val)
// {
// 	if (s[k].l >= x && s[k].r <= y)
// 	{
// 		add(k, val);
// 		return;
// 	}
// 	pushdown(k);
// 	int mid = (s[k].l + s[k].r) >> 1;
// 	if (x <= mid) // ���д��<=s[k].l�ˣ�����
// 		update(lc, x, y, val);
// 	if (y > mid)
// 		update(rc, x, y, val);
// 	pushup(k);
// }
// db query1(int k, int x, int y)
// {
// 	if (s[k].l >= x && s[k].r <= y)
// 		return s[k].sum;
// 	int mid = (s[k].l + s[k].r) >> 1;
// 	pushdown(k);
// 	db res = 0;
// 	if (x <= mid)
// 		res = query1(lc, x, y);
// 	if (y > mid)
// 		res += query1(rc, x, y);
// 	return res;
// }
// db query2(int k, int x, int y)
// {
// 	if (s[k].l >= x && s[k].r <= y)
// 		return s[k].sum1;
// 	int mid = (s[k].l + s[k].r) >> 1;
// 	pushdown(k);
// 	db res = 0;
// 	if (x <= mid)
// 		res = query2(lc, x, y);
// 	if (y > mid)
// 		res += query2(rc, x, y);
// 	return res;
// }
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	cout.tie(nullptr);
// 	int n, m, l, r;
// 	cin >> n >> m;
// 	int j;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> a[j];
// 	}
// 	build(1, 1, n);
// 	char t;
// 	db tmp, avg, k;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> t >> l >> r;
// 		if (t == '1')
// 		{
// 			cin >> k;
// 			update(1, l, r, k);
// 		}
// 		else if (t == '2')
// 		{
// 			avg = query1(1, l, r) / db(r - l + 1);
// 			cout << fixed << setprecision(4) << avg << '\n';
// 		}
// 		else
// 		{
// 			avg = query1(1, l, r) / db(r - l + 1);
// 			tmp = query2(1, l, r) / db(r - l + 1) - avg * avg;
// 			cout << fixed << setprecision(4) << tmp << '\n';
// 		}
// 	}
// 	return 0;
// }

// ��P3834_��ϯ��ģ��
// const int R = 2e5 + 10;
// struct Node
// {
// 	int l, r, sum;
// } tree[R * 40];
// int a[R], read(), root[R], tot;
// vector<int> v;
// void insert(int &k, int l, int r, int lastv, int pos)
// {
// 	tree[++tot] = tree[lastv];
// 	k = tot;
// 	++tree[k].sum;
// 	if (l == r)
// 		return;
// 	int mid = (l + r) >> 1;
// 	if (pos <= mid)
// 		insert(tree[k].l, l, mid, tree[lastv].l, pos);
// 	else
// 		insert(tree[k].r, mid + 1, r, tree[lastv].r, pos);
// }
// int query(int l, int r, int lastvl, int lastvr, int k)
// {
// 	if (l == r)
// 		return l;
// 	int mid = (l + r) >> 1;
// 	int sum = tree[tree[lastvr].l].sum - tree[tree[lastvl].l].sum;
// 	if (k <= sum)
// 		return query(l, mid, tree[lastvl].l, tree[lastvr].l, k);
// 	else
// 		return query(mid + 1, r, tree[lastvl].r, tree[lastvr].r, k - sum);
// }
// int getpos(int val) { return lower_bound(v.begin(), v.end(), val) - v.begin() + 1; } // ����ֵ��[1,len]��Χ��
// int main()
// {
// 	int n = read(), m = read();
// 	int j;
// 	for (j = 1; j <= n; ++j)
// 		v.push_back(a[j] = read());
// 	sort(v.begin(), v.end());
// 	v.erase(unique(v.begin(), v.end()), v.end());
// 	for (j = 1; j <= n; ++j)
// 		insert(root[j], 1, n, root[j - 1], getpos(a[j]));
// 	int l, r, k;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		l = read(), r = read(), k = read();
// 		printf("%d\n", v[query(1, n, root[l - 1], root[r], k) - 1]); // �����query�ķ���ֵ��[1,len]����v���±��0��ʼ������Ҫ-1
// 	}
// 	return 0;
// }
// int read()
// {
// 	bool fh = true;
// 	char c = getchar();
// 	while (!isdigit(c))
// 	{
// 		if (c == '-')
// 			fh = !fh;
// 		c = getchar();
// 	}
// 	int x = 0;
// 	while (isdigit(c))
// 	{
// 		x = (x << 1) + (x << 3) + (c ^ 48);
// 		c = getchar();
// 	}
// 	return (fh ? x : -x);
// }

// ����ˢ�⣺P2671~P8818
//  NOIP2022��ǰ��ѵ��P8862~T294948
