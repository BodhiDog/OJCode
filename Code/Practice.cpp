#include <bits/stdc++.h>
using namespace std;

int main()
{
	//----------------------------Practice.cpp----------------------------

	// �����*
	//****
	//******��
	//  cout<<"*"<<endl;
	//  cout<<"****"<<endl;
	//  cout<<"******"<<endl;

	// �������
	//  float a, b, c;
	//  cin>>a>>b;
	//  c = a * b;
	//  cout<<c;

	// Բ���
	//  float r, s;
	//  const float pai = 3.14;  //const�ǳ���
	//  cin>>r;
	//  s = pow(r, 2) * pai;
	//  cout<<fixed<<setprecision(3)<<s<<endl;
	//  //��ʹ��printf("%.3f", s)

	// С�ڵ���10��ÿ��3Ԫ��10~20��ÿ��2.6Ԫ������20��ÿ��2Ԫ����n��Ҫ������Ǯ
	//  float n;
	//  cin>>n;
	//  if (n <= 10)
	//  {
	//  	cout<<n * 3;
	//  }
	//  if ((n > 10)&&(n < 20))
	//  {
	//  	cout<<n * 2.6;
	//  }
	//  if (n >= 20)
	//  {
	//  	cout<<n * 2;
	//  }

	// С�ڵ���10��ÿ��3Ԫ��10~20�ﳬ������ÿ��2.6Ԫ������20�ﳬ������ÿ��2Ԫ����n��Ҫ������Ǯ
	//  float n, a;
	//  cin>>n;
	//  if (n <= 10)
	//  {
	//  	cout<<n * 3;
	//  }
	//  if ((n > 10)&&(n < 20))
	//  {
	//  	a = 30 + (n - 10) * 2.6;
	//  	cout<<a;
	//  }
	//  if (n >= 20)
	//  {
	//  	a = 56 + (n - 20) * 2;
	//  	cout<<a;
	//  }

	// 3����������
	//  int a, b, c;
	//  cin>>a>>b>>c;
	//  if (a > b)
	//  {
	//  	if (a > c)
	//  	{
	//  		cout<<a;
	//  	}
	//  	else
	//  	{
	//  		cout<<c;
	//  	}
	//  }
	//  else
	//  {
	//  	if (b > c)
	//  	{
	//  		cout<<b;
	//  	}
	//  	else
	//  	{
	//  		cout<<c;
	//  	}
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
	//  if ((a % 2 == 0)&&(a > 4)&&(a <= 12))
	//  {
	//  	cout<<"0"<<" ";
	//  }
	//  else
	//  {
	//  	cout<<"1"<<" ";
	//  }

	// 1~n���ܱ�3�������ĸ���
	//  int n, a;
	//  cin>>n;
	//  for (int i = 1; i < n; i = i + 3)
	//  {
	//  	a++;
	//  }
	//  cout<<a<<endl;

	// 1~n���ܱ�3�������ܱ�5�������ĸ���
	//  int n, a = 0, b = 0;
	//  cin>>n;
	//  // for (int i = 1; i < n; i++)
	//  // {
	//  // 	if ((i % 3 == 0) || (i % 5 == 0))
	//  // 	{
	//  // 		a++;
	//  // 	}
	//  // }
	//  a = n / 3;
	//  b = n / 5;
	//  c = n / 15;
	//  cout<<a + b - c<<endl;

	// 1~n�ĺ�
	// �ⷨ1
	//  int n;
	//  long long sum = 0;
	//  cin>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	sum = sum + i;
	//  }
	//  cout<<sum<<endl;
	// �ⷨ2
	//  int n;
	//  long long sum = 0;
	//  cin>>n;
	//  sum = (1 + n) * n / 2;
	//  cout<<sum<<endl;

	// ����ڶ�������
	//  int a, b, c;
	//  cin>>a>>b>>c;
	//  cout<<b<<endl;
	//  return 0;

	// �������
	//  int a, b, c;
	//  cin>>a>>b>>c;
	//  printf("%8d" "%8d" "%8d", a, b, c);
	//  return 0;

	// �ַ�����������
	//  char a;
	//  cin>>a;
	//  cout<<"  "<<a<<endl;
	//  cout<<" "<<a<<a<<a<<endl;
	//  cout<<a<<a<<a<<a<<a<<endl;
	//  return 0;

	// �������
	//  int a, b;
	//  cin>>a>>b;
	//  int c, d;
	//  c = a / b;
	//  d = a % b;
	//  cout<<c<<"����"<<d<<endl;
	//  return 0;

	// ��������ĸ�����ֵ
	//  double a, b, c;
	//  cin>>a>>b;
	//  c = a / b;
	//  cout<<fixed<<setprecision(9)<<c<<endl;
	//  return 0;

	// ����
	//  double a, b, c;
	//  cin>>a>>b;
	//  c = b / a * 100;
	//  cout<<fixed<<setprecision(3)<<c<<"%"<<endl;
	//  return 0;

	// ���ݵĴ���ռ��С
	//  int a;  //����
	//  long long int l;  //������
	//  short b;  //������
	//  float x;  //������
	//  double y;  //˫���ȸ�����
	//  bool t;  //������
	//  char d;  //�ַ���
	//  cout<<sizeof(a)<<" "<<sizeof(l)<<" "<<sizeof(b)<<" "<<sizeof(x)<<" "<<sizeof(y)<<" "<<sizeof(t)<<" "<<sizeof(d)<<endl;
	//  return 0;

	// ���ASCII��������Ӧ���ַ�
	//  int b;
	//  cin>>b;
	//  cout<<(char)b<<endl;
	//  return 0;

	// ������ո���Ŀɼ��ַ���ASCII����
	//  char a;
	//  cin>>a;
	//  cout<<(int)a<<endl;
	//  return 0;

	// ��֪���꣬���߶γ���
	//  double xa, ya, xb, yb, n;
	//  cin>>xa>>ya;
	//  cin>>xb>>yb;
	//  n = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
	//  cout<<fixed<<setprecision(3)<<n<<endl;

	// ��֪���꣬�����������
	//  float xa, ya, xb, yb, xc, yc, a, b, c, r, s;  //���嵥����ʵ�ͱ���xa,ya,xb,yb,xc,yc,n,a,b,c,r,s
	//  scanf("f%f%f%f%f%f", &xa, &ya, &xb, &yb, &xc, &yc);  //���������������ǵ�����
	//  a = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
	//  b = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
	//  c = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));  //a,b,c���������������ߵĳ���
	//  r = (a + b + c) / 2;   //r����(a+b+c)/2��ֵ
	//  s = sqrt(r * (r - a) * (r - b) * (r - c));  //s���������ε����
	//  printf("%.2f", s);  //���s

	// �����ֵ
	//  double a;
	//  cin>>a;
	//  if (a < 0)
	//  {
	//  	a = -a;
	//  }
	//  cout<<a<<endl;

	// �ﳵ����·
	//  double a, t1, t2;
	//  cin>>a;
	//  t1 = a / 1.2;
	//  t2 = a / 3.0 + 27 + 23;
	//  if (t1 < t2)
	//  {
	//  	cout<<"Walk";
	//  }
	//  if (t1 == t2)
	//  {
	//  	cout<<"All";
	//  }
	//  if (t1 > t2)
	//  {
	//  	cout<<"Bike";
	//  }

	// �����Ƿ��ܹ���������
	//  float a, b, c;
	//  cin>>a>>b>>c;
	//  if ((a + b > c)&&(a + c > b)&&(b + c >a))
	//  {
	//  	cout<<"Yes"<<endl;
	//  }
	//  else
	//  {
	//  	cout<<"No"<<endl;
	//  }

	// ���׼�����
	//  double a, b;
	//  char x;
	//  cin>>a>>x>>b;
	//  if (x == '+')
	//  {
	//  	cout<<a + b<<endl;
	//  }
	//  if (x == '-')
	//  {
	//  	cout<<a - b<<endl;
	//  }
	//  if (x == '*')
	//  {
	//  	cout<<a * b<<endl;
	//  }
	//  if (x == '/')
	//  {
	//  	cout<<a / b<<endl;
	//  }

	// ASCII�Ƿ�������
	//  char a;
	//  cin>>a;
	//  if ((int)a % 2 == 0)
	//  {
	//  	cout<<"NO"<<endl;
	//  }
	//  else
	//  {
	//  	cout<<"YES"<<endl;
	//  }

	// һ�����ܷ�3,5,7����
	//  int n;
	//  cin>>n;
	//  if (n % 3 == 0)
	//  {
	//  	cout<<"3"<<" ";
	//  }
	//  if (n % 5 == 0)
	//  {
	//  	cout<<"5"<<" ";
	//  }
	//  if (n % 7 == 0)
	//  {
	//  	cout<<"7"<<endl;
	//  }
	//  else
	//  {
	//  	cout<<"n"<<endl;
	//  }

	// ����ƽ��ֵ
	//  double b, x = 0;
	//  int a;
	//  cin>>a;
	//  for (int i = 1; i <= a; i++)
	//  {
	//  	cin>>b;
	//  	x = x + b;
	//  }
	//  cout<<fixed<<setprecision(2)<<x / a<<endl;

	// ����һ�����ĺ���ƽ��ֵ
	//  double b, x = 0;
	//  int a;
	//  cin>>a;
	//  for (int i = 1; i <= a; i++)
	//  {
	//  	cin>>b;
	//  	x = x + b;
	//  }
	//  cout<<x<<endl;
	//  cout<<fixed<<setprecision(5)<<x / a<<endl;

	// �󼫲�
	//  long long int n, max = -99999, min = 99999;
	//  int a[99999];
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> a[i];
	//  	if (a[i] > max)
	//  	{
	//  		max = a[i];
	//  	}
	//  	if (a[i] < min)
	//  	{
	//  		min = a[i];
	//  	}
	//  }
	//  cout<<max - min<<endl;

	// ��ָ��������ͬ�����ĸ���_����
	//  int m, n, a, k = 0;
	//  cin>>n>>m;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin>>a;
	//  	if (a == m)
	//  	{
	//  		k++;
	//  	}
	//  }
	//  cout<<k<<endl;

	// �˷�����
	//  long long int a, b, c;
	//  cin>>a>>b;
	//  c = pow(a, b);
	//  cout<<c<<endl;

	// 쳲��������еĵ�k����
	//  int a = 1, b = 1;  //��һ�����͵ڶ�������Ϊ1
	//  int c, k;
	//  cin>>k;
	//  for (int i = 3; i <= k; i++)  //i��3��ʼѭ��
	//  {
	//  	c = a + b;
	//  	a = b;
	//  	b = c;
	//  }
	//  cout<<b<<endl;

	// ��β���Ʒ�
	//  long long int a, b, n;
	//  double x, y;
	//  cin>>n;
	//  cin>>a>>b;
	//  x = b/(a/1.0);  //ԭ�Ʒ�
	//  for (int i = 2; i <= n; i++)
	//  {
	//  	cin>>a>>b;
	//  	y = b/(a/1.0);  //���Ʒ�
	//  	if (y - x >0.05)
	//  	{
	//  		cout<<"better"<<endl;
	//  	}
	//  	else if (x - y >0.05)
	//  	{
	//  		cout<<"worse"<<endl;
	//  	}
	//  	else
	//  	{
	//  		cout<<"same"<<endl;
	//  	}
	//  }

	// ���������������λ��
	//  int a, b, c, d, n, x, s = 0;
	//  cin>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin>>x;
	//  	a = x / 1000;
	//  	b = (x / 100) % 10;
	//  	c = (x / 10) % 10;
	//  	d = x % 10;
	//  	if (d - a - b - c > 0)
	//  	{
	//  		s++;
	//  	}
	//  }
	//  cout<<s<<endl;

	// ��ָ��������ͬ�����ĸ���_����
	//  int a[10000], n, x, m = 0;
	//  cin>>n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin>>a[i];
	//  }
	//  cin>>x;
	//  for (int j = 0; j < n; j++)
	//  {
	//  	if (a[j] == x)
	//  	{
	//  		m++;
	//  	}
	//  }
	//  cout<<m<<endl;

	// �����������
	//  int n, a[100001], b;
	//  cin>>n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin>>a[i];
	//  }
	//  for (int j = n - 1; j >= 0; j--)
	//  {
	//  	cout<<a[j];
	//  }

	// ����Сֵ
	//  int n, a, min = 0;
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

	// ҩ������
	//  int m, n, a, b = 0;
	//  cin>>m>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin>>a;
	//  	if (m >= a)
	//  	{
	//  		m -= a;
	//  	}
	//  	else
	//  	{
	//  		b++;
	//  	}
	//  }
	//  cout<<b;

	// Ѫѹ����Сʱ��
	//  int n, a, b, t = 0, max = 0;
	//  cin>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin>>a>>b;
	//  	if (a >= 90 && a <= 160 && b >= 60 && b <= 90)
	//  	{
	//  		t++;
	//  		if (t > max)
	//  		{
	//  			max = t;
	//  		}
	//  	}
	//  	else
	//  	{
	//  		t = 0;
	//  	}
	//  }
	//  cout<<max<<endl;

	// ʹÿ�����õ���ƻ������ͬ
	//  int n, a = 0;
	//  cin>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	a += i;
	//  }
	//  cout<<a;

	// ֲ��
	//  int a[99999];
	//  int l, m, x, y, s;
	//  cin>>l>>m;
	//  for (int i = 0; i < l; i++)
	//  {
	//  	a[i] = 1;  //����������û������
	//  }
	//  for (int e = 1; e <= m; e++)
	//  {
	//  	cin>>x>>y;
	//  	for (int j = x; j <= y; j++)  //����Ҫ���ߵ��������
	//  	{
	//  		a[j] = 0;
	//  	}
	//  }
	//  for (int f = 0; f <= l; f++)
	//  {
	//  	if (a[f] == 1)
	//  	{
	//  		s++;
	//  	}
	//  }
	//  cout<<s<<endl;

	// �������
	//  int m, n, sum;
	//  cin>>m>>n;
	//  for (int i = m; i <= n; i++)
	//  {
	//  	if (i % 2 != 0)
	//  	{
	//  		sum += i;
	//  	}
	//  }
	//  cout<<sum<<endl;

	// a��b��c��x����(x��Ϊ����)������������ͬ���������������x����Сֵ
	//  int a, b, c, x = 2;
	//  cin>>a>>b>>c;
	//  int min = a;
	//  if (min > b)
	//  {
	//  	min = b;
	//  }
	//  if (min > c)
	//  {
	//  	min = c;
	//  }
	//  for (int i = x; i <= min; i++)
	//  {
	//  	x++;
	//  	if ((a % x == b % x)&&(b % x == c % x))
	//  	{
	//  		cout<<x<<endl;
	//  		break;
	//  	}
	//  }

	// ���������ĸ�����_�������
	//  int n;
	//  cin>>n;
	//  while (n > 0)
	//  {
	//  	cout<<n % 10<<" ";
	//  	n = n / 10;
	//  }

	// ���ַ�ת
	//  int n, s = 0, a;
	//  cin >> n;
	//  if (n < 0)
	//  {
	//  	cout<<"-";
	//  }
	//  n = abs(n);  //ȡn�ľ���ֵ
	//  while(n > 0)
	//  {
	//  	a = n % 10;
	//  	n = n / 10;
	//  	s = s * 10 + a;
	//  }
	//  cout << s;

	// ��k��3���������ܱ�19����
	//  int n, k, num;
	//  cin>>n>>k;
	//  if (n % 19 == 0)
	//  {
	//  	while(n > 0)
	//  	{
	//  		if (n % 10 == 3)
	//  		{
	//  			num++;
	//  		}
	//  		n /= 10;
	//  	}
	//  	if (k == num)
	//  	{
	//  		cout<<"YES";
	//  	}
	//  }
	//  else if (n % 19 != 0)
	//  {
	//  	cout<<"NO";
	//  }

	// ��׳˵ĺ�
	//  int n;
	//  long long int s = 0, t = 1;
	//  cin>>n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	// t = 1;
	//  	// for (int j = 1; j <= i; j++)
	//  	// {
	//  	// 	t = t * j;
	//  	// }
	//  	// s += t;
	//  	t *= i;
	//  	s += t;
	//  }
	//  cout<<s;

	// �������ֽ�
	//  int n, m;
	//  cin>>n;
	//  m = sqrt(n);
	//  for (int i = 2; i <= m; i++)
	//  {
	//  	if (n % i == 0)
	//  	{
	//  		cout<<n / i;
	//  	}
	//  }

	// ������
	//  int a, b, c;
	//  char n;
	//  cin>>a>>b>>n>>c;
	//  if ((a == 1)&&(b == 1))
	//  {
	//  	cout<<n;
	//  }
	//  else if ((a == 1)&&(b > 1))
	//  {
	//  	for (int i = 0; i < b; i++)
	//  	{
	//  		cout<<n;
	//  	}
	//  }
	//  else if ((a > 1)&&(b == 1))
	//  {
	//  	for (int i = 0; i < a; i++)
	//  	{
	//  		cout<<n;
	//  		cout<<endl;
	//  	}
	//  }
	//  else if ((a > 1)&&(b > 1))
	//  {
	//  	for (int j = 0; j < b; j++)
	//  	{
	//  		cout<<n;
	//  	}
	//  	cout<<endl;
	//  	if (c == 1)
	//  	{
	//  		for (int x = 0; x < a - 1; x++)
	//  		{
	//  			for (int y = 0; y < b; y++)
	//  			{
	//  				cout<<n;
	//  			}
	//  			cout<<endl;
	//  		}
	//  	}
	//  	if (c == 0)
	//  	{
	//  		for (int x = 0; x < a - 2; x++)
	//  		{
	//  			cout<<n;
	//  			for (int z = 0; z < b - 2; z++)
	//  			{
	//  				cout<<" ";
	//  			}
	//  			cout<<n;
	//  			cout<<endl;
	//  		}
	//  		for (int y = 0; y < b; y++)
	//  		{
	//  			cout<<n;
	//  		}
	//  	}
	//  }

	// ���ص�
	//  int n, m, a[9999], z = 1;
	//  cin >> n >> m;
	//  for (int i = 1; i <= m; i++)
	//  {
	//  	for (int j = 0; j <= n; j++)
	//  	{
	//  		if (j % i == 0)
	//  		{
	//  			a[j] = !a[j];
	//  		}
	//  	}
	//  }
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	if (a[i])
	//  	{
	//  		if (z)
	//  		{
	//  			z = 0;
	//  		}
	//  		else
	//  		{
	//  			cout << ",";
	//  		}
	//  		cout << i;
	//  	}
	//  }
	//  printf("\n");

	// ����ȥ��_�ⷨ1��ִ��ʱ�䳤
	//  int a[99999], n;
	//  cin>>n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin>>a[i];
	//  }
	//  for (int i = 0; i < n; i++)
	//  {
	//  	for (int j = i + 1; j < n; j++)
	//  	{
	//  		if (a[i] == a[j])
	//  		{
	//  			for (int k = j; k < n; k++)
	//  			{
	//  				a[k] = a[k + 1];
	//  			}
	//  			n--;
	//  		}
	//  	}
	//  }
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cout<<a[i]<<" ";
	//  }

	// ����ȥ��_�ⷨ2
	//  int a[99999], n, s[99999];
	//  cin>>n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin>>a[i];
	//  	s[i] = 0;
	//  }
	//  for (int i = 0; i < n; i++)
	//  {
	//  	for (int j = i + 1; j < n; j++)
	//  	{
	//  		if ((a[i] == a[j])&&(s[j] == 0))
	//  		{
	//  			s[j] = 1;
	//  		}
	//  	}
	//  }
	//  for (int i = 0; i < n; i++)
	//  {
	//  	if (s[i] == 0)
	//  	{
	//  		cout<<a[i]<<" ";
	//  	}
	//  }

	// ����������ĳ�����±꣬��û�������-1
	//  int a[99999];
	//  long int n, b, temp;
	//  cin >> n;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cin >> a[i];
	//  }
	//  cin >> b;
	//  for (int j = 1; j <= n; j++)
	//  {
	//  	temp = a[j];
	//  	if (temp == b)
	//  	{
	//  		cout << j << endl;
	//  		return 0;
	//  	}
	//  }

	// ����������������ĺ�
	//  long long int n, max = -99999, sum = 0;
	//  int a[10000];
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> a[i];
	//  	if (a[i] > max)
	//  	{
	//  		max = a[i];
	//  	}
	//  }
	//  for (int j = 0; j < n; j++)
	//  {
	//  	if (a[j] != max)
	//  	{
	//  		sum += a[j];
	//  	}
	//  }
	//  cout << sum;

	// �������
	//  int n, k = 0, max = 0;
	//  int a[999999];
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> a[i];
	//  	if (a[i] == a[i - 1])
	//  	{
	//  		k++;
	//  	}
	//  	else
	//  	{
	//  		k = 1;
	//  	}
	//  	if (k > max)
	//  	{
	//  		max = k;
	//  	}
	//  }
	//  cout << max;

	// ͳ�����ֵĸ���
	//  char c[256];
	//  int num = 0, l;
	//  gets(c);
	//  l = strlen(c);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if ((c[i] >= '0') && (c[i] <= '9'))
	//  	{
	//  		num++;
	//  	}
	//  }
	//  cout << num;

	// ͳ���ַ��ĸ���
	//  char c[256];
	//  int num = 0, l;
	//  gets(c);
	//  l = strlen(c);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (((c[i] >= 'a') && (c[i] <= 'z')) || ((c[i] >= 'A') && (c[i] <= 'Z')))
	//  	{
	//  		num++;
	//  	}
	//  }
	//  cout << num;

	// �ҵ���һ��ֻ����һ�ε��ַ�
	//  char s[100001];
	//  int c[26];
	//  int l;
	//  gets(s);
	//  l = strlen(s);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	c[s[i] - 'a']++;
	//  	//����ͳ�ƣ����ַ���a��ƫ��Ϊ������Ԫ�ص��±꣬������+1(��������ظ��ַ�ʱ�����1)
	//  	//a��ASCII���еĵ�һ����ĸ��������ĸ��a�Ļ�������ƫ��
	//  }
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (c[s[i] - 'a'] == 1)
	//  	{
	//  		cout << s[i];
	//  		return 0;
	//  	}
	//  }
	//  cout << "no";

	// ���������
	//  string a, b;
	//  double n, x, c, len;
	//  cin >> x;
	//  cin >> a >> b;
	//  len = a.size();
	//  for (int i = 0; i < len; i++)
	//  {
	//  	if (a[i] == b[i])
	//  	{
	//  		n++;
	//  	}
	//  }
	//  c = n / len;
	//  if (c >= x)
	//  {
	//  	cout << "yes";
	//  }
	//  else
	//  {
	//  	cout << "no";
	//  }

	// �����ַ���
	//  int l;
	//  char a[101];
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l - 1; i++)
	//  {
	//  	printf("%c", a[i] + a[i + 1]);
	//  }
	//  printf("%c", a[0] + a[l - 1]);

	// ��Լ����
	//  int l;
	//  char a[256];
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (a[i] == 'A')
	//  	{
	//  		cout << "T";
	//  	}
	//  	if (a[i] == 'T')
	//  	{
	//  		cout << "A";
	//  	}
	//  	if (a[i] == 'C')
	//  	{
	//  		cout << "G";
	//  	}
	//  	if (a[i] == 'G')
	//  	{
	//  		cout << "C";
	//  	}
	//  }

	// �����������
	//  int l;
	//  char a[128];
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if ((a[i] == 'z') || (a[i] == 'Z'))
	//  	{
	//  		a[i] = a[i - 25];
	//  	}
	//  	else if (((a[i] >= 'a') && (a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z')))
	//  	{
	//  		a[i] = a[i] + 1;
	//  	}
	//  	cout << a[i];
	//  }

	// �����������
	//  char a[128];
	//  int l;
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if ((a[i] == 'a') || (a[i] == 'A'))
	//  	{
	//  		a[i] = a[i + 25];
	//  	}
	//  	else if (((a[i] >= 'a') && (a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z')))
	//  	{
	//  		a[i] = a[i] - 1;
	//  	}
	//  	cout << a[i];
	//  }

	// �������ֵ��ַ�
	//  char a[1001];
	//  int l, k, t;
	//  cin >> k >> a;
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	t = i;
	//  	while (a[i] == a[t])
	//  	{
	//  		t++;
	//  	}
	//  	if (t - i == k)
	//  	{
	//  		cout << a[i];
	//  		exit(0);
	//  	}
	//  }
	//  cout << "No";

	// ����ҩ��
	//  int l, n;
	//  string a[101], s;
	//  cin >> n;
	//  for (int i = 0; i <= n; i++)
	//  {
	//  	getline(cin, a[i]);
	//  }
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	s = a[i];
	//  	if ((s[0] >= 'a') && (s[0] <= 'z'))
	//  	{
	//  		s[0] -= 32;
	//  	}
	//  	l = s.size();
	//  	for (int j = 1; j < l; j++)
	//  	{
	//  		if ((s[j] >= 'A') && (s[j] <= 'Z'))
	//  		{
	//  			s[j] += 32;
	//  		}
	//  	}
	//  	a[i] = s;
	//  }
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cout << a[i] << endl;
	//  }

	// ��֤�Ӵ�
	//  char a[201], b[201];
	//  gets(a);
	//  gets(b);
	//  if (strstr(a, b))
	//  {
	//  	cout << b << " is substring of " << a;
	//  	return 0;
	//  }
	//  if (strstr(b, a))
	//  {
	//  	cout << a << " is substring of " << b;
	//  	return 0;
	//  }
	//  cout << "No substring" << endl;

	// ɾ�����ʺ�׺
	//  char a[32];
	//  int l;
	//  gets(a);
	//  l = strlen(a);
	//  if (a[l - 3] == 'i' && a[l - 2] == 'n' && a[l - 1] == 'g')
	//  {
	//  	for (int i = 0; i < l - 3; i++)
	//  	{
	//  		cout << a[i];
	//  	}
	//  	return 0;
	//  }
	//  else if (a[l - 2] == 'e' && a[l - 1] == 'r')
	//  {
	//  	for (int i = 0; i < l - 2; i++)
	//  	{
	//  		cout << a[i];
	//  	}
	//  	return 0;
	//  }
	//  if (a[l - 2] == 'l' && a[l - 1] == 'y')
	//  {
	//  	for (int i = 0; i < l - 2; i++)
	//  	{
	//  		cout << a[i];
	//  	}
	//  	return 0;
	//  }

	// ���ʳ���
	//  char a[1001];
	//  int l, t = 0;
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (a[i] != ' ')
	//  	{
	//  		t++;
	//  	}
	//  	else
	//  	{
	//  		if (t > 0)
	//  		{
	//  			cout << t << ",";
	//  		}
	//  		t = 0;
	//  	}
	//  }
	//  cout << t;

	// ���ʷ�ת
	//  int l, j;
	//  char a[1001];
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (a[i] == ' ')
	//  	{
	//  		cout << " ";
	//  	}
	//  	else
	//  	{
	//  		int k = 0;
	//  		for (j = i; a[j] != ' '; j++)
	//  		{
	//  			k++;
	//  			if (j >= l)
	//  			{
	//  				break;
	//  			}
	//  		}
	//  		j--;
	//  		k--;
	//  		for (j = j; j >= i; j--)
	//  		{
	//  			cout << a[j];
	//  		}
	//  		i += k;
	//  	}
	//  }

	// �ַ���p�ͱ���
	//  int l, t = 1;
	//  char a[1001];
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (a[i] == a[i + 1])
	//  	{
	//  		t++;
	//  	}
	//  	else
	//  	{
	//  		cout << t << a[i];
	//  		t = 1;
	//  	}
	//  }

	// �ж��ַ����Ƿ����
	//  char a[101];
	//  int l, f = 0;
	//  gets(a);
	//  l = strlen(a);
	//  cout << l;
	//  for (int i = 0; i <= l / 2; i++)
	//  {
	//  	if (a[i] != a[l - 1 - i])
	//  	{
	//  		f = 1;
	//  		break;
	//  	}
	//  }
	//  if (f == 1)
	//  {
	//  	cout << "no";
	//  }
	//  else if (f == 0)
	//  {
	//  	cout << "yes";
	//  }

	// ��߷ֵ�ѧ������
	//  int n, l, s, max = -1;
	//  string a, name;
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> s >> a;
	//  	if (s > max)
	//  	{
	//  		max = s;
	//  		name = a;
	//  	}
	//  }
	//  cout << name << endl;

	// �������ֵ��ַ�
	//  int k = 0, x, l;
	//  char a[1000];
	//  cin >> x;
	//  scanf("%s", a);
	//  l = strlen(a);
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (k == x)
	//  	{
	//  		cout << a[i];
	//  		return 0;
	//  	}
	//  	if (a[i] == a[i + 1])
	//  	{
	//  		k++;
	//  	}
	//  	else
	//  	{
	//  		k = 1;
	//  	}
	//  }
	//  cout << "No";

	// һ�仰�������̵ĵ���
	//  char a[200001];
	//  int t = 0, maxi, maxl, mini, minl = 100, l;
	//  gets(a);
	//  l = strlen(a);
	//  for (int i = 0; i <= l; i++)
	//  {
	//  	if ((a[i] != ' ') && (a[i] != '.') && (a[i] != ','))
	//  	{
	//  		t++;
	//  	}
	//  	else if (t > 0)
	//  	{
	//  		if (t > maxl)
	//  		{
	//  			maxl = t;	  //����
	//  			maxi = i - t; //��ʼλ��
	//  		}
	//  		if (t < minl)
	//  		{
	//  			minl = t;
	//  			mini = i - t;
	//  		}
	//  		t = 0;
	//  	}
	//  }
	//  for (int i = maxi; i <= maxi + maxl - 1; i++)
	//  {
	//  	cout << a[i];
	//  }
	//  cout << endl;
	//  for (int i = mini; i <= mini + minl - 1; i++)
	//  {
	//  	cout << a[i];
	//  }

	// Сд��ĸת��д����д��ĸתСд
	//  string a;
	//  int l;
	//  getline(cin, a);
	//  l = a.size();
	//  for (int i = 0; i < l; i++)
	//  {
	//  	if (a[i] >= 'a' && a[i] <= 'z')
	//  	{
	//  		a[i] -= 32;
	//  	}
	//  	else if (a[i] >= 'A' && a[i] <= 'Z')
	//  	{
	//  		a[i] += 32;
	//  	}
	//  }
	//  cout << a;

	// �ַ����еȣ����Կո�ʹ�Сд
	//  string a1, a2, x, y;
	//  int len1, len2;
	//  getline(cin, a1);
	//  getline(cin, a2);
	//  len1 = a1.size();
	//  len2 = a2.size();
	//  for (int i = 0; i < len1; i++)
	//  {
	//  	if (a1[i] >= 'A' && a1[i] <= 'Z')
	//  	{
	//  		a1[i] += 32;
	//  	}
	//  }
	//  for (int i = 0; i < len2; i++)
	//  {
	//  	if (a2[i] >= 'A' && a2[i] <= 'Z')
	//  	{
	//  		a2[i] += 32;
	//  	}
	//  }
	//  for (int i = 0; i < len1; i++)
	//  {
	//  	if (a1[i] != ' ')
	//  	{
	//  		x += a1[i];
	//  	}
	//  }
	//  for (int i = 0; i < len2; i++)
	//  {
	//  	if (a2[i] != ' ')
	//  	{
	//  		y += a2[i];
	//  	}
	//  }
	//  if (x == y)
	//  {
	//  	cout << "YES";
	//  }
	//  else
	//  {
	//  	cout << "NO";
	//  }

	// �ַ��滻
	//  string s, a, b;
	//  int lena, k;
	//  getline(cin, s);
	//  cin >> a;
	//  cin >> b;
	//  lena = a.size();
	//  k = s.find(a);
	//  while (k != -1)
	//  {
	//  	s.replace(k, lena, b);
	//  	k = -1;
	//  }
	//  cout << s << endl;

	// ���֡�2�����ֵĴ���
	//  char a[100];
	//  int b, e, k, len;
	//  cin >> b >> e;
	//  for (int i = b; i <= e; i++)
	//  {
	//  	sprintf(a, "%d", i);
	//  	len = strlen(a);
	//  	for (int j = 0; j <= len - 1; j++)
	//  	{
	//  		if (a[j] == '2')
	//  		{
	//  			k++;
	//  		}
	//  	}
	//  }
	//  cout << k;

	// ���ַ�ת
	//  char a[1000], b[1000];
	//  long len, n;
	//  cin >> n;
	//  sprintf(a, "%d", n);
	//  len = strlen(a);
	//  for (int i = 0; i < len; i++)
	//  {
	//  	b[len - i - 1] = a[i];
	//  }
	//  if (n < 0)
	//  {
	//  	cout << "-";
	//  }
	//  sscanf(b, "%d", &n);
	//  cout << n;

	// Ǳ����
	//  string a, b, c; //a������Ϣ��b����Ӧ��ԭ��Ϣ��cҪ���������Ϣ
	//  long lena, lenc;
	//  int t[27];
	//  getline(cin, a);
	//  getline(cin, b);
	//  getline(cin, c);
	//  lena = a.size();
	//  lenc = c.size();
	//  for (int i = 0; i < lena; i++)
	//  {
	//  	t[a[i] - 64]++;
	//  }
	//  for (int i = 1; i <= 26; i++)
	//  {
	//  	if (t[i] == 0)
	//  	{
	//  		cout << "Failed";
	//  		return 0;
	//  	}
	//  }
	//  for (int i = 0; i < lena; i++)
	//  {
	//  	for (int j = i + 1; j < lena; j++)
	//  		if (a[j] == a[i] && b[j] != b[i])
	//  		{
	//  			cout << "Failed";
	//  			return 0;
	//  		}
	//  }
	//  for (int i = 0; i < lena; i++)
	//  {
	//  	for (int j = i + 1; j < lena; j++)
	//  		if (b[j] == b[i] && a[j] != a[i])
	//  		{
	//  			cout << "Failed";
	//  			return 0;
	//  		}
	//  }
	//  for (int i = 0; i < lenc; i++)
	//  {
	//  	cout << b[a.find(c[i])];
	//  }

	// ��ָ��ʹ�ַ����������
	//  int len;
	//  const int Max = 1e5 + 10;
	//  char *p, a[Max];
	//  gets(a);
	//  len = strlen(a);
	//  p = a + len - 1; //���һ���ĵ�ַ
	//  do
	//  {
	//  	putchar(*p);
	//  	p--;
	//  } while (p >= a);

	// ���󽻻���
	//  int m, n;
	//  int x[5][5];
	//  for (int i = 0; i < 5; i++)
	//  {
	//  	for (int j = 0; j < 5; j++)
	//  	{
	//  		cin >> x[i][j];
	//  	}
	//  }
	//  cin >> m >> n;
	//  for (int i = 0; i < 5; i++)
	//  {
	//  	swap(x[m][i], x[n][i]);
	//  }
	//  for (int i = 0; i < 5; i++)
	//  {
	//  	for (int j = 0; j < 5; j++)
	//  	{
	//  		cout << x[i][j] << " ";
	//  	}
	//  	cout << endl;
	//  }

	// λ����Ϣ
	//  int n, x, y;
	//  cin >> n;
	//  int a[n + 1][n + 1];
	//  cin >> x >> y;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cout << "(" << x << "," << i << ")";
	//  }
	//  cout << endl;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	cout << "(" << i << "," << y << ")";
	//  }
	//  cout << endl;
	//  for (int i = 1; i <= n; i++)
	//  {
	//  	for (int j = 1; j <= n; j++)
	//  	{
	//  		if (x - y == i - j)
	//  		{
	//  			cout << "(" << i << "," << j << ")";
	//  		}
	//  	}
	//  }
	//  cout << endl;
	//  for (int i = n; i >= 1; i--)
	//  {
	//  	for (int j = n; j >= 1; j--)
	//  	{
	//  		if (x + y == i + j)
	//  		{
	//  			cout << "(" << i << "," << j << ")";
	//  		}
	//  	}
	//  }

	// �����Ե���ݺ�
	//  int a[100][100], m, n, sum;
	//  cin >> m >> n;
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  		if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
	//  		{
	//  			sum += a[i][j];
	//  		}
	//  	}
	//  }
	//  cout << sum;

	// ���Ұ���
	//  int a[6][6], x = 0, y, z;
	//  bool q;
	//  for (int i = 1; i <= 5; i++)
	//  {
	//  	for (int j = 1; j <= 5; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (int i = 1; i <= 5; i++)
	//  {
	//  	q = 1;
	//  	x = 0;
	//  	for (int j = 1; j <= 5; j++)
	//  	{
	//  		if (a[i][j] > x)
	//  		{
	//  			x = a[i][j];
	//  			y = j;
	//  			z = i;
	//  		}
	//  	}
	//  	for (int j = 1; j <= 5; j++)
	//  	{
	//  		if (a[j][y] < x)
	//  		{
	//  			q = 0;
	//  		}
	//  	}
	//  	if (q == 1)
	//  	{
	//  		cout << z << " " << y << " " << x;
	//  		return 0;
	//  	}
	//  }
	//  cout << "not found" << endl;

	// ͼ�����ƶ�
	//  int a[100][100], b[100][100], m, n;
	//  float x, s, k;
	//  cin >> m >> n;
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		cin >> b[i][j];
	//  	}
	//  }
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		if (a[i][j] == b[i][j])
	//  		{
	//  			k = k + 1;
	//  		}
	//  	}
	//  }
	//  s = m * n;
	//  x = k / s * 100;
	//  cout << fixed << setprecision(2) << x << endl;

	// �������н���
	//  int a[100][100], b[100][100], m, n;
	//  cin >> m >> n;
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  		b[j][i] = a[i][j];
	//  	}
	//  }
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		cout << b[i][j] << " ";
	//  	}
	//  	cout << endl;
	//  }

	// ͼ����ת
	//  int a[100][100], m, n;
	//  cin >> m >> n;
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = 0; j < n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (int i = 0; i < m; i++)
	//  {
	//  	for (int j = n - 1; j >= 0; j--)
	//  	{
	//  		cout << a[j][i] << " ";
	//  	}
	//  	cout << endl;
	//  }

	// ʹ��ָ�뽻������������
	//  int a, b;
	//  int *p, *q;
	//  cin >> a >> b;
	//  p = &a;
	//  q = &b;
	//  swap(*p, *q);
	//  cout << a << " " << b;

	// ʵʱ������_CSP-J2020����
	//  #if 1
	//  	ios::sync_with_stdio(false);
	//  	cin.tie(0);
	//  	cout.tie(0);
	//  #endif
	//  	int n, w, t, tot, score[601];
	//  	for (int i = 1; i <= n; i++)
	//  	{
	//  		cin >> t;
	//  		score[t]++;
	//  		tot = max(1, (int)(1.0 * i * w / 100));
	//  		int sum = 0;
	//  		for (int j = 600; j >= 0; j--)
	//  		{
	//  			sum += score[j];
	//  			if (sum >= tot)
	//  			{
	//  				cout << j << " ";
	//  				break;
	//  			}
	//  		}
	//  	}

	// ��������
	//  int a[30001], k;
	//  int n = 0;
	//  do
	//  {
	//  	n++;
	//  	cin >> a[n];
	//  } while (getchar() != '\n');
	//  for (int i = 0; i < n; i++)
	//  {
	//  	if (a[i] <= a[i + 1])
	//  	{
	//  		k++;
	//  	}
	//  }
	//  cout << k;

	// ����ƥ��_С��������
	//  string s, a;
	//  int t = 0;
	//  getline(cin, s);
	//  for (int i = 0; i < s.size(); i++)
	//  {
	//  	if (s[i] == '(' || s[i] == '[')
	//  	{
	//  		a[++t] = s[i];
	//  	}
	//  	if (s[i] == ')')
	//  	{
	//  		if (a[t] == '(')
	//  		{
	//  			t--;
	//  		}
	//  	}
	//  	else
	//  	{
	//  		t++;
	//  	}
	//  	if (s[i] == ']')
	//  	{
	//  		if (a[t] == '[')
	//  		{
	//  			t--;
	//  		}
	//  	}
	//  	else
	//  	{
	//  		t++;
	//  	}
	//  }
	//  if (t == 0)
	//  {
	//  	cout << "OK" << endl;
	//  }
	//  else
	//  {
	//  	cout << "Wrong" << endl;
	//  }

	// С�����
	//  bool tree[1 << 20] = {false};
	//  int d, k, p, i;
	//  cin >> d >> i;
	//  for (int k = 0; k < i; k++)
	//  {
	//  	p = 1;
	//  	for (int j = 2; j <= d; j++)
	//  	{
	//  		if (tree[p] == true)
	//  		{
	//  			tree[p] = false;
	//  			p = p * 2 + 1;
	//  		}
	//  		else
	//  		{
	//  			tree[p] = true;
	//  			p = p * 2;
	//  		}
	//  	}
	//  }
	//  cout << p;

	// 쳲���������1000ȡ��
	//  long long int a[10001] = {0, 1, 1}, n, total;
	//  for (int i = 3; i <= 20; i++)
	//  {
	//  	a[i] = (a[i - 1] + a[i - 2]) % 1000;
	//  }
	//  cin >> total;
	//  while (total--)
	//  {
	//  	cin >> n;
	//  	cout << a[n] << " ";
	//  }

	// ��̨��_��̬�滮����
	//  int n, a[101], dp[101];
	//  dp[1] = 1;
	//  dp[2] = 2;
	//  dp[3] = 4;
	//  for (int i = 4; i <= 100; i++)
	//  {
	//  	dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	//  }
	//  int input;
	//  while (cin >> input && input != 0)
	//  {
	//  	cout << dp[input] << endl;
	//  }

	//----------------------------��������OJ----------------------------

	// string

	// 1101
	//  string a, b;
	//  cin >> a >> b;
	//  int hour, minn, sec, time = 0;
	//  sec = a[7] - b[7] + 10 * (a[6] - b[6]);
	//  minn = a[4] - b[4] + 10 * (a[3] - b[3]);
	//  hour = a[1] - b[1] + 10 * (a[0] - b[0]);
	//  time = hour * 3600 + minn * 60 + sec;
	//  cout << time;

	// 1115
	//  string a;
	//  cin >> a;
	//  long int sum = 0;
	//  for (int i = 0; i < a.size(); i++)
	//  {
	//  	sum += a[i] - '0';
	//  }
	//  cout << sum;

	// 1387
	//  string a;
	//  char temp;
	//  int len;
	//  getline(cin, a);
	//  len = a.size();
	//  for (int y = 0; y < len; y++)
	//  {
	//  	if (a[y] >= 'A' && a[y] <= 'E')
	//  	{
	//  		temp = a[y] + 21;
	//  		cout << temp;
	//  	}
	//  	else if (a[y] >= 'F' && a[y] <= 'Z')
	//  	{
	//  		temp = a[y] - 5;
	//  		cout << temp;
	//  	}
	//  	else
	//  	{
	//  		cout << a[y];
	//  	}
	//  }

	// 1480
	//  string a, m = "z";
	//  int n;
	//  cin >> n;
	//  for (int i = 0; i < n; i++)
	//  {
	//  	cin >> a;
	//  	m = min(m, a);
	//  }
	//  cout << m;

	// 1591_find()
	//  string a, b;
	//  getline(cin, a);
	//  getline(cin, b);
	//  int p1 = a.find(b);
	//  if (p1 == -1)
	//  {
	//  	cout << "-1";
	//  	return 0;
	//  }
	//  cout << p1 + 1 << endl;
	//  p1++;
	//  while (p1 != -1)
	//  {
	//  	p1 = a.find(b, p1);
	//  	if (p1 == -1)
	//  	{
	//  		return 0;
	//  	}
	//  	else
	//  	{
	//  		cout << p1 + 1 << endl;
	//  		p1++;
	//  	}
	//  }

	// 1591_substr()
	//  string a, b;
	//  string t;
	//  getline(cin, a);
	//  getline(cin, b);
	//  int lena = a.size(), lenb = b.size(), cha = lena - lenb;
	//  bool ha = 0;
	//  for (int o = 0; o < cha; o++)
	//  {
	//  	t = a.substr(o, lenb);
	//  	if (t == b)
	//  	{
	//  		ha = 1;
	//  		cout << o + 1 << endl;
	//  	}
	//  }
	//  if (ha == 0)
	//  {
	//  	cout << "-1";
	//  	return 0;
	//  }

	// 1570
	//  string a;
	//  string m, n;
	//  cin >> a;
	//  cin >> m >> n;
	//  int len = a.size();
	//  for (int i = 0; i < len; i++)
	//  {
	//  	if (a[i] == m[0])
	//  	{
	//  		a.replace(i, 1, n);
	//  	}
	//  }
	//  cout << a << endl;

	// 1569
	//  string t, a;
	//  getline(cin, t);
	//  for (int x = t.size() - 1; x >= 0; x--)
	//  {
	//  	if (isupper(t[x]))
	//  		a += t[x];
	//  }
	//  for (int x = 0; x < t.size(); x++)
	//  {
	//  	if (islower(t[x]))
	//  		a += t[x];
	//  }
	//  cout << a;

	// 1114
	//  string a;
	//  cin >> a;
	//  bool b = 0;
	//  int t1, t2, ten = a.size(), temp = a.find("=");
	//  string t = a.substr(temp + 1, a.size() - temp);
	//  int res = stoi(t);
	//  for (int y = 1; y < temp; y++)
	//  {
	//  	t1 = stoi(a.substr(0, y));
	//  	t2 = stoi(a.substr(y, ten - y));
	//  	if (t1 + t2 == res)
	//  	{
	//  		cout << t1 << "+" << t2 << "=" << res;
	//  		return 0;
	//  	}
	//  }
	//  cout << "Impossible!";

	// 1129
	//  string a;
	//  cin >> a;
	//  long int cheng = a.find("*"), t1, t2, len = a.size();
	//  string x = a.substr(0, cheng), y = a.substr(cheng + 1, len - x.size() - 2);
	//  t1 = stoll(x);
	//  t2 = stoll(y);
	//  cout << t1 * t2;

	// 1130
	//  string a;
	//  cin >> a;
	//  int jia = a.find("+"), t1, t2, len = a.size();
	//  string x = a.substr(0, jia), y = a.substr(jia + 1, len - x.size() - 2);
	//  t1 = stoll(x);
	//  t2 = stoll(y);
	//  cout << t1 + t2;

	// 1103
	//  string s;
	//  int cou = 0;
	//  cin >> s;
	//  for (int y = 0; y < s.size(); y++)
	//  {
	//  	cou++;
	//  	if (y == s.size() - 1 || s[y] != s[y + 1]) //�н���
	//  	{
	//  		if (cou != 1)
	//  			cout << cou << s[y];
	//  		else
	//  			cout << s[y];
	//  		cou = 0;
	//  	}
	//  }

	// 1100
	//  string a;
	//  getline(cin, a);
	//  a = " " + a;
	//  char c;
	//  for (int q = 1; q < a.size(); q++)
	//  {
	//  	if (a[q] != ' ' && a[q - 1] == ' ')
	//  	{
	//  		c = toupper(a[q]);
	//  		cout << c;
	//  	}
	//  }

	// ��1112
	//  string a, b, c, temp;
	//  getline(cin, a);
	//  getline(cin, b);
	//  getline(cin, c);
	//  int bl, cl;
	//  bl = b.size(), cl = c.size();
	//  for (int u = 0; u < a.size(); u++)
	//  {
	//  	temp = a.substr(u, bl);
	//  	if (temp == b)
	//  	{
	//  		a.replace(u, bl, c);
	//  		u += cl;
	//  	}
	//  }
	//  cout << a;

	// 1325
	//  string a;
	//  cin >> a;
	//  int jia = a.find("+"), l_kuo = a.find(")"), cheng = a.find("*"), len = a.size(),
	//  	t1, t2, t3;
	//  string x = a.substr(1, jia - 1), y = a.substr(jia + 1, l_kuo - jia - 1),
	//  	   z = a.substr(cheng + 1);
	//  t1 = stoi(x);
	//  t2 = stoi(y);
	//  t3 = stoi(z);
	//  cout << (t1 + t2) * t3;

	// 1012
	//  string a, b;
	//  int t = 0, p;
	//  getline(cin, a);
	//  getline(cin, b);
	//  p = a.find(b);
	//  int l = 0;
	//  a = " " + a;
	//  if (p == -1)
	//  {
	//  	for (int y = 0; y < a.size() - 1; y++)
	//  	{
	//  		if (a[y] != ' ')
	//  			l++;
	//  	}
	//  	cout << l;
	//  	return 0;
	//  }
	//  else
	//  {
	//  	for (int f = 0; f <= p; f++)
	//  	{
	//  		if (a[f] == ' ')
	//  			t++;
	//  	}
	//  }
	//  cout << t;

	// 1123
	//  string a;
	//  int m, ans = 0, p1 = 0, p2;
	//  getline(cin, a);
	//  p2 = a.find("+");
	//  while (p1 != -1)
	//  {
	//  	m = stoi(a.substr(p1, p2 - p1));
	//  	ans += m;
	//  	p1 = a.find("+", p1 + 1);
	//  	p2 = a.find("+", p2 + 1);
	//  }
	//  cout << ans;

	// 1106
	//  string s;
	//  getline(cin, s);
	//  s = " " + s;
	//  int tot = 0;
	//  for (int i = 0; i < s.size(); i++)
	//  {
	//  	if (s[i] == ' ' && s[i + 1] != ' ')
	//  		tot++;
	//  }
	//  cout << tot;

	// 1107
	//  string s, maxs, k;
	//  getline(cin, s);
	//  s = " " + s;
	//  int p1 = s.find(" "), p2 = s.find(" ", p1 + 1);
	//  while (p1 != -1)
	//  {
	//  	k = s.substr(p1 + 1, p2 - p1 - 1);
	//  	if (k.length() > maxs.length())
	//  	{
	//  		maxs = k;
	//  	}
	//  	p1 = s.find(" ", p1 + 1);
	//  	p2 = s.find(" ", p1 + 1);
	//  }
	//  cout << maxs;

	// 1122
	//  string a;
	//  cin >> a;
	//  int res = 0;
	//  for (int q = 1; q <= a.size() - 2; q += 2)
	//  {
	//  	if (q != 1)
	//  	{
	//  		switch (a[q])
	//  		{
	//  		case '+':
	//  			res = res + (a[q + 1] - '0');
	//  			break;
	//  		case '-':
	//  			res = res - (a[q + 1] - '0');
	//  			break;
	//  		case '*':
	//  			res = res * (a[q + 1] - '0');
	//  			break;
	//  		case '/':
	//  			res = res / (a[q + 1] - '0');
	//  			break;
	//  		}
	//  	}
	//  	else
	//  	{
	//  		switch (a[q])
	//  		{
	//  		case '+':
	//  			res = (a[q - 1] - '0') + (a[q + 1] - '0');
	//  			break;
	//  		case '-':
	//  			res = (a[q - 1] - '0') - (a[q + 1] - '0');
	//  			break;
	//  		case '*':
	//  			res = (a[q - 1] - '0') * (a[q + 1] - '0');
	//  			break;
	//  		case '/':
	//  			res = (a[q - 1] - '0') / (a[q + 1] - '0');
	//  			break;
	//  		}
	//  	}
	//  }
	//  cout << res;

	// 1132
	//  string a;
	//  getline(cin, a);
	//  int q, x;
	//  for (q = 0; q < a.size(); ++q)
	//  {
	//  	if (isdigit(a[q]))
	//  	{
	//  		a[q - 1] = '*';
	//  		for (x = q;; ++x)
	//  		{
	//  			if (isdigit(a[x]) == false)
	//  			{
	//  				q = x - 1;
	//  				break;
	//  			}
	//  		}
	//  	}
	//  	else if (a[q] == '*')
	//  	{
	//  		a[q] = '#';
	//  	}
	//  }
	//  for (q = 0; q < a.size(); ++q)
	//  {
	//  	if (isdigit(a[q]) || a[q] == '*')
	//  	{
	//  		cout << a[q];
	//  	}
	//  }

	// 1104
	//  string a, num = "";
	//  int n, j;
	//  getline(cin, a);
	//  for (int i = 0; i < a.size(); ++i)
	//  {
	//  	if (isdigit(a[i]))
	//  	{
	//  		num = num + a[i];
	//  	}
	//  	else if (isalpha(a[i]) && isdigit(a[i - 1]))
	//  	{
	//  		n = stoi(num);
	//  		for (j = 1; j <= n; ++j)
	//  		{
	//  			cout << a[i];
	//  		}
	//  		num = "";
	//  	}
	//  	else if (isalpha(a[i]) && isalpha(a[i - 1]))
	//  	{
	//  		cout << a[i];
	//  	}
	//  }

	// 1124
	//  string a;
	//  getline(cin, a);
	//  a = '+' + a;
	//  int res = 0, temp = 0, len = a.size();
	//  char fuhao = '+';
	//  for (int i = 0; i <= len; ++i)
	//  {
	//  	if (!isdigit(a[i]))
	//  	{
	//  		if (fuhao == '+')
	//  		{
	//  			res = res + temp;
	//  		}
	//  		else if (fuhao == '-')
	//  		{
	//  			res = res - temp;
	//  		}
	//  		fuhao = a[i];
	//  		temp = 0;
	//  	}
	//  	else
	//  	{
	//  		temp = temp * 10 + (a[i] - '0');
	//  	}
	//  }
	//  cout << res;

	// 1116
	// string s;
	// cin >> s;
	// int p = s.find(",");
	// string s1 = s.substr(0, p),
	// 	   s2 = s.substr(p + 1, s.size() - 1 - p);
	// cout << s2 << ',' << s1;

	// 1477
	//  string s, t;
	//  getline(cin, t);
	//  getline(cin, s);
	//  int i,
	//  	end = s.size() - t.size() - 1,
	//  	tot = 0;
	//  for (i = 0; i <= end; ++i)
	//  {
	//  	if (s.substr(i, t.size()) == t)
	//  	{
	//  		++tot;
	//  	}
	//  }
	//  cout << tot;

	// 1105
	//  string a, b, ans;
	//  cin >> a >> b;
	//  int q, p;
	//  char c;
	//  ans = a + b;
	//  for (q = 0; q < ans.size(); ++q)
	//  {
	//  	c = ans[q];
	//  	for (p = q + 1; p < ans.size(); ++p)
	//  	{
	//  		if (ans[p] == c)
	//  		{
	//  			ans.erase(p, 1);
	//  			--p;
	//  		}
	//  	}
	//  }
	//  cout << ans;

	// ����ת��

	// 1108
	//  int u;
	//  cin >> u;
	//  if (u == 0)
	//  {
	//  	cout << "0";
	//  	return 0;
	//  }
	//  string s;
	//  while (u != 0)
	//  {
	//  	s = to_string(u % 2) + s;
	//  	u /= 2;
	//  }
	//  cout << s;

	// 1288
	//  string a;
	//  long int r = 0;
	//  cin >> r;
	//  if (r == 0)
	//  {
	//  	cout << "0";
	//  	return 0;
	//  }
	//  while (r != 0)
	//  {
	//  	a = to_string(r % 8) + a;
	//  	r /= 8;
	//  }
	//  cout << a;

	// 1289
	//  string a;
	//  char t;
	//  short int x;
	//  long int r;
	//  cin >> r;
	//  if (r == 0)
	//  {
	//  	cout << "0";
	//  	return 0;
	//  }
	//  while (r != 0)
	//  {
	//  	x = r % 16;
	//  	if (x >= 0 && x <= 9)
	//  	{
	//  		t = x + '0';
	//  	}
	//  	else
	//  	{
	//  		t = x - 10 + 'A';
	//  	}
	//  	a = t + a;
	//  	r /= 16;
	//  }
	//  cout << a;

	// 1290
	//  ios::sync_with_stdio(false);
	//  string a;
	//  int y = 0, t = 1;
	//  cin >> a;
	//  for (int x = a.size() - 1; x >= 0; x--)
	//  {
	//  	y += (a[x] - '0') * t;
	//  	t *= 2;
	//  }
	//  cout << y;

	// 1291
	//  string a;
	//  long int r = 0, x = 1;
	//  cin >> a;
	//  for (int f = a.size() - 1; f >= 0; f--)
	//  {
	//  	r += (a[f] - '0') * x;
	//  	x *= 8;
	//  }
	//  cout << r;

	// 1292
	//  string a;
	//  long int r = 0, x = 1;
	//  cin >> a;
	//  for (int f = a.size() - 1; f >= 0; f--)
	//  {
	//  	if (isdigit(a[f]))
	//  	{
	//  		r += (a[f] - '0') * x;
	//  	}
	//  	else
	//  	{
	//  		r += (a[f] + 10 - 'A') * x;
	//  	}
	//  	x *= 16;
	//  }
	//  cout << r;

	// �߾�������

	// 1268
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
	//  while (ans[len] == 0 && len > 1)
	//  {
	//  	len--;
	//  }
	//  if (ans[len] != 0)
	//  {
	//  	len++;
	//  }
	//  for (int u = len - 1; u >= 0; u--)
	//  {
	//  	cout << ans[u];
	//  }

	// 1269
	//  string s1, s2, sign = "";
	//  cin >> s1 >> s2;
	//  int a[260] = {0}, b[260] = {0}, ans[260] = {0}, al = s1.length(), bl = s2.length();
	//  int q, len, p = 0;
	//  if (al < bl || (al == bl && s1 < s2))
	//  {
	//  	sign = "-";
	//  	swap(s1, s2);
	//  	swap(al, bl);
	//  }
	//  for (q = 0; q < al; q++)
	//  {
	//  	a[q] = s1[al - 1 - q] - '0';
	//  }
	//  for (q = 0; q < bl; q++)
	//  {
	//  	b[q] = s2[bl - 1 - q] - '0';
	//  }
	//  len = al;
	//  for (q = 0; q < al; q++)
	//  {
	//  	if (a[q] < b[q])
	//  	{
	//  		a[q + 1]--;
	//  		a[q] += 10;
	//  	}
	//  	ans[q] = a[q] - b[q];
	//  }
	//  for (q = len - 1; q >= 0; q--)
	//  {
	//  	if (ans[q] != 0)
	//  	{
	//  		p = q;
	//  		break;
	//  	}
	//  }
	//  cout << sign;
	//  for (q = p; q >= 0; q--)
	//  {
	//  	cout << ans[q];
	//  }

	// 1286
	//  string s1;
	//  int b;
	//  cin >> s1 >> b;
	//  int ans[510] = {0}, q, i, p = 0;
	//  int a[502] = {0}, al = s1.size(), len = 0;
	//  for (int i = 0; i < al; i++)
	//  {
	//  	a[i] = s1[al - 1 - i] - '0';
	//  }
	//  for (q = al - 1; q >= 0; q--)
	//  {
	//  	ans[q] = b * a[q];
	//  }
	//  for (q = 0; q < al + 5; q++)
	//  {
	//  	if (ans[q] >= 10)
	//  	{
	//  		ans[q + 1] += ans[q] / 10;
	//  		ans[q] = ans[q] % 10;
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

	// 1287
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

	// 1271
	//  int a, b, n, u, t;
	//  cin >> a >> b >> n;
	//  cout << a / b << ".";
	//  t = a % b;
	//  for (u = 1; u <= n; u++)
	//  {
	//  	t *= 10;
	//  	cout << t / b;
	//  	t = t % b;
	//  }

	// 1280
	//  int ans[50] = {0}, n, u, k = 1, v, t;
	//  ans[0] = 1;
	//  cin >> n;
	//  for (u = 1; u <= n; u++)
	//  {
	//  	for (v = 0; v <= k; v++)
	//  	{
	//  		ans[v] *= 2;
	//  	}
	//  	for (t = 0; t <= k; t++)
	//  	{
	//  		if (ans[t] >= 10)
	//  		{
	//  			ans[t + 1] = ans[t + 1] + ans[t] / 10;
	//  			ans[t] = ans[t] % 10;
	//  		}
	//  	}
	//  	if (ans[k] != 0)
	//  	{
	//  		k++;
	//  	}
	//  }
	//  for (u = k - 1; u >= 0; u--)
	//  {
	//  	cout << ans[u];
	//  }

	// 1279
	//  string a, b, ty, ans;
	//  cin >> a >> b >> ty;
	//  if (a.size() < b.size())
	//  {
	//  	swap(a, b);
	//  }
	//  while (a.size() != b.size())
	//  {
	//  	b = '0' + b;
	//  }
	//  int len = a.size();
	//  register int j;
	//  if (ty[0] == 'a')
	//  {
	//  	for (j = 0; j < len; ++j)
	//  	{
	//  		if (a[j] == b[j] && a[j] == '1')
	//  		{
	//  			ans = ans + '1';
	//  		}
	//  		else
	//  		{
	//  			ans = ans + '0';
	//  		}
	//  	}
	//  }
	//  else if (ty[0] == 'o')
	//  {
	//  	for (j = 0; j < len; ++j)
	//  	{
	//  		if (a[j] == '1' || b[j] == '1')
	//  		{
	//  			ans = ans + '1';
	//  		}
	//  		else
	//  		{
	//  			ans = ans + '0';
	//  		}
	//  	}
	//  }
	//  else if (ty[0] == 'x')
	//  {
	//  	for (j = 0; j < len; ++j)
	//  	{
	//  		if (a[j] != b[j])
	//  		{
	//  			ans = ans + '1';
	//  		}
	//  		else
	//  		{
	//  			ans = ans + '0';
	//  		}
	//  	}
	//  }
	//  while (ans[0] == '0' && ans.size() > 1) //�����˼�ans.size() > 1
	//  {
	//  	ans = ans.erase(0, 1);
	//  }
	//  cout << ans;

	// ����

	// 1238
	//  int n, q;
	//  long long x = 1, y = 1, z;
	//  cin >> n;
	//  if (n <= 2)
	//  {
	//  	cout << 1;
	//  	return 0;
	//  }
	//  for (q = 3; q <= n; q++)
	//  {
	//  	z = x + y;
	//  	x = y;
	//  	y = z;
	//  }
	//  cout << z;

	// 1082
	//  int q;
	//  long long s = 1;
	//  for (q = 2; q <= 10; q++)
	//  {
	//  	s = 2 * s + 2;
	//  }
	//  cout << s;

	// 1216
	//  int n, i, j, a[108][108] = {0};
	//  cin >> n;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	for (j = 1; j <= i; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (i = n - 1; i >= 1; i--)
	//  {
	//  	for (j = 1; j <= i; j++)
	//  	{
	//  		a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
	//  	}
	//  }
	//  cout << a[1][1];

	// 1410
	//  int n, i, j, a[108][108] = {0}, r[101][3] = {0}, k = 1;
	//  cin >> n;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	for (j = 1; j <= i; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (i = n - 1; i >= 1; i--)
	//  {
	//  	for (j = 1; j <= i; j++)
	//  	{
	//  		a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
	//  	}
	//  }
	//  r[1][1] = r[1][2] = 1;
	//  i = j = 1;
	//  while (i < n)
	//  {
	//  	k++;
	//  	if (a[i + 1][j] > a[i + 1][j + 1])
	//  	{
	//  		r[k][1] = i + 1;
	//  		r[k][2] = j;
	//  	}
	//  	else if (a[i + 1][j] < a[i + 1][j + 1])
	//  	{
	//  		r[k][1] = i + 1;
	//  		r[k][2] = j + 1;
	//  		j++;
	//  	}
	//  	i++;
	//  }
	//  for (i = k; i > 1; i--)
	//  {
	//  	cout << r[i][1] << "," << r[i][2] << "->";
	//  }
	//  cout << "1,1" << endl
	//  	 << a[1][1];

	// 1224
	//  long long a[30][30] = {0};
	//  int n, m, x, y, i, j, u;
	//  bool b[30][30] = {false};
	//  const int yy[8] = {1, -1, -2, -2, -1, 1, 2, 2}, xx[8] = {2, 2, 1, -1, -2, -2, -1, 1};
	//  cin >> n >> m >> x >> y;
	//  b[x][y] = true;
	//  for (i = 0; i <= 7; i++)
	//  {
	//  	if (x + xx[i] >= 0 && y + yy[i] >= 0)
	//  	{
	//  		b[x + xx[i]][y + yy[i]] = true;
	//  	}
	//  }
	//  a[0][0] = 1;
	//  for (u = 1; u <= m; u++)
	//  {
	//  	if (b[0][u] == true)
	//  	{
	//  		break;
	//  	}
	//  	a[0][u] = 1;
	//  }
	//  for (u = 1; u <= n; u++)
	//  {
	//  	if (b[u][0] == true)
	//  	{
	//  		break;
	//  	}
	//  	a[u][0] = 1;
	//  }
	//  for (i = 1; i <= n; i++) //һ��Ҫ��1��ʼ������i-1��j-1��Խ��
	//  {
	//  	for (j = 1; j <= m; j++)
	//  	{
	//  		if (b[i][j] == true)
	//  		{
	//  			a[i][j] = 0;
	//  		}
	//  		else
	//  		{
	//  			a[i][j] = a[i - 1][j] + a[i][j - 1];
	//  		}
	//  	}
	//  }
	//  cout << a[n][m];

	// 1298
	//  int m, n, i, j;
	//  long long a[105][105] = {0};
	//  cin >> m >> n;
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  	}
	//  }
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = i; j <= n; j++)
	//  	{
	//  		a[i][j] += max(a[i - 1][j], a[i][j - 1]);
	//  	}
	//  	for (j = i + 1; j <= m; j++)
	//  	{
	//  		a[j][i] += max(a[j - 1][i], a[j][i - 1]);
	//  	}
	//  }
	//  cout << a[m][n];

	// 1347
	//  int m, n, i, j, x, y;
	//  long long a[105][105] = {0}, b[105][105] = {0};
	//  int r[202] = {0};
	//  cin >> m >> n;
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		cin >> a[i][j];
	//  		b[i][j] = a[i][j];
	//  	}
	//  }
	//  for (i = 1; i <= m; i++)
	//  {
	//  	for (j = 1; j <= n; j++)
	//  	{
	//  		a[i][j] += max(a[i - 1][j], a[i][j - 1]);
	//  	}
	//  }
	//  x = m;
	//  y = n;
	//  for (i = 1; i <= m + n - 1; i++)
	//  {
	//  	if (a[x][y - 1] > a[x - 1][y])
	//  	{
	//  		// r[i] = a[x][y] - a[x][y - 1];
	//  		r[i] = b[x][y];
	//  		y--;
	//  	}
	//  	else
	//  	{
	//  		// r[i] = a[x][y] - a[x - 1][y];
	//  		r[i] = b[x][y];
	//  		x--;
	//  	}
	//  }
	//  for (j = m + n - 1; j >= 1; j--)
	//  {
	//  	cout << r[j];
	//  	if (j != 1)
	//  	{
	//  		cout << "-";
	//  	}
	//  }

	// 1146
	//  int s = 1;
	//  int n, a = 1;
	//  for (n = 1;; n++)
	//  {
	//  	a = a + n;
	//  	s += a;
	//  	if (s >= 5000)
	//  	{
	//  		break;
	//  	}
	//  }
	//  cout << s;

	// 1148
	//  ios::sync_with_stdio(false);
	//  int d, a = 1, s = 1;
	//  cin >> d;
	//  for (int u = 2; u <= d; u++)
	//  {
	//  	a = a + u; //���u���ľ����
	//  	s += a;
	//  }
	//  cout << s;

	// ̰��

	// 1228
	//  int r, n, a[101] = {0}, i, s = 0;
	//  cin >> n >> r;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	cin >> a[i];
	//  }
	//  sort(a + 1, a + 1 + n);
	//  for (i = r + 1; i <= n; i++)
	//  {
	//  	a[i] = a[i] + a[i - r];
	//  }
	//  for (i = 1; i <= n; i++)
	//  {
	//  	s += a[i];
	//  }
	//  cout << s;

	// 1229
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

	// 1375
	//  int n, a[1001] = {0}, t, v, s = 0, j;
	//  short sti[1001][1001] = {0};
	//  cin >> n;
	//  for (v = 1; v <= n; v++)
	//  {
	//  	cin >> a[v];
	//  }
	//  for (v = 1; v <= n; v++)
	//  {
	//  	t = -1;
	//  	for (j = 1; j <= s; j++)
	//  	{
	//  		if (sti[sti[0][j]][j] >= a[v])
	//  		{
	//  			t = j;
	//  			break;
	//  		}
	//  	}
	//  	if (t == -1)
	//  	{
	//  		s++;
	//  		sti[0][s] = 1;
	//  		sti[1][s] = a[v];
	//  	}
	//  	else
	//  	{
	//  		sti[sti[0][t] + 1][t] = a[v];
	//  		sti[0][t]++;
	//  	}
	//  }
	//  cout << s << endl;
	//  for (v = 1; v <= s; v++)
	//  {
	//  	cout << v << ":";
	//  	for (j = 1; j <= sti[0][v]; j++)
	//  	{
	//  		cout << sti[j][v] << " ";
	//  	}
	//  	cout << endl;
	//  }

	// �����������

	// 1751
	//  short q[10001][3] = {0}, head = 1, tail = 1;
	//  int n, m, a[101][101] = {0};
	//  cin >> n >> m;
	//  a[1][1] = 1;
	//  q[1][1] = q[1][2] = 1;
	//  int i, j, k = 2, tx, ty;
	//  int xx[5] = {0, 0, 1, 0, -1};
	//  int yy[5] = {0, 1, 0, -1, 0};
	//  while (head <= tail)
	//  {
	//  	for (i = 1; i <= 4; ++i)
	//  	{
	//  		tx = q[head][1] + xx[i];
	//  		ty = q[head][2] + yy[i];
	//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
	//  			a[tx][ty] == 0)
	//  		{
	//  			++tail;
	//  			q[tail][1] = tx;
	//  			q[tail][2] = ty;
	//  			a[tx][ty] = k;
	//  			++k;
	//  		}
	//  	}
	//  	++head;
	//  }
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	for (j = 1; j <= m; ++j)
	//  	{
	//  		cout << a[i][j] << " ";
	//  	}
	//  	cout << endl;
	//  }

	// 1819
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

	// STL_vector

	// 1504
	// vector<int> v;
	// int n, m, t, c = 0;
	// cin >> n >> m;
	// int y;
	// // v.push_back(0);
	// for (y = 1; y <= n; ++y)
	// {
	// 	v.push_back(y);
	// }
	// c = -1;
	// while (v.size() > 1)
	// {
	// 	c = (c + m) % v.size();
	// 	v.erase(v.begin() + c);
	// 	c = c - 1;
	// }
	// cout << v[0];

	// STL_deque

	// 1789
	// deque<int> d;
	// string t;
	// int n, i, x;
	// vector<int> err;
	// cin >> n;
	// for (i = 1; i <= n; ++i)
	// {
	// 	cin >> t;
	// 	if (t == "LIN")
	// 	{
	// 		cin >> x;
	// 		d.push_front(x);
	// 	}
	// 	else if (t == "RIN")
	// 	{
	// 		cin >> x;
	// 		d.push_back(x);
	// 	}
	// 	else if (t == "LOUT")
	// 	{
	// 		if (d.size() == 0)
	// 		{
	// 			err.push_back(i);
	// 		}
	// 		else
	// 		{
	// 			d.pop_front();
	// 		}
	// 	}
	// 	else if (t == "ROUT")
	// 	{
	// 		if (d.size() == 0)
	// 		{
	// 			err.push_back(i);
	// 		}
	// 		else
	// 		{
	// 			d.pop_back();
	// 		}
	// 	}
	// }
	// for (i = 0; i < d.size(); ++i)
	// {
	// 	cout << d[i] << ' ';
	// }
	// cout << "\n";
	// for (i = 0; i < err.size(); ++i)
	// {
	// 	cout << err[i] << " ERROR\n";
	// }

	// STL_pair

	// 1490
	// int n;
	// pair<int, int> a[10001];
	// cin >> n;
	// int q, x, y;
	// for (q = 1; q <= n; ++q)
	// {
	// 	cin >> a[q].first >> a[q].second;
	// }
	// sort(a + 1, a + n + 1);
	// for (q = 1; q <= n; ++q)
	// {
	// 	cout << a[q].first << ' ' << a[q].second << "\n";
	// }

	// STL_stack

	// 1486
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
	//  		if (sta.top() == '(')
	//  		{
	//  			sta.pop();
	//  			break;
	//  		}
	//  		else
	//  		{
	//  			cout << "no";
	//  			return 0;
	//  		}
	//  	case ']':
	//  		if (sta.top() == '[')
	//  		{
	//  			sta.pop();
	//  			break;
	//  		}
	//  		else
	//  		{
	//  			cout << "no";
	//  			return 0;
	//  		}
	//  	}
	//  }
	//  cout << "yes";

	// 1790
	//  int n;
	//  string s;
	//  cin >> n >> s;
	//  bool b = true;
	//  stack<char> sta;
	//  for (int q = 0; q <= n / 2; ++q)
	//  {
	//  	sta.push(s[q]);
	//  }
	//  char t;
	//  for (int q = n / 2; q < n; ++q)
	//  {
	//  	t = sta.top();
	//  	if (t != s[q])
	//  	{
	//  		b = false;
	//  	}
	//  	sta.pop();
	//  }
	//  if (b)
	//  {
	//  	cout << "Yes";
	//  }
	//  else
	//  {
	//  	cout << "No";
	//  }

	// STL_queue

	// 1487
	//  queue<int> q;
	//  int n, t, cnt = 1; // cnt��¼���Ƿ��Ƶ��ܴ���������ֻ���ڶ���ʱ��ʼ��
	//  cin >> n;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> t;
	//  	q.push(t);
	//  }
	//  while (!q.empty())
	//  {
	//  	while (!q.empty())
	//  	{
	//  		if (cnt % 2 == 1)
	//  		{
	//  			cout << q.front() << ' ';
	//  			q.pop();
	//  		}
	//  		else
	//  		{
	//  			q.push(q.front());
	//  			q.pop();
	//  		}
	//  		++cnt;
	//  	}
	//  }

	// STL_map

	// ��1542
	//  int a[100010] = {0};
	//  map<int, int, greater<int>> m;
	//  int n, x = 0, t;
	//  scanf("%d", &n);
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	scanf("%d", &a[j]);
	//  	if (m.count(a[j]) == 0)
	//  	{
	//  		m[a[j]] = 1;
	//  	}
	//  	else
	//  	{
	//  		++m[a[j]];
	//  	}
	//  }
	//  map<int, int>::iterator it;
	//  for (it = m.begin(); it != m.end(); ++it)
	//  {
	//  	t = it->second;
	//  	m[it->first] = x + 1;
	//  	x = x + t;
	//  	// x��ʾ����֮ǰ�м����ˣ���ôx+1���ǵ�ǰ����˵�����
	//  	//��Ϊit->second�������ˣ�����Ҫ����ʱ����t�洢ԭ����
	//  }
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	printf("%d\n", m[a[j]]);
	//  }

	// ��̬�滮DP

	// 1649
	// short a[100001], dp[100001];
	// int seed, n;
	// long long ans = 0;
	// cin >> n >> seed;
	// int i;
	// ans = dp[1] = a[1] = seed;
	// for (i = 2; i <= n; ++i)
	// {
	//	a[i] = (379 * a[i - 1] + 131) % 997;
	//	dp[i] = max(dp[i - 1], a[i]);
	//	ans += dp[i];
	// }
	// cout << ans;

	// 1650
	//  short a[100001], dp[100001];
	//  int n, x, ans = 0;
	//  cin >> n >> x;
	//  a[1] = x;
	//  int i, j;
	//  for (i = 2; i <= n; ++i)
	//  {
	//  	a[i] = (379 * a[i - 1] + 131) % 997;
	//  }
	//  dp[1] = a[1];
	//  ans += dp[1];
	//  for (j = 2; j <= n; ++j)
	//  {
	//  	dp[j] = min(dp[j - 1], a[j]);
	//  	ans += dp[j];
	//  }
	//  cout << ans;

	// 1653_1
	// int a[51], dp[51] = {0};
	// int n, i;
	// cin >> n;
	// for (i = 1; i <= n; ++i)
	// {
	//	cin >> a[i];
	// }
	// dp[1] = a[1];
	// dp[2] = max(a[1], a[2]);
	// for (i = 3; i <= n; ++i)
	// {
	//	dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
	// }
	// cout << dp[n];

	// 1653_2
	//  const int R = 60;
	//  int a[R] = {0}, dp[R][2] = {0};
	//  int n;
	//  cin >> n;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> a[j];
	//  }
	//  dp[0][0] = 0;
	//  dp[0][1] = INT_MIN;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	dp[j][0] = max(dp[j - 1][0], dp[j - 1][1]);
	//  	dp[j][1] = dp[j - 1][0] + a[j];
	//  }
	//  cout << max(dp[n][0], dp[n][1]);

	// 1277
	//  int dp_front[101] = {0}, dp_back[101] = {0}, a[101];
	//  int n, ans_keep = 0;
	//  cin >> n;
	//  int i, j;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> a[i];
	//  }
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	dp_front[i] = 1;
	//  	// front
	//  	for (j = 1; j < i; ++j)
	//  	{
	//  		if (a[i] > a[j])
	//  		{
	//  			dp_front[i] = max(dp_front[i], dp_front[j] + 1);
	//  		}
	//  	}
	//  }
	//  for (i = n; i >= 1; --i) //����i��ѭ��Ҫ����������Ϊdp_back[i]�Ľ��������dp_back[i+1]~dp_back[n]
	//  {
	//  	dp_back[i] = 1;
	//  	// back
	//  	for (j = n; j > i; --j)
	//  	{
	//  		if (a[i] > a[j])
	//  		{
	//  			dp_back[i] = max(dp_back[i], dp_back[j] + 1);
	//  		}
	//  	}
	//  	ans_keep = max(ans_keep, dp_front[i] + dp_back[i] - 1);
	//  }
	//  cout << n - ans_keep;

	// 1282
	//  const int R = 101;
	//  int w[R], v[R], dp[20001];
	//  int n, c, i, j;
	//  cin >> c >> n;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> w[i] >> v[i];
	//  }
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	for (j = c; j >= 1; --j)
	//  	{
	//  		if (j >= w[i])
	//  		{
	//  			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
	//  		}
	//  	}
	//  }
	//  cout << dp[c];

	// 1780
	//  int dp[100001];
	//  int c, n, w, v;
	//  int i, j;
	//  cin >> c >> n;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> w >> v;
	//  	for (j = 1; j <= c; ++j)
	//  	{
	//  		if (j >= w)
	//  		{
	//  			dp[j] = max(dp[j], dp[j - w] + v);
	//  		}
	//  	}
	//  }
	//  cout << dp[c];

	// 1888_1
	// short w[10001] = {0}, v[10001] = {0};
	// int dp[101] = {0};
	// int n, c, s, tot = 0, wi, vi;
	// cin >> n >> c;
	// int i, j;
	// for (i = 1; i <= n; ++i)
	// {
	// 	cin >> wi >> vi >> s;
	// 	for (j = 1; j <= s; ++j)
	// 	{
	// 		++tot;
	// 		w[tot] = wi;
	// 		v[tot] = vi;
	// 	}
	// }
	// for (i = 1; i <= tot; ++i)
	// {
	// 	for (j = c; j >= w[i]; --j)
	// 	{
	// 		dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
	// 	}
	// }
	// cout << dp[c];

	// 1888_2
	//  int w[101] = {0}, v[101] = {0}, s[101] = {0}, dp[101] = {0};
	//  int n, c;
	//  cin >> n >> c;
	//  int i, j, k;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> w[i] >> v[i] >> s[i];
	//  }
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	for (k = 1; k <= s[i]; ++k)
	//  	{
	//  		for (j = c; j >= w[i]; --j)
	//  		{
	//  			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
	//  		}
	//  	}
	//  }
	//  cout << dp[c];

	// 1885
	//  int dp[33000] = {0};
	//  int n;
	//  int a[4] = {0, 1, 2, 3};
	//  cin >> n;
	//  int i, j;
	//  dp[0] = 1;
	//  for (i = 1; i <= 3; ++i) //��Ʒ����Ϊ3
	//  {
	//  	for (j = i; j <= n; ++j) //�ӵ�i����Ʒѭ������n����Ʒ
	//  	{
	//  		dp[j] = dp[j] + dp[j - a[i]];
	//  	}
	//  }
	//  cout << dp[n];

	// 1903
	//  int n;
	//  int dp[4010] = {0};
	//  cin >> n;
	//  int i, j;
	//  dp[0] = 1;
	//  for (i = 1; i < n; ++i)
	//  //<n��<=n-1����Ϊ������Ҫ��������ӣ����i=n�˾�˵��ֻѡ��n��һ����
	//  {
	//  	for (j = i; j <= n; ++j)
	//  	{
	//  		dp[j] = (dp[j] + dp[j - i]) % 2147483648u; // u��ʾ���Ϊ�޷�����
	//  		// j-i���൱��j-a[i]������a[i]�����õ���i������ֱ��дΪi
	//  	}
	//  }
	//  cout << dp[n];

	// 2072
	//  int m[11] = {0}, dp[110] = {0};
	//  register int i, j;
	//  for (i = 1; i <= 10; ++i)
	//  {
	//  	cin >> m[i];
	//  }
	//  int n;
	//  cin >> n;
	//  memset(dp, 0x3f, sizeof(dp));
	//  dp[0] = 0;
	//  for (i = 1; i <= 10; ++i)
	//  {
	//  	for (j = 1; j <= n; ++j)
	//  	{
	//  		dp[j] = min(dp[j], dp[j - i] + m[i]);
	//  	}
	//  }
	//  cout << dp[n];

	// 2077_��ý�struct���ڽṹ������
	//  struct Node
	//  {
	//  	int w = 0, v = 0;
	//  } a[5010];
	//  int dp[6010] = {0};
	//  int n, m;
	//  int tot = 0, t, w, v, num;
	//  cin >> n >> m;
	//  register int i, j;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	cin >> w >> v >> num;
	//  	if (num != 0)
	//  	{
	//  		t = 1;
	//  		while (t <= num)
	//  		{
	//  			++tot;
	//  			a[tot].w = w * t;
	//  			a[tot].v = v * t;
	//  			num -= t;
	//  		}
	//  		if (num != 0)
	//  		{
	//  			++tot;
	//  			a[tot].w = w * num;
	//  			a[tot].v = v * num;
	//  		}
	//  	}
	//  }
	//  for (i = 1; i <= tot; ++i)
	//  {
	//  	for (j = m; j >= a[i].w; --j)
	//  	{
	//  		dp[j] = max(dp[j], dp[j - a[i].w] + a[i].v);
	//  	}
	//  }
	//  cout << dp[m];

	// 1891
	//  long long dp[30010] = {0};
	//  int n, m, w, p, v;
	//  cin >> n >> m;
	//  register int i, j;
	//  for (i = 1; i <= m; ++i)
	//  {
	//  	cin >> w >> p;
	//  	v = w * p;
	//  	for (j = n; j >= w; --j)
	//  	{
	//  		dp[j] = max(dp[j], dp[j - w] + v);
	//  	}
	//  }
	//  cout << dp[n];

	// 2074
	//  int a[110] = {0};
	//  unsigned long long dp[5010] = {0};
	//  int n, m;
	//  cin >> n >> m;
	//  register int i, j;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> a[i];
	//  }
	//  dp[0] = 1;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	for (j = a[i]; j <= m; ++j)
	//  	{
	//  		dp[j] = dp[j] + dp[j - a[i]];
	//  	}
	//  }
	//  cout << dp[m];

	// 1944
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

	// 1779
	//  int dp[200010] = {0};
	//  int c, n, v;
	//  cin >> c >> n;
	//  register int i, j;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> v;
	//  	for (j = c; j >= v; --j)
	//  	{
	//  		dp[j] = max(dp[j], dp[j - v] + v); //���������⣬��Ʒ�����������Ʒ������
	//  	}
	//  }
	//  cout << c - dp[c];

	// 2073
	//  int dp[32800] = {0};
	//  int n, c, w;
	//  cin >> n >> c;
	//  register int i, j;
	//  for (i = 1; i <= n; i++)
	//  {
	//  	cin >> w;
	//  	for (j = c; j >= w; --j)
	//  	{
	//  		dp[j] = max(dp[j], dp[j - w] + w);
	//  	}
	//  }
	//  cout << dp[c];

	// ����DP

	// 2554_2
	// const int R = 5e4 + 10;
	// int sum[R] = {0}, ans = 0, md1[R] = {0}, md2[R] = {0}, n, s;
	// cin >> n;
	// register int i, j;
	// for (i = 1; i <= n; ++i)
	// {
	// 	for (j = 2; j <= n / i; ++j) //���Ӳ���������������j!=1
	// 	{
	// 		sum[i * j] += i; //ע��������+=i��i��Ϊ����ÿ����������
	// 	}
	// }
	// for (j = n; j >= 1; --j)
	// {
	// 	s = sum[j];
	// 	if (s < j)
	// 	{
	// 		if (md1[j] + 1 > md1[s])
	// 		{
	// 			md2[s] = md1[s];
	// 			md1[s] = md1[j] + 1;
	// 		}
	// 		else if (md1[j] + 1 > md2[s])
	// 		{
	// 			md2[s] = md1[j] + 1;
	// 		}
	// 	}
	// }
	// for (j = 1; j <= n; ++j)
	// {
	// 	ans = max(ans, md1[j] + md2[j]);
	// }
	// cout << ans;

	// ͼ�����·

	// 2091
	//  const int R = 130, INF = 0x3f3f3f3f;
	//  int a[R][R];
	//  int d[R];
	//  bool b[R] = {0};
	//  int n, len;
	//  char x, y;
	//  int i, j;
	//  memset(a, 0x3f, sizeof(a)); //Ĭ�������
	//  cin >> n;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> x >> y >> len;
	//  	a[x][y] = a[y][x] = min(a[x][y], len);
	//  }
	//  // dijkstra
	//  memset(d, 0x3f, sizeof(d));
	//  d['Z'] = 0;
	//  int st;
	//  for (i = 'A'; i <= 'z'; ++i)
	//  {
	//  	st = -1;
	//  	for (j = 'A'; j <= 'z'; ++j)
	//  	{
	//  		if (!b[j] && (st == -1 || d[j] < d[st]))
	//  		{
	//  			st = j;
	//  		}
	//  	}
	//  	b[st] = true;
	//  	for (j = 'A'; j <= 'z'; ++j)
	//  	{
	//  		if (!b[j] && a[st][j] != INF &&
	//  			a[st][j] + d[st] < d[j]) //��st������i������
	//  		{
	//  			d[j] = a[st][j] + d[st];
	//  		}
	//  	}
	//  }
	//  char c = 'A';
	//  int ans = INT_MAX;
	//  for (j = 'A'; j < 'Z'; ++j)
	//  {
	//  	if (d[j] < ans)
	//  	{
	//  		ans = d[j];
	//  		c = j;
	//  	}
	//  }
	//  cout << c << ' ' << ans;

	// ͼ�۽���

	// 2473_BFS
	//  const int R = 1e3 + 10;
	//  bool a[R][R];
	//  int rd[R];
	//  int T, n, m, x, y, tot;
	//  cin >> T;
	//  register int j;
	//  queue<int> q;
	//  while (T--)
	//  {
	//  	tot = 0;
	//  	memset(a, 0, sizeof(a));
	//  	memset(rd, 0, sizeof(rd));
	//  	cin >> n >> m;
	//  	for (j = 1; j <= m; ++j)
	//  	{
	//  		cin >> x >> y;
	//  		a[x][y] = 1;
	//  		++rd[y];
	//  	}
	//  	for (j = 1; j <= n; ++j)
	//  	{
	//  		if (!rd[j])
	//  		{
	//  			++tot;
	//  			q.push(j);
	//  		}
	//  	}
	//  	while (!q.empty())
	//  	{
	//  		x = q.front();
	//  		q.pop();
	//  		for (j = 1; j <= n; ++j)
	//  		{
	//  			if (a[x][j])
	//  			{
	//  				--rd[j];
	//  				if (!rd[j])
	//  				{
	//  					++tot;
	//  					q.push(j);
	//  				}
	//  			}
	//  		}
	//  	}
	//  	cout << (tot == n ? "N\n" : "Y\n");
	//  }

	// 2416_Bellman-Ford
	// const int R = 1e3 + 10;
	// long long dis[R];
	// int from[R], to[R], len[R];
	// int n, m, s;
	// cin >> n >> m >> s;
	// register int i, j;
	// for (j = 1; j <= m; ++j)
	// {
	// 	cin >> from[j] >> to[j] >> len[j];
	// }
	// memset(dis, 0x3f, sizeof(dis));
	// dis[s] = 0;
	// for (i = 1; i <= n - 1; ++i)
	// {
	// 	for (j = 1; j <= m; ++j)
	// 	{
	// 		if (dis[from[j]] + len[j] < dis[to[j]])
	// 		{
	// 			dis[to[j]] = dis[from[j]] + len[j];
	// 		}
	// 	}
	// }
	// for (j = 1; j <= m; ++j)
	// {
	// 	if (dis[from[j]] + len[j] < dis[to[j]])
	// 	{
	// 		cout << "-1";
	// 		return 0;
	// 	}
	// }
	// for (j = 1; j <= n; ++j)
	// {
	// 	if (dis[j] < (dis[0] >> 1))
	// 	{
	// 		cout << dis[j] << "\n";
	// 	}
	// 	else
	// 	{
	// 		cout << "NoPath\n";
	// 	}
	// }

	// ǰ׺������

	// 2062_ʹ�õڶ��ַ���
	//  const int R = 100010;
	//  int a[R] = {0};
	//  int n, q, t;
	//  cin >> n >> q;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> t;
	//  	a[j] += t;
	//  	a[j + 1] -= t;
	//  }
	//  int x, y, h;
	//  for (j = 1; j <= q; ++j)
	//  {
	//  	cin >> x >> y >> h;
	//  	a[x] += h;
	//  	a[y + 1] -= h;
	//  }
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	a[j] = a[j] + a[j - 1];
	//  	cout << a[j] << ' ';
	//  }

	// ��

	// 2164
	//  vector<int> a[110];
	//  int n;
	//  cin >> n;
	//  int fa, son;
	//  register int j;
	//  for (j = 1; j <= n - 1; ++j)
	//  {
	//  	cin >> fa >> son;
	//  	a[fa].push_back(son);
	//  }
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cout << a[j].size() << ' ';
	//  }

	// 2165_�����У����˸����֮�⣬����������һ����㶼ֻ��һ�����븸�������
	//  int a[110] = {0}, n;
	//  cin >> n;
	//  int x, y;
	//  register int j;
	//  for (j = 1; j <= n - 1; ++j)
	//  {
	//  	cin >> x >> y;
	//  	++a[x];
	//  	++a[y];
	//  }
	//  ++a[1]; //��װ�����Ҳ��һ����
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cout << a[j] - 1 << ' ';
	//  }

	// 1775
	//  vector<int> a[10010];
	//  int n;
	//  cin >> n;
	//  register int i, j;
	//  int x, y;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> x;
	//  	for (j = 1; j <= x; ++j)
	//  	{
	//  		cin >> y;
	//  		a[i].push_back(y);
	//  	}
	//  }
	//  int cnt = 0, ansnum, ans = -1;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cnt = 0;
	//  	for (j = 0; j < a[i].size(); ++j)
	//  	{
	//  		cnt += a[a[i][j]].size();
	//  	}
	//  	if (cnt > ans)
	//  	{
	//  		ansnum = i;
	//  		ans = cnt;
	//  	}
	//  }
	//  cout << ansnum << ' ' << ans;

	// 2188_1
	//  const int R = 1010;
	//  vector<int> a[R];
	//  int fa[R];
	//  bool b[R];
	//  register int j;
	//  for (j = 1; j <= 1000; ++j)
	//  {
	//  	fa[j] = j;
	//  }
	//  int n, x, y;
	//  cin >> n;
	//  while (cin >> x >> y)
	//  {
	//  	fa[y] = x;
	//  	b[x] = b[y] = true;
	//  	a[x].push_back(y);
	//  }
	//  for (j = 1; j <= 1000; ++j)
	//  {
	//  	if (b[j] && fa[j] == j)
	//  	{
	//  		cout << j << "\n";
	//  		break;
	//  	}
	//  }
	//  int ans = 0, cnt = 0;
	//  for (j = 1; j <= 1000; ++j)
	//  {
	//  	if (b[j] && a[j].size() >= cnt)
	//  	{
	//  		cnt = a[j].size();
	//  		ans = j;
	//  	}
	//  }
	//  sort(a[ans].begin(), a[ans].end());
	//  cout << ans << "\n";
	//  for (j = 0; j < a[ans].size(); ++j)
	//  {
	//  	cout << a[ans][j] << ' ';
	//  }

	// 2167_���·����_LCAģ����
	//  int fa[110] = {0};
	//  bool vis[110] = {false};
	//  int n, x, y, a, b;
	//  cin >> n;
	//  register int j;
	//  for (j = 1; j <= 100; ++j)
	//  {
	//  	fa[j] = j;
	//  }
	//  cin >> x >> y;
	//  for (j = 2; j <= n; ++j)
	//  {
	//  	cin >> a >> b;
	//  	fa[a] = b;
	//  }
	//  vis[x] = true;
	//  while (x != fa[x])
	//  {
	//  	x = fa[x];
	//  	vis[x] = true;
	//  }
	//  while (!vis[y])
	//  {
	//  	y = fa[y];
	//  }
	//  cout << y;

	// 1776
	//  const int R = 10010;
	//  vector<int> a[R];
	//  int num;
	//  int n;
	//  cin >> n;
	//  register int i, j;
	//  int maxnum = 0;
	//  for (j = 1; j <= n - 1; ++j)
	//  {
	//  	cin >> num;
	//  	a[num].push_back(j + 1); //������⣬num[i]��i+1�Ž��ĸ�
	//  }
	//  int ans = 0, ansa, cnt;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cnt = 0;
	//  	for (j = 0; j < a[i].size(); ++j)
	//  	{
	//  		cnt += a[a[i][j]].size();
	//  	}
	//  	if (cnt > ans)
	//  	{
	//  		ans = cnt;
	//  		ansa = i;
	//  	}
	//  }
	//  cout << ansa << ' ' << ans;

	// ������

	// 2185
	// int m, n;
	// cin >> m >> n; // m��Ҫ��ģ�n���ܹ��Ľ����
	// int num = m, cnt = 0, ans = 0;
	// for (num = m; num <= n; num = num * 2 + 1)
	// {
	// 	++cnt;
	// }
	// ans = pow(2, cnt) - 1; //�����������Ĳ��Լ������ж��ٽ��
	// num = m * pow(2, cnt);
	// if (num <= n)
	// {
	// 	ans += n - num + 1;
	// }
	// cout << ans;

	// 2193
	//  priority_queue<int, vector<int>, greater<int>> q;
	//  int n, a, b, ans = 0;
	//  cin >> n;
	//  while (n--)
	//  {
	//  	cin >> a;
	//  	q.push(a);
	//  }
	//  while (q.size() > 1)
	//  {
	//  	a = q.top(), q.pop();
	//  	b = q.top(), q.pop();
	//  	ans += a + b;
	//  	q.push(a + b); //ÿ�ν������ɵ������Ż�q��
	//  }
	//  cout << ans;

	// 2192
	//  priority_queue<int, vector<int>, greater<int>> q;
	//  int T, n, w, ans, a, b;
	//  register int j;
	//  cin >> T;
	//  while (T--)
	//  {
	//  	ans = 0;
	//  	cin >> n;
	//  	for (j = 1; j <= n; ++j)
	//  	{
	//  		cin >> w;
	//  		q.push(w);
	//  	}
	//  	while (q.size() != 1)
	//  	{
	//  		a = q.top(), q.pop();
	//  		b = q.top(), q.pop();
	//  		ans += a + b;
	//  		q.push(a + b);
	//  	}
	//  	cout << ans << "\n";
	//  	q.pop();
	//  }

	// ����DP

	// 2057
	//  const int R = 110;
	//  int dp[R][R];
	//  int n;
	//  int a[R] = {0}, sum[R] = {0};
	//  cin >> n;
	//  memset(dp, 0x3f, sizeof(dp));
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> a[j];
	//  	sum[j] = sum[j - 1] + a[j];
	//  	dp[j][j] = 0;
	//  }
	//  int left, r, len, cut;
	//  for (len = 2; len <= n; ++len)
	//  {
	//  	for (left = 1; left <= n - len + 1; ++left)
	//  	{
	//  		r = left + len - 1;
	//  		for (cut = left; cut < r; ++cut)
	//  		{
	//  			dp[left][r] = min(dp[left][r],
	//  							  dp[left][cut] + dp[cut + 1][r] + sum[r] - sum[left - 1]);
	//  		}
	//  	}
	//  }
	//  cout << dp[1][n];

	// 2213
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

	// ״̬ѹ��DP

	// ���2156
	//  1_�����
	//  const int R = 14, MOD = 1e8;
	//  int dp[R][1 << R] = {0}, g[R] = {0}, sta[1 << R] = {0}, tot = 0;
	//  int n, m, x, ans = 0;
	//  cin >> n >> m;
	//  register int i, j, y;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	for (j = 1; j <= m; ++j)
	//  	{
	//  		cin >> x;
	//  		g[i] = (g[i] << 1) + x;
	//  	}
	//  }
	//  for (j = 0; j <= (1 << m); ++j)
	//  	if ((j & (j << 1)) == 0)
	//  		sta[++tot] = j;
	//  for (j = 1; j <= tot; ++j)
	//  	if ((sta[j] & g[1]) == sta[j])
	//  		dp[1][j] = 1;
	//  for (i = 2; i <= n; ++i)
	//  	for (x = 1; x <= tot; ++x)
	//  		if ((sta[x] & g[i]) == sta[x]) //�Ż����������ص����ʲ���ö��
	//  			for (y = 1; y <= tot; ++y) // yö�ٵ�����һ��
	//  				if (!(sta[x] & sta[y]))
	//  					dp[i][x] = (dp[i][x] + dp[i - 1][y]) % MOD;
	//  for (j = 1; j <= tot; ++j)
	//  	ans = (ans + dp[n][j]) % MOD;
	//  cout << ans;
	//  2_����д��
	//  const int R = 14, MOD = 1e8;
	//  int dp[R][1 << R] = {0}, g[R] = {0}, sta[1 << R] = {0}, tot = 0;
	//  int n, m, x, ans = 0;
	//  cin >> n >> m;
	//  register int i, j, y;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	for (j = 1; j <= m; ++j)
	//  	{
	//  		cin >> x;
	//  		g[i] = (g[i] << 1) + x;
	//  	}
	//  }
	//  for (j = 0; j <= (1 << m); ++j)
	//  	if ((j & (j << 1)) == 0)
	//  		sta[++tot] = j;
	//  dp[0][1] = 1;
	//  for (i = 1; i <= n + 1; ++i)
	//  	for (x = 1; x <= tot; ++x)
	//  		if ((sta[x] & g[i]) == sta[x]) //�Ż����������ص����ʲ���ö��
	//  			for (y = 1; y <= tot; ++y) // yö�ٵ�����һ��
	//  				if (!(sta[x] & sta[y]))
	//  					dp[i][x] = (dp[i][x] + dp[i - 1][y]) % MOD;
	//  cout << dp[n + 1][1];

	// 2560
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

	// ���������Ż�DP

	// 2574_�з���
	// /*dp[i]=max(s[i]-s[j]) (j>=i-m+1-1)
	// ����s[i]�ǳ��������Կ��Ż�Ϊdp[i]=s[i]-min(s[j]) (j>=i-m+1-1)
	// ��������ȡ���Ƕ�ͷԪ�أ�����ֻҪά�������ж�ͷԪ����С����������������*/
	// const int R = 2e5 + 10;
	// int s[R] = {0};
	// int n, m, ans = INT_MIN;
	// cin >> n >> m;
	// register int j;
	// for (j = 1; j <= n; ++j)
	// {
	// 	cin >> s[j];
	// 	s[j] += s[j - 1];
	// }
	// deque<int> q;
	// q.push_back(0);
	// for (j = 1; j <= n; ++j)
	// {
	// 	if (!q.empty() && q.front() < j - m) //��j-m+1��Ԫ�أ�������Ϊǰ׺�����ʱ����˵�Ҫ-1������+1-1����������j-m
	// 		q.pop_front();
	// 	ans = max(ans, s[j] - s[q.front()]);
	// 	while (!q.empty() && s[q.back()] > s[j])
	// 		q.pop_back();
	// 	q.push_back(j);
	// }
	// cout << ans;

	// 2562_���_��������ά���Ĳ�һ����ĳ��Ԫ�ص�ֵ�����ǿ���ά��ĳ�����ʽ��ֵ
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

	// ����ջ�뵥������

	// 2551
	// const int R = 1e6 + 10;
	// int sta[R], top;
	// int n, x;
	// cin >> n;
	// register int j;
	// for (j = 1; j <= n; ++j)
	// {
	// 	cin >> x;
	// 	while (top && sta[top] >= x) //ѡ���Ǳȵ�ǰ��ţ��ģ��������ص��ڵ�ǰ��ţ��ҲҪ����ȥ
	// 	{
	// 		--top;
	// 	}
	// 	if (!top)
	// 	{
	// 		cout << "0 ";
	// 	}
	// 	else
	// 	{
	// 		cout << sta[top] << ' ';
	// 	}
	// 	sta[++top] = x;
	// }

	// 1777
	//  const int R = 1e6 + 10;
	//  int st[R], top = 0, n, x;
	//  long long ans = 0;
	//  cin >> n;
	//  for (register int j = 1; j <= n; ++j)
	//  {
	//  	cin >> x;
	//  	while (top && st[top] <= x)
	//  	{
	//  		--top;
	//  	}
	//  	ans += top;
	//  	st[++top] = x;
	//  }
	//  cout << ans;

	// 1772
	//  const int R = 1e6 + 10;
	//  int q[R], a[R], n, k, head, tail;
	//  cin >> n >> k;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> a[j];
	//  }
	//  head = tail = 0;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	if (head <= tail && q[head] < j - k + 1)
	//  	{
	//  		++head;
	//  	}
	//  	while (head <= tail && a[j] < a[q[tail]])
	//  	{
	//  		--tail;
	//  	}
	//  	q[++tail] = j;
	//  	if (j >= k)
	//  	{
	//  		cout << a[q[head]] << ' ';
	//  	}
	//  }
	//  cout << "\n";
	//  head = tail = 0;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	if (head <= tail && q[head] < j - k + 1)
	//  	{
	//  		++head;
	//  	}
	//  	while (head <= tail && a[j] > a[q[tail]])
	//  	{
	//  		--tail;
	//  	}
	//  	q[++tail] = j;
	//  	if (j >= k)
	//  	{
	//  		cout << a[q[head]] << ' ';
	//  	}
	//  }

	// 1773
	//  const int R = 4e5 + 10;
	//  int sta[R], top = 0, n;
	//  long long a[R], left_[R], right_[R];
	//  cin >> n;
	//  register int j;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	cin >> a[j];
	//  }
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	while (top && a[j] <= a[sta[top]])
	//  	{
	//  		--top;
	//  	}
	//  	left_[j] = j - sta[top];
	//  	sta[++top] = j;
	//  }
	//  top = 0;
	//  sta[0] = n + 1;
	//  for (j = n; j >= 1; --j)
	//  {
	//  	while (top && a[j] <= a[sta[top]])
	//  	{
	//  		--top;
	//  	}
	//  	right_[j] = sta[top] - j;
	//  	sta[++top] = j;
	//  }
	//  long long ans = 0;
	//  for (j = 1; j <= n; ++j)
	//  {
	//  	ans = max(ans, a[j] * (right_[j] + left_[j] - 1));
	//  }
	//  cout << ans;

	// ��ѧ

	// 1412_������ģ����_1_ѭ���ⷨ
	//  long long x, p, m, ans = 1; //�������ݾ��Ѿ��ӽ�int�ı߽��ˣ�������ö���longlong
	//  cin >> x >> p >> m;
	//  while (p)
	//  {
	//  	if (p % 2)
	//  	{
	//  		ans = ans * x % m;
	//  	}
	//  	x = x * x % m;
	//  	p = p / 2;
	//  }
	//  cout << ans;

	// 1080_2137
	// int n;
	// cin >> n;
	// for (register int j = 2; j * j <= n; ++j)
	// {
	// 	while (n % j == 0)
	// 	{
	// 		cout << j << "\n";
	// 		n /= j;
	// 	}
	// }
	// if (n != 1) //���nû�ܳ���1��˵������֮���n����Ҳ�������ӣ�ҲҪ���
	// {
	// 	cout << n;
	// }

	// 2140_unordered_map�������ܵ�
	//  using mp = map<int, int>; //ע�����ﲻ����unordered_map����Ϊunordered_map�е�Ԫ��������ģ�����ĿҪ����������
	//  mp m;
	//  mp::iterator it;
	//  int n, maxn = 0;
	//  cin >> n;
	//  if (n == 1)
	//  {
	//  	cout << "1=1";
	//  	return 0;
	//  }
	//  cout << n << '=';
	//  register int j;
	//  for (j = 2; j <= sqrt(n); ++j)
	//  {
	//  	while (n % j == 0)
	//  	{
	//  		++m[j];
	//  		n /= j;
	//  	}
	//  	maxn = j;
	//  }
	//  if (n > 1)
	//  {
	//  	++m[n];
	//  	maxn = max(maxn, n);
	//  }
	//  for (it = m.begin(); it != m.end(); ++it)
	//  {
	//  	cout << it->first;
	//  	if (it->second != 1)
	//  	{
	//  		cout << '^' << it->second;
	//  	}
	//  	if (it->first < maxn)
	//  	{
	//  		cout << '*';
	//  	}
	//  }

	// 2138_Ψһ�ֽⶨ�������������ʽӦ��_n=(a1+1)*(a2+1)*...*(ai+1)
	//  /*Ψһ�ֽⶨ����Լ��������n=(a1+1)*(a2+1)*...*(ai+1)
	//  ����100=2^2*5^2��a1=2��a2=2����100�������ĸ���Ϊ(2+1)*(2+1)=9��1,2,4,5,10,20,25,50,100����
	//  ����������⣺������100Ϊ������2^0,2^1,2^2���������5Ҳ����ˣ�������ԣ��Ͳ�����3*3=9�����*/
	//  const int MOD = 1e9 + 7;
	//  using mp = map<int, int>;
	//  mp m;
	//  int n, x;
	//  cin >> n;
	//  register int i, j;
	//  for (i = 1; i <= n; ++i)
	//  {
	//  	cin >> x;
	//  	for (j = 2; j <= sqrt(x); ++j)
	//  	{
	//  		while (x % j == 0)
	//  		{
	//  			++m[j];
	//  			x /= j;
	//  		}
	//  	}
	//  	if (x > 1)
	//  	{
	//  		++m[x];
	//  	}
	//  }
	//  long long ans = 1; //Ҫ�˻������Գ�ʼֵ��1
	//  mp::iterator it;
	//  for (it = m.begin(); it != m.end(); ++it)
	//  {
	//  	ans = ans * (it->second + 1) % MOD; //���ݹ�ʽ���㼴��
	//  }
	//  cout << ans;

	// 2139_Ψһ�ֽⶨ���������͹�ʽӦ��_sum=(p1^0+p1^1+...+p1^a1)*...*(pi^0+pi^1+...+p1^ai)
	// const int MOD = 1e9 + 7;
	// using mp = map<int, int>;
	// mp m;
	// int n, x;
	// cin >> n;
	// register int i, j;
	// for (i = 1; i <= n; ++i)
	// {
	// 	cin >> x;
	// 	for (j = 2; j <= sqrt(x); ++j)
	// 	{
	// 		while (x % j == 0)
	// 		{
	// 			++m[j];
	// 			x /= j;
	// 		}
	// 	}
	// 	if (x > 1)
	// 	{
	// 		++m[x];
	// 	}
	// }
	// long long ans = 1, sum, t; //Ҫ�˻������Գ�ʼֵ��1
	// mp::iterator it;
	// for (it = m.begin(); it != m.end(); ++it)
	// {
	// 	sum = 0;
	// 	t = 1;
	// 	for (j = 0; j <= it->second; ++j) //���ݹ�ʽ��Ҫ����pi��0~ai�η�
	// 	{
	// 		sum = (sum + t) % MOD;
	// 		t = (t * it->first) % MOD;
	// 	}
	// 	ans = (ans * sum) % MOD;
	// }
	// cout << ans;

	return 0;
}

//----------------------------Practice.cpp----------------------------

// �ж�����
//  int k(int i)
//{
//	bool f = 0;
//	int x = 2;
//	int s;
//	while (x <= floor(sqrt(i)) && (i % x != 0))
//	{
//		x++;
//	}
//	if (x > floor(sqrt(i)))
//	{
//		f = 1;
//	}
//	return f;
// }
//  int main()
//{
//	int n;
//	cin >> n;
//	if (k(n) == 1)
//	{
//		cout << "yes" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//	system("pause");
//	return 0;
// }

// ��max(a, b, c) / (max(a + b, b, c) * max(a, b, b + c))��ֵ
//  double max1(int x, int y, int z)
//  {
//  	int k = x;
//  	if (k < y)
//  	{
//  		k = y;
//  	}
//  	if (k < z)
//  	{
//  		k = z;
//  	}
//  	return k;
//  }
//  int main()
//  {
//  	int a, b, c, m;
//  	cin >> a >> b >> c;
//  	m = max1(a, b, c) / (max1(a + b, b, c) * max1(a, b, b + c)) * 1.0;
//  	cout << m << endl;
//  	system("pause");
//  	return 0;
//  }

// �����������ǻ���������λ��
//  int sh(int i)
//  {
//  	bool f = 0;
//  	int x = 2;
//  	while (x <= floor(sqrt(i)) && (i % x != 0))
//  	{
//  		x++;
//  	}
//  	if (x > floor(sqrt(i)))
//  	{
//  		f = 1;
//  	}
//  	return f;
//  }
//  int main()
//  {
//  	for (int i = 100; i <= 999; i++)
//  	{
//  		if ((sh(i) == 1) && (i / 100 == i % 10))
//  		{
//  			cout << i << endl;
//  		}
//  	}
//  	return 0;
//  }

// ��6~100����ż����ʾΪ��������֮��
//  bool k(int i)
//  {
//  	bool f = 0;
//  	int x = 2;
//  	int s;
//  	while (x <= floor(sqrt(i)) && (i % x != 0))
//  	{
//  		x++;
//  	}
//  	if (x > floor(sqrt(i)))
//  	{
//  		f = 1;
//  	}
//  	return f;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (int i = 2; i <= n; i += 2)
//  	{
//  		for (int j = 2; j <= i / 2; j++)
//  		{
//  			if (k(j) && k(i - j))
//  			{
//  				cout << i << "=" << j << "+" << i - j << endl;
//  				break;
//  			}
//  		}
//  	}
//  	return 0;
//  }

// ��1+2+3+����+n
//  int fac(int n)
//  {
//  	if (n == 0)
//  	{
//  		return 0;
//  	}
//  	else
//  	{
//  		return n + fac(n - 1);
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	cout << fac(n);
//  	return 0;
//  }

// 쳲��������еĵ�n����
//  int f(int n)
//  {
//  	if (n == 1)
//  	{
//  		return 0;
//  	}
//  	if (n == 2)
//  	{
//  		return 1;
//  	}
//  	else
//  	{
//  		return f(n - 1) + f(n - 2);
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	cout << f(n);
//  	return 0;
//  }

// ��������ַ���������!����ֹ
//  char s[10000];
//  void a1(int x)
//  {
//  	if (s[x] != '!')
//  	{
//  		a1(x + 1);
//  	}
//  	else
//  	{
//  		return;
//  	}
//  	cout << s[x];
//  }
//  int main()
//  {
//  	gets(s);
//  	a1(0);
//  	return 0;
//  }

// ����������
//  int A(int m, int n)
//  {
//  	if (m == 0)
//  	{
//  		return n + 1;
//  	}
//  	if (m > 0 && n == 0)
//  	{
//  		return A(m - 1, 1);
//  	}
//  	if (m > 0 && n > 0)
//  	{
//  		return A(m - 1, A(m, n - 1));
//  	}
//  }
//  int main()
//  {
//  	int m, n;
//  	cin >> m >> n;
//  	int temp;
//  	temp = A(m, n);
//  	cout << temp << endl;
//  	return 0;
//  }

// �������n�ĵ�kλ
//  int digit(int n, int k)
//  {
//  	k--;
//  	if (k == 0)
//  	{
//  		n % 10;
//  	}
//  	else
//  	{
//  		return digit(n / 10, k);
//  	}
//  }
//  int main()
//  {
//  	int n, k;
//  	cin >> n >> k;
//  	cout << digit(n, k);
//  	return 0;
//  }

// ��Hermite����ʽ��ֵ
//  double h(int n, int x)
//  {
//  	if (n == 0)
//  	{
//  		return 1;
//  	}
//  	if (n == 1)
//  	{
//  		return 2 * x;
//  	}
//  	if (n > 1)
//  	{
//  		return 2 * x * h(n - 1, x) - 2 * (n - 1) * h(n - 2, x);
//  	}
//  }
//  int main()
//  {
//  	int n, x;
//  	cin >> n >> x;
//  	cout << fixed << setprecision(2) << h(n, x) << endl;
//  	return 0;
//  }

// ����sqrt(n+sqrt(n-1+sqrt(n-2+...+sqrt(2+sqrt(x+1)))))��ֵ
//  double f(double x, double n)
//  {
//  	if (n == 1)
//  	{
//  		return sqrt(x + 1);
//  	}
//  	else
//  	{
//  		return sqrt(n + f(x, n - 1));
//  	}
//  }
//  int main()
//  {
//  	double x, n;
//  	cin >> x >> n;
//  	cout << fixed << setprecision(2) << f(x, n) << endl;
//  	return 0;
//  }

// ��x/(n+(x/((n-1)+(x/(n-2)+...+x/(x+1)))))��ֵ
//  double f(double x, double n)
//  {
//  	if (n == 1)
//  	{
//  		return x / (x + 1);
//  	}
//  	else
//  	{
//  		return x / (n + f(x, n - 1));
//  	}
//  }
//  int main()
//  {
//  	int x, n;
//  	cin >> x >> n;
//  	cout << fixed << setprecision(2) << f(x, n) << endl;
//  	return 0;
//  }

// �������ӷ�
//  int a[205], b[205], sum[205];
//  string sa, sb;
//  int main()
//  {
//  	int lena, lenb, lenc = 1, jw = 0;
//  	cin >> sa >> sb;
//  	lena = sa.size();
//  	lenb = sb.size();
//  	for (int i = 0; i < lena; i++)
//  	{
//  		a[lena - i] = sa[i] - '0';
//  	}
//  	for (int i = 0; i < lenb; i++)
//  	{
//  		b[lenb - i] = sb[i] - '0';
//  	}
//  	while (lenc <= lena || lenc <= lenb)
//  	{
//  		sum[lenc] = a[lenc] + b[lenc] + jw;
//  		jw = sum[lenc] / 10;
//  		sum[lenc] %= 10;
//  		lenc++;
//  	}
//  	sum[lenc] = jw;
//  	while (sum[lenc] == 0 && lenc > 1)
//  	{
//  		lenc--;
//  	}
//  	for (int i = lenc; i > 0; i--)
//  	{
//  		cout << sum[i];
//  	}
//  	return 0;
//  }

// ����������
//  int const maxn = 202;
//  int a[maxn], b[maxn], c[maxn];
//  void input(int arr[])
//  {
//  	string s;
//  	cin >> s;
//  	arr[0] = s.size();
//  	for (int i = arr[0] - 1, j = 1; i >= 0; i--, j++)
//  	{
//  		arr[j] = s[i] - '0';
//  	}
//  }
//  void sub(int a[], int b[], int cha[])
//  {
//  	cha[0] = a[0];
//  	int jw = 0;
//  	for (int i = 1; i <= cha[0]; i++)
//  	{
//  		cha[i] = a[i] - b[i] - jw;
//  		if (cha[i] < 0)
//  		{
//  			jw = 1;
//  			cha[i] += 10;
//  		}
//  		else
//  		{
//  			jw = 0;
//  		}
//  	}
//  	while (cha[0] > 1 && cha[cha[0]] == 0)
//  	{
//  		cha[0]--;
//  	}
//  }
//  void output(int arr[])
//  {
//  	for (int i = arr[0]; i >= 1; i--)
//  	{
//  		cout << arr[i];
//  	}
//  }
//  int main()
//  {
//  	input(a);
//  	input(b);
//  	sub(a, b, c);
//  	output(c);
//  	return 0;
//  }

// 2��n�η�_1
//  int n, s, len = 1, a[10005], x;
//  int main()
//  {
//  	cin >> n;
//  	a[1] = 1;
//  	for (int i = 1; i <= n; i++)
//  	{
//  		for (int j = 1; j <= len; j++)
//  		{
//  			a[j] *= 2;
//  		}
//  		for (int j = 1; j <= len; j++)
//  		{
//  			s = 0;
//  			if (a[j] > 9)
//  			{
//  				a[j + 1] += a[j] / 10;
//  				a[j] %= 10;
//  				s = max(s, j + 1);
//  			}
//  		}
//  		len = max(len, s);
//  	}
//  	for (int i = len; i >= 1; i--)
//  	{
//  		cout << a[i];
//  	}
//  	return 0;
//  }

// 2��n�η�_2
//  int n, len = 1, a[10005], x;
//  int main()
//  {
//  	cin >> n;
//  	a[1] = 1;
//  	for (int i = 1; i <= n; i++)
//  	{
//  		for (int j = 1; j <= len; j++)
//  		{
//  			a[j] = a[j] * 2 + x;
//  			x = a[j] / 10;
//  			a[j] %= 10;
//  			if (x != 0 && j == len)
//  			{
//  				len++;
//  			}
//  		}
//  	}
//  	for (int i = len; i >= 1; i--)
//  	{
//  		cout << a[i];
//  	}
//  	return 0;
//  }

// �߾��ȳ˷�
//  int const maxn = 205;
//  int a[maxn], b[maxn], c[maxn], lena, lenb, lenc;
//  void input(int arr[])
//  {
//  	string s;
//  	cin >> s;
//  	arr[0] = s.size();
//  	for (int i = arr[0], j = 0; i > 0; i--, ++j)
//  	{
//  		arr[i] = s[j] - '0';
//  	}
//  }
//  void multiplication(int a[], int b[], int c[])
//  {
//  	c[0] = a[0] + b[0];
//  	for (int i = 1; i <= b[0]; i++)
//  	{
//  		for (int j = 1; j <= a[0]; j++)
//  		{
//  			c[i + j - 1] += a[j] * b[i];
//  		}
//  	}
//  	for (int i = 1; i < c[0]; ++i)
//  	{
//  		if (c[i] > 9)
//  		{
//  			c[i + 1] += c[i] / 10;
//  			c[i] %= 10;
//  		}
//  	}
//  	int i = c[0];
//  	while (c[i] == 0 && c[0] > 0)
//  	{
//  		c[0]--;
//  		i--;
//  	}
//  }
//  void output(int arr[])
//  {
//  	for (int i = c[0]; i >= 1; i--)
//  	{
//  		cout << arr[i];
//  	}
//  }
//  int main()
//  {
//  	input(a);
//  	input(b);
//  	multiplication(a, b, c);
//  	output(c);
//  	return 0;
//  }

// �߾��ȳ��Ե;���_���㲿��
//  int const maxn = 205;
//  int a[maxn], b[maxn], c[maxn], ys = 0;
//  void div(int bcs, int cs, int shang[])
//  {
//  	shang[0] = bcs[0];
//  	for (int i = bcs[0]; i >= 1; i++)
//  	{
//  		ys = ys * 10 + bcs[i];
//  		shang[i] = ys / cs;
//  		ys %= cs;
//  	}
//  	for (int i = shang[0]; i > 1 && shang[i] == 0; i--)
//  	{
//  		shang[0]--;
//  	}
//  }

// ��߷�����ѧ������
//  struct stu
//  {
//  	int score;
//  	string name;
//  } stu[101];
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> stu[i].score;
//  		cin >> stu[i].name;
//  	}
//  	int max = -1, maxp;
//  	for (int i = 0; i < n; i++)
//  	{
//  		if (stu[i].score > max)
//  		{
//  			maxp = i;
//  			max = stu[i].score;
//  		}
//  	}
//  	cout << stu[maxp].name;
//  	return 0;
//  }

// �������˳�ɸ
//  struct jialiu
//  {
//  	string name;
//  	float temp;
//  	short cough;
//  } jialiu[200];
//  int main()
//  {
//  	int n, k;
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> jialiu[i].name >> jialiu[i].temp >> jialiu[i].cough;
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		if (jialiu[i].temp >= 37.5 && jialiu[i].cough == 1)
//  		{
//  			k++;
//  			cout << jialiu[i].name << endl;
//  		}
//  	}
//  	cout << k;
//  	return 0;
//  }

// ˭���˵�k��
//  struct score
//  {
//  	int number;
//  	float score;
//  } score[101];
//  int main()
//  {
//  	int n, k;
//  	cin >> n >> k;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> score[i].number >> score[i].score;
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		for (int j = i; j < n; j++)
//  		{
//  			if (score[i].score < score[j].score)
//  			{
//  				swap(score[i], score[j]);
//  			}
//  		}
//  	}
//  	cout << score[k - 1].number << " " << score[k - 1].score;
//  	return 0;
//  }

// �ɼ�����
//  struct score
//  {
//  	string name;
//  	float score;
//  } score[101];
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> score[i].name >> score[i].score;
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		for (int j = i; j < n; j++)
//  		{
//  			if (score[i].score < score[j].score)
//  			{
//  				swap(score[i], score[j]);
//  			}
//  		}
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		cout << score[i].name << " " << score[i].score << endl;
//  	}
//  	return 0;
//  }

// ��������
//  struct patient
//  {
//  	string id;
//  	int age;
//  } patient[100];
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (int i = 0; i < n; i++)
//  	{
//  		cin >> patient[i].id >> patient[i].age;
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		for (int j = 0; j < n - i; j++)
//  		{
//  			if (patient[j].age < patient[j + 1].age && patient[j].age >= 60)
//  			{
//  				swap(patient[j], patient[j + 1]);
//  			}
//  		}
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		if (patient[i].age >= 60)
//  		{
//  			cout << patient[i].id << endl;
//  		}
//  	}
//  	for (int i = 0; i < n; i++)
//  	{
//  		if (patient[i].age < 60)
//  		{
//  			cout << patient[i].id << endl;
//  		}
//  	}
//  	return 0;
//  }

// 1��n���������
//  int sushu(int x)
//  {
//  	int k;
//  	for (int i = 2; i <= sqrt(x); i++)
//  	{
//  		if (x % i == 0)
//  		{
//  			k = 0;
//  			break;
//  		}
//  		else
//  		{
//  			k++;
//  		}
//  	}
//  	if (k == 0)
//  	{
//  		return 0;
//  	}
//  	else
//  	{
//  		return 1;
//  	}
//  }
//  int main()
//  {
//  	int n, maxzhi, maxhe;
//  	cin >> n;
//  	for (int i = n; i >= 2; i--)
//  	{
//  		if (sushu(i) == 1)
//  		{
//  			maxzhi = i;
//  			break;
//  		}
//  	}
//  	cout << maxzhi << endl;
//  	return 0;
//  }

// �ַ����뷽ʽ
//  int numDecodings(string s)
//  {
//  	//���0�����ݣ�����0��
//  	if (s[0] == '0')
//  		return 0;
//  	int n = s.length();
//  	vector<int> dp(n + 1);
//  	dp[0] = 1, dp[1] = 1;
//  	for (int i = 1; i < n; i++)
//  	{
//  		if (s[i] == '0') //s[i] == '0'
//  		{
//  			//��� s[i-1]s[i] <= 26, �� dp[i] = dp[i-2], ������Ϊ s[i] �޷�����
//  			if (s[i - 1] == '1' || s[i - 1] == '2')
//  			{
//  				dp[i + 1] = dp[i - 1];
//  			}
//  			//���ڵ����� ��0��,���ߴ��ڵ���30����û�н��
//  			else
//  			{
//  				return 0;
//  			}
//  		}
//  		else //s[i] != '0'
//  		{
//  			//��� s[i-1]s[i] <= 26, �� dp[i] = dp[i-1] + dp[i-2]
//  			if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'))
//  			{
//  				dp[i + 1] = dp[i] + dp[i - 1];
//  			}
//  			//��� s[i-1]s[i] > 26, �� dp[i] = dp[i-1], ������Ϊ s[i-1]s[i] ��ɵ���λ���޷�����
//  			else
//  			{
//  				dp[i + 1] = dp[i];
//  			}
//  		}
//  	}
//  	return dp[n];
//  }
//  int main()
//  {
//  	string s;
//  	cin >> s;
//  	cout << numDecodings(s);
//  	return 0;
//  }

// Լɪ������
//  struct Node
//  {
//  	Node *last;
//  	int data;
//  	Node *next;
//  } * head, *tail, *p;
//  int main()
//  {
//  #if 1
//  	cout.tie(0);
//  #endif
//  	freopen("input.txt", "r", stdin);
//  	int i = 0, n, m;
//  	while (cin >> n >> m, n || m)
//  	{
//  		head = new Node;
//  		head->data = 1;
//  		head->next = head->last = NULL;
//  		tail = head;
//  		for (int i = 2; i <= n; i++)
//  		{
//  			p = new Node;
//  			p->data = i;
//  			tail->next = p;
//  			p->last = tail;
//  			p->next = NULL;
//  			tail = p;
//  		}
//  		head->last = tail;
//  		tail->next = head;
//  		p = head;
//  		for (int i = 1; i < n; i++)
//  		{
//  			for (int j = 1; j < m; j++)
//  			{
//  				p = p->next;
//  			}
//  			p->next->last = p->last;
//  			p->last->next = p->next;
//  			p = p->next;
//  		}
//  		cout << p->data << endl;
//  	}
//  	return 0;
//  }

//----------------------------��������OJ----------------------------

// �ַ���

// 1134
//  string a;
//  bool mojing(string a, int r)
//  {
//  	bool f = true;
//  	if ((r + 1) % 2 == 0)
//  	{
//  		for (int j = 0; j <= r / 2; j++)
//  		{
//  			if (a[j] != a[r - j])
//  			{
//  				f = false;
//  			}
//  		}
//  	}
//  	else
//  	{
//  		f = false;
//  	}
//  	return f;
//  }
//  int main()
//  {
//  	getline(cin, a);
//  	int r = a.size();
//  	while (mojing(a, r - 1) == true)
//  	{
//  		r /= 2;
//  	}
//  	cout << r;
//  	return 0;
//  }

// 1408
//  bool ok(string a)
//  {
//  	bool b = 1;
//  	if (a == "int" || a == "double" || a == "cin" || a == "cout")
//  		b = 0;
//  	else if (isdigit(a[0]))
//  		b = 0;
//  	else
//  	{
//  		int len = a.size();
//  		for (int u = 0; u < len; u++)
//  		{
//  			if ((!isdigit(a[u]) && !isalpha(a[u]) && a[u] != '_') || a[u] == ' ')
//  			{
//  				b = 0;
//  				break;
//  			}
//  		}
//  	}
//  	return b;
//  }
//  int main()
//  {
//  	string t;
//  	getline(cin, t);
//  	if (ok(t) == true)
//  		cout << "yes";
//  	else
//  		cout << "no";
//  	return 0;
//  }

// 1458
//  bool cmp(int a, int b)
//  {
//  	if (a > b)
//  		return true;
//  	else
//  		return false;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	string t, s;
//  	for (int x = 0; x < n; x++)
//  	{
//  		cin >> t;
//  		s += t;
//  	}
//  	sort(s.begin(), s.end(), cmp);
//  	cout << s;
//  	return 0;
//  }

// 1128
//  bool ispr(int a)
//  {
//  	for (int o = 2; o <= sqrt(a); o++)
//  	{
//  		if (a % o == 0)
//  			return false;
//  	}
//  	return true;
//  }
//  int main()
//  {
//  	string a;
//  	cin >> a;
//  	bool b = 0;
//  	int t1, t2, m = 999999, ten = a.size();
//  	for (int y = 1; y < ten; y++)
//  	{
//  		t1 = stoi(a.substr(0, y));
//  		t2 = stoi(a.substr(y, ten - y));
//  		if (ispr(t1 + t2))
//  		{
//  			m = min(m, t1 + t2);
//  			b = 1;
//  		}
//  	}
//  	if (b == 1)
//  		cout << m;
//  	else
//  		cout << -1;
//  	return 0;
//  }

// 1127
//  bool cmp(string x, string y)
//  {
//  	if (x + y > y + x)
//  		return true;
//  	else
//  		return false;
//  }
//  int main()
//  {
//  	int n;
//  	string a[101];
//  	cin >> n;
//  	for (int y = 0; y < n; y++)
//  	{
//  		cin >> a[y];
//  	}
//  	sort(a, a + n, cmp);
//  	for (int y = 0; y < n; y++)
//  	{
//  		cout << a[y];
//  	}
//  	return 0;
//  }

// ��1336
//  int gcd(int x, int y)
//  {
//  	int t;
//  	while (x % y != 0)
//  	{
//  		t = x % y;
//  		x = y;
//  		y = t;
//  	}
//  	return y;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	char t, a;
//  	int fz1, fz2, fm1, fm2, fzs, fms, te;
//  	cin >> fz1 >> t >> fm1 >> a >> fz2 >> t >> fm2;
//  	// int p = s.find("+");
//  	// if (p == -1)
//  	// 	p = s.find("-");
//  	// f1 = s.substr(0, p);
//  	// f2 = s.substr(p + 1);
//  	// fz1 = stoi(f1.substr(0, f1.find("/")));
//  	// fz2 = stoi(f1.substr(f1.find("/") + 1));
//  	// fm1 = stoi(f2.substr(0, f1.find("/")));
//  	// fm2 = stoi(f2.substr(f2.find("/") + 1));
//  	fms = fm1 * fm2;
//  	if (a == '+')
//  	{
//  		fzs = fz1 * fm2 + fz2 * fm1;
//  	}
//  	else
//  	{
//  		fzs = fz1 * fm2 - fz2 * fm1;
//  	}
//  	if (fzs == 0)
//  	{
//  		cout << "0";
//  		return 0;
//  	}
//  	te = abs(gcd(fms, fzs));
//  	fms = fms / te;
//  	fzs = fzs / te;
//  	if (fms == 1)
//  	{
//  		cout << fzs;
//  	}
//  	else
//  	{
//  		cout << fzs << "/" << fms;
//  	}
//  	return 0;
//  }

// ��1339
//  int gcd(int a, int b)
//  {
//  	int t;
//  	while (b != 0)
//  	{
//  		t = a % b;
//  		a = b;
//  		b = t;
//  	}
//  	return a;
//  }
//  int main()
//  {
//  	// freopen("test.txt", "r", stdin);
//  	int a, b, fz, fm;
//  	char t1, fh; //��ʱ������
//  	cin >> a >> t1 >> b;
//  	fz = a;
//  	fm = b;
//  	while (cin >> fh)
//  	{
//  		cin >> a >> t1 >> b;
//  		fz = fz * b + fm * a;
//  		fm = fm * b;
//  	}
//  	if (fz == fm)
//  	{
//  		cout << 1;
//  	}
//  	else
//  	{
//  		int g = gcd(fz, fm);
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

// ����ת��

// 1386
//  bool ishw(string a)
//  {
//  	int l = a.size();
//  	for (int f = 0; f <= l / 2; f++)
//  	{
//  		if (a[f] != a[l - f - 1])
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  string _10to2(int r)
//  {
//  	string a;
//  	if (r == 0)
//  	{
//  		return "0";
//  	}
//  	while (r != 0)
//  	{
//  		a = to_string(r % 2) + a;
//  		r /= 2;
//  	}
//  	return a;
//  }
//  string _10to16(int r)
//  {
//  	string a;
//  	int x;
//  	char t;
//  	if (r == 0)
//  	{
//  		return "0";
//  	}
//  	while (r != 0)
//  	{
//  		x = r % 16;
//  		if (x >= 0 && x <= 9)
//  		{
//  			t = x + '0';
//  		}
//  		else
//  		{
//  			t = x - 10 + 'A';
//  		}
//  		a = t + a;
//  		r /= 16;
//  	}
//  	return a;
//  }
//  int main()
//  {
//  	int r = 0, n;
//  	string y1, y2;
//  	cin >> n;
//  	for (int g = 0; g < n; g++)
//  	{
//  		cin >> r;
//  		y1 = _10to2(r);
//  		y2 = _10to16(r);
//  		if (ishw(y1) || ishw(y2))
//  		{
//  			cout << r << endl;
//  		}
//  	}
//  	return 0;
//  }

// 1405
//  int _2to10(string a)
//  {
//  	int x = 1, ans = 0;
//  	for (int u = a.size() - 1; u >= 0; u--)
//  	{
//  		ans += (a[u] - '0') * x;
//  		x *= 2;
//  	}
//  	return ans;
//  }
//  bool ispr(int g)
//  {
//  	for (int c = 2; c <= sqrt(g); c++)
//  	{
//  		if (g % c == 0)
//  			return false;
//  	}
//  	return true;
//  }
//  int main()
//  {
//  	int tot = 0, n;
//  	string y1;
//  	cin >> n;
//  	for (int g = 0; g < n; g++)
//  	{
//  		cin >> y1;
//  		if (ispr(_2to10(y1)))
//  		{
//  			tot++;
//  		}
//  	}
//  	cout << tot << endl;
//  	return 0;
//  }

// 1547
//  bool ishw(string a)
//  {
//  	int l = a.size();
//  	for (int f = 0; f <= l / 2; f++)
//  	{
//  		if (a[f] != a[l - f - 1])
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  string _10tox(int r, int x)
//  {
//  	string a;
//  	char t;
//  	int y;
//  	while (r != 0)
//  	{
//  		y = r % x;
//  		if (y >= 0 && y <= 9)
//  		{
//  			t = y + '0';
//  		}
//  		else
//  		{
//  			t = y - 10 + 'A';
//  		}
//  		a = t + a;
//  		r /= x;
//  	}
//  	return a;
//  }
//  int main()
//  {
//  	int tot = 0, n, m;
//  	long int temp;
//  	bool b;
//  	string y1;
//  	cin >> n >> m;
//  	for (int g = 1; g <= n; g++)
//  	{
//  		temp = pow(g, 2);
//  		b = ishw(_10tox(temp, m));
//  		if (b == true)
//  			tot++;
//  	}
//  	cout << tot << endl;
//  	return 0;
//  }

// 1415
//  string _10tox(int r, int x)
//  {
//  	string a;
//  	char t;
//  	int y;
//  	if (r == 0)
//  	{
//  		return "0";
//  	}
//  	while (r != 0)
//  	{
//  		y = r % x;
//  		if (y >= 0 && y <= 9)
//  		{
//  			t = y + '0';
//  		}
//  		else
//  		{
//  			t = y - 10 + 'A';
//  		}
//  		a = t + a;
//  		r /= x;
//  	}
//  	return a;
//  }
//  int main()
//  {
//  	long int n, d;
//  	string y1;
//  	cin >> n >> d;
//  	cout << _10tox(n, d) << endl;
//  	return 0;
//  }

// �߾�������

// 1281
//  int a[100], b[100], ans[100];
//  int tod(char c) { return int(c - '0'); }
//  char toc(int a) { return char(a + '0'); }
//  string add(string x, string y)
//  {
//  	memset(a, 0, sizeof(a));
//  	memset(b, 0, sizeof(b));
//  	memset(ans, 0, sizeof(ans));
//  	int alen = x.size(), blen = y.size(), anslen = 0;
//  	register int i;
//  	string sans;
//  	for (i = 1; i <= alen; ++i)
//  	{
//  		a[i] = tod(x[alen - i]);
//  	}
//  	for (i = 1; i <= blen; ++i)
//  	{
//  		b[i] = tod(y[blen - i]);
//  	}
//  	anslen = max(alen, blen);
//  	for (i = 1; i <= anslen; ++i)
//  	{
//  		ans[i] = a[i] + b[i] + ans[i];
//  		if (ans[i] >= 10)
//  		{
//  			ans[i + 1] = ans[i] / 10;
//  			ans[i] %= 10;
//  		}
//  	}
//  	if (ans[anslen + 1] != 0)
//  	{
//  		++anslen;
//  	}
//  	for (i = anslen; i >= 1; --i)
//  	{
//  		sans += toc(ans[i]);
//  	}
//  	return sans;
//  }
//  string mult2(string x)
//  {
//  	memset(a, 0, sizeof(a));
//  	memset(ans, 0, sizeof(ans));
//  	string sans;
//  	int alen = x.size(), j;
//  	for (j = 1; j <= alen; ++j)
//  	{
//  		ans[j] = tod(x[alen - j]) * 2 + ans[j];
//  		//��Ϊ�漰����λ������Ҫ������λԭ���е�����
//  		if (ans[j] >= 10)
//  		{
//  			ans[j + 1] = ans[j] / 10;
//  			ans[j] %= 10;
//  		}
//  	}
//  	if (ans[alen + 1] != 0)
//  	{
//  		++alen;
//  	}
//  	for (j = alen; j >= 1; --j)
//  	{
//  		sans += toc(ans[j]);
//  	}
//  	return sans;
//  }
//  int main()
//  {
//  	string ans = "0", t1;
//  	int x;
//  	cin >> x;
//  	register int i, j;
//  	for (i = 1; i <= x; ++i)
//  	{
//  		t1 = "1";
//  		for (j = 1; j <= i; ++j)
//  		{
//  			t1 = mult2(t1);
//  			// cout << t1 << ' ';
//  		}
//  		ans = add(ans, t1);
//  		// cout << ans << endl;
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1285
//  int a[200], b[200], ans[200];
//  int ctod(char c)
//  {
//  	return int(c - '0');
//  }
//  char dtoc(int x)
//  {
//  	return char(x + '0');
//  }
//  string mult(string x, string y)
//  {
//  	memset(a, 0, sizeof(a));
//  	memset(b, 0, sizeof(b));
//  	memset(ans, 0, sizeof(ans));
//  	register int k, i, j;
//  	string sans;
//  	if (x.length() < y.length())
//  	{
//  		swap(x, y);
//  	}
//  	int alen = x.length(), blen = y.length(), anslen;
//  	for (j = 1; j <= alen; ++j)
//  	{
//  		a[j] = ctod(x[alen - j]);
//  	}
//  	for (j = 1; j <= blen; ++j)
//  	{
//  		b[j] = ctod(y[blen - j]);
//  	}
//  	anslen = alen + blen;
//  	for (i = 1; i <= blen; ++i)
//  	{
//  		for (j = 1; j <= alen; ++j)
//  		{
//  			ans[i + j - 1] += a[j] * b[i];
//  		}
//  	}
//  	for (j = 1; j <= anslen; ++j)
//  	{
//  		if (ans[j] >= 10)
//  		{
//  			ans[j + 1] += ans[j] / 10;
//  			ans[j] %= 10;
//  		}
//  	}
//  	while (ans[anslen] == 0)
//  	{
//  		--anslen;
//  	}
//  	for (j = anslen; j >= 1; --j)
//  	{
//  		sans += dtoc(ans[j]);
//  	} // cout << ans[j] << ' ';
//  	return sans;
//  }
//  int main()
//  {
//  	int u, q;
//  	cin >> u;
//  	string sans = to_string(u), t;
//  	for (q = u - 1; q >= 2; --q)
//  	{
//  		t = to_string(q);
//  		sans = mult(sans, t);
//  	}
//  	cout << sans;
//  	return 0;
//  }

// 1296
//  int a[300], b[300], ans[300];
//  int ctod(char c);
//  char dtoc(int d);
//  string add(string x, string y);
//  string mult(string x, string y);
//  int main()
//  {
//  	int n;
//  	string ans = "0", t1;
//  	cin >> n;
//  	register int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		t1 = "1";
//  		for (j = 2; j <= i; ++j)
//  		{
//  			t1 = mult(t1, to_string(j));
//  		}
//  		ans = add(ans, t1);
//  	}
//  	cout << ans;
//  	return 0;
//  }
//  int ctod(char c)
//  {
//  	return (c - '0');
//  }
//  char dtoc(int d)
//  {
//  	return (d + '0');
//  }
//  string add(string x, string y)
//  {
//  	memset(a, 0, sizeof(a));
//  	memset(b, 0, sizeof(b));
//  	memset(ans, 0, sizeof(ans));
//  	int alen = x.length(), blen = y.length(),
//  		anslen = max(alen, blen);
//  	string sans;
//  	register int j;
//  	for (j = 1; j <= alen; ++j)
//  	{
//  		a[j] = ctod(x[alen - j]);
//  	}
//  	for (j = 1; j <= blen; ++j)
//  	{
//  		b[j] = ctod(y[blen - j]);
//  	}
//  	for (j = 1; j <= anslen; ++j)
//  	{
//  		ans[j] += a[j] + b[j];
//  		if (ans[j] >= 10)
//  		{
//  			ans[j + 1] = ans[j] / 10;
//  			ans[j] %= 10;
//  		}
//  	}
//  	if (ans[anslen + 1] != 0)
//  	{
//  		++anslen;
//  	}
//  	for (j = anslen; j >= 1; --j)
//  	{
//  		sans += dtoc(ans[j]);
//  	}
//  	return sans;
//  }
//  string mult(string x, string y)
//  {
//  	memset(a, 0, sizeof(a));
//  	memset(b, 0, sizeof(b));
//  	memset(ans, 0, sizeof(ans));
//  	string sans;
//  	if (x.length() < y.length())
//  	{
//  		swap(x, y);
//  	}
//  	int alen = x.length(), blen = y.length(),
//  		anslen = alen + blen;
//  	register int i, j;
//  	for (j = 1; j <= alen; ++j)
//  	{
//  		a[j] = ctod(x[alen - j]);
//  	}
//  	for (j = 1; j <= blen; ++j)
//  	{
//  		b[j] = ctod(y[blen - j]);
//  	}
//  	for (i = 1; i <= alen; ++i)
//  	{
//  		for (j = 1; j <= blen; ++j)
//  		{
//  			ans[i + j - 1] += a[i] * b[j];
//  		}
//  	}
//  	for (i = 1; i <= anslen; ++i)
//  	{
//  		if (ans[i] >= 10)
//  		{
//  			ans[i + 1] += ans[i] / 10;
//  			ans[i] %= 10;
//  		}
//  	}
//  	while (ans[anslen] == 0)
//  	{
//  		--anslen;
//  	}
//  	for (i = anslen; i >= 1; --i)
//  	{
//  		sans += dtoc(ans[i]);
//  	}
//  	return sans;
//  }

// 1409
//  int a[1000];
//  int ctod(char c)
//  {
//  	return (c - '0');
//  }
//  char dtoc(int c)
//  {
//  	return (c + '0');
//  }
//  string mult(string x)
//  {
//  	memset(a, 0, sizeof(a));
//  	string sans;
//  	register int j;
//  	int alen = x.size();
//  	for (j = 1; j <= alen; ++j)
//  	{
//  		a[j] += 2 * ctod(x[alen - j]);
//  		if (a[j] >= 10)
//  		{
//  			a[j + 1] = a[j] / 10;
//  			a[j] %= 10;
//  		}
//  	}
//  	if (a[alen + 1] != 0)
//  	{
//  		++alen;
//  	}
//  	for (j = alen; j >= 1; --j)
//  	{
//  		sans += dtoc(a[j]);
//  	}
//  	return sans;
//  }
//  int main()
//  {
//  	string sans = "1", t;
//  	int a;
//  	cin >> a;
//  	register int i, j;
//  	for (i = 2; i <= a; ++i)
//  	{
//  		sans = mult(sans);
//  	}
//  	cout << sans;
//  	return 0;
//  }

// 1368
//  int a[1000], b[1000], aans[1000];
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
//  	string ans[3][60];
//  	// init
//  	for (k = 0; k <= 55; ++k)
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
//  		for (j = t + 2; j <= 51; ++j)
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
//  		for (j = t + 1; j <= 51; ++j)
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

// ����

// ��1369_�����߾���
//  string plus1(string s1, string s2)
//  {
//  	string r = "";
//  	int a[1000] = {0}, b[1000] = {0}, ans[1000] = {0};
//  	int i, l1 = s1.size(), l2 = s2.size(), q;
//  	int len = max(l1, l2);
//  	for (i = 0; i < l1; i++)
//  	{
//  		a[i] = s1[l1 - 1 - i] - '0';
//  	}
//  	for (i = 0; i < l2; i++)
//  	{
//  		b[i] = s2[l2 - 1 - i] - '0';
//  	}
//  	for (i = 0; i < len; i++)
//  	{
//  		ans[i] += a[i] + b[i];
//  		if (ans[i] >= 10)
//  		{
//  			ans[i + 1] = ans[i] / 10 + ans[i + 1];
//  			ans[i] %= 10;
//  		}
//  	}
//  	if (ans[len] != 0)
//  		len++;
//  	for (q = 0; q < len; q++)
//  	{
//  		r = to_string(ans[q]) + r;
//  	}
//  	return r;
//  }
//  string cheng(string s1)
//  {
//  	string r;
//  	int a[1000] = {0}, ans[1000] = {0};
//  	int i, l1 = s1.size(), q;
//  	int len = l1;
//  	for (i = 0; i < l1; i++)
//  	{
//  		a[i] = s1[l1 - 1 - i] - '0';
//  	}
//  	for (i = 0; i < len; i++)
//  	{
//  		ans[i] = a[i] * 2;
//  		// if (ans[i] >= 10)
//  		// {
//  		// 	ans[i + 1] = ans[i] / 10 + ans[i + 1];
//  		// 	ans[i] %= 10;
//  		// }
//  	}
//  	for (q = 0; q < len; q++)
//  	{
//  		if (ans[q] >= 10)
//  		{
//  			ans[q + 1] += ans[q] / 10;
//  			ans[q] %= 10;
//  		}
//  	}
//  	if (ans[len] != 0)
//  		len++;
//  	for (q = 0; q < len; q++)
//  	{
//  		r = to_string(ans[q]) + r;
//  	}
//  	return r;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	string x, y, z;
//  	int q, n;
//  	cin >> n;
//  	x = "1";
//  	y = "2";
//  	if (n == 1 || n == 2)
//  	{
//  		cout << n;
//  		return 0;
//  	}
//  	for (q = 3; q <= n; q++)
//  	{
//  		z = plus1(cheng(y), x);
//  		x = y;
//  		y = z;
//  	}
//  	cout << z;
//  	return 0;
//  }

// ̰��

// 1326
//  bool cmp(int a, int b)
//  {
//  	if (a > b)
//  		return true;
//  	else
//  		return false;
//  }
//  int main()
//  {
//  	int m, n, a[101], i, s = 0;
//  	cin >> m >> n;
//  	for (i = 1; i <= n; i++)
//  	{
//  		cin >> a[i];
//  	}
//  	sort(a + 1, a + 1 + n, cmp);
//  	for (i = 1; i <= n; i++)
//  	{
//  		s += a[i];
//  		if (s >= m)
//  		{
//  			cout << i;
//  			return 0;
//  		}
//  	}
//  	cout << "NO";
//  	return 0;
//  }

// 1372
//  struct tim
//  {
//  	short beg, end;
//  	bool b;
//  };
//  bool cmp(tim a, tim b)
//  {
//  	if (a.end < b.end)
//  		return true;
//  	else
//  		return false;
//  }
//  int main()
//  {
//  	tim a[1001];
//  	int r, n, i, cnt = 1, p, j, end;
//  	cin >> n;
//  	for (i = 1; i <= n; i++)
//  	{
//  		cin >> a[i].beg >> a[i].end;
//  	}
//  	sort(a + 1, a + 1 + n, cmp);
//  	end = a[1].end;
//  	for (i = 1; i <= n; i++)
//  	{
//  		if (a[i].beg >= end)
//  		{
//  			end = a[i].end;
//  			cnt++;
//  		}
//  	}
//  	cout << cnt;
//  	return 0;
//  }

// �ݹ�

// 1002_1
//  int n, s;
//  int fun(int i)
//  {
//  	if (i <= n)
//  	{
//  		s = s + i;
//  		fun(i + 1);
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	fun(1);
//  	cout << s;
//  	return 0;
//  }

// 1002_2
//  int n;
//  int fun(int i)
//  {
//  	if (i <= n)
//  	{
//  		return i + fun(i + 1);
//  	}
//  	else
//  	{
//  		return 0;
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	cout << fun(1);
//  	return 0;
//  }

// 1002_3
//  int n;
//  int fun(int i, int s)
//  {
//  	if (i <= n)
//  	{
//  		fun(i + 1, s + i);
//  	}
//  	else
//  	{
//  		return s;
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	cout << fun(1, 0);
//  	return 0;
//  }

// 1108_1
//  string fun(int n)
//  {
//  	char c;
//  	if (n != 0)
//  	{
//  		c = n % 2 + '0';
//  		return fun(n / 2) + c;
//  	}
//  	else
//  	{
//  		return "";
//  	}
//  }
//  int main()
//  {
//  	int z;
//  	cin >> z;
//  	cout << fun(z);
//  	return 0;
//  }

// 1108_2
//  string s;
//  void fun(int n)
//  {
//  	char c;
//  	if (n != 0)
//  	{
//  		c = n % 2 + '0';
//  		s = c + s;
//  		fun(n / 2);
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	fun(n);
//  	cout << s;
//  	return 0;
//  }

// 1108_3
//  string fun(int n, string s)
//  {
//  	char c;
//  	if (n != 0)
//  	{
//  		c = n % 2 + '0';
//  		return fun(n / 2, c + s);
//  	}
//  	else
//  	{
//  		return s;
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	cout << fun(n, "");
//  	return 0;
//  }

// 1241
//  int a;
//  int fun(int i)
//  {
//  	if (a == 1)
//  	{
//  		return i;
//  	}
//  	if (a % 2 == 0)
//  	{
//  		a /= 2;
//  		fun(i + 1);
//  	}
//  	else
//  	{
//  		a = a * 3 + 1;
//  		fun(i + 1);
//  	}
//  }
//  int main()
//  {
//  	cin >> a;
//  	cout << fun(0);
//  	return 0;
//  }

// 1088
//  int fun(long long x, long long y)
//  {
//  	if (x % y != 0)
//  	{
//  		return fun(y, x % y);
//  	}
//  	else
//  	{
//  		return y;
//  	}
//  }
//  int main()
//  {
//  	long long x, y;
//  	cin >> x >> y;
//  	if (x < y)
//  	{
//  		swap(x, y);
//  	}
//  	cout << fun(x, y);
//  	return 0;
//  }

// 1083
//  int tot;
//  bool huiwen(string s)
//  {
//  	int i;
//  	for (i = 0; i < s.size() / 2; i++)
//  	{
//  		if (s[i] != s[s.size() - i - 1])
//  			return false;
//  	}
//  	return true;
//  }
//  string diandao(string s)
//  {
//  	string a = s;
//  	for (int u = 0; u < s.size(); u++)
//  	{
//  		a[u] = s[s.size() - 1 - u];
//  	}
//  	return a;
//  }
//  int fun(int x)
//  {
//  	string t = to_string(x), t2;
//  	if (huiwen(t) == true)
//  	{
//  		return tot;
//  	}
//  	else
//  	{
//  		tot++;
//  		int tem = stoi(diandao(to_string(x)));
//  		return fun(tem + x);
//  	}
//  }
//  int main()
//  {
//  	int m;
//  	cin >> m;
//  	cout << fun(m);
//  	return 0;
//  }

// 1307
//  int tot = 1;
//  void fun(int x)
//  {
//  	for (int i = 1; i <= x / 2; i++)
//  	{
//  		fun(i);
//  		tot++;
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	fun(n);
//  	cout << tot;
//  	return 0;
//  }

// 1244
//  inline int _pow(int zhishu)
//  {
//  	if (zhishu == 0)
//  	{
//  		return 1;
//  	}
//  	int res = 1, i;
//  	for (i = 1; i <= zhishu; i++)
//  	{
//  		res *= 2;
//  	}
//  	return res;
//  }
//  int fun(int tot, int u)
//  {
//  	if (u % _pow(tot) == 0)
//  	{
//  		return fun(tot + 1, u);
//  	}
//  	else
//  	{
//  		return tot - 1;
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	cout << fun(0, n);
//  	return 0;
//  }

// 1223
//  int fun(int i)
//  {
//  	if (i == 1)
//  	{
//  		return 1;
//  	}
//  	else
//  	{
//  		return 2 * fun(i - 1) + 1;
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	scanf("%d", &n);
//  	cout << fun(n);
//  	return 0;
//  }

// 1222
//  void move(int n, char p1, char p2, char p3)
//  {
//  	if (n >= 1)
//  	{
//  		move(n - 1, p1, p3, p2);
//  		cout << p1 << " To " << p3 << endl;
//  		move(n - 1, p2, p1, p3);
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	move(n, 'A', 'B', 'C');
//  	return 0;
//  }

// 1196
//  int a[11][11];
//  int n;
//  void fun(int i)
//  {
//  	if (i <= n)
//  	{
//  		int j;
//  		for (j = i; j <= n; j++)
//  		{
//  			a[i][j] = i;
//  			a[j][i] = i;
//  		}
//  		fun(i + 1);
//  	}
//  }
//  int main()
//  {
//  	scanf("%d", &n);
//  	fun(1);
//  	int i, j;
//  	for (i = 1; i <= n; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cout << setw(3) << a[i][j];
//  		}
//  		cout << endl;
//  	}
//  	return 0;
//  }

// 1208
//  int a[11][11], n;
//  void fun(int start, int len, int k)
//  {
//  	if (k <= n * n && len >= 1)
//  	{
//  		int i;
//  		for (i = start; i <= start + len - 1; i++)
//  		{
//  			a[start][i] = k;
//  			k++;
//  		}
//  		for (i = start + 1; i <= start + len - 1; i++)
//  		{
//  			a[i][start + len - 1] = k;
//  			k++;
//  		}
//  		for (i = start + len - 2; i >= start; i--)
//  		{
//  			a[start + len - 1][i] = k;
//  			k++;
//  		}
//  		for (i = start + len - 2; i >= start + 1; i--)
//  		{
//  			a[i][start] = k;
//  			k++;
//  		}
//  		fun(start + 1, len - 2, k);
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	fun(1, n, 1);
//  	int u, q;
//  	for (u = 1; u <= n; u++)
//  	{
//  		for (q = 1; q <= n; q++)
//  		{
//  			cout << setw(3) << a[u][q];
//  		}
//  		cout << endl;
//  	}
//  	return 0;
//  }

// 1193
//  int a[11][11], n;
//  void fun(int i)
//  {
//  	int k = i, j;
//  	bool b = 1;
//  	if (i <= n)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			a[i][j] = k;
//  			if (k < n && b == 1)
//  			{
//  				k++;
//  			}
//  			else
//  			{
//  				k--;
//  				b = 0;
//  			}
//  		}
//  		fun(i + 1);
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	fun(1);
//  	int v, q;
//  	for (v = 1; v <= n; v++)
//  	{
//  		for (q = 1; q <= n; q++)
//  		{
//  			cout << setw(3) << a[v][q];
//  		}
//  		cout << endl;
//  	}
//  	return 0;
//  }

// 1209
//  int a[22][22] = {0};
//  void fun(int start, int end, int k)
//  {
//  	if (k >= 0)
//  	{
//  		int i;
//  		for (i = start; i <= end; i++)
//  		{
//  			a[start][i] = k;
//  			a[end][i] = k;
//  			a[i][start] = k;
//  			a[i][end] = k;
//  		}
//  		fun(start + 1, end - 1, k - 1);
//  	}
//  }
//  int main()
//  {
//  	int n, m;
//  	cin >> n;
//  	m = n * 2 + 1;
//  	fun(1, m, n);
//  	int d, f;
//  	for (d = 1; d <= m; d++)
//  	{
//  		for (f = 1; f <= m; f++)
//  		{
//  			cout << setw(2) << a[d][f];
//  		}
//  		cout << endl;
//  	}
//  	return 0;
//  }

// 1654
//  int n, a[300];
//  void print()
//  {
//  	for (int q = 1; q <= n; q++)
//  	{
//  		cout << a[q];
//  	}
//  	cout << endl;
//  }
//  void fun(int k)
//  {
//  	for (int y = 1; y <= n; y++)
//  	{
//  		a[k] = y;
//  		if (k == n)
//  		{
//  			print();
//  		}
//  		else
//  		{
//  			fun(k + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	fun(1);
//  	return 0;
//  }

// �����������&����

// ��ͨ

// 1586
//  int a[21][21], m, n;
//  void fun(int x, int y, int k)
//  {
//  	a[x][y] = k;
//  	if (y + 1 <= n && a[x][y + 1] == 0)
//  	{
//  		fun(x, y + 1, k + 1);
//  	}
//  	if (x + 1 <= m && a[x + 1][y] == 0)
//  	{
//  		fun(x + 1, y, k + 1);
//  	}
//  	if (y - 1 >= 1 && a[x][y - 1] == 0)
//  	{
//  		fun(x, y - 1, k + 1);
//  	}
//  	if (x - 1 >= 1 && a[x - 1][y] == 0)
//  	{
//  		fun(x - 1, y, k + 1);
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	fun(1, 1, 1);
//  	int p, q;
//  	for (p = 1; p <= m; p++)
//  	{
//  		for (q = 1; q <= n; q++)
//  		{
//  			cout << setw(3) << a[p][q];
//  		}
//  		cout << endl;
//  	}
//  	return 0;
//  }

// 1430
//  int sa, sb, ea, eb, n;
//  bool b = false;
//  int a[101][101] = {0};
//  int xx[5] = {0, 0, 1, 0, -1};
//  int yy[5] = {0, 1, 0, -1, 0};
//  void dfs(int x, int y)
//  {
//  	a[x][y] = 1;
//  	int i, tx, ty;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && a[tx][ty] == 0)
//  		{
//  			if (tx == ea && ty == eb)
//  			{
//  				b = true;
//  			}
//  			else
//  			{
//  				dfs(tx, ty);
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int i, j;
//  	cin >> n;
//  	for (i = 1; i <= n; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	cin >> sa >> sb >> ea >> eb;
//  	if (a[sa][sb] == 1 || a[ea][eb] == 1)
//  	{
//  		cout << "NO";
//  		return 0;
//  	}
//  	dfs(1, 1);
//  	if (b == true)
//  	{
//  		cout << "YES";
//  	}
//  	else
//  	{
//  		cout << "NO";
//  	}
//  	return 0;
//  }

// 1430_plus
//  int sa, sb, ea, eb, n;
//  bool b = false;
//  int a[101][101] = {0};
//  int xx[5] = {0, 0, 1, 0, -1};
//  int yy[5] = {0, 1, 0, -1, 0};
//  void dfs(int x, int y)
//  {
//  	cout << x << " " << y << endl;
//  	a[x][y] = 1;
//  	int i, tx, ty;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && a[tx][ty] == 0)
//  		{
//  			if (tx == ea && ty == eb)
//  			{
//  				b = true;
//  				return; // ���ﲻһ������b==true֮��ֱ�ӽ���dfs�������ٻ���
//  			}
//  			else
//  			{
//  				dfs(tx, ty);
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int i, j;
//  	cin >> n;
//  	for (i = 1; i <= n; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	cin >> sa >> sb >> ea >> eb;
//  	if (a[sa][sb] == 1 || a[ea][eb] == 1)
//  	{
//  		cout << "NO";
//  		return 0;
//  	}
//  	dfs(1, 1);
//  	if (b == true)
//  	{
//  		cout << "YES";
//  	}
//  	else
//  	{
//  		cout << "NO";
//  	}
//  	return 0;
//  }

// 1434
//  int m, n, tot;
//  char c[101][101];
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void dfs(int x, int y)
//  {
//  	c[x][y] = '.';
//  	int tx, ty;
//  	int i;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (c[tx][ty] == 'W')
//  		{
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	int i, j;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> c[i][j];
//  		}
//  	}
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			if (c[i][j] == 'W')
//  			{
//  				tot++;
//  				dfs(i, j);
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// 1435
//  int m, n, tot;
//  char c[101][101];
//  int xx[9] = {0, -1, -1, -1, 0, 1, 1, 1, 0};
//  int yy[9] = {0, -1, 0, 1, 1, 1, 0, -1, -1};
//  void dfs(int x, int y)
//  {
//  	c[x][y] = '.';
//  	int tx, ty;
//  	int i;
//  	for (i = 1; i <= 8; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (c[tx][ty] == 'W')
//  		{
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	int i, j;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> c[i][j];
//  		}
//  	}
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			if (c[i][j] == 'W')
//  			{
//  				tot++;
//  				dfs(i, j);
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// 1383
//  int r, c;
//  char a[102][102];
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void dfs(int x, int y)
//  {
//  	if (a[x][y] == '#')
//  	{
//  		a[x][y] = '.';
//  		int tx, ty, i;
//  		for (i = 1; i <= 4; i++)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> r >> c;
//  	int u, q, tot = 0;
//  	for (u = 1; u <= r; u++)
//  	{
//  		for (q = 1; q <= c; q++)
//  		{
//  			cin >> a[u][q];
//  		}
//  	}
//  	for (u = 1; u <= r; u++)
//  	{
//  		for (q = 1; q <= c; q++)
//  		{
//  			if (a[u][q] == '#')
//  			{
//  				tot++;
//  				dfs(u, q);
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// 1431
//  int n;
//  char a[25][25];
//  int r[3][401];
//  int xx[5] = {0, 0, -1, 0, 1}; //����˳�����ϡ��ҡ���
//  int yy[5] = {0, -1, 0, 1, 0};
//  void print(int k)
//  {
//  	int i;
//  	for (i = 1; i < k; i++)
//  	{
//  		cout << '(' << r[1][i] << ',' << r[2][i] << ")->";
//  	}
//  	cout << '(' << r[1][k] << ',' << r[2][k] << ')';
//  }
//  void dfs(int x, int y, int k)
//  {
//  	r[1][k] = x;
//  	r[2][k] = y;
//  	a[x][y] = '1';
//  	if (x == n && y == n)
//  	{
//  		print(k);
//  		return;
//  	}
//  	else
//  	{
//  		int tx, ty, i;
//  		for (i = 1; i <= 4; i++)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (a[tx][ty] == '0')
//  			{
//  				dfs(tx, ty, k + 1);
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	int i, j, k;
//  	for (i = 1; i <= n; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	dfs(1, 1, 1);
//  	return 0;
//  }

// 1432
//  int r, c;
//  char a[45][45];
//  int d[45][45];
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void dfs(int x, int y, int dep)
//  {
//  	d[x][y] = dep;
//  	int tx, ty, i;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (a[tx][ty] == '.' && dep + 1 < d[tx][ty])
//  		{
//  			dfs(tx, ty, dep + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> r >> c;
//  	int i, j;
//  	for (i = 1; i <= r; i++)
//  	{
//  		for (j = 1; j <= c; j++)
//  		{
//  			cin >> a[i][j];
//  			d[i][j] = INT_MAX;
//  		}
//  	}
//  	dfs(1, 1, 1);
//  	cout << d[r][c];
//  	return 0;
//  }

// 1433
//  int m, n, sa, sb, ea, eb;
//  char a[101][101];
//  int d[101][101];
//  int xx[5] = {0, 0, -1, 0, 1}; //����˳�����ϡ��ҡ���
//  int yy[5] = {0, -1, 0, 1, 0};
//  void dfs(int x, int y, int k)
//  {
//  	d[x][y] = k;
//  	int tx, ty, i;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (a[tx][ty] != '#' && k + 1 < d[tx][ty])
//  		{
//  			dfs(tx, ty, k + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	int i, j, k;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  			d[i][j] = INT_MAX;
//  			if (a[i][j] == 'S')
//  			{
//  				sa = i;
//  				sb = j;
//  			}
//  			else if (a[i][j] == 'T')
//  			{
//  				ea = i;
//  				eb = j;
//  			}
//  		}
//  	}
//  	dfs(sa, sb, 0);
//  	cout << d[ea][eb];
//  	return 0;
//  }

// 1360
//  int m, n;
//  int r[3][20];
//  int tot;
//  void print(int k)
//  {
//  	tot++;
//  	cout << tot << ':';
//  	int i;
//  	for (i = 1; i < m + n - 1; i++)
//  	{
//  		cout << r[1][i] << ',' << r[2][i] << "->";
//  	}
//  	cout << r[1][m + n - 1] << ',' << r[2][m + n - 1] << endl;
//  }
//  void dfs(int x, int y, int k)
//  {
//  	r[1][k] = x;
//  	r[2][k] = y;
//  	if (x == m && y == n)
//  	{
//  		print(k);
//  	}
//  	else
//  	{
//  		if (x + 1 <= m && x + 1 >= 1 && y >= 1 && y <= n)
//  		{
//  			dfs(x + 1, y, k + 1);
//  		}
//  		if (x <= m && x >= 1 && y + 1 >= 1 && y + 1 <= n)
//  		{
//  			dfs(x, y + 1, k + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	dfs(1, 1, 1);
//  	return 0;
//  }

// 1362
//  int r[3][20];
//  int tot;
//  int xx[5] = {0, 2, 1, -1, -2};
//  int yy[5] = {0, 1, 2, 2, 1};
//  void print(int k)
//  {
//  	cout << tot << ":";
//  	for (int u = 1; u < k; u++)
//  	{
//  		cout << r[1][u] << "," << r[2][u] << "->";
//  	}
//  	cout << r[1][k] << "," << r[2][k] << endl;
//  }
//  void dfs(int x, int y, int step)
//  {
//  	r[1][step] = x;
//  	r[2][step] = y;
//  	if (x == 4 && y == 8)
//  	{
//  		tot++;
//  		print(step);
//  	}
//  	else
//  	{
//  		int tx, ty, i;
//  		for (i = 1; i <= 4; i++)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 0 && tx <= 4 && ty >= 0 && ty <= 8)
//  			{
//  				dfs(tx, ty, step + 1);
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	dfs(0, 0, 1);
//  	return 0;
//  }

// 1438
//  int m, n, x, y, s, t, tot;
//  int a[10][10];
//  bool b[10][10] = {false};
//  int xx[9] = {0, -2, -2, -1, 1, 2, 2, 1, -1};
//  int yy[9] = {0, -1, 1, 2, 2, 1, -1, -2, -2};
//  void _init()
//  {
//  	for (int q = 0; q <= 9; q++)
//  	{
//  		for (int u = 0; u <= 9; u++)
//  		{
//  			a[q][u] = INT_MAX;
//  		}
//  	}
//  }
//  void dfs(int x, int y, int step)
//  {
//  	tot++;
//  	b[x][y] = true;
//  	a[x][y] = step;
//  	int tx, ty, i;
//  	for (i = 1; i <= 8; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (tx >= 1 && tx <= m && ty >= 1 && ty <= n &&
//  			step + 1 < a[tx][ty])
//  		{
//  			dfs(tx, ty, step + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	_init();
//  	cin >> m >> n >> x >> y >> s >> t;
//  	dfs(x, y, 0);
//  	// for (int q = 0; q <= 9; q++)
//  	// {
//  	// 	for (int u = 0; u <= 9; u++)
//  	// 	{
//  	// 		cout << setw(11) << a[q][u];
//  	// 	}
//  	// 	cout << endl;
//  	// }
//  	// cout << tot << endl;
//  	cout << a[s][t];
//  	return 0;
//  }

// 1380
//  char a[101][101];
//  bool b[101][101] = {false};
//  int m, n, nmax = -1, sizes;
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void dfs(int x, int y, char num)
//  {
//  	sizes++;
//  	b[x][y] = true;
//  	int tx, ty, i;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && a[tx][ty] == num && b[tx][ty] == false)
//  		{
//  			dfs(tx, ty, num);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	int i, j;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			if (b[i][j] == false)
//  			{
//  				dfs(i, j, a[i][j]);
//  				nmax = max(nmax, sizes);
//  				sizes = 0;
//  			}
//  		}
//  	}
//  	cout << nmax;
//  	return 0;
//  }

// ��1541
//  int a[31][31];
//  int ans[31][31];
//  bool b[31][31] = {false};
//  int m, n;
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void dfs(int x, int y, int dep)
//  {
//  	//dep += a[x][y];
//  	ans[x][y] = dep;
//  	b[x][y] = true;
//  	int tx, ty, i;
//  	for (i = 1; i <= 4; i++)
//  	{
//  		tx = x + xx[i];
//  		ty = y + yy[i];
//  		if (tx >= 1 && tx <= m && ty >= 1 && ty <= n &&
//  			/*b[tx][ty] == false &&*/ dep + a[tx][ty] < ans[tx][ty])
//  		{
//  			//ans[tx][ty] = dep;
//  			dfs(tx, ty, dep + a[tx][ty]);
//  		}
//  	}
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin >> m >> n;
//  	int i, j;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  			ans[i][j] = INT_MAX;
//  		}
//  	}
//  	dfs(1, 1, a[1][1]);
//  	cout << ans[m][n];
//  	return 0;
//  }

// ��1440_https://blog.csdn.net/dingzhekai/article/details/119491619
//  int m, n, daxiao;
//  int gucang, nainiu;
//  char a[81][81];
//  int minx = 100, miny = 100, maxx = -1, maxy = -1;
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  inline void dfs(int x, int y)
//  {
//  	daxiao += 1;
//  	a[x][y] = '.';
//  	minx = min(minx, x);
//  	miny = min(miny, y);
//  	maxx = max(maxx, x);
//  	maxy = max(maxy, y);
//  	int tx, ty, u;
//  	for (u = 1; u <= 4; u++)
//  	{
//  		tx = x + xx[u];
//  		ty = y + yy[u];
//  		if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && a[tx][ty] == '#')
//  		{
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin >> m >> n;
//  	int i, j;
//  	int s;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			if (a[i][j] == '#')
//  			{
//  				minx = miny = 100;
//  				maxx = maxy = -1;
//  				daxiao = s = 0;
//  				dfs(i, j);
//  				s = (maxx - minx + 1) * (maxy - miny + 1);
//  				if (daxiao == s)
//  				{
//  					gucang += 1;
//  				}
//  				else
//  				{
//  					nainiu += 1;
//  				}
//  				// cout << minx << " " << maxx << endl
//  				// 	 << miny << maxy << endl;
//  				// cout << daxiao << " " << s << endl
//  				// 	 << endl;
//  			}
//  		}
//  	}
//  	cout << gucang << endl
//  		 << nainiu;
//  	return 0;
//  }

// 1907
//  int m, n;
//  char a[101][101];
//  int tot;
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  inline void dfs(int x, int y)
//  {
//  	a[x][y] = '0';
//  	int tx, ty, u;
//  	for (u = 1; u <= 4; u++)
//  	{
//  		tx = x + xx[u];
//  		ty = y + yy[u];
//  		if (tx >= 1 && tx <= m && ty >= 1 && ty <= n && a[tx][ty] != '0')
//  		{
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	int i, j;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			if (a[i][j] != '0')
//  			{
//  				tot++;
//  				dfs(i, j);
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// ��1802
//  int n;
//  int a[31][31];
//  int xx[9] = {0, -1, 0, 1, 0};
//  int yy[9] = {0, 0, 1, 0, -1};
//  void dfs_edge(int x, int y)
//  {
//  	int tx, ty, r;
//  	for (r = 1; r <= 4; r++)
//  	{
//  		tx = x + xx[r];
//  		ty = y + yy[r];
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && a[tx][ty] == 0 && a[x][y] != 1)
//  		/*һ��Ҫ��a[x][y] != 0�����Բο�����㣺
//  		10
//  		1 1 1 1 1 1 1 1 1 1
//  		1 0 0 0 0 0 0 0 0 1
//  		1 0 1 0 1 0 0 0 0 1
//  		1 0 1 0 1 0 0 0 0 1
//  		1 0 1 0 1 0 0 0 0 1
//  		1 0 1 0 1 0 1 1 1 1
//  		1 0 1 0 1 0 1 0 0 0
//  		1 0 1 1 1 0 1 1 1 1
//  		1 0 0 1 1 0 0 0 0 1
//  		1 1 1 1 1 1 1 1 1 1
//  		*/
//  		{
//  			a[tx][ty] = -1;
//  			dfs_edge(tx, ty);
//  		}
//  	}
//  }
//  void dfs(int x, int y)
//  {
//  	a[x][y] = 2;
//  	int tx, ty, r;
//  	for (r = 1; r <= 4; r++)
//  	{
//  		tx = x + xx[r];
//  		ty = y + yy[r];
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && a[tx][ty] == 0)
//  		{
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin >> n;
//  	int u, t;
//  	for (u = 1; u <= n; u++)
//  	{
//  		for (t = 1; t <= n; t++)
//  		{
//  			cin >> a[u][t];
//  		}
//  	}
//  	for (u = 1; u <= n; u++)
//  	{
//  		dfs_edge(1, u);
//  		dfs_edge(n, u);
//  		dfs_edge(u, 1);
//  		dfs_edge(u, n);
//  	}
//  	for (u = 1; u <= n; u++)
//  	{
//  		for (t = 1; t <= n; t++)
//  		{
//  			if (a[u][t] == 0)
//  			{
//  				dfs(u, t);
//  				break;
//  			}
//  		}
//  	}
//  	for (u = 1; u <= n; u++)
//  	{
//  		for (t = 1; t <= n; t++)
//  		{
//  			if (a[u][t] == -1)
//  			{
//  				cout << "0 ";
//  			}
//  			else
//  			{
//  				cout << a[u][t] << ' ';
//  			}
//  		}
//  		cout << endl;
//  	}
//  	return 0;
//  }

// 1897
//  char a[21][21];
//  int w, h, sx, sy;
//  int tot = 1;
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void dfs(int x, int y)
//  {
//  	int tx, ty, q;
//  	for (q = 1; q <= 4; q++)
//  	{
//  		tx = x + xx[q];
//  		ty = y + yy[q];
//  		if (tx >= 1 && tx <= w && ty >= 1 && ty <= h && a[tx][ty] == '.')
//  		{
//  			++tot;
//  			a[tx][ty] = '#';
//  			dfs(tx, ty);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> w >> h;
//  	swap(w, h);
//  	int u, q;
//  	for (u = 1; u <= w; u++)
//  	{
//  		for (q = 1; q <= h; q++)
//  		{
//  			cin >> a[u][q];
//  			if (a[u][q] == '@')
//  			{
//  				sx = u;
//  				sy = q;
//  			}
//  		}
//  	}
//  	dfs(sx, sy);
//  	cout << tot;
//  	return 0;
//  }

// 1739
//  int n, tot;
//  int r[3][26];
//  bool b[6][6];
//  int xx[5] = {0, 0, 1, 0, -1};
//  int yy[5] = {0, 1, 0, -1, 0};
//  void print(int k)
//  {
//  	cout << tot << ":";
//  	int u;
//  	for (u = 1; u < k; u++)
//  	{
//  		cout << r[1][u] << "," << r[2][u] << "->";
//  	}
//  	cout << n << "," << n << endl;
//  }
//  void dfs(int x, int y, int step)
//  {
//  	r[1][step] = x;
//  	r[2][step] = y;
//  	if (x == n && y == n)
//  	{
//  		tot++;
//  		print(step);
//  	}
//  	else
//  	{
//  		int tx, ty, i;
//  		for (i = 1; i <= 4; i++)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && ty <= n && tx <= n && ty >= 1 && b[tx][ty] == false)
//  			{
//  				b[tx][ty] = 1;
//  				dfs(tx, ty, step + 1);
//  				b[tx][ty] = 0;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	b[1][1] = 1;
//  	dfs(1, 1, 1);
//  	return 0;
//  }

// 1411
//  int m, n, tot;
//  int r[3][100];
//  bool b[11][11] = {false};
//  char a[11][11];
//  int xx[5] = {0, 0, 1, 0, -1};
//  int yy[5] = {0, 1, 0, -1, 0};
//  void print(int k)
//  {
//  	cout << tot << ":";
//  	int u;
//  	for (u = 1; u < k; u++)
//  	{
//  		cout << r[1][u] << "," << r[2][u] << "->";
//  	}
//  	cout << r[1][k] << "," << r[2][k] << endl;
//  }
//  void dfs(int x, int y, int step)
//  {
//  	r[1][step] = x;
//  	r[2][step] = y;
//  	if (x == m && y == n)
//  	{
//  		tot++;
//  		print(step);
//  	}
//  	else
//  	{
//  		int tx, ty, i;
//  		for (i = 1; i <= 4; i++)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && tx <= m && ty >= 1 && ty <= n &&
//  				a[tx][ty] == 'o' && b[tx][ty] == false)
//  			{
//  				b[tx][ty] = true;
//  				dfs(tx, ty, step + 1);
//  				b[tx][ty] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> m >> n;
//  	int i, j;
//  	for (i = 1; i <= m; i++)
//  	{
//  		for (j = 1; j <= n; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	b[1][1] = true;
//  	dfs(1, 1, 1);
//  	if (tot == 0)
//  	{
//  		cout << "no";
//  	}
//  	return 0;
//  }

// 1308
//  int n, a[300];
//  bool b[8] = {false};
//  void print()
//  {
//  	for (int q = 1; q <= n; q++)
//  	{
//  		cout << a[q] << " ";
//  	}
//  	cout << endl;
//  }
//  void fun(int k)
//  {
//  	for (int y = 1; y <= n; y++)
//  	{
//  		if (b[y] == false)
//  		{
//  			a[k] = y;
//  			b[y] = true;
//  			if (k == n)
//  			{
//  				print();
//  			}
//  			else
//  			{
//  				fun(k + 1);
//  			}
//  			b[y] = false;
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	fun(1);
//  	return 0;
//  }

// 1358
//  int n, a[21];
//  bool b[21] = {false};
//  int tot;
//  inline bool ispr(int sum)
//  {
//  	if (sum == 1 || sum == 2)
//  	{
//  		return true;
//  	}
//  	for (int z = 2; z <= sqrt(sum); z++)
//  	{
//  		if (sum % z == 0)
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  void print()
//  {
//  	++tot;
//  	cout << tot << ":";
//  	int y;
//  	for (y = 1; y <= n; y++)
//  	{
//  		cout << a[y] << " ";
//  	}
//  	cout << endl;
//  }
//  void fun(int step)
//  {
//  	for (int q = 1; q <= n; q++)
//  	{
//  		if (b[q] == false && (step == 1 || ispr(q + a[step - 1]) == true))
//  		{
//  			a[step] = q;
//  			b[q] = true;
//  			if (step == n && ispr(a[n] + a[1]) == true)
//  			{
//  				print();
//  			}
//  			else
//  			{
//  				fun(step + 1);
//  			}
//  			b[q] = false;
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	fun(1);
//  	cout << "total:" << tot;
//  	return 0;
//  }

// 1381
//  int n, m, s, ans = -1;
//  int a[110][110];
//  bool b[110][110] = {false};
//  int xx[5] = {0, -1, 1, 0, 0};
//  int yy[5] = {0, 0, 0, -1, 1};
//  inline void init()
//  {
//  	for (int i = 1; i <= n; i++)
//  	{
//  		for (int j = 1; j <= m; j++)
//  		{
//  			s = (s * 345) % 19997;
//  			a[i][j] = (s % 10) + 1;
//  			b[i][j] = false;
//  		}
//  	}
//  }
//  inline void initb()
//  {
//  	for (int i = 1; i <= n; i++)
//  	{
//  		for (int j = 1; j <= m; j++)
//  		{
//  			b[i][j] = false;
//  		}
//  	}
//  }
//  inline void dfs(int x, int y, int sum)
//  {
//  	int tx, ty;
//  	for (int q = 1; q <= 4; q++)
//  	{
//  		tx = x + xx[q];
//  		ty = y + yy[q];
//  		if (a[x][y] < a[tx][ty] && b[tx][ty] == false)
//  		{
//  			b[tx][ty] = true;
//  			dfs(tx, ty, sum + a[tx][ty]);
//  			b[tx][ty] = false;
//  		}
//  	}
//  	if (a[x][y] >= a[x + 1][y] &&
//  		a[x][y] >= a[x][y + 1] &&
//  		a[x][y] >= a[x - 1][y] &&
//  		a[x][y] >= a[x][y - 1])
//  	{
//  		ans = max(ans, sum);
//  		return;
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> m >> s;
//  	init();
//  	for (int i = 1; i <= n; i++)
//  	{
//  		for (int j = 1; j <= m; j++)
//  		{
//  			dfs(i, j, a[i][j]);
//  			initb();
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1361
//  int n, r;
//  bool b[7] = {false};
//  int a[7] = {0};
//  void print()
//  {
//  	for (int y = 1; y <= r; y++)
//  	{
//  		cout << a[y] << " ";
//  	}
//  	cout << endl;
//  }
//  void dfs(int step)
//  {
//  	for (int u = 1; u <= n; u++)
//  	{
//  		if (b[u] == false)
//  		{
//  			if (step == r)
//  			{
//  				a[step] = u;
//  				print();
//  			}
//  			else
//  			{
//  				a[step] = u;
//  				b[u] = true;
//  				dfs(step + 1);
//  				b[u] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> r;
//  	dfs(1);
//  	return 0;
//  }

// 1685
//  short int n, a[10], res[10];
//  bool b[10];
//  void print()
//  {
//  	for (int z = 1; z < n; z++)
//  	{
//  		cout << res[z] << " ";
//  	}
//  	cout << res[n] << endl;
//  }
//  void dfs(int step)
//  {
//  	for (int i = 1; i <= n; i++)
//  	{
//  		if (b[i] == false)
//  		{
//  			b[i] = true;
//  			res[step] = a[i];
//  			if (step == n)
//  			{
//  				print();
//  			}
//  			else
//  			{
//  				dfs(step + 1);
//  			}
//  			b[i] = false;
//  		}
//  	}
//  }
//  int main()
//  {
//  	//cout << true;
//  	cin >> n;
//  	for (int y = 1; y <= n; y++)
//  	{
//  		cin >> a[y];
//  	}
//  	sort(a + 1, a + n + 1);
//  	dfs(1);
//  	return 0;
//  }

// 1439
//  short int n, a[21], tot;
//  bool b[21] = {false};
//  inline bool ispr(int sum)
//  {
//  	if (sum == 1 || sum == 2)
//  	{
//  		return true;
//  	}
//  	for (int z = 2; z <= sqrt(sum); z++)
//  	{
//  		if (sum % z == 0)
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  void print()
//  {
//  	++tot;
//  	if (tot > 10)
//  	{
//  		exit(0);
//  	}
//  	int y;
//  	for (y = 1; y <= n; y++)
//  	{
//  		cout << a[y] << " ";
//  	}
//  	cout << endl;
//  }
//  void dfs(int step)
//  {
//  	for (int q = 2; q <= n; q++)
//  	{
//  		if (ispr(q + a[step - 1]) && b[q] == false)
//  		{
//  			a[step] = q;
//  			b[q] = true;
//  			if (step == n && ispr(a[step] + a[1]))
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
//  	if (n == 19) //һ��19�����ݣ���������
//  	{
//  		return 0;
//  	}
//  	a[1] = 1;
//  	dfs(2);
//  	return 0;
//  }

// 1823
//  int l, n, tot = 0;
//  bool b[27];
//  char a[27];
//  char res[16];
//  bool isok()
//  {
//  	int yuanyin = 0, fuyin = 0;
//  	for (int y = 1; y <= l; y++)
//  	{
//  		switch (res[y])
//  		{
//  		case 'a':
//  		case 'e':
//  		case 'i':
//  		case 'o':
//  		case 'u':
//  			++yuanyin;
//  		default:
//  			++fuyin;
//  		}
//  	}
//  	if (yuanyin != 0 && fuyin >= 2)
//  	{
//  		return true;
//  	}
//  	else
//  	{
//  		return false;
//  	}
//  }
//  void print()
//  {
//  	if (isok())
//  	{
//  		++tot;
//  		if (tot > 25000)
//  		{
//  			exit(0);
//  		}
//  		for (int g = 1; g <= l; g++)
//  		{
//  			cout << res[g];
//  		}
//  		cout << endl;
//  	}
//  }
//  void dfs(int step, int num)
//  {
//  	res[step] = a[num];
//  	if (step == l)
//  	{
//  		print();
//  	}
//  	else
//  	{
//  		for (int u = num; u <= n; u++)
//  		{
//  			if (b[u] == false)
//  			{
//  				b[u] = true;
//  				dfs(step + 1, u);
//  				b[u] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> l >> n;
//  	int q;
//  	for (q = 1; q <= n; q++)
//  	{
//  		cin >> a[q];
//  	}
//  	sort(a + 1, a + n + 1);
//  	for (q = 1; q <= n; q++)
//  	{
//  		b[q] = true;
//  		dfs(1, q);
//  	}
//  	return 0;
//  }

// 1590
//  int n, maxn = -1;
//  string a[51];
//  bool b[51] = {false};
//  void dfs(int len, int now)
//  {
//  	maxn = max(maxn, len);
//  	int q;
//  	for (q = now + 1; q <= n; q++)
//  	{
//  		if (b[q] == false && a[q][0] == a[now][1])
//  		{
//  			b[q] = true;
//  			dfs(len + 1, q);
//  			b[q] = false;
//  		}
//  	}
//  	for (q = now - 1; q >= 2; q--)
//  	{
//  		if (b[q] == false && a[q][0] == a[now][1])
//  		{
//  			b[q] = true;
//  			dfs(len + 1, q);
//  			b[q] = false;
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	int g;
//  	for (g = 1; g <= n; g++)
//  	{
//  		cin >> a[g];
//  	}
//  	if (n == 1)
//  	{
//  		cout << 1;
//  		return 0;
//  	}
//  	b[1] = true;
//  	dfs(1, 1);
//  	cout << maxn;
//  	return 0;
//  }

// 1913
//  int sx, sy, tot;
//  char c[501][501];
//  int xx[5] = {0, -1, 0, 1, 0};
//  int yy[5] = {0, 0, 1, 0, -1};
//  void mark(int x, int y)
//  {
// c[x][y] = '*'; //����DFSҪ�ȱ�ǣ��������c[tx][ty]����'0'�Ļ��Ͳ�����б��
// 	int tx, ty, q;
// 	for (q = 1; q <= 4; ++q)
// 	{
// 		tx = x + xx[q];
// 		ty = y + yy[q];
// 		if (tx >= 1 && tx <= sx && ty >= 1 && ty <= sy &&
// 			c[tx][ty] == '0')
// 		{
// 			mark(tx, ty);
// 		}
// 	}
// }
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin >> sx >> sy;
// 	int q, p;
// 	for (q = 1; q <= sx; ++q)
// 	{
// 		for (p = 1; p <= sy; ++p)
// 		{
// 			cin >> c[q][p];
// 		}
// 	}
// 	for (p = 1; p <= sy; ++p)
// 	{
// 		if (c[1][p] == '0')
// 		{
// 			mark(1, p);
// 		}
// 		if (c[sx][p] == '0')
// 		{
// 			mark(sx, p);
// 		}
// 	}
// 	for (p = 1; p <= sx; ++p)
// 	{
// 		if (c[p][1] == '0')
// 		{
// 			mark(p, 1);
// 		}
// 		if (c[p][sy] == '0')
// 		{
// 			mark(p, sy);
// 		}
// 	}
// 	for (q = 1; q <= sx; ++q)
// 	{
// 		for (p = 1; p <= sy; ++p)
// 		{
// 			if (c[q][p] == '0')
// 			{
// 				++tot;
// 			}
// 		}
// 	}
// 	cout << tot;
// 	return 0;
// }

// 1900
//  int ans = 0X3F3F3F3F, ex, ey;
//  int n, m;
//  int xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  bool flag;
//  char a[30][30];
//  bool b[30][30];
//  void dfs(int x, int y, int step)
//  {
//  	if (x == ex && y == ey)
//  	{
//  		ans = min(ans, step);
//  		flag = true;
//  	}
//  	else
//  	{
//  		int i, tx, ty;
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				!b[tx][ty] && (a[tx][ty] == '.' || a[tx][ty] == '*'))
//  			{
//  				b[tx][ty] = true;
//  				dfs(tx, ty, step + 1);
//  				b[tx][ty] = false;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int i, j;
//  	int sx, sy;
//  	cin >> n >> m;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> a[i][j];
//  			if (a[i][j] == '@')
//  			{
//  				sx = i;
//  				sy = j;
//  			}
//  			else if (a[i][j] == '*')
//  			{
//  				ex = i;
//  				ey = j;
//  			}
//  		}
//  	}
//  	dfs(sx, sy, 0);
//  	if (flag)
//  	{
//  		cout << ans;
//  	}
//  	else
//  	{
//  		cout << -1;
//  	}
//  	return 0;
//  }

// ��֦

// 2412
//  int a[30], s[30], ans, n, k;
//  inline bool cmp(int x, int y)
//  {
//  	return x > y;
//  }
//  void dfs(int p, int sum)
//  {
//  	if (sum == k)
//  	{
//  		++ans;
//  		return;
//  	}
//  	if (sum + s[p] < k || p > n || sum > k)
//  	{
//  		return;
//  	}
//  	dfs(p + 1, sum + a[p]);
//  	dfs(p + 1, sum);
//  }
//  int main()
//  {
//  	cin >> n >> k;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	sort(a + 1, a + n + 1, cmp);
//  	for (register int j = n; j >= 1; --j)
//  	{
//  		s[j] = s[j + 1] + a[j];
//  	}
//  	dfs(1, 0);
//  	cout << ans;
//  	return 0;
//  }

// 1864
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

// 2364
//  #define reg register int
//  int n, k, ans, a[10];
//  void dfs(int p)
//  {
//  	if (p == k)
//  	{
//  		if (n >= a[p - 1])
//  		{
//  			++ans;
//  			return;
//  		}
//  	}
//  	if (n == 0)
//  	{
//  		return;
//  	}
//  	int avg = n / (k - p + 1);
//  	for (reg j = a[p - 1]; j <= avg; ++j)
//  	{ //Ҫ��p-1��ʼѭ��
//  		a[p] = j;
//  		n -= j;
//  		dfs(p + 1); // a[p] = 0; //�ɲ�д����һ��ѭ��������ʱ��Ḳ��
//  		n += j;
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> k;
//  	a[0] = 1;
//  	dfs(1);
//  	cout << ans;
//  	return 0;
//  }

// 2366
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

// 2414
//  #define reg register int
//  const int R = 110;
//  int a[R][R], n, m, ans, ml[R][R];
//  int xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  bool b[R][R];
//  int dfs(int x, int y)
//  {
//  	if (ml[x][y])
//  	{
//  		return ml[x][y];
//  	}
//  	int tx, ty, res = 1; //��ʼֵΪ1����Ϊ����Ҳ��1������
//  	for (reg j = 1; j <= 4; ++j)
//  	{
//  		tx = x + xx[j];
//  		ty = y + yy[j];
//  		if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  			a[tx][ty] < a[x][y])
//  		{
//  			res = max(res, 1 + dfs(tx, ty));
//  		}
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	cin.tie(0);
//  	cout.tie(0);
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
//  			ml[i][j] = dfs(i, j);
//  			ans = max(ans, ml[i][j]);
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1483
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

// ����

// 1236_ѭ��
//  int a[1000001], n, x;
//  int main()
//  {
//  #if 1
//  	cout.tie(0);
//  #endif
//  	cin >> n;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q];
//  	}
//  	cin >> x;
//  	int left, right, mid, res = -1;
//  	left = 1;
//  	right = n;
//  	while (left <= right)
//  	{
//  		mid = (left + right) / 2;
//  		if (a[mid] == x)
//  		{
//  			res = mid;
//  			break;
//  		}
//  		else if (a[mid] > x)
//  		{
//  			right = mid - 1;
//  		}
//  		else if (a[mid] < x)
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	cout << res;
//  	return 0;
//  }

// 1236_�ݹ�
//  int a[1000001], x;
//  int fun(int left, int right)
//  {
//  	int mid = (left + right) / 2;
//  	if (left > right)
//  	{
//  		cout << -1;
//  		exit(0);
//  	}
//  	else if (a[mid] == x)
//  	{
//  		return mid;
//  	}
//  	else if (a[mid] > x)
//  	{
//  		return fun(left, mid - 1);
//  	}
//  	else if (a[mid] < x)
//  	{
//  		return fun(mid + 1, right);
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	for (int y = 1; y <= n; y++)
//  	{
//  		cin >> a[y];
//  	}
//  	cin >> x;
//  	cout << fun(1, n);
//  	return 0;
//  }

// 1236_��ֵ����
//  int a[1000001], x, n;
//  int fun(int left, int right)
//  {
//  	int mid = left + (x - a[left]) * (right - left) / (a[right] - a[left]);
//  	if (left > right)
//  	{
//  		return -1;
//  	}
//  	else if (a[mid] == x)
//  	{
//  		return mid;
//  	}
//  	else if (a[mid] > x)
//  	{
//  		return fun(left, mid - 1);
//  	}
//  	else if (a[mid] < x)
//  	{
//  		return fun(mid + 1, right);
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	for (int y = 1; y <= n; y++)
//  	{
//  		cin >> a[y];
//  	}
//  	cin >> x;
//  	cout << fun(1, n);
//  	return 0;
//  }

// 1010
//  int n, a[11];
//  void quick(int left, int right)
//  {
//  	int i = left, j = right, mid = (left + right) / 2;
//  	while (i <= j)
//  	{
//  		while (a[i] < a[mid])
//  		{
//  			++i;
//  		}
//  		while (a[j] > a[mid])
//  		{
//  			--j;
//  		}
//  		if (i <= j)
//  		{
//  			swap(a[i], a[j]);
//  			++i;
//  			--j;
//  		}
//  	}
//  	if (left <= j)
//  	{
//  		quick(left, j);
//  	}
//  	if (i <= right)
//  	{
//  		quick(i, right);
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	for (int y = 1; y <= n; y++)
//  	{
//  		cin >> a[y];
//  	}
//  	quick(1, n);
//  	for (int y = 1; y <= n; y++)
//  	{
//  		cout << a[y] << " ";
//  	}
//  	return 0;
//  }

// 1894
//  int a[100001];
//  int search(int k, int n)
//  {
//  	int left = 1, right = n, mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (a[mid] >= k)
//  		{
//  			right = mid - 1;
//  		}
//  		else
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	if (a[left] == k)
//  	{
//  		return left;
//  	}
//  	else
//  	{
//  		return -1;
//  	}
//  }
//  int main()
//  {
//  	int n, q, t;
//  	cin >> n;
//  	int i;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i];
//  	}
//  	cin >> q;
//  	for (i = 1; i <= q; ++i)
//  	{
//  		cin >> t;
//  		cout << search(t, n) << ' ';
//  	}
//  	return 0;
//  }

// 1895
//  int a[100001];
//  inline int search(int k, int n)
//  {
//  	int left = 1, right = n, mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		// cout << mid << endl;
//  		if (a[mid] > k)
//  		{
//  			right = mid - 1;
//  		}
//  		else if (a[mid] <= k)
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	if (a[right] == k)
//  	{
//  		return right;
//  	}
//  	else
//  	{
//  		return -1;
//  	}
//  }
//  int main()
//  {
//  	int n, q, t, p;
//  	cin >> n;
//  	for (p = 1; p <= n; ++p)
//  	{
//  		cin >> a[p];
//  	}
//  	cin >> q;
//  	for (p = 1; p <= q; ++p)
//  	{
//  		cin >> t;
//  		cout << search(t, n) << ' ';
//  	}
//  	return 0;
//  }

// 1898_1
//  int a[100001], b[100001];
//  inline bool search(int n, int k)
//  {
//  	int left = 1, right = n, mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (a[mid] == k)
//  		{
//  			return true;
//  		}
//  		else if (a[mid] > k)
//  		{
//  			right = mid - 1;
//  		}
//  		else if (a[mid] < k)
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int n1, n2;
//  	cin >> n1 >> n2;
//  	int q;
//  	for (q = 1; q <= n1; ++q)
//  	{
//  		cin >> a[q];
//  	}
//  	for (q = 1; q <= n2; ++q)
//  	{
//  		cin >> b[q];
//  	}
//  	sort(a + 1, a + n1 + 1);
//  	sort(b + 1, b + n2 + 1);
//  	bool res;
//  	for (q = 1; q <= n2; ++q)
//  	{
//  		res = search(n1, b[q]);
//  		if (res)
//  		{
//  			cout << b[q] << ' ';
//  		}
//  	}
//  	return 0;
//  }

// 1898_map
//  int b[100001];
//  int main()
//  {
//  	int n1, n2, t;
//  	map<int, bool> _map;
//  	cin >> n1 >> n2;
//  	int q;
//  	for (q = 1; q <= n1; ++q)
//  	{
//  		cin >> t;
//  		_map[t] = true;
//  	}
//  	for (q = 1; q <= n2; ++q)
//  	{
//  		cin >> b[q];
//  	}
//  	sort(b + 1, b + n2 + 1);
//  	for (q = 1; q <= n2; ++q)
//  	{
//  		if (_map.count(b[q]))
//  		{
//  			cout << b[q] << ' ';
//  		}
//  	}
//  	return 0;
//  }

// 1899
//  int a[100001];
//  inline int search(int k, int n)
//  {
//  	int left = 1, right = n, mid, t;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (a[mid] <= k && a[mid + 1] >= k)
//  		{
//  			t = min(k - a[mid], a[mid + 1] - k);
//  			return t;
//  		}
//  		else if (a[mid] >= k)
//  		{
//  			right = mid - 1;
//  		}
//  		else if (a[mid] <= k)
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	return t;
//  }
//  int main()
//  {
//  	int n1, n2, x, ans = 0;
//  	int q;
//  	cin >> n1 >> n2;
//  	for (q = 1; q <= n1; ++q)
//  	{
//  		cin >> a[q];
//  	}
//  	sort(a + 1, a + n1 + 1);
//  	for (q = 1; q <= n2; ++q)
//  	{
//  		cin >> x;
//  		if (x <= a[1])
//  		{
//  			ans += a[1] - x;
//  		}
//  		else if (x >= a[n1])
//  		{
//  			ans += x - a[n1];
//  		}
//  		else
//  		{
//  			ans += search(x, n1);
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1908
//  int a[1000001];
//  inline bool check(int height, int n, int m)
//  {
//  	unsigned long long ans = 0;
//  	for (int q = 1; q <= n; ++q)
//  	{
//  		if (a[q] > height)
//  		{
//  			ans += a[q] - height;
//  		}
//  	}
//  	return ans >= m;
//  }
//  int main()
//  {
//  	unsigned int n, m, right, left, height;
//  	cin >> n >> m;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q];
//  	}
//  	sort(a + 1, a + n + 1);
//  	left = 1;
//  	right = a[n];
//  	while (left <= right)
//  	{
//  		height = left + ((right - left) >> 1);
//  		if (check(height, n, m))
//  		{
//  			left = height + 1;
//  		}
//  		else
//  		{
//  			right = height - 1;
//  		}
//  	}
//  	cout << left - 1;
//  	return 0;
//  }

// 1916_��������ѽ��
//  const int RANGE = 1001;
//  int a[RANGE][RANGE];
//  bool b[RANGE][RANGE];
//  int xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  inline void init(int n, int m)
//  {
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= m; ++p)
//  		{
//  			b[q][p] = false;
//  		}
//  	}
//  }
//  inline bool bfs(int mid, int n, int m)
//  {
//  	int x, y, q, tx, ty;
//  	queue<int> xq;
//  	queue<int> yq;
//  	xq.push(1);
//  	yq.push(1);
//  	b[1][1] = true;
//  	while (!xq.empty())
//  	{
//  		x = xq.front();
//  		y = yq.front();
//  		if (x == n)
//  		{
//  			init(n, m);
//  			return true;
//  		}
//  		else
//  		{
//  			for (q = 1; q <= 4; ++q)
//  			{
//  				tx = x + xx[q];
//  				ty = y + yy[q];
//  				if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  					!b[tx][ty] && a[tx][ty] <= mid)
//  				{
//  					xq.push(tx);
//  					yq.push(ty);
//  					b[tx][ty] = true;
//  				}
//  			}
//  			xq.pop();
//  			yq.pop();
//  		}
//  	}
//  	init(n, m);
//  	return false;
//  }
//  int main()
//  {
//  	int n, m;
//  	int left = INT_MAX, right = INT_MIN;
//  	cin >> n >> m;
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= m; ++p)
//  		{
//  			cin >> a[q][p];
//  			if (q != 1 && q != n)
//  			{
//  				left = min(left, a[q][p]);
//  				right = max(right, a[q][p]);
//  			}
//  		}
//  	}
//  	int mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (bfs(mid, n, m))
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

// ��1909
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

// ��1561
//  int n, m;
//  struct Wood
//  {
//  	int l;
//  	int s;
//  } w[10001];
//  bool cmp(Wood a, Wood b)
//  {
//  	if (a.l != b.l)
//  	{
//  		return a.l < b.l;
//  	}
//  	else
//  	{
//  		return a.s < b.s;
//  	}
//  }
//  inline bool check(int mid)
//  {
//  	unsigned int ans = 0;
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (w[q].l >= mid)
//  		{
//  			ans = w[q].s * (w[q].l / mid) + ans;
//  		}
//  	}
//  	return ans >= m;
//  }
//  int main()
//  {
//  	int left, right, mid;
//  	int q;
//  	cin >> n >> m >> w[1].l >> w[1].s;
//  	for (q = 2; q <= n; ++q)
//  	{
//  		w[q].l = ((w[q - 1].l * 37011 + 10193) % 10000) + 1;
//  		w[q].s = ((w[q - 1].s * 73011 + 24793) % 100) + 1;
//  	}
//  	sort(w + 1, w + n + 1, cmp);
//  	left = w[1].l;
//  	right = w[n].l;
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

// �����������

// ��ͨ

// 1443
// short que[1000001][3];
// bool b[1001][1001];
// int a[1001][1001];
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	int tot = 1, n, m, p1, p2;
// 	cin >> n >> m >> p1 >> p2;
// 	int i, j;
// 	for (i = 1; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			cin >> a[i][j];
// 		}
// 	}
// 	b[p1][p2] = true;
// 	int head = 1, tail = 1, tx, ty;
// 	que[1][1] = p1;
// 	que[1][2] = p2;
// 	int xx[5] = {0, 0, 1, 0, -1};
// 	int yy[5] = {0, 1, 0, -1, 0};
// 	while (head <= tail)
// 	{
// 		for (i = 1; i <= 4; ++i)
// 		{
// 			tx = que[head][1] + xx[i];
// 			ty = que[head][2] + yy[i];
// 			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
// 				a[tx][ty] <= a[p1][p2] && b[tx][ty] == false)
// 			{
// 				a[tx][ty] = a[p1][p2];
// 				b[tx][ty] = true;
// 				++tail;
// 				que[tail][1] = tx;
// 				que[tail][2] = ty;
// 				++tot;
// 			}
// 		}
// 		++head;
// 	}
// 	cout << tot;
// 	return 0;
// }

// 1432_1
//  short que[1700][3], num[41][41];
//  bool b[41][41];
//  char a[41][41];
//  int main()
//  {
//  	int r, c;
//  	cin >> r >> c;
//  	int i, j;
//  	for (i = 1; i <= r; ++i)
//  	{
//  		for (j = 1; j <= c; ++j)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	int xx[5] = {0, -1, 0, 1, 0};
//  	int yy[5] = {0, 0, 1, 0, -1};
//  	int head = 1, tail = 1;
//  	int tx, ty;
//  	b[1][1] = true;
//  	num[1][1] = 1;
//  	que[1][1] = 1;
//  	que[1][2] = 1;
//  	while (head <= tail)
//  	{
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = que[head][1] + xx[i];
//  			ty = que[head][2] + yy[i];
//  			if (tx >= 1 && tx <= r && ty >= 1 && ty <= c &&
//  				a[tx][ty] == '.' && b[tx][ty] == false)
//  			{
//  				++tail;
//  				que[tail][1] = tx;
//  				que[tail][2] = ty;
//  				num[tx][ty] = num[que[head][1]][que[head][2]] + 1;
//  				b[tx][ty] = true;
//  			}
//  		}
//  		++head;
//  	}
//  	cout << num[r][c];
//  	return 0;
//  }

// 1432_2
//  short que[1700][4];
//  char a[41][41];
//  int main()
//  {
//  	int r, c;
//  	cin >> r >> c;
//  	int i, j;
//  	for (i = 1; i <= r; ++i)
//  	{
//  		for (j = 1; j <= c; ++j)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	int xx[5] = {0, -1, 0, 1, 0};
//  	int yy[5] = {0, 0, 1, 0, -1};
//  	int head = 1, tail = 1;
//  	int tx, ty;
//  	que[1][1] = 1;
//  	que[1][2] = 1;
//  	que[1][3] = 1;
//  	while (head <= tail)
//  	{
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = que[head][1] + xx[i];
//  			ty = que[head][2] + yy[i];
//  			if (tx >= 1 && tx <= r && ty >= 1 && ty <= c &&
//  				a[tx][ty] == '.')
//  			{
//  				a[tx][ty] = '#';
//  				++tail;
//  				que[tail][1] = tx;
//  				que[tail][2] = ty;
//  				que[tail][3] = que[head][3] + 1;
//  				if (tx == r && ty == c)
//  				{
//  					cout << que[tail][3];
//  					return 0;
//  				}
//  			}
//  		}
//  		++head;
//  	}
//  	return 0;
//  }

// 1442
//  short que[22802][4]; // NULL x y pre
//  short r[22802][3];
//  char a[151][151];
//  int n, m, s1, s2, e1, e2;
//  void print(int step)
//  {
//  	if (que[step][3] != 0)
//  	{
//  		print(que[step][3]);
//  	}
//  	cout << '(' << que[step][1] << ',' << que[step][2] << ')';
//  	if (que[step][1] != e1 || que[step][2] != e2)
//  	{
//  		cout << "->";
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
//  			cin >> a[i][j];
//  		}
//  	}
//  	cin >> s1 >> s2 >> e1 >> e2;
//  	que[1][1] = s1;
//  	que[1][2] = s2;
//  	que[1][3] = 0;
//  	int xx[5] = {0, -1, 0, 1, 0};
//  	int yy[5] = {0, 0, 1, 0, -1};
//  	int head = 1, tail = 1;
//  	int tx, ty;
//  	while (head <= tail)
//  	{
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = que[head][1] + xx[i];
//  			ty = que[head][2] + yy[i];
//  			if (a[tx][ty] == '0' &&
//  				tx >= 1 && tx <= n && ty >= 1 && ty <= m)
//  			{
//  				a[tx][ty] = '1';
//  				++tail;
//  				que[tail][1] = tx;
//  				que[tail][2] = ty;
//  				que[tail][3] = head;
//  				if (tx == e1 && ty == e2)
//  				{
//  					print(tail);
//  					return 0;
//  				}
//  			}
//  		}
//  		++head;
//  	}
//  	cout << "no way";
//  	return 0;
//  }

// 1441_1
//  int xx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
//  int yy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
//  char c[151][151];
//  int num[151][151];
//  int que[22802][4]; // NULL x y pre
//  int main()
//  {
//  	int head = 1, tail = 1, n, m;
//  	cin >> m >> n; //ע�⣺�����ȶ��У��ٶ���
//  	int i, j, s1, s2, e1, e2;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> c[i][j];
//  			if (c[i][j] == 'K')
//  			{
//  				s1 = i;
//  				s2 = j;
//  				c[i][j] = '*';
//  			}
//  			else if (c[i][j] == 'H')
//  			{
//  				e1 = i;
//  				e2 = j;
//  			}
//  		}
//  	}
//  	que[1][1] = s1;
//  	que[1][2] = s2;
//  	que[1][3] = 0;
//  	num[s1][s2] = 0;
//  	int tx, ty;
//  	while (head <= tail)
//  	{
//  		for (i = 1; i <= 8; ++i)
//  		{
//  			tx = que[head][1] + xx[i];
//  			ty = que[head][2] + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				(c[tx][ty] == '.' || c[tx][ty] == 'H'))
//  			{
//  				++tail;
//  				que[tail][1] = tx;
//  				que[tail][2] = ty;
//  				que[tail][3] = que[head][3] + 1;
//  				num[tx][ty] = que[tail][3];
//  				c[tx][ty] = '*';
//  			}
//  			// if (tx == e1 && ty == e2)
//  			// {
//  			// 	cout << num[e1][e2];
//  			// 	return 0;
//  			// }
//  		}
//  		++head;
//  	}
//  	cout << num[e1][e2];
//  	return 0;
//  }

// 1441_2
//  int xx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
//  int yy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
//  char c[151][151];
//  int num[151][151];
//  int que[22802][4]; // NULL x y pre
//  int main()
//  {
//  	int head = 1, tail = 1, n, m;
//  	cin >> m >> n; //ע�⣺�����ȶ��У��ٶ���
//  	int i, j, s1, s2, e1, e2;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> c[i][j];
//  			if (c[i][j] == 'K')
//  			{
//  				s1 = i;
//  				s2 = j;
//  				c[i][j] = '*';
//  			}
//  			else if (c[i][j] == 'H')
//  			{
//  				e1 = i;
//  				e2 = j;
//  			}
//  		}
//  	}
//  	que[1][1] = s1;
//  	que[1][2] = s2;
//  	que[1][3] = 0;
//  	num[s1][s2] = 0;
//  	int tx, ty;
//  	while (head <= tail)
//  	{
//  		for (i = 1; i <= 8; ++i)
//  		{
//  			tx = que[head][1] + xx[i];
//  			ty = que[head][2] + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				(c[tx][ty] == '.' || c[tx][ty] == 'H'))
//  			{
//  				++tail;
//  				que[tail][1] = tx;
//  				que[tail][2] = ty;
//  				que[tail][3] = que[head][3] + 1;
//  				num[tx][ty] = que[tail][3];
//  				c[tx][ty] = '*';
//  			}
//  			if (tx == e1 && ty == e2)
//  			{
//  				cout << num[e1][e2];
//  				return 0;
//  			}
//  		}
//  		++head;
//  	}
//  	// cout << num[e1][e2];
//  	return 0;
//  }

// 1430
//  short que[40000][3];
//  char c[101][101];
//  int main()
//  {
//  	int n, q, p;
//  	cin >> n;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= n; ++p)
//  		{
//  			cin >> c[q][p];
//  		}
//  	}
//  	int head = 1, tail = 1, s1, s2, e1, e2, tx, ty;
//  	cin >> s1 >> s2 >> e1 >> e2;
//  	if (c[s1][s2] == '1' || c[e1][e2] == '1')
//  	{
//  		cout << "NO";
//  		return 0;
//  	}
//  	que[1][1] = s1;
//  	que[1][2] = s2;
//  	int xx[5] = {0, -1, 0, 1, 0};
//  	int yy[5] = {0, 0, 1, 0, -1};
//  	while (head <= tail)
//  	{
//  		for (q = 1; q <= 4; ++q)
//  		{
//  			tx = que[head][1] + xx[q];
//  			ty = que[head][2] + yy[q];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= n &&
//  				c[tx][ty] == '0')
//  			{
//  				if (tx == e1 && ty == e2)
//  				{
//  					cout << "YES";
//  					return 0;
//  				}
//  				c[tx][ty] = '1';
//  				++tail;
//  				que[tail][1] = tx;
//  				que[tail][2] = ty;
//  			}
//  		}
//  		++head;
//  	}
//  	cout << "NO";
//  	return 0;
//  }

// 1434
//  short que[40000][3];
//  char c[101][101];
//  int main()
//  {
//  	int n, m, tot = 0, i, j, k;
//  	cin >> n >> m;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> c[i][j];
//  		}
//  	}
//  	int xx[5] = {0, -1, 0, 1, 0};
//  	int yy[5] = {0, 0, 1, 0, -1};
//  	int head = 1, tail = 1, tx, ty;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			if (c[i][j] == 'W')
//  			{
//  				++tot;
//  				head = tail = 1;
//  				que[tail][1] = i;
//  				que[tail][2] = j;
//  				while (head <= tail)
//  				{
//  					for (k = 1; k <= 4; ++k)
//  					{
//  						tx = que[head][1] + xx[k];
//  						ty = que[head][2] + yy[k];
//  						if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  							c[tx][ty] == 'W')
//  						{
//  							c[tx][ty] = '.';
//  							++tail;
//  							que[tail][1] = tx;
//  							que[tail][2] = ty;
//  						}
//  					}
//  					++head;
//  				}
//  			}
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// 1541_��Ȩ��BFS����_�ö����sum����洢��ĳ���������ֵ
//  int a[31][31], sum[31][31];
//  queue<pair<int, int>> que;
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> a[i][j];
//  			sum[i][j] = INT_MAX;
//  		}
//  	}
//  	int xx[5] = {0, 0, 1, 0, -1};
//  	int yy[5] = {0, 1, 0, -1, 0};
//  	int tx, ty, x, y;
//  	que.push(make_pair(1, 1));
//  	sum[1][1] = a[1][1];
//  	while (!que.empty())
//  	{
//  		x = que.front().first;
//  		y = que.front().second;
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				sum[x][y] + a[tx][ty] < sum[tx][ty])
//  			{
//  				sum[tx][ty] = sum[x][y] + a[tx][ty];
//  				que.push(make_pair(tx, ty));
//  			}
//  		}
//  		que.pop();
//  	}
//  	cout << sum[n][m];
//  	return 0;
//  }

// 1380
//  char a[101][101];
//  bool b[101][101];
//  queue<pair<int, int>> que;
//  int n, m;
//  int xx[5] = {0, 0, 1, 0, -1};
//  int yy[5] = {0, 1, 0, -1, 0};
//  int bfs(int x, int y, char c)
//  {
//  	int tx, ty, x1, y1, tot = 0, r;
//  	que.push(make_pair(x, y));
//  	while (!que.empty())
//  	{
//  		x1 = que.front().first;
//  		y1 = que.front().second;
//  		for (r = 1; r <= 4; ++r)
//  		{
//  			tx = x1 + xx[r];
//  			ty = y1 + yy[r];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				a[tx][ty] == c && !b[tx][ty])
//  			{
//  				++tot;
//  				que.push(make_pair(tx, ty));
//  				b[tx][ty] = true;
//  			}
//  		}
//  		que.pop();
//  	}
//  	return tot;
//  }
//  int main()
//  {
//  	int tot = 1;
//  	cin >> n >> m;
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= m; ++p)
//  		{
//  			cin >> a[q][p];
//  		}
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= m; ++p)
//  		{
//  			tot = max(tot, bfs(q, p, a[q][p]));
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// ��1381
//  int n, m, s;
//  long long a[110][110], sum[110][110];
//  int xx[5] = {0, 0, 1, 0, -1};
//  int yy[5] = {0, 1, 0, -1, 0};
//  queue<pair<int, int>> que;
//  void init()
//  {
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			sum[i][j] = -1;
//  		}
//  	}
//  }
//  long long bfs(int sx, int sy)
//  {
//  	sum[sx][sy] = a[sx][sy];
//  	int tx, ty, x, y, i, j;
//  	long long tot = 0;
//  	que.push(make_pair(sx, sy));
//  	while (!que.empty())
//  	{
//  		x = que.front().first;
//  		y = que.front().second;
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				a[tx][ty] > a[x][y] && sum[x][y] + a[tx][ty] >= sum[tx][ty])
//  			{
//  				sum[tx][ty] = sum[x][y] + a[tx][ty];
//  				tot = max(tot, sum[tx][ty]);
//  				que.push(make_pair(tx, ty));
//  			}
//  		}
//  		que.pop();
//  	}
//  	return tot;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	int i, j;
//  	long long ans = -1;
//  	cin >> n >> m >> s;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			s = (s * 345) % 19997;
//  			a[i][j] = s % 10 + 1;
//  			sum[i][j] = -1;
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			ans = max(ans, a[i][j]); //��������������ÿһ���㶼���ܽ��������ߣ���ֻ�ܿ�a����������Ԫ��
//  			ans = max(ans, bfs(i, j));
//  			init();
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1444_ԭ˼·������
//  char a[1001][1001];
//  int stepm[1001][1001];
//  int main()
//  {
//  	queue<int> xq;
//  	queue<int> yq;
//  	queue<int> fq;
//  	int n, m, s1, s2, e1, e2, j, k, x, y;
//  	cin >> n >> m;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		for (k = 1; k <= m; ++k)
//  		{
//  			cin >> a[j][k];
//  			stepm[j][k] = INT_MAX;
//  		}
//  	}
//  	cin >> s1 >> s2 >> e1 >> e2;
//  	int xx[5] = {0, -1, 0, 1, 0}, // ��������
//  		yy[5] = {0, 0, 1, 0, -1}, // 1 2 3 4
//  		tx, ty;
//  	xq.push(s1);
//  	yq.push(s2);
//  	fq.push(-1);
//  	stepm[s1][s2] = 0;
//  	while (!xq.empty())
//  	{
//  		x = xq.front();
//  		y = yq.front();
//  		for (k = 1; k <= 4; ++k)
//  		{
//  			tx = x + xx[k];
//  			ty = y + yy[k];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				a[tx][ty] == '0')
//  			{
//  				// a[tx][ty] = '1'; //������һ�о�WA�����Ӿ�MLE
//  				xq.push(tx);
//  				yq.push(ty);
//  				if (fq.front() == -1)
//  				{
//  					fq.push(k % 2);
//  					stepm[tx][ty] = 0;
//  				}
//  				else
//  				{
//  					if (k % 2 != fq.front())
//  					{
//  						stepm[tx][ty] = min(stepm[tx][ty], stepm[x][y] + 1);
//  						fq.push(k % 2);
//  					}
//  					else if (k % 2 == fq.front())
//  					{
//  						stepm[tx][ty] = min(stepm[tx][ty], stepm[x][y]);
//  						fq.push(fq.front());
//  					}
//  				}
//  				if (tx == e1 && ty == e2)
//  				{
//  					// for (x = 1; x <= n; ++x)
//  					// {
//  					// 	for (y = 1; y <= m; ++y)
//  					// 	{
//  					// 		cout << setw(11) << stepm[x][y];
//  					// 	}
//  					// 	printf("\n");
//  					// }
//  					cout << stepm[e1][e2];
//  					return 0;
//  				}
//  			}
//  		}
//  		xq.pop();
//  		yq.pop();
//  		fq.pop();
//  	}
//  	return 0;
//  }

// ��1444_����������ת��·��ģ����_�ǳ���Ҫ
// ��ͬ����ͨ�Ĺ��ѣ����ֹ�����ÿһ�С����ϵĹ��ѣ�������ÿ�����ϵĹ���
//  int a[1010][1010];
//  bool b[1010][1010];
//  int main()
//  {
//  	queue<int> xq;
//  	queue<int> yq;
//  	queue<int> sq;
//  	int n, m, s1, s2, e1, e2;
//  	int xx[5] = {0, 0, 1, 0, -1};
//  	int yy[5] = {0, 1, 0, -1, 0};
//  	cin >> n >> m;
//  	memset(a, -1, sizeof(a));
//  	//��ʼ��Ϊ-1��Ͳ����ж��Ƿ���߽��ˣ���Ϊ�߽�����Ϊ-1
//  	for (int i = 1; i <= n; i++)
//  	{
//  		for (int j = 1; j <= m; j++)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	cin >> s1 >> s2 >> e1 >> e2;
//  	//��ʼ��
//  	xq.push(s1);
//  	yq.push(s2);
//  	sq.push(0); //�������
//  	b[s1][s2] = true;
//  	int x, y;
//  	while (!xq.empty())
//  	{
//  		for (int i = 1; i <= 4; i++)
//  		{
//  			x = xq.front();
//  			y = yq.front(); //ÿ�εĳ�����
//  			//����һ����������ʱ����һ�������ߵ���
//  			while (a[x + xx[i]][y + yy[i]] == 0)
//  			{
//  				x = x + xx[i];
//  				y = y + yy[i];
//  				//�øõ����Ӧ�����ƶ�һ��
//  				if (b[x][y] == false) //����õ�û�з��ʹ����������
//  				{
//  					xq.push(x);
//  					yq.push(y);
//  					sq.push(sq.front() + 1);
//  					b[x][y] = true;
//  					if (x == e1 && y == e2)
//  					{
//  						cout << sq.back() - 1; //��Ϊ�ӵ�һ�С��п�ʼ�Ͷ����1���������ʱҪ�����1����
//  						return 0;
//  					}
//  				}
//  			}
//  		}
//  		xq.pop();
//  		yq.pop();
//  		sq.pop();
//  	}
//  	return 0;
//  }

// 2109
//  char c[501][501];
//  bool b[501][501];
//  long long int step[501][501];
//  int main()
//  {
//  	queue<int> xq;
//  	queue<int> yq;
//  	int n, m, people, i, j, e1, e2;
//  	cin >> n >> m >> people;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= m; ++j)
//  		{
//  			cin >> c[i][j];
//  			if (c[i][j] == 'S')
//  			{
//  				xq.push(i);
//  				yq.push(j);
//  				b[i][j] = true;
//  			}
//  			else if (c[i][j] == 'E')
//  			{
//  				e1 = i;
//  				e2 = j;
//  			}
//  		}
//  	}
//  	int xx[5] = {0, 0, 1, 0, -1},
//  		yy[5] = {0, 1, 0, -1, 0},
//  		tx, ty, x, y;
//  	while (!xq.empty())
//  	{
//  		x = xq.front();
//  		y = yq.front();
//  		for (i = 1; i <= 4; ++i)
//  		{
//  			tx = x + xx[i];
//  			ty = y + yy[i];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  				b[tx][ty] == false &&
//  				(c[tx][ty] == '.' || c[tx][ty] == 'E'))
//  			{
//  				b[tx][ty] = true;
//  				xq.push(tx);
//  				yq.push(ty);
//  				step[tx][ty] = step[x][y] + people;
//  				if (tx == e1 && ty == e2)
//  				{
//  					cout << step[tx][ty];
//  					return 0;
//  				}
//  			}
//  		}
//  		xq.pop();
//  		yq.pop();
//  	}
//  	cout << -1;
//  	return 0;
//  }

// 1803
//  int a[1001][1001], _map[1000001];
//  char c[1001][1001];
//  bool b[1001][1001];
//  int k = 1, n, m;
//  int xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  inline void bfs(int x_from, int y_from)
//  {
//  	int tx, ty, x, y, tot = 1;
//  	queue<int> xq, yq;
//  	int q;
//  	xq.push(x_from);
//  	yq.push(y_from);
//  	b[x_from][y_from] = true;
//  	a[x_from][y_from] = k;
//  	while (!xq.empty())
//  	{
//  		x = xq.front();
//  		y = yq.front();
//  		for (q = 1; q <= 4; ++q)
//  		{
//  			tx = x + xx[q];
//  			ty = y + yy[q];
//  			if (tx >= 1 && tx <= n && ty >= 1 && ty <= n &&
//  				!b[tx][ty] && c[x][y] != c[tx][ty])
//  			{
//  				b[tx][ty] = true;
//  				++tot;
//  				xq.push(tx);
//  				yq.push(ty);
//  				a[tx][ty] = k;
//  			}
//  		}
//  		xq.pop();
//  		yq.pop();
//  	}
//  	_map[k] = tot;
//  	++k;
//  }
//  int main()
//  {
//  	cin >> n >> m;
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= n; ++p)
//  		{
//  			cin >> c[q][p];
//  		}
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= n; ++p)
//  		{
//  			if (!b[q][p])
//  			{
//  				bfs(q, p);
//  				++k;
//  			}
//  		}
//  	}
//  	int x, y;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> x >> y;
//  		cout << _map[a[x][y]] << "\n";
//  	}
//  	return 0;
//  }

// �����Ż������ѽ���

// 2369_˫�����_�˰汾��ʹ��queue�������ʽ��ʹ����Ŀ������İ汾���ƶ�
// const int R = 310;
// struct Node
// {
// 	int x, y;
// };
// class Queue
// {
// public:
// 	int head, tail;
// 	Node q[R * R];
// 	inline bool empty()
// 	{
// 		return (head < tail);
// 	}
// 	inline void push(Node x)
// 	{
// 		++head;
// 		q[head] = x;
// 	}
// 	inline void pop()
// 	{
// 		++tail;
// 	}
// 	inline Node back()
// 	{
// 		return q[tail];
// 	}
// 	inline void clear()
// 	{
// 		head = 0;
// 		tail = 1;
// 	}
// 	inline int size()
// 	{
// 		return (head - tail + 1);
// 	}
// } q[2];
// int n, sx, sy, ex, ey, dis[2][R][R], // dis���ٲ���
// 	xx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2},
// 	yy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
// bool b[2][R][R];		  // b�Ƿ��߹�
// inline bool expand(int k) //�����ͷ���true�����򷵻�false
// {
// 	int x, y, tx, ty;
// 	x = q[k].back().x;
// 	y = q[k].back().y; // k==1�����յ������ k==0����������
// 	for (register int j = 1; j <= 8; ++j)
// 	{
// 		tx = x + xx[j];
// 		ty = y + yy[j];
// 		if (tx >= 0 && tx < n && ty >= 0 && ty < n &&
// 			!b[k][tx][ty])
// 		{
// 			b[k][tx][ty] = true;
// 			dis[k][tx][ty] = dis[k][x][y] + 1;
// 			q[k].push({tx, ty});
// 			if (b[1 - k][tx][ty])
// 			{
// 				cout << dis[k][tx][ty] + dis[1 - k][tx][ty] << "\n";
// 				return true;
// 			}
// 		}
// 	}
// 	q[k].pop();
// 	return false;
// }
// inline void bfs()
// {
// 	q[0].clear();
// 	q[1].clear();
// 	b[0][sx][sy] = true;
// 	b[1][ex][ey] = true;
// 	q[0].push({sx, sy});
// 	q[1].push({ex, ey});
// 	while (!q[0].empty() && !q[1].empty())
// 	{
// 		if (q[0].size() < q[1].size())
// 		{
// 			if (expand(0))
// 			{
// 				return;
// 			}
// 		}
// 		else if (expand(1))
// 		{
// 			return;
// 		}
// 	}
// }
// int main()
// {
// 	int T;
// 	cin >> T;
// 	while (T--)
// 	{
// 		memset(dis, 0, sizeof(dis));
// 		memset(b, 0, sizeof(b));
// 		cin >> n >> sx >> sy >> ex >> ey;
// 		if (sx == ex && sy == ey)
// 		{
// 			cout << "0\n";
// 		}
// 		else
// 		{
// 			bfs();
// 		}
// 	}
// 	return 0;
// }

// 2379_���ȶ���BFS_Dijkstra�Ķ��Ż�
// const int R = 1e5 + 10;
// struct Node
// {
// 	int point, len;
// 	bool operator<(const Node &x) const
// 	{
// 		return len > x.len; //�����ȶ����н��������򣬲���Ҫȡ
// 	}
// };
// vector<Node> a[R];
// bool b[R];
// int dis[R];
// priority_queue<Node> q;
// int main()
// {
// 	int n, m, x, y, len;
// 	cin >> n >> m;
// 	register int i, j;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y >> len;
// 		a[x].push_back({y, len});
// 	}
// 	int from, to, sz;
// 	memset(dis, 0x3f, sizeof(dis));
// 	dis[1] = 0;
// 	q.push({1, 0});
// 	while (!q.empty())
// 	{
// 		from = q.top().point;
// 		b[from] = true;
// 		sz = a[from].size();
// 		for (j = 0; j < sz; ++j)
// 		{
// 			to = a[from][j].point;
// 			if (!b[to] && a[from][j].len + dis[from] < dis[to])
// 			{
// 				dis[to] = a[from][j].len + dis[from];
// 				q.push({to, dis[to]});
// 			}
// 		}
// 		q.pop();
// 	}
// 	if (dis[n] != 0x3f3f3f3f)
// 	{
// 		cout << dis[n];
// 	}
// 	else
// 	{
// 		cout << "-1";
// 	}
// 	return 0;
// }

// 2380_˫�˶���BFS
//  const int R = 510;
//  struct Node
//  {
//  	int x, y;
//  };
//  deque<Node> q;
//  char c[R][R];
//  bool b[R][R];
//  int dis[R][R],
//  	xx[5] = {0, 0, 1, 0, -1},
//  	yy[5] = {0, 1, 0, -1, 0};
//  int main()
//  {
//  	int n, m, x, y, tx, ty, x1, y1, x2, y2, len;
//  	register int i, j;
//  	while (true)
//  	{
//  		q.clear();
//  		memset(b, 0, sizeof(b));
//  		memset(c, 0, sizeof(c));
//  		memset(dis, 0x3f, sizeof(dis));
//  		cin >> n >> m;
//  		if (n == 0 && m == 0)
//  			break;
//  		for (i = 1; i <= n; ++i)
//  			for (j = 1; j <= m; ++j)
//  				cin >> c[i][j];
//  		cin >> x1 >> y1 >> x2 >> y2;
//  		dis[x1][y1] = 0;
//  		q.push_front({x1, y1});
//  		while (!q.empty())
//  		{
//  			x = q.front().x;
//  			y = q.front().y;
//  			q.pop_front(); //������������ӣ�������ѭ���Ľ�β����Ϊ��ȡ����ͷ˵���õ��Ѿ�ȷ���������������ᱻ�����push_front��������ѹ�ض��У����һ�����ָ�ѹ��Ӿͳ��ӵ����
//  			if (x == x2 && y == y2)
//  				break; //�˴���Ҫ���ѭ����ͷ��q.clear()����ʹ��
//  			b[x][y] = true;
//  			for (j = 1; j <= 4; ++j)
//  			{
//  				tx = x + xx[j];
//  				ty = y + yy[j];
//  				len = (c[x][y] == c[tx][ty] ? 0 : 1);
//  				if (!b[tx][ty] &&
//  					tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
//  					dis[x][y] + len < dis[tx][ty])
//  				{
//  					dis[tx][ty] = dis[x][y] + len;
//  					if (len == 0)
//  						q.push_front({tx, ty});
//  					else
//  						q.push_back({tx, ty});
//  				}
//  			}
//  		}
//  		cout << dis[x2][y2] << "\n";
//  	}
//  	return 0;
//  }

// 2461
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
//  bool b[R];
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
//  		v[x].push_back({y, len});
//  		v[y].push_back({x, len});
//  	}
//  	for (i = 1; i <= p; ++i) //ö�������յ㣬���յ���Ϊ��ʼ��
//  	{
//  		memset(b, 0, sizeof(b));
//  		memset(dis, 0x3f, sizeof(dis));
//  		temp = 0;
//  		dijkstra(i);
//  		for (j = 1; j <= p; ++j)
//  		{
//  			temp += start[j] * dis[j]; //ÿ��������ж������0������ţ������Ҫ�˾���
//  		}
//  		ans = min(ans, temp);
//  	}
//  	cout << ans;
//  	return 0;
//  }

// ָ����ṹ��

// 1414
//  struct Student
//  {
//  	int num;
//  	string name;
//  	int score;
//  } s[101];
//  bool cmp(Student a, Student b)
//  {
//  	if (a.score > b.score)
//  	{
//  		return true;
//  	}
//  	if (a.score == b.score)
//  	{
//  		if (a.num < b.num)
//  		{
//  			return true;
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int n, q;
//  	cin >> n;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> s[q].num >> s[q].name >> s[q].score;
//  	}
//  	sort(s + 1, s + n + 1, cmp);
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cout << s[q].num << ' ' << s[q].name << ' ' << s[q].score << '\n';
//  	}
//  	return 0;
//  }

// 1498
//  struct Node
//  {
//  	string name;
//  	int count;
//  } s[1001];
//  bool cmp(Node a, Node b)
//  {
//  	if (a.count > b.count)
//  	{
//  		return true;
//  	}
//  	else if (a.count == b.count)
//  	{
//  		if (a.name > b.name)
//  		{
//  			return true;
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int n, i, j, num = 0;
//  	bool b;
//  	string t;
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		b = false;
//  		cin >> t;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (s[j].name == t)
//  			{
//  				++s[j].count;
//  				b = true;
//  				break;
//  			}
//  		}
//  		if (b == false)
//  		{
//  			++num;
//  			s[num].name = t;
//  			++s[num].count;
//  		}
//  	}
//  	sort(s + 1, s + num + 1, cmp);
//  	cout << s[1].name;
//  	return 0;
//  }

// 1499
//  struct Node
//  {
//  	string name;
//  	int count;
//  } s[1001];
//  bool cmp(Node a, Node b)
//  {
//  	if (a.count > b.count)
//  	{
//  		return true;
//  	}
//  	else if (a.count == b.count)
//  	{
//  		if (a.name > b.name)
//  		{
//  			return true;
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	int n, i, j, num = 0;
//  	bool b;
//  	string t;
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		b = false;
//  		cin >> t;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (s[j].name == t)
//  			{
//  				++s[j].count;
//  				b = true;
//  				break;
//  			}
//  		}
//  		if (b == false)
//  		{
//  			++num;
//  			s[num].name = t;
//  			++s[num].count;
//  		}
//  	}
//  	sort(s + 1, s + num + 1, cmp);
//  	for (i = 1; i <= num; ++i)
//  	{
//  		cout << s[i].name << ' ' << s[i].count << endl;
//  	}
//  	return 0;
//  }

// 1315
//  struct Player
//  {
//  	string num;
//  	int a[6];
//  	double avg;
//  } s[101];
//  bool cmp(Player a, Player b)
//  {
//  	if (a.avg > b.avg)
//  	{
//  		return true;
//  	}
//  	else
//  	{
//  		return false;
//  	}
//  }
// double average(int k)
// {
// 	int p;
// 	double sum = 0.0;
// 	sort(s[k].a + 1, s[k].a + 6);
// 	for (p = 2; p <= 4; ++p)
// 	{
// 		sum += s[k].a[p];
// 	}
// 	return sum / 3.0;
// 	//��
// 	// int mi, ma;
// 	// for (p = 1; p <= 5; ++p)
// 	// {
// 	// 	mi = INT_MAX;
// 	// 	ma = INT_MIN;
// 	// 	sum += s[k].a[p];
// 	// }
// 	// return (s - mi - ma) / 3.0;
// }
// int main()
// {
// 	int n, q;
// 	cin >> n;
// 	for (q = 1; q <= n; ++q)
// 	{
// 		cin >> s[q].num >>
// 			s[q].a[1] >> s[q].a[2] >> s[q].a[3] >> s[q].a[4] >> s[q].a[5];
// 		s[q].avg = average(q);
// 	}
// 	sort(s + 1, s + n + 1, cmp);
// 	for (q = 1; q <= 3; ++q)
// 	{
// 		cout << s[q].num << ' ';
// 		cout << fixed << setprecision(3) << s[q].avg << "\n";
// 	}
// 	return 0;
// }

// 1372
//  struct Act
//  {
//  	short begin, end;
//  } s[101];
//  bool cmp(Act a, Act b)
//  {
//  	if (a.end < b.end)
//  	{
//  		return true;
//  	}
//  	else
//  	{
//  		return false;
//  	}
//  }
//  int main()
//  {
//  	int n, q, tot = 0, end;
//  	cin >> n;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> s[q].begin >> s[q].end;
//  	}
//  	sort(s + 1, s + n + 1, cmp);
//  	end = s[1].end;
//  	++tot;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (s[q].begin >= end)
//  		{
//  			end = s[q].end;
//  			++tot;
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// 1346
//  struct Pic
//  {
//  	double x, y;
//  	double ratio;
//  } a[101];
//  int main()
//  {
//  	double x, y, t, diff = DBL_MAX, rat;
//  	int n, q, place = 1;
//  	cin >> x >> y >> n;
//  	rat = (double)x / y;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q].x >> a[q].y;
//  		a[q].ratio = (double)a[q].x / a[q].y;
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		t = abs(rat - a[q].ratio);
//  		// cout << t << "\n";
//  		if (t < diff)
//  		{
//  			diff = t;
//  			place = q;
//  		}
//  		else if (t == diff)
//  		{
//  			if (a[q].x * a[q].y < a[place].x * a[q].y)
//  			{
//  				place = q;
//  			}
//  		}
//  	}
//  	cout << a[place].x << ' ' << a[place].y;
//  	return 0;
//  }

// 1347
// struct Anim
// {
// 	double x, y, diff;
// } a[101];
// bool cmp(Anim a, Anim b)
// {
// 	if (a.diff < b.diff)
// 	{
// 		return true;
// 	}
// 	else if (a.diff == b.diff)
// 	{
// 		if (sqrt(pow(a.x, 2) + pow(a.y, 2)) <
// 			sqrt(pow(b.x, 2) + pow(b.y, 2)))
// 		{
// 			return true;
// 		}
// 	}
// 	return false;
// }
// int main()
// {
// 	double x, y;
// 	int n, k;
// 	cin >> x >> y >> n;
// 	for (k = 1; k <= n; ++k)
// 	{
// 		cin >> a[k].x >> a[k].y;
// 		if (a[k].x == x && a[k].y == y)
// 		{
// 			a[k].diff = DBL_MAX;
// 		}
// 		else
// 		{
// 			a[k].diff = sqrt(pow(x - a[k].x, 2) + pow(y - a[k].y, 2));
// 		}
// 	}
// 	sort(a + 1, a + n + 1, cmp);
// 	cout << a[1].x << ' ' << a[1].y;
// 	return 0;
// }

// 1482
//  struct Pea
//  {
//  	int x, y, num;
//  } s[401];
//  int a[21][21];
//  bool cmp(Pea a, Pea b)
//  {
//  	return a.num > b.num;
//  }
//  int main()
//  {
//  	int m, n, k, i, j, tot = 0, ans = 0, time;
//  	cin >> m >> n >> k;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			cin >> a[i][j];
//  			if (a[i][j] != 0)
//  			{
//  				++tot;
//  				s[tot].x = i;
//  				s[tot].y = j;
//  				s[tot].num = a[i][j];
//  			}
//  		}
//  	}
//  	sort(s + 1, s + 1 + tot, cmp);
//  	int s1, s2, e1, e2, mdis;
//  	--k; //·�ϵ����ﻨ��һ������
//  	s1 = 1;
//  	s2 = s[1].y; //���뻨����󣬴ӵ�һ�У���y�п�ʼ
//  	for (i = 1; i <= tot; ++i)
//  	{
//  		e1 = s[i].x;
//  		e2 = s[i].y;
//  		mdis = abs(s1 - e1) + abs(s2 - e2); //�����پ���
//  		k -= mdis;	 //�ƶ�ʱ��
//  		--k;		 //��ժʱ��
//  		if (k >= e1) //��Ϊ���Ҫ���ص�·�ϣ������ж�k�Ƿ���ڵ��ڵ�ǰ�У�����˵�����Լ���
//  		{
//  			ans += a[e1][e2];
//  			s1 = e1;
//  			s2 = e2;
//  		}
//  		else //�������û��ʱ�䷵���ˣ�����ֹ����
//  		{
//  			cout << ans;
//  			return 0;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1330
//  bool cmp(double a, double b)
//  {
//  	return a > b;
//  }
//  int main()
//  {
//  	int n, a, b, h, i;
//  	vector<double> s;
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a >> b >> h;
//  		s.push_back((a + b) * h / 2.0);
//  	}
//  	sort(s.begin(), s.end(), cmp);
//  	cout << fixed << setprecision(1) << s[0];
//  	return 0;
//  }

// STL_vector

// 1500
//  vector<int> a[100001];
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	int i, j, x, y, s;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		sort(a[i].begin(), a[i].end());
//  		s = a[i].size();
//  		cout << s << ' ';
//  		for (j = 0; j < s; ++j)
//  		{
//  			cout << a[i][j] << ' ';
//  		}
//  		cout << "\n";
//  	}
//  	return 0;
//  }

// 1503
//  vector<int> a[1001];
//  int main()
//  {
//  	int n, m, t, t2;
//  	cin >> n;
//  	int i, j, x, y, s;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> t;
//  		for (j = 1; j <= t; ++j)
//  		{
//  			cin >> t2;
//  			a[i].push_back(t2);
//  		}
//  		sort(a[i].begin(), a[i].end());
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  	}
//  	sort(a + 1, a + n + 1);
//  	for (i = 1; i <= n; ++i)
//  	{
//  		s = a[i].size();
//  		for (j = 0; j < s; ++j)
//  		{
//  			cout << a[i][j] << ' ';
//  		}
//  		cout << "\n";
//  	}
//  	return 0;
//  }

// STL_stack

// 1415
//  void _10tox(int a, int x)
//  {
//  	if (a == 0)
//  	{
//  		cout << 0;
//  		return;
//  	}
//  	else
//  	{
//  		string res;
//  		stack<char> sta;
//  		string ch = "0123456789ABCDEF";
//  		while (a != 0)
//  		{
//  			sta.push(ch[a % x]);
//  			a = a / x;
//  		}
//  		while (!sta.empty())
//  		{
//  			cout << sta.top();
//  			sta.pop();
//  		}
//  	}
//  }
//  int main()
//  {
//  	unsigned int a, x;
//  	cin >> a >> x;
//  	_10tox(a, x);
//  	return 0;
//  }

// ��̬�滮DP

// 1216
//  int a[101][101], dp[101][101], n;
//  void f_dp()
//  {
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		dp[n][q] = a[n][q];
//  	}
//  	for (q = n - 1; q >= 1; --q)
//  	{
//  		for (p = 1; p <= q; ++p)
//  		{
//  			dp[q][p] = a[q][p] + max(dp[q + 1][p], dp[q + 1][p + 1]);
//  		}
//  	}
//  }
//  int f_r_dp(int x, int y) //�ݹ�ʵ��
//  {
//  	if (x == n)
//  	{
//  		return a[x][y];
//  	}
//  	else
//  	{
//  		if (dp[x][y] != -1)
//  		{
//  			return dp[x][y];
//  		}
//  		else
//  		{
//  			if (dp[x][y] == -1)
//  			{
//  				dp[x][y] = a[x][y] + max(f_r_dp(x + 1, y), f_r_dp(x + 1, y + 1));
//  				return dp[x][y];
//  			}
//  			else //�Ѿ���������仯����
//  			{
//  				return dp[x][y];
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= i; ++j)
//  		{
//  			cin >> a[i][j];
//  			dp[i][j] = -1;
//  		}
//  	}
//  	f_dp();
//  	// f_r_dp(1, 1);
//  	cout << dp[1][1];
//  	return 0;
//  }

// 1589
//  int a[101], n, dp[101], maxn = INT_MIN;
//  int main()
//  {
//  	int i;
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i];
//  	}
//  	dp[1] = a[1];
//  	for (i = 2; i <= n; ++i)
//  	{
//  		dp[i] = max(dp[i - 1] + a[i], a[i]);
//  		maxn = max(maxn, dp[i]);
//  	}
//  	cout << maxn;
//  	return 0;
//  }

// 1794
//  int a[10001], dp[10001];
//  int main()
//  {
//  	int n, ans = 0;
//  	cin >> n;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i];
//  		dp[i] = 1;
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j < i; ++j) //���Բ�д<=����Ϊ��if�����a[j]<a[i]һ��Ϊfalse
//  		{
//  			if (a[j] < a[i])
//  			{
//  				dp[i] = max(dp[j] + 1, dp[i]);
//  			}
//  		}
//  		ans = max(ans, dp[i]);
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1795
//  int a[1001], dp[1001];
//  int main()
//  {
//  	int n, ans = 0;
//  	cin >> n;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i];
//  		dp[i] = 1;
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j < i; ++j) //Ҫ��С�ںţ���Ϊ�������<=��dp[i]����Ҳ�ᱻ���ȥ����if������õ���<=
//  		{
//  			if (a[i] <= a[j]) //�����ҪС�ڵ���ǰ���
//  			{
//  				dp[i] = max(dp[j] + 1, dp[i]);
//  			}
//  		}
//  		ans = max(ans, dp[i]);
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1276
//  int a[201][201], dp[201], res[201];
//  int main()
//  {
//  	int n, i, j, x, y, temp = -1, p, ans;
//  	cin >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i][i];
//  	}
//  	while (true)
//  	{
//  		cin >> x >> y;
//  		if (x == 0 && y == 0)
//  		{
//  			break;
//  		}
//  		else
//  		{
//  			a[x][y] = 1;
//  			a[y][x] = 1;
//  		}
//  	}
//  	dp[n] = a[n][n];
//  	for (i = n - 1; i >= 1; --i)
//  	{
//  		temp = 0;
//  		p = 0;
//  		for (j = n; j > i; --j)
//  		{
//  			if (a[i][j] == 1 && dp[j] > temp)
//  			{
//  				temp = dp[j];
//  				p = j;
//  			}
//  		}
//  		dp[i] = a[i][i] + temp;
//  		res[i] = p;
//  	}
//  	temp = 0;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		if (dp[i] > temp)
//  		{
//  			temp = dp[i];
//  			p = i;
//  		}
//  	}
//  	ans = dp[p];
//  	while (p != 0)
//  	{
//  		cout << p;
//  		p = res[p];
//  		if (p != 0)
//  		{
//  			cout << '-';
//  		}
//  	}
//  	cout << "\n"
//  		 << ans;
//  	return 0;
//  }

// 1282
//  int w[101], v[101], dp[101][20001];
//  int main()
//  {
//  	int maxw, n;
//  	cin >> maxw >> n;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w[i] >> v[i];
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= maxw; ++j)
//  		{
//  			if (j >= w[i])
//  			{
//  				dp[i][j] = max(v[i] + dp[i - 1][j - w[i]],
//  							   dp[i - 1][j]);
//  			}
//  			else
//  			{
//  				dp[i][j] = dp[i - 1][j];
//  			}
//  		}
//  	}
//  	cout << dp[n][maxw];
//  	return 0;
//  }

// 1893
//  int a[100001], dp[100001];
//  inline int search(int k, int range)
//  {
//  	int left = 1, right = range, mid;
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (dp[mid] >= k)
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
//  	int n, tot = 1;
//  	cin >> n;
//  	int q, j, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q];
//  	}
//  	dp[1] = a[1];
//  	for (q = 2; q <= n; ++q)
//  	{
//  		if (a[q] > dp[tot])
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
//  	cout << tot;
//  	return 0;
//  }

// 1821
//  const int R = 1001;
//  int p1[R], p2[R], dp[R][R];
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int q, p;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> p1[q];
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> p2[q];
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		for (p = 1; p <= n; ++p)
//  		{
//  			if (p1[q] == p2[p])
//  			{
//  				dp[q][p] = dp[q - 1][p - 1] + 1;
//  			}
//  			else
//  			{
//  				dp[q][p] = max(dp[q - 1][p], dp[q][p - 1]);
//  			}
//  		}
//  	}
//  	cout << dp[n][n];
//  	return 0;
//  }

// 1780
//  const int R = 2001;
//  int w[R], v[R], dp[100001];
//  int main()
//  {
//  	int c, n;
//  	int i, j;
//  	cin >> c >> n;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w[i] >> v[i];
//  		for (j = 1; j <= c; ++j)
//  		{
//  			if (j >= w[i])
//  			{
//  				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//  			}
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// ��1889_�����������ƻ�
// �磺������7ת��Ϊ1+2+4����Щ���ܹ�����0~7֮����κ�һ������0���ǲ�ѡ��
//  const int R = 15001;
//  int w[R], v[R], dp[2001];
//  int main()
//  {
//  	int n, c, wa, va, s;
//  	int i, j, tot = 0, t;
//  	cin >> n >> c;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> wa >> va >> s;
//  		t = 1;
//  		while (t <= s)
//  		{
//  			++tot;
//  			w[tot] = t * wa;
//  			v[tot] = t * va;
//  			s -= t;
//  			t *= 2; //�����ƻ�
//  		}
//  		if (s != 0)
//  		{
//  			++tot;
//  			w[tot] = s * wa;
//  			v[tot] = s * va;
//  		}
//  	}
//  	for (i = 1; i <= tot; ++i)
//  	{
//  		for (j = c; j >= w[i]; --j)
//  		{
//  			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// 1905
//  const int R = 20001;
//  int w[R], v[R], s[R], dp[1001];
//  int main()
//  {
//  	int n, c, wa, va, sa, tot = 0, t = 1;
//  	cin >> n >> c;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> wa >> va >> sa;
//  		if (sa > 0)
//  		{
//  			t = 1;
//  			while (t <= sa)
//  			{
//  				++tot;
//  				w[tot] = t * wa;
//  				v[tot] = t * va;
//  				s[tot] = -1;
//  				sa -= t;
//  				t *= 2;
//  			}
//  			if (sa > 0)
//  			{
//  				++tot;
//  				w[tot] = sa * wa;
//  				v[tot] = sa * va;
//  				s[tot] = -1;
//  			}
//  		}
//  		else
//  		{
//  			++tot;
//  			w[tot] = wa;
//  			v[tot] = va;
//  			s[tot] = sa;
//  		}
//  	}
//  	for (i = 1; i <= tot; ++i)
//  	{
//  		if (s[i] == -1) // 01
//  		{
//  			for (j = c; j >= w[i]; --j)
//  			{
//  				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//  			}
//  		}
//  		else // completely
//  		{
//  			for (j = w[i]; j <= c; ++j)
//  			{
//  				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//  			}
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// 2075
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

// 2076
//  struct Node
//  {
//  	int w, v, num;
//  };
//  vector<Node> a;
//  int dp[10010];
//  int main()
//  {
//  	int n, m, t, w, v, num;
//  	cin >> n >> m;
//  	int q, i, j;
//  	a.push_back({0, 0, 0});
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w >> v >> num;
//  		if (num == 0)
//  		{
//  			a.push_back({w, v, num});
//  		}
//  		else
//  		{
//  			t = 1;
//  			while (num >= t)
//  			{
//  				a.push_back({w * t, v * t, t});
//  				num -= t;
//  				t *= 2;
//  			}
//  			if (num != 0)
//  			{
//  				a.push_back({w * num, v * num, num});
//  			}
//  		}
//  	}
//  	int s = a.size();
//  	for (i = 1; i <= s; ++i)
//  	{
//  		// printf("%d %d %d\n", a[i].w, a[i].v, a[i].num);
//  		if (a[i].num == 0) //��ȫ����
//  		{
//  			for (j = a[i].w; j <= m; ++j)
//  			{
//  				dp[j] = max(dp[j], dp[j - a[i].w] + a[i].v);
//  			}
//  		}
//  		else //���ر���
//  		{
//  			for (j = m; j >= a[i].w; --j)
//  			{
//  				dp[j] = max(dp[j], dp[j - a[i].w] + a[i].v);
//  			}
//  		}
//  	}
//  	cout << dp[m];
//  	return 0;
//  }

// 1949_���Ҫ���ѡ��Щ��Ʒ������û���Ż���dp���飬�������ʱ���ж��Ƿ�ѡ�������Ʒ
//  int dp[110][110][110];
//  int main()
//  {
//  	int mw, mv, n, w[110] = {0}, v[110] = {0}, c[110] = {0};
//  	cin >> mw >> mv >> n;
//  	int i, j, k;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w[i] >> v[i] >> c[i];
//  	}
//  	for (i = n; i >= 1; --i)
//  	{
//  		for (j = 0; j <= mw; ++j)
//  		{
//  			for (k = 0; k <= mv; ++k)
//  			{
//  				dp[i][j][k] = dp[i + 1][j][k];
//  				if (j >= w[i] && k >= v[i])
//  				{
//  					dp[i][j][k] = max(dp[i][j][k], dp[i + 1][j - w[i]][k - v[i]] + c[i]);
//  				}
//  			}
//  		}
//  	}
//  	cout << dp[1][mw][mv] << "\n";
//  	j = mw;
//  	k = mv;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		if (j >= w[i] && k >= v[i] && dp[i][j][k] == dp[i + 1][j - w[i]][k - v[i]] + c[i])
//  		{
//  			cout << i << ' ';
//  			j -= w[i];
//  			k -= v[i];
//  		}
//  	}
//  	return 0;
//  }

// 1928_�������ı��������ò��鼯ά��
//  struct
//  {
//  	int w, v;
//  } a[10010];
//  int dp[10010];
//  int fa[10010];
//  int find(int x)
//  {
//  	int t = x;
//  	while (fa[x] != x)
//  	{
//  		x = fa[x];
//  	}
//  	fa[t] = x;
//  	return x;
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
//  	int q, j, tot = 0;
//  	for (q = 1; q <= 10000; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	int n, m, c;
//  	cin >> n >> m >> c;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> a[q].w >> a[q].v;
//  	}
//  	int x, y;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> x >> y;
//  		merge(x, y);
//  	}
//  	int root;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (fa[q] != q)
//  		{
//  			root = find(q);
//  			a[root].w = a[root].w + a[q].w;
//  			a[root].v = a[root].v + a[q].v;
//  			a[q].w = a[q].v = 0;
//  		}
//  	}
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (a[q].w && a[q].v)
//  		//���������ж�Ҳ�������Ϊ�����Ѿ��Բ��Ǹ���Ԫ��������
//  		{
//  			for (j = c; j >= a[q].w; --j)
//  			{
//  				dp[j] = max(dp[j], dp[j - a[q].w] + a[q].v);
//  			}
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// 1820
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

// 1890
//  using ll = long long;
//  ll dp[10010];
//  int main()
//  {
//  	ll n, c, w;
//  	ll i, j;
//  	cin >> n >> c;
//  	dp[0] = 1;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w;
//  		for (j = c; j >= w; --j)
//  		{
//  			dp[j] = dp[j] + dp[j - w];
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// 1904
//  int dp[10010];
//  int main()
//  {
//  	int n, c, a;
//  	cin >> n >> c;
//  	int i, j;
//  	dp[0] = 1;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a;
//  		for (j = c; j >= a; --j)
//  		{
//  			dp[j] = dp[j] + dp[j - a];
//  		}
//  	}
//  	cout << dp[c];
//  	return 0;
//  }

// 1892
//  int a[7] = {0, 1, 2, 3, 5, 10, 20};
//  int w[1210];
//  int dp[1010];
//  int main()
//  {
//  	int tot = 0, t, maxn = 0;
//  	register int i, j;
//  	for (i = 1; i <= 6; ++i)
//  	{
//  		cin >> t;
//  		for (j = 1; j <= t; ++j)
//  		{
//  			++tot;
//  			w[tot] = a[i];
//  			maxn += a[i];
//  		}
//  	}
//  	dp[0] = 1;
//  	for (i = 1; i <= tot; ++i)
//  	{
//  		for (j = maxn; j >= w[i]; --j)
//  		{
//  			dp[j] = dp[j] + dp[j - w[i]];
//  		}
//  	}
//  	int ans = 0;
//  	for (j = 1; j <= maxn; ++j)
//  	{
//  		if (dp[j] != 0)
//  		{
//  			++ans;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// ��1911
//  const int MOD = 1e9 + 7;
//  int dp[1010], cnt[1010];
//  int main()
//  {
//  	int n, c, w, v, choose, u_choose;
//  	cin >> n >> c;
//  	register int i, j;
//  	// cnt[0] = 1;
//  	/*
//  	��������д
//  	cnt�����¼����dp�����Ӧ�ķ�����
//  	����dp[10]=0����Ҫ����������10����ֵΪ0����1�ַ������������κ���Ʒ�����Զ�Ҫ��ʼ��Ϊ1
//  	*/
//  	for (j = 0; j <= c; ++j)
//  	{
//  		cnt[j] = 1;
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> w >> v;
//  		for (j = c; j >= w; --j)
//  		{
//  			u_choose = dp[j];
//  			choose = dp[j - w] + v;
//  			dp[j] = max(u_choose, choose);
//  			if (choose > u_choose) //���ѡ���˽�����󣬷���������Ҫ��ӽϴ��
//  			{
//  				cnt[j] = cnt[j - w];
//  			}
//  			else if (choose == u_choose) //���ѡ��ѡ��һ������˵��ѡ��ѡ�ķ��������ǿ��Եģ�����Ҫ������
//  			{
//  				cnt[j] = cnt[j] + cnt[j - w];
//  			}
//  			//����ѡ������󣬾���Ӳ�ѡ�ķ�����������������
//  			cnt[j] = cnt[j] % MOD;
//  		}
//  	}
//  	cout << cnt[c];
//  	return 0;
//  }

// ����DP

// 2569
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
//  		dp[x][0] += max(dp[to][0], dp[to][1]); //��ѡ��ǰ�㣬�ӽ��ѡ��ѡ����
//  		dp[x][1] += dp[to][0];				   //ѡ��ǰ�㣬�ӽ��ֻ�ܲ�ѡ
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
//  	cout << max(dp[root][0], dp[root][1]); //��ӡ���Ǹ������ȡ�õ����ֵ����Ϊdfs�н��е���pushup�����������ӽ����¸���㣩
//  	return 0;
//  }

// 2570
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int to, len;
//  };
//  vector<Node> v[R];
//  int dfs(int x, int fa, int &ans)
//  {
//  	int md1 = 0, md2 = 0, to, sz = v[x].size(), dis;
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		to = v[x][j].to;
//  		if (to != fa)
//  		{
//  			dis = v[x][j].len + dfs(to, x, ans);
//  			if (dis > md1)
//  			{
//  				md2 = md1;
//  				md1 = dis;
//  			}
//  			else if (dis > md2)
//  			{
//  				md2 = dis;
//  			}
//  		}
//  	}
//  	ans = max(ans, md1 + md2);
//  	return md1;
//  }
//  int main()
//  {
//  	int n, x, y, len, ans = 0;
//  	cin >> n;
//  	register int j;
//  	for (j = 1; j < n; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		v[x].push_back({y, len});
//  		v[y].push_back({x, len});
//  	}
//  	dfs(1, 0, ans);
//  	cout << ans;
//  	return 0;
//  }

// 2554_1
//  const int R = 5e4 + 10;
//  int sum[R], ans;
//  vector<int> v[R];
//  bitset<R> b;
//  int dfs(int x)
//  {
//  	int md1 = 0, md2 = 0, sz = v[x].size(), to, dis;
//  	b[x] = true;
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		to = v[x][j];
//  		dis = 1 + dfs(to);
//  		if (dis > md1)
//  		{
//  			md2 = md1;
//  			md1 = dis;
//  		}
//  		else if (dis > md2)
//  		{
//  			md2 = dis;
//  		}
//  	}
//  	ans = max(ans, md1 + md2);
//  	return md1;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	register int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 2; j <= n / i; ++j)
//  		{
//  			sum[i * j] += i; //ע��������+=i��i��Ϊ����ÿ����������
//  		}
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (sum[j] < j)
//  		{
//  			v[sum[j]].push_back(j);
//  		}
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (b[j] == false)
//  		{
//  			dfs(j);
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 2552
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

// 2555_ʹ��vector����_��ע��
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

// 2555_ʹ���ڽӱ����
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

// ��λDP

// 2571
//  int a[15];
//  int get(int l, int r)
//  {
//  	int res = 0;
//  	for (register int j = l; j >= r; --j)
//  		res = res * 10 + a[j];
//  	return res;
//  }
//  int pow10(int x)
//  {
//  	int res = 1;
//  	while (x--)
//  		res *= 10;
//  	return res;
//  }
//  int dp(int n, int x)
//  {
//  	if (n == 0)
//  		return 0;
//  	int k = 0;
//  	while (n) //��λ
//  	{
//  		a[++k] = n % 10;
//  		n /= 10;
//  	}
//  	int res = 0;
//  	for (register int j = k - !x /*!x����x==0������������жϡ����x==0���Ͳ��ܴ����λ��ʼѭ������Ҫ�ӵڶ���λ��ʼѭ��*/;
//  		 j >= 1; --j)
//  	{
//  		if (j != k) //��һλ�������λ
//  			res += (get(k, j + 1) - !x) * pow10(j - 1);
//  		if (a[j] == x) //���۵�jλ֮ǰ���������Ͻ�ȡ�����
//  			res += get(j - 1, 1) + 1;
//  		else if (x < a[j])
//  			res += pow10(j - 1);
//  		// else if(x>a[j])ʱ����0�����������ʡ�Բ�д
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int l, r;
//  	cin >> l >> r;
//  	for (register int j = 0; j <= 9; ++j)
//  		cout << dp(r, j) - dp(l - 1, j) << ' ';
//  	return 0;
//  }

// ���2558
// ����
//   int f[15][15], a[15]; // f[i][j]����iλ�����һλȡj���Եõ����ܷ�����
//   inline void nt()
//   {
//   	register int i, j, k;
//   	for (j = 0; j <= 9; ++j)
//   		f[1][j] = 1;
//   	for (i = 2; i <= 10; ++i)
//   		for (j = 0; j <= 9; ++j)
//   			for (k = j; k <= 9; ++k)
//   				f[i][j] += f[i - 1][k];
//   }
//   int dp(int n)
//   {
//   	if (n == 0)
//   		return 1;
//   	int k = 0;
//   	while (n)
//   	{
//   		a[++k] = n % 10;
//   		n /= 10;
//   	}
//   	int ans = 0, last = 0;
//   	register int i, j;
//   	for (i = k; i >= 1; --i)
//   	{
//   		for (j = last; j <= a[i] - 1; ++j) //�����Ͻ�ȡ
//   			ans += f[i][j];
//   		if (a[i] < last)
//   			break;
//   		last = a[i];
//   		if (i == 1) //�����һ��Ҳûbreak����˵�����������Ҳ�����㲻�ݼ������ʣ�����ans+1
//   			++ans;
//   	}
//   	return ans;
//   }
//   int main()
//   {
//   	nt();
//   	int l, r;
//   	while (cin >> l >> r)
//   		cout << dp(r) - dp(l - 1) << "\n";
//   	return 0;
//   }
// ���仯����
//  int dp[15][15], a[15];
//  int dfs(int p, int last, bool bd)
//  {
//  	if (p == 0)
//  		return 1;
//  	if (!bd && dp[p][last] != -1)
//  		return dp[p][last];
//  	int ans = 0, up = (bd ? a[p] : 9);
//  	for (register int j = last; j <= up; ++j)
//  		ans += dfs(p - 1, j, bd && j == up); //��һλ�����Ͻ磬��һλҲ�����Ͻ磬�ű�ʾ�����Ͻ�
//  	if (!bd) //��һλ�������Ͻ�ż�¼��
//  		dp[p][last] = ans;
//  	return ans;
//  }
//  inline int slv(int n)
//  {
//  	memset(dp, -1, sizeof(dp));
//  	int k = 0;
//  	while (n)
//  	{
//  		a[++k] = n % 10;
//  		n /= 10;
//  	}
//  	return dfs(k, 0, true); //���һλĬ�������Ͻ�
//  }
//  int main()
//  {
//  	int l, r;
//  	while (cin >> l >> r)
//  		cout << slv(r) - slv(l - 1) << "\n";
//  	return 0;
//  }

// ���2557
// ����
//   const int R = 40;
//   int f[R][R], a[R], tot, k, b;
//   int dp(int n)
//   {
//   	tot = 0;
//   	while (n)
//   	{
//   		a[++tot] = n % b;
//   		n /= b;
//   	}
//   	int ans = 0, x, c = 0;
//   	register int i, j;
//   	for (i = tot; i >= 1; --i)
//   	{
//   		x = a[i];
//   		if (x != 0)
//   		{
//   			ans += f[i - 1][k - c];
//   			if (x == 1)
//   			{
//   				++c; //�ù���1�ĸ���+1
//   				if (c == k)
//   				{
//   					++ans;
//   					break;
//   				}
//   			}
//   			else
//   			{
//   				ans += f[i - 1][k - c - 1];
//   				break; //�����˲���1�������һ�������������ˣ������ڼ���ѡ1�����֮���Ҫbreak��
//   			}
//   		}
//   	}
//   	return ans;
//   }
//   int main()
//   {
//   	register int i, j;
//   	for (i = 0; i < 40; ++i)
//   	{
//   		f[i][0] = 1;
//   	}
//   	for (i = 1; i < R; ++i)
//   	{
//   		for (j = 1; j <= i; ++j)
//   		{
//   			f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
//   			/*������3������ѡ2�������������������ѡ���ǻ��൱��2������ѡ2����
//   			�����������ѡ�����൱��2������ѡ1����������������������˼�룬��֮ǰĳ��������ļ��Ͽ���һ�����壬�ټ��������������*/
//   		}
//   	}
//   	int l, r;
//   	cin >> l >> r >> k >> b;
//   	cout << dp(r) - dp(l - 1);
//   	return 0;
//   }
// ����
//  const int R = 40;
//  int f[R][R], a[R], tot, k, b;
//  int dfs(int p, int c, bool bd) // c��ʾ��ʣ���ٸ�1���ܴﵽk��
//  {
//  	if (p == 0)
//  	{
//  		return (c == 0 ? 1 : 0);
//  	}
//  	if (!bd)
//  	{
//  		return f[p][c];
//  	}
//  	int ma = (!bd ? b - 1 : a[p]), ans = 0;
//  	for (register int j = 0; j <= min(ma, 1); ++j) //ÿһλֻ��ȡ0��1
//  	{
//  		ans += dfs(p - 1, c - j, bd && j == ma);
//  	}
//  	return ans;
//  }
//  int dp(int n)
//  {
//  	if (n == 0)
//  	{
//  		return 0;
//  	}
//  	tot = 0;
//  	while (n)
//  	{
//  		a[++tot] = n % b;
//  		n /= b;
//  	}
//  	return dfs(tot, k, true);
//  }
//  int main()
//  {
//  	register int i, j;
//  	for (i = 0; i < R; ++i)
//  	{
//  		f[i][0] = 1;
//  	}
//  	for (i = 1; i < R; ++i)
//  	{
//  		for (j = 1; j <= i; ++j)
//  		{
//  			f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
//  		}
//  	}
//  	int l, r;
//  	cin >> l >> r >> k >> b;
//  	cout << dp(r) - dp(l - 1);
//  	return 0;
//  }

// ���鼯

// 1921
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

// 1921_��ѭ��д��ѯ����
//  int fa[5010];
//  int find(int x)
//  {
//  	int t = x;
//  	while (fa[x] != x)
//  	{
//  		x = fa[x];
//  	}
//  	fa[t] = x;
//  	return x;
//  }
//  void merge(int x, int y)
//  {
//  	int fx = find(x), fy = find(y);
//  	fa[fy] = fx;
//  }
//  int main()
//  {
//  	int n, m, q, x, y, fx, fy;
//  	cin >> n >> m >> q;
//  	for (int j = 1; j <= n; ++j)
//  	{
//  		fa[j] = j;
//  	}
//  	for (int j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		merge(x, y);
//  	}
//  	for (int j = 1; j <= q; ++j)
//  	{
//  		cin >> x >> y;
//  		fx = find(x);
//  		fy = find(y);
//  		if (fx == fy)
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

// 1922
//  const int R = 1001;
//  int fa[R];
//  inline void init(int a)
//  {
//  	for (int q = 1; q <= a; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  }
//  inline int find(int x)
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
//  inline void merge(int x, int y)
//  {
//  	int xf = find(x),
//  		yf = find(y);
//  	if (xf != yf)
//  	{
//  		fa[xf] = yf;
//  	}
//  	return;
//  }
//  int main()
//  {
//  	int q, p, x, y;
//  	int town, n, tot, t;
//  	while (true)
//  	{
//  		cin >> town;
//  		if (town != 0)
//  		{
//  			cin >> n;
//  			init(town);
//  			for (q = 1; q <= n; ++q)
//  			{
//  				cin >> x >> y;
//  				merge(x, y);
//  			}
//  			tot = 0;
//  			for (q = 1; q <= town; ++q)
//  			{
//  				if (fa[q] == q)
//  				{
//  					++tot;
//  				}
//  			}
//  			// for (q = 1; q <= town; ++q)
//  			// {
//  			// 	cout << fa[q] << ' ';
//  			// }
//  			cout << tot - 1 << "\n";
//  		}
//  		else
//  		{
//  			break;
//  		}
//  	}
//  	return 0;
//  }

// 1923
//  const int R = 10001;
//  int fa[R];
//  int n, m, s, t;
//  struct City
//  {
//  	int x, y, len;
//  } a[20001];
//  inline void init()
//  {
//  	for (int q = 1; q <= n; ++q)
//  	{
//  		fa[q] = q;
//  	}
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
//  void merge(int x, int y)
//  {
//  	int fx = find(x),
//  		fy = find(y);
//  	if (fx != fy)
//  	{
//  		fa[fx] = fy;
//  	}
//  }
//  bool check(int mid)
//  {
//  	init();
//  	int q;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		if (a[q].len <= mid)
//  		{
//  			merge(a[q].x, a[q].y);
//  		}
//  	}
//  	int fs = find(s),
//  		ft = find(t);
//  	if (fs == ft)
//  	{
//  		return true;
//  	}
//  	else
//  	{
//  		return false;
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> m >> s >> t;
//  	int q, p;
//  	int left = INT_MAX, right = INT_MIN, mid;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> a[q].x >> a[q].y >> a[q].len;
//  		left = min(left, a[q].len);
//  		right = max(right, a[q].len);
//  	}
//  	while (left <= right)
//  	{
//  		mid = left + ((right - left) >> 1);
//  		if (check(mid))
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

// 1925
//  int fa[2001];
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
//  	cin >> n >> m;
//  	int q;
//  	int u = 2 * n;
//  	for (q = 1; q <= u; ++q)
//  	{
//  		fa[q] = q;
//  	}
//  	char t;
//  	int x, y;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> t >> x >> y;
//  		if (t == 'F')
//  		{
//  			merge(x, y);
//  		}
//  		else
//  		{
//  			merge(x, y + n);
//  			merge(y, x + n);
//  		}
//  	}
//  	int tot = 0;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (fa[q] == q)
//  		{
//  			++tot;
//  		}
//  	}
//  	cout << tot;
//  	return 0;
//  }

// 1930
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

// 1929
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

// 1931
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

// ��1926_��Ȩ���鼯ģ����
//  const int R = 30001;
//  int fa[R];	//�����
//  int dis[R]; //�����ľ���
//  int len[R]; //��i�еĳ���
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

// ͼ�Ļ�����ŷ��·

// 2052
//  int n, e;
//  int a[11][11];
//  bool b[11];
//  void dfs(int x)
//  {
//  	b[x] = true;
//  	cout << x << ' ';
//  	for (int i = 1; i <= n; ++i)
//  	{
//  		if (a[x][i] == 1 && b[i] == false)
//  		{
//  			dfs(i);
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> e;
//  	int i, x, y;
//  	for (i = 1; i <= e; ++i)
//  	{
//  		cin >> x >> y;
//  		a[x][y] = a[y][x] = 1;
//  	}
//  	dfs(1);
//  	return 0;
//  }

// 2053
//  short n, e, a[11][11];
//  bool b[11];
//  int que[200];
//  int main()
//  {
//  	cin >> n >> e;
//  	int i, x, y;
//  	for (i = 1; i <= e; ++i)
//  	{
//  		cin >> x >> y;
//  		a[x][y] = a[y][x] = 1;
//  	}
//  	int head = 1, tail = 1;
//  	cout << "1 ";
//  	que[1] = 1;
//  	b[1] = true;
//  	while (head <= tail)
//  	{
//  		for (i = 1; i <= n; ++i)
//  		{
//  			if (a[que[head]][i] == 1 && b[i] == false)
//  			{
//  				b[i] = true;
//  				cout << i << ' ';
//  				++tail;
//  				que[tail] = i;
//  			}
//  		}
//  		++head;
//  	}
//  	return 0;
//  }

// 2055
//  const int R = 21;
//  int a[R][R], d[R];
//  bool b[R];
//  int n, e, ans[R * 2], tot;
//  void dfs(int x)
//  {
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		if (a[x][q] == 1)
//  		{
//  			a[x][q] = 0;
//  			a[q][x] = 0;
//  			dfs(q);
//  		}
//  	}
//  	++tot;
//  	ans[tot] = x;
//  }
//  int main()
//  {
//  	cin >> n >> e;
//  	int q, x, y;
//  	for (q = 1; q <= e; ++q)
//  	{
//  		cin >> x >> y;
//  		++a[x][y];
//  		++a[y][x];
//  		++d[x];
//  		++d[y];
//  	}
//  	int s = 1;
//  	for (q = n; q >= 1; --q)
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
//  		cout << ans[q] << ' ';
//  	}
//  	return 0;
//  }

// 2054
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

// ͼ�����·

// 2048
//  const int INF = 0x3f3f3f3f;
//  const int R = 51;
//  int a[R][R];
//  int dis[R];
//  bool vis[R];
//  int main()
//  {
//  	int n, s;
//  	cin >> n >> s;
//  	int i, j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		for (j = 1; j <= n; ++j)
//  		{
//  			cin >> a[i][j];
//  		}
//  	}
//  	memset(dis, 0x3f, sizeof(dis));
//  	int sta;
//  	dis[s] = 0;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		sta = -1;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (!vis[j] && (sta == -1 || dis[j] < dis[sta]))
//  			{
//  				sta = j;
//  			}
//  		}
//  		vis[sta] = true;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			if (!vis[j] && a[sta][j] && dis[sta] + a[sta][j] < dis[j])
//  			{
//  				dis[j] = dis[sta] + a[sta][j];
//  			}
//  		}
//  	}
//  	for (i = 1; i <= n; ++i)
//  	{
//  		if (i != s)
//  		{
//  			if (dis[i] != INF)
//  			{
//  				cout << dis[i] << ' ';
//  			}
//  			else
//  			{
//  				cout << "-1 ";
//  			}
//  		}
//  	}
//  	return 0;
//  }

// 2047
// const int INF = 0x3f3f3f3f;
// const int R = 1001;
// int a[R][R];
// int r[R], dis[R];
// bool b[R];
// void print(int x)
// {
// 	if (r[x] != 0)
// 	{
// 		print(r[x]);
// 	}
// 	cout << x << ' ';
// }
// int main()
// {
// 	int n, m, s, t, x, y, len, i, j;
// 	cin >> n >> m >> s >> t;
// 	for (i = 1; i <= m; ++i)
// 	{
// 		cin >> x >> y >> len;
// 		if (a[x][y] == 0 || len < a[x][y])
// 		{
// 			a[x][y] = len;
// 			a[y][x] = len;
// 		}
// 	}
// 	memset(dis, 0x3f, sizeof(dis));
// 	int st;
// 	dis[s] = 0; //��Ҫ���˸�����ʼ��
// 	for (i = 1; i <= n; ++i)
// 	{
// 		st = -1;
// 		for (j = 1; j <= n; ++j)
// 		{
// 			if (!b[j] && (st == -1 || dis[j] < dis[st]))
// 			{
// 				st = j;
// 			}
// 		}
// 		b[st] = true;
// 		for (j = 1; j <= n; ++j)
// 		{
// 			if (!b[j] && a[st][j] != 0 && dis[st] + a[st][j] < dis[j])
// 			{
// 				dis[j] = dis[st] + a[st][j];
// 				r[j] = st;
// 			}
// 		}
// 	}
// 	if (dis[t] != INF)
// 	{
// 		cout << dis[t] << "\n";
// 		print(t);
// 	}
// 	else
// 	{
// 		cout << "can't arrive";
// 	}
// 	return 0;
// }

// ��2080_�ڽӱ�Ĵ洢ģ����
//  struct Node
//  {
//  	int last;
//  	int from;
//  	int to;
//  } edge[10001];
//  struct Point
//  {
//  	int x, y;
//  } a[10001];
//  bool cmp(Point x, Point y)
//  {
//  	if (x.x != y.x)
//  	{
//  		return x.x < y.x;
//  	}
//  	else
//  	{
//  		return x.y > y.y;
//  	}
//  }
//  int pre[1000001];
//  int main()
//  {
//  	int n, e;
//  	cin >> n >> e;
//  	int i;
//  	for (i = 1; i <= e; ++i)
//  	{
//  		cin >> a[i].x >> a[i].y;
//  	}
//  	sort(a + 1, a + e + 1, cmp);
//  	for (i = 1; i <= e; ++i)
//  	{
//  		edge[i].from = a[i].x;
//  		edge[i].to = a[i].y;
//  		edge[i].last = pre[a[i].x];
//  		pre[a[i].x] = i;
//  	}
//  	int j;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		if (pre[i] != 0)
//  		{
//  			cout << i << "\n";
//  			for (j = pre[i]; j != 0; j = edge[j].last)
//  			{
//  				cout << edge[j].to << " ";
//  			}
//  			cout << "\n";
//  		}
//  	}
//  	return 0;
//  }

// ��2044_�ڽӱ�+Dijkstra
//  const int INF = 0x3f3f3f3f;
//  struct Node
//  {
//  	int next, len, to;
//  } edge[100];
//  int pre[20];
//  int d[20];
//  bool b[20];
//  int tot = 0;
//  int n, e, s, t;
//  void add(int x, int y, int len)
//  {
//  	++tot;
//  	edge[tot].next = pre[x];
//  	//�Ƚ���һ����ָ��
//  	edge[tot].len = len;
//  	edge[tot].to = y;
//  	pre[x] = tot;
//  	//�ٽ���ǰ�����pre
//  }
//  void dijkstra()
//  {
//  	memset(d, 0x3f, sizeof(d));
//  	d[s] = 0;
//  	int i, j, st, to;
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
//  			// j��¼���Ǳߣ�to��st��¼���ǵ�
//  			to = edge[j].to;
//  			if (!b[to] && d[st] + edge[j].len < d[to])
//  			{
//  				d[to] = d[st] + edge[j].len;
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	cin >> n >> e;
//  	int q, x, y, len;
//  	for (q = 1; q <= e; ++q)
//  	{
//  		cin >> x >> y >> len;
//  		add(x, y, len);
//  		add(y, x, len);
//  	}
//  	// for (q = 1; q <= tot; ++q)
//  	// {
//  	// 	cout << edge[q].to << ' '
//  	// 		 << edge[q].len << ' '
//  	// 		 << edge[q].next << ' '
//  	// 		 << pre[q] << ' ' << endl;
//  	// }
//  	cin >> s >> t;
//  	dijkstra();
//  	if (d[t] != INF)
//  	{
//  		cout << d[t];
//  	}
//  	else
//  	{
//  		cout << "No path";
//  	}
//  	return 0;
//  }

// 2044_vector+���ȶ����Ż�
//  struct Node
//  {
//  	int point, len;
//  	bool operator<(const Node &x) const
//  	{
//  		return x.len < len;
//  	}
//  };
//  vector<Node> a[20];
//  bool b[30];
//  int dis[30];
//  int main()
//  {
//  	int n, e, x, y, len;
//  	cin >> n >> e;
//  	register int i, j;
//  	for (j = 1; j <= e; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		a[x].push_back({y, len});
//  		a[y].push_back({x, len});
//  	}
//  	int start, end, from, to;
//  	cin >> start >> end;
//  	memset(dis, 0x3f, sizeof(dis));
//  	priority_queue<Node> q;
//  	dis[start] = 0;
//  	q.push({start, 0});
//  	while (!q.empty())
//  	{
//  		from = q.top().point;
//  		b[from] = true;
//  		for (j = 0; j < a[from].size(); ++j)
//  		{
//  			to = a[from][j].point;
//  			if (!b[to] && a[from][j].len + dis[from] < dis[to])
//  			{
//  				dis[to] = a[from][j].len + dis[from];
//  				q.push({to, dis[to]});
//  			}
//  		}
//  		q.pop();
//  	}
//  	if (dis[end] != 0x3f3f3f3f)
//  	{
//  		cout << dis[end];
//  	}
//  	else
//  	{
//  		cout << "No path";
//  	}
//  	return 0;
//  }

// ��2051_SPFA+�ڽӱ�
//  struct Node
//  {
//  	int to, len, next;
//  } edge[200010];
//  int tot;
//  int pre[20010];
//  int d[20010];
//  bool b[20010];
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
//  	int n, m;
//  	cin >> n >> m;
//  	int i, j, x, y, len;
//  	for (i = 1; i <= m; ++i)
//  	{
//  		cin >> x >> y >> len;
//  		add(x, y, len);
//  	}
//  	queue<int> q;
//  	memset(d, 0x3f, sizeof(d));
//  	d[1] = 0;
//  	q.push(1);
//  	b[1] = true;
//  	while (!q.empty())
//  	{
//  		x = q.front();
//  		for (j = pre[x]; j != 0; j = edge[j].next)
//  		{
//  			y = edge[j].to; // xҪȥ�ĵ�
//  			if (d[x] + edge[j].len < d[y])
//  			{
//  				d[y] = d[x] + edge[j].len;
//  				if (!b[y])
//  				{
//  					q.push(y);
//  					b[y] = true;
//  				}
//  			}
//  		}
//  		q.pop();
//  		b[x] = false;
//  	}
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cout << d[j] << "\n";
//  	}
//  	return 0;
//  }

// 2051_vector
//  struct Node
//  {
//  	int to, len;
//  };
//  bool b[20010];
//  int dis[20010];
//  vector<Node> a[20010];
//  int main()
//  {
//  	int n, m, x, y, len;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		a[x].push_back({y, len});
//  		// a[y].push_back({x, len});
//  	}
//  	memset(dis, 0x3f, sizeof(dis));
//  	queue<int> q;
//  	q.push(1);
//  	b[1] = true;
//  	dis[1] = 0;
//  	int from, to;
//  	while (!q.empty())
//  	{
//  		from = q.front();
//  		for (j = 0; j < a[from].size(); ++j)
//  		{
//  			to = a[from][j].to;
//  			if (dis[from] + a[from][j].len < dis[to])
//  			{
//  				dis[to] = dis[from] + a[from][j].len;
//  				if (!b[to])
//  				{
//  					q.push(to);
//  					b[to] = true;
//  				}
//  			}
//  		}
//  		b[from] = false;
//  		q.pop();
//  	}
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cout << dis[j] << "\n";
//  	}
//  	return 0;
//  }

// ��2211_Floydģ����
//  Floyd���ƣ����������������֮��ľ���
// ȱ�㣺ʱ�临�Ӷ�ΪO(n^3)��ֻ�ʺ���С��Χ������
//   const int R = 101, INF = 0x3f3f3f3f;
//   int d[R][R];
//   int main()
//   {
//   	int n, m;
//   	cin >> n >> m;
//   	int i, j, k, x, y, l;
//   	memset(d, 0x3f, sizeof(d));
//   	for (k = 1; k <= n; ++k)
//   	{
//   		d[k][k] = 0;
//   	}
//   	for (i = 1; i <= m; ++i)
//   	{
//   		cin >> x >> y >> l;
//   		d[x][y] = l;
//   	}
//   	for (k = 1; k <= n; ++k)
//   	{ //��ٿ��ܱ������ĵ�
//   		for (i = 1; i <= n; ++i)
//   		{ //������г�����
//   			for (j = 1; j <= n; ++j)
//   			{ //��������յ�
//   				if (d[i][k] != INF && d[k][j] != INF)
//   				{
//   					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//   				}
//   			}
//   		}
//   	}
//   	for (j = 1; j <= n; ++j)
//   	{
//   		for (k = 1; k <= n; ++k)
//   		{
//   			if (d[j][k] != INF)
//   			{
//   				cout << d[j][k] << ' ';
//   			}
//   			else
//   			{
//   				cout << "N ";
//   			}
//   		}
//   		cout << "\n";
//   	}
//   	return 0;
//   }

// 2091
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

// 2050
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

// 2049
//  struct Node
//  {
//  	int num;
//  	double len;
//  	bool operator<(const Node &a) const
//  	{
//  		return a.len < len;
//  	}
//  };
//  vector<Node> a[101];
//  double d[101];
//  bool b[101];
//  inline double dis(int x1, int x2, int y1, int y2)
//  {
//  	return double(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
//  }
//  void dijkstra(int start)
//  {
//  	priority_queue<Node> q;
//  	q.push({start, 0.0});
//  	int j, st, to;
//  	for (j = 0; j <= 100; ++j)
//  	{
//  		d[j] = 999999.9;
//  	}
//  	// double������memset��ʼ����������ʼ����0.000476792
//  	d[start] = 0;
//  	while (!q.empty())
//  	{
//  		st = q.top().num;
//  		b[st] = true;
//  		for (j = 0; j < a[st].size(); ++j)
//  		{
//  			to = a[st][j].num;
//  			if (!b[to] && a[st][j].len + d[st] < d[to])
//  			{
//  				d[to] = a[st][j].len + d[st];
//  				q.push({to, d[to]});
//  			}
//  		}
//  		q.pop();
//  	}
//  }
//  int main()
//  {
//  	int x[101] = {0}, y[101] = {0};
//  	int n;
//  	cin >> n;
//  	int q;
//  	for (q = 1; q <= n; ++q)
//  	{
//  		cin >> x[q] >> y[q];
//  	}
//  	int m, from, to;
//  	double temp;
//  	cin >> m;
//  	for (q = 1; q <= m; ++q)
//  	{
//  		cin >> from >> to;
//  		temp = dis(x[from], x[to], y[from], y[to]);
//  		a[from].push_back({to, temp});
//  		a[to].push_back({from, temp});
//  	}
//  	int start, end;
//  	cin >> start >> end;
//  	dijkstra(start);
//  	cout << fixed << setprecision(2) << d[end];
//  	return 0;
//  }

// ͼ�۽���

// 2473_DFS
// const int N = 1e3 + 10;
// bool a[N][N];
// int vis[N], n;
// bool flag;
// void dfs(int x)
// {
// 	vis[x] = 1;
// 	for (register int j = 1; j <= n; ++j)
// 	{
// 		if (a[x][j])
// 		{
// 			if (vis[j] == 1)
// 			{
// 				flag = true;
// 				return;
// 			}
// 			else if (vis[j] == 0)
// 			{
// 				dfs(j);
// 			}
// 		}
// 	}
// 	vis[x] = 2;
// }
// int main()
// {
// 	int T, m, x, y;
// 	cin >> T;
// 	register int j;
// 	while (T--)
// 	{
// 		flag = false;
// 		memset(a, 0, sizeof(a));
// 		memset(vis, 0, sizeof(vis));
// 		cin >> n >> m;
// 		for (j = 1; j <= m; ++j)
// 		{
// 			cin >> x >> y;
// 			a[x][y] = true;
// 		}
// 		for (j = 1; j <= n; ++j)
// 		{
// 			if (!vis[j])
// 				dfs(j);
// 			if (flag)
// 				break;
// 		}
// 		cout << (flag ? "Y\n" : "N\n");
// 	}
// 	return 0;
// }

// 2472
//  const int R = 1e4 + 10;
//  vector<int> v[R];
//  int rd[R], a[R];
//  queue<int> q;
//  int main()
//  {
//  	int n, m, x, y, sz, to, tot = 0;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		v[y].push_back(x);
//  		++rd[x];
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (!rd[j])
//  		{
//  			++tot;
//  			a[j] = 100;
//  			q.push(j);
//  		}
//  	}
//  	while (!q.empty())
//  	{
//  		x = q.front();
//  		q.pop();
//  		sz = v[x].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[x][j];
//  			--rd[to];
//  			if (!rd[to])
//  			{
//  				++tot;
//  				q.push(to);
//  				a[to] = a[x] + 1;
//  			}
//  		}
//  	}
//  	if (tot == n) //�޻�
//  	{
//  		tot = 0;
//  		for (j = 1; j <= n; ++j)
//  		{
//  			tot += a[j];
//  		}
//  		cout << tot;
//  	}
//  	else
//  	{
//  		cout << "impossible";
//  	}
//  	return 0;
//  }

// 2416_SPFA
// const int R = 1e3 + 10;
// struct Node
// {
// 	int p, len;
// };
// vector<Node> v[R];
// int dis[R], cnt[R]; // cnt��¼����ÿ���㾭���ıߵ�����
// bool b[R];
// queue<int> q;
// inline bool check(int n, int s) //�и�������true�����򷵻�false
// {
// 	memset(dis, 0x3f, sizeof(dis));
// 	dis[s] = 0;
// 	register int j;
// 	for (j = 1; j <= n; ++j) //�г���ԭ�㣬�����е����
// 	{
// 		q.push(j);
// 		b[j] = true;
// 		cnt[j] = 0; //����ԭ��������ģ����Ե���ÿ���㾭���ıߵ�����Ϊ0
// 	}
// 	int from, to, sz;
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
// 				cnt[to] = cnt[from] + 1; //�����ıߵ�����=����㾭���ıߵ�����+1
// 				if (cnt[to] == n)		 //���·�Ͼ����ıߵ�����==n��˵���л�
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
// void spfa(int n, int s)
// {
// 	memset(dis, 0x3f, sizeof(dis));
// 	dis[s] = 0;
// 	memset(b, 0, sizeof(b));
// 	while (!q.empty())
// 		q.pop(); //��ն��У�queue��֧��clear()
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
// 				if (!b[to])
// 				{
// 					q.push(to);
// 					b[to] = true;
// 				}
// 			}
// 		}
// 	}
// 	for (j = 1; j <= n; ++j)
// 	{
// 		if (dis[j] == 0x3f3f3f3f)
// 		{
// 			cout << "NoPath\n";
// 		}
// 		else
// 		{
// 			cout << dis[j] << "\n";
// 		}
// 	}
// }
// int main()
// {
// 	int n, m, s, x, y, len;
// 	cin >> n >> m >> s;
// 	register int j;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> x >> y >> len;
// 		v[x].push_back({y, len});
// 	}
// 	if (check(n, s))
// 	{
// 		cout << "-1";
// 	}
// 	else
// 	{
// 		spfa(n, s);
// 	}
// 	return 0;
// }

// 2494_ʹ���ڽӱ�+ջ
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

// 2494_ʹ��vector+����_��ѧ���ǣ�ʹ���ڽӱ�+ջ����vector+���ж��ܹ������ǻ����Ͳ���
// //����Сֵ��ת��Ϊ���·
// //�����Լ�����ⶼҪ������ת��Ϊx>=y+k������Сֵ���·����x<=y+l�������ֵ�����·����kΪ��������������ȷ���ߵĳ��ȣ�
// //����Сֵ�Ĳ��Լ���������У���������������·��������������޽�
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

// 2498_ע����Լ����ʹ�ó����Լ�����Ƴ���ʽ
//  /*����Сֵת��Ϊ���·
//  ����ʽ��ʹ��ǰ׺��˼�룬cnt[i]��ʾ1~i֮��Ҫѡ���ٸ�������
//  ��1��cnt[y]-cnt[x-1]>=num -> cnt[y]>=cnt[x-1]+num��ע�⣺����x>=0�����漰��x-1�����Խ����е�x��y����1����������cnt[�������䳤��+1]��
//  ��2��cnt[i]>=cnt[i-1] -> cnt[i]>=cnt[i-1]+0
//  ��3��cnt[i]-cnt[i-1]<=1 -> cnt[i-1]>=cnt[i]-1*/
//  const int R = 5e4 + 10;
//  struct Node
//  {
//  	int p, len;
//  };
//  int cnt[R], maxn; //�������maxn���ڱ��ػ�TLE���ύ��ͨ������ѧ�Ĵ����������ˡ����������Ϻ�ʱ����С�����̣��ڴ�ռ�ô���½���
//  vector<Node> v[R];
//  queue<int> q;
//  bool b[R];
//  int spfa()
//  {
//  	memset(cnt, -0x3f, sizeof(cnt));
//  	cnt[0] = 0;
//  	q.push(0);
//  	b[0] = true;
//  	int from, to, sz;
//  	register int j;
//  	while (!q.empty())
//  	{
//  		from = q.front();
//  		q.pop();
//  		b[from] = false;
//  		sz = v[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].p;
//  			if (cnt[from] + v[from][j].len > cnt[to])
//  			{
//  				// cout << '1';
//  				cnt[to] = cnt[from] + v[from][j].len;
//  				if (!b[to]) //�������޽���������������
//  				{
//  					q.push(to);
//  					b[to] = true;
//  				}
//  			}
//  		}
//  	}
//  	return cnt[maxn];
//  }
//  int main()
//  {
//  	int n, x, y, num;
//  	cin >> n;
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> x >> y >> num;
//  		++x, ++y;
//  		v[x - 1].push_back({y, num});
//  		maxn = max(maxn, y);
//  	}
//  	for (j = 1; j <= maxn; ++j)
//  	{
//  		v[j - 1].push_back({j, 0});
//  		v[j].push_back({j - 1, -1});
//  		v[0].push_back({j, 0}); //�����ԣ���һ��Ӳ��Ӷ��У�Ϊ�˷������ͼ�����
//  	}
//  	cout << spfa();
//  	return 0;
//  }

// ǰ׺������

// 2060
//  const int R = 100010;
//  long long a[R];
//  int main()
//  {
//  	int n, q, l, r;
//  	cin >> n >> q;
//  	register int i, j, k;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> a[i];
//  		a[i] = a[i - 1] + a[i];
//  	}
//  	for (j = 1; j <= q; ++j)
//  	{
//  		cin >> l >> r;
//  		cout << a[r] - a[l - 1] << "\n";
//  	}
//  	return 0;
//  }

// 2061
//  const int R = 1010;
//  long long a[R][R];
//  int main()
//  {
//  	int n, m, q, sx, sy, ex, ey;
//  	cin >> n >> m >> q;
//  	register int j, k;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		for (k = 1; k <= m; ++k)
//  		{
//  			cin >> a[j][k];
//  			a[j][k] = a[j - 1][k] + a[j][k - 1] - a[j - 1][k - 1] + a[j][k];
//  		}
//  	}
//  	for (j = 1; j <= q; ++j)
//  	{
//  		cin >> sx >> sy >> ex >> ey;
//  		cout << a[ex][ey] - a[sx - 1][ey] - a[ex][sy - 1] + a[sx - 1][sy - 1] << "\n";
//  	}
//  	return 0;
//  }

// 2119
//  const int R = 1000010;
//  long long a[R];
//  int main()
//  {
//  	int n, k;
//  	cin >> n >> k;
//  	register int i, j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  		a[j] = a[j] + a[j - 1];
//  	}
//  	long long ans = a[n], t;
//  	for (j = k; j <= n; ++j)
//  	{
//  		t = a[j] - a[j - k];
//  		ans = min(ans, a[n] - t);
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 2105
//  const int R = 230010;
//  long long a[R];
//  int n, m;
//  bool check(int k)
//  {
//  	register int j;
//  	for (j = k; j <= n; ++j)
//  	{
//  		if (a[j] - a[j - k] >= m)
//  		{
//  			return true;
//  		}
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j]; //���Ҫ��scanf���������Ҫ��printf
//  		a[j] = a[j - 1] + a[j];
//  	}
//  	int left = 1, right = n, mid;
//  	bool flag = false;
//  	while (left <= right)
//  	{
//  		mid = (left + right) >> 1;
//  		if (check(mid))
//  		{
//  			right = mid - 1;
//  			flag = true;
//  		}
//  		else
//  		{
//  			left = mid + 1;
//  		}
//  	}
//  	if (flag)
//  	{
//  		cout << left;
//  	}
//  	else
//  	{
//  		cout << '0';
//  	}
//  	return 0;
//  }

// 1538
//  const int R = 1000010;
//  int a[R];
//  int main()
//  {
//  	int n, q, x, y;
//  	cin >> n >> q;
//  	register int j;
//  	for (j = 1; j <= q; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x] += 1;
//  		a[y + 1] -= 1;
//  	}
//  	int ans = 0;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		a[j] = a[j] + a[j - 1];
//  		if (a[j] % 2) //��ѧ�������仰������һ��ѭ�����õ��ڴ������д������
//  		{
//  			++ans;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// ��ѧ

// 2136_1
//  bool pr(int a)
//  {
//  	if (a == 2)
//  	{
//  		return true;
//  	}
//  	register int j;
//  	int x = sqrt(a);
//  	for (j = 2; j <= x; ++j)
//  	{
//  		if (a % j == 0)
//  		{
//  			return false;
//  		}
//  	}
//  	return true;
//  }
//  int main()
//  {
//  	int n, ans = 0;
//  	cin >> n;
//  	register int j;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		if (pr(j))
//  		{
//  			++ans;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 2136_2
//  const int R = 1000010;
//  bool a[R];
//  int main()
//  {
//  	int n, ans, t;
//  	cin >> n;
//  	ans = n - 1; //�Ȱ�1�����������ǽ�ȥ
//  	a[0] = a[1] = true;
//  	register int i, j;
//  	t = sqrt(n);
//  	for (i = 2; i <= t; ++i)
//  	{
//  		if (!a[i])
//  		{
//  			for (j = i + i; j <= n; j += i)
//  			{
//  				if (!a[j])
//  				{
//  					a[j] = true;
//  					--ans; //����-1-����=����
//  				}
//  			}
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 2007
//  bool pr[5000010];
//  int main()
//  {
//  	int s, e, t, ans = 0;
//  	memset(pr, true, sizeof(pr));
//  	cin >> s >> e;
//  	t = sqrt(e);
//  	long long i, j;
//  	pr[0] = pr[1] = false;
//  	for (i = 2; i <= t; ++i)
//  	{
//  		if (pr[i])
//  		{
//  			for (j = i + i; j <= e; j += i)
//  			{
//  				pr[j] = false;
//  			}
//  		}
//  	}
//  	for (i = 2; i <= t; ++i)
//  	{
//  		if (pr[i])
//  		{
//  			for (j = i; i * j <= e; ++j)
//  			{
//  				if (i * j >= s && pr[j])
//  				{
//  					++ans;
//  				}
//  			}
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 1412_������ģ����_2_�ݹ�ⷨ_ע��x==0�����
//  long long fun(int x, int p, int m)
//  {
//  	if (p == 0) //���ﻹҪ�ر�ע��x==0�����
//  	{
//  		return 1;
//  	}
//  	if (p == 1)
//  	{
//  		return x % m;
//  	}
//  	long long res = 0;
//  	if (p % 2) //������
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
//  	long long x, p, m, ans = 1; //�������ݾ��Ѿ��ӽ�int�ı߽��ˣ�������ö���longlong
//  	cin >> x >> p >> m;
//  	cout << fun(x, p, m);
//  	return 0;
//  }

// 2575
//  const int MOD = 200907;
//  using ll = long long;
//  ll fun(int x, int p)
//  {
//  	if (p == 0)
//  	{
//  		return 1;
//  	}
//  	if (p == 1)
//  	{
//  		return x % MOD;
//  	}
//  	ll res = 0;
//  	res = fun(x, p / 2) % MOD;
//  	res = res * res % MOD;
//  	if (p % 2)
//  	{
//  		res = res * x % MOD;
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	ll a1, a2, a3, k, T, d, q;
//  	cin >> T;
//  	while (T--)
//  	{
//  		cin >> a1 >> a2 >> a3 >> k;
//  		if (a2 - a1 == a3 - a2) //�Ȳ�����
//  		{
//  			d = a2 - a1;
//  			cout << (a1 % MOD + d * (k - 1) % MOD) % MOD << "\n";
//  		}
//  		else //�ȱ�����
//  		{
//  			q = a2 / a1;
//  			cout << ((a1 % MOD) * (fun(q, k - 1)) % MOD) % MOD << "\n";
//  		}
//  	}
//  	return 0;
//  }

// 2577
//  using ll = long long;
//  ll exgcd(ll a, ll b, ll &x, ll &y)
//  {
//  	if (b == 0)
//  	{
//  		x = 1;
//  		y = 0;
//  		return a;
//  	}
//  	ll res = exgcd(b, a % b, x, y);
//  	ll t = x;
//  	x = y;
//  	y = t - a / b * y;
//  	return res;
//  }
//  int main()
//  {
//  	ll a, b, x, y;
//  	cin >> a >> b;
//  	exgcd(a, b, x, y);
//  	cout << (x % b + b) % b;
//  	return 0;
//  }

// ��2576
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

// ��2578
//  using ll = long long;
//  using mp = map<ll, ll>;
//  const int MOD = 9901;
//  mp m;
//  ll qpow(ll x, ll p)
//  {
//  	if (p == 0)
//  		return 1;
//  	if (p == 1)
//  		return x % MOD;
//  	ll ans;
//  	if (p % 2)
//  	{
//  		ans = qpow(x, p / 2);
//  		ans = ans * ans % MOD;
//  		ans = ans * x % MOD;
//  	}
//  	else
//  	{
//  		ans = qpow(x, p / 2);
//  		ans = ans * ans % MOD;
//  	}
//  	return ans;
//  }
//  void fun(ll n)
//  {
//  	for (register int j = 2; j <= sqrt(n); ++j)
//  	{
//  		while (n % j == 0)
//  		{
//  			++m[j];
//  			n /= j;
//  		}
//  	}
//  	if (n > 1)
//  	{
//  		++m[n];
//  	}
//  }
//  int main()
//  {
//  	ll a, b, x, y, p, c, ans = 1;
//  	cin >> a >> b;
//  	fun(a);
//  	for (mp::iterator it = m.begin(); it != m.end(); ++it)
//  	{
//  		p = it->first;
//  		c = it->second;	   // c����ai
//  		c = c * b;		   //��Ϊ�����a^b�����ֽ�ʱֻ�ֽ���a
//  		if ((p - 1) % MOD) //���p-1����9901�ı��������ʣ����������Ԫ
//  		{
//  			//(p^0+p^1+...+p^ai)%MOD=1*(p^(ai+1)-1)/(p-1)%MOD���ȱ����У�������(p-1)%MOD��ʹ����Ԫ����y=b^(p-2)������b=p-1��p-2=MOD
//  			x = qpow(p, c + 1) - 1;
//  			y = qpow(p - 1, MOD - 2);
//  			ans = (ans * x % MOD * y % MOD) % MOD;
//  		}
//  		else //(p-1)%MOD=0����ʾp%MOD=1����ʱ��ʽ��(p^0+p^1+...+p^ai)%MOD�У�����ai+1��1��a��b(mod m) -> a^n��b^n(mod m)��
//  		{
//  			x = c + 1;
//  			ans = (ans * x) % MOD;
//  		}
//  	}
//  	cout << ans;
//  	return 0;
//  }

// ��

// 2188_2
//  const int R = 1010;
//  vector<int> a[R];
//  int fa[R];
//  int get(int x)
//  {
//  	while (fa[x] != 0)
//  	{
//  		x = fa[x];
//  	}
//  	return x;
//  }
//  int main()
//  {
//  	register int j;
//  	int n, x, y;
//  	cin >> n;
//  	while (cin >> x >> y)
//  	{
//  		fa[y] = x;
//  		a[x].push_back(y);
//  	}
//  	cout << get(x) << "\n";
//  	int ans = 0, cnt = 0;
//  	for (j = 1; j <= 1000; ++j)
//  	{
//  		if (a[j].size() >= cnt)
//  		{
//  			cnt = a[j].size();
//  			ans = j;
//  		}
//  	}
//  	sort(a[ans].begin(), a[ans].end());
//  	cout << ans << "\n";
//  	for (j = 0; j < a[ans].size(); ++j)
//  	{
//  		cout << a[ans][j] << ' ';
//  	}
//  	return 0;
//  }

// 2170_�������������
//  vector<int> a[110];
//  int ans;
//  void dfs(int x, int dep)
//  {
//  	if (a[x].size() == 0)
//  	{
//  		ans = max(ans, dep);
//  		return;
//  	}
//  	else
//  	{
//  		for (int j = 0; j < a[x].size(); ++j)
//  		{
//  			dfs(a[x][j], dep + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int x, y;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  	}
//  	dfs(1, 1);
//  	cout << ans;
//  	return 0;
//  }

// 2170_�������������
//  int fa[110];
//  int getdep(int x)
//  {
//  	int cnt = 1;
//  	while (fa[x] != 0)
//  	{
//  		++cnt;
//  		x = fa[x];
//  	}
//  	return cnt;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int x, y;
//  	int ans = 0;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		fa[y] = x;
//  	}
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		ans = max(ans, getdep(j));
//  	}
//  	cout << ans;
//  	return 0;
//  }

// 2171
//  int fa[25], dep[25];
//  vector<int> a[25];
//  void dfs(int x, int father, int depth)
//  {
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		if (a[x][j] != father)
//  		{
//  			fa[a[x][j]] = x;
//  			dep[a[x][j]] = depth + 1;
//  			dfs(a[x][j], x, depth + 1);
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int x, y;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	dfs(1, 0, 1);
//  	for (register int j = 2; j <= n; ++j)
//  	{
//  		cout << j << ' ' << fa[j] << ' ' << dep[j] << "\n";
//  	}
//  	return 0;
//  }

// ��2166
//  vector<int> a[110];
//  int dep[110], sz[110];
//  int dfs(int x, int fa)
//  {
//  	sz[x] = 1;
//  	dep[x] = dep[fa] + 1;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		if (a[x][j] != fa)
//  		{
//  			sz[x] += dfs(a[x][j], x);
//  		}
//  	}
//  	return sz[x];
//  }
//  int main()
//  {
//  	int n, x, y;
//  	register int j;
//  	cin >> n;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	dfs(1, 0);
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cout << sz[j] << ' ' << dep[j] << "\n";
//  	}
//  	return 0;
//  }

// 2167_��ǵ�����
//  int fa[110], dep[110];
//  void dfs(int x)
//  {
//  	if (fa[x] == x)
//  	{
//  		dep[x] = 1;
//  	}
//  	else
//  	{
//  		dfs(fa[x]);
//  		dep[x] = dep[fa[x]] + 1;
//  	}
//  }
//  int main()
//  {
//  	int n, x, y, a, b;
//  	cin >> n;
//  	register int j;
//  	for (j = 1; j <= 100; ++j)
//  	{
//  		fa[j] = j;
//  	}
//  	cin >> x >> y;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> a >> b;
//  		fa[a] = b;
//  	}
//  	dfs(x);
//  	dfs(y);
//  	while (x != y)
//  	{
//  		if (dep[x] > dep[y])
//  		{
//  			x = fa[x];
//  		}
//  		else
//  		{
//  			y = fa[y];
//  		}
//  	}
//  	cout << x;
//  	return 0;
//  }

// 2172
//  vector<int> a[110];
//  int maxdep, maxa;
//  bool b[110];
//  void dfs(int x, int dep)
//  {
//  	if (dep > maxdep)
//  	{
//  		maxdep = dep;
//  		maxa = x;
//  	}
//  	int to;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		to = a[x][j];
//  		if (!b[to])
//  		{
//  			b[to] = true;
//  			dfs(to, dep + 1);
//  			b[to] = false;
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, x, y;
//  	cin >> n;
//  	register int j;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	dfs(1, 1);
//  	maxdep = 0;
//  	dfs(maxa, 1);
//  	cout << maxdep - 1;
//  	return 0;
//  }

// 2168
//  const int R = 110;
//  vector<int> a[R];
//  int fa[R], dep[R];
//  void dfs(int x, int f)
//  {
//  	dep[x] = dep[f] + 1;
//  	fa[x] = f;
//  	int to;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		to = a[x][j];
//  		if (to != f)
//  		{
//  			dfs(to, x);
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	register int j;
//  	int x, y, a1, b;
//  	cin >> x >> y;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> a1 >> b;
//  		a[a1].push_back(b);
//  		a[b].push_back(a1);
//  	}
//  	dfs(1, 0);
//  	while (x != y)
//  	{
//  		if (dep[x] > dep[y])
//  		{
//  			x = fa[x];
//  		}
//  		else
//  		{
//  			y = fa[y];
//  		}
//  	}
//  	cout << x;
//  	return 0;
//  }

// ��2190
//  const int R = 1e5 + 10;
//  vector<int> a[R];
//  int size[R], fa[R], maxs[R];
//  int dfs(int x, int f)
//  {
//  	size[x] = 1;
//  	fa[x] = f;
//  	int to;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		to = a[x][j];
//  		if (to != f)
//  		{
//  			size[x] += dfs(to, x);
//  		}
//  	}
//  	return size[x];
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	register int i, j;
//  	int x, y;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	dfs(1, 0);
//  	int ansc = INT_MAX, ans;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		maxs[i] = n - size[i]; //�ȿ���1Ϊ�������Ĵ�С
//  		for (j = 0; j < a[i].size(); ++j)
//  		{
//  			if (i == fa[a[i][j]]) //��Ϊ��˫�򽨱ߣ����Բ��ܱ�֤vector�е�ÿ��Ԫ�ض���i����
//  			{
//  				maxs[i] = max(maxs[i], size[a[i][j]]); //�ٴ���̨
//  			}
//  		}
//  		ansc = min(ansc, maxs[i]);
//  	}
//  	for (j = 1; j <= n; ++j)
//  	{
//  		if (maxs[j] == ansc)
//  		{
//  			cout << j << ' ';
//  		}
//  	}
//  	return 0;
//  }

// ��2207
//  const int R = 100010;
//  vector<int> a[R];
//  int maxdep, maxa; // maxdep��¼��ĸ���
//  int fa[R];
//  void dfs(int x, int dep, int f)
//  {
//  	fa[x] = f;
//  	if (dep > maxdep)
//  	{
//  		maxdep = dep;
//  		maxa = x;
//  	}
//  	int to;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		to = a[x][j];
//  		if (to != f)
//  		{
//  			dfs(to, dep + 1, x);
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, x, y;
//  	cin >> n;
//  	register int j;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	dfs(1, 1, 0);
//  	maxdep = 0;
//  	dfs(maxa, 1, 0);
//  	if (maxdep % 2) //ֱ���ϵĵ���������
//  	{
//  		x = maxa;
//  		for (j = 1; j <= maxdep / 2; ++j)
//  		{
//  			x = fa[x];
//  		}
//  		cout << x;
//  	}
//  	else
//  	{
//  		x = y = maxa;
//  		for (j = 1; j <= maxdep / 2 - 1; ++j)
//  		{
//  			x = fa[x];
//  			y = fa[y];
//  		}
//  		y = fa[y];
//  		if (x < y)
//  		{
//  			cout << x << ' ' << y;
//  		}
//  		else
//  		{
//  			cout << y << ' ' << x;
//  		}
//  	}
//  	return 0;
//  }

// 2191
//  const int R = 1e5 + 10;
//  vector<int> a[R];
//  int fa[R], sz[R], maxs[R];
//  int dfs(int x, int f)
//  {
//  	int to;
//  	fa[x] = f;
//  	sz[x] = 1;
//  	for (int j = 0; j < a[x].size(); ++j)
//  	{
//  		to = a[x][j];
//  		if (to != f)
//  		{
//  			sz[x] += dfs(to, x);
//  		}
//  	}
//  	return sz[x];
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int x, y;
//  	register int i, j;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		a[x].push_back(y);
//  		a[y].push_back(x);
//  	}
//  	dfs(1, 0);
//  	int to, ansc = INT_MAX;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		maxs[i] = n - sz[i];
//  		for (j = 0; j < a[i].size(); ++j)
//  		{
//  			to = a[i][j];
//  			if (fa[to] == i)
//  			{
//  				maxs[i] = max(maxs[i], sz[to]);
//  			}
//  		}
//  		ansc = min(ansc, maxs[i]);
//  	}
//  	cout << ansc;
//  	return 0;
//  }

// ������

// 2182
//  struct Node
//  {
//  	char c;
//  	int lc, rc;
//  } a[30];
//  void dfs1(int x)
//  {
//  	cout << a[x].c;
//  	if (a[x].lc)
//  	{
//  		dfs1(a[x].lc);
//  	}
//  	if (a[x].rc)
//  	{
//  		dfs1(a[x].rc);
//  	}
//  }
//  void dfs2(int x)
//  {
//  	if (a[x].lc)
//  	{
//  		dfs2(a[x].lc);
//  	}
//  	cout << a[x].c;
//  	if (a[x].rc)
//  	{
//  		dfs2(a[x].rc);
//  	}
//  }
//  void dfs3(int x)
//  {
//  	if (a[x].lc)
//  	{
//  		dfs3(a[x].lc);
//  	}
//  	if (a[x].rc)
//  	{
//  		dfs3(a[x].rc);
//  	}
//  	cout << a[x].c;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j].c >> a[j].lc >> a[j].rc;
//  	}
//  	dfs1(1);
//  	cout << "\n";
//  	dfs2(1);
//  	cout << "\n";
//  	dfs3(1);
//  	return 0;
//  }

// 2183_���ӳ��ˣ���classд�ĳ���
//  class solve
//  {
//  public:
//  	int n, a[110];
//  	void input()
//  	{
//  		cin >> n;
//  		for (register int i = 1; i <= n; ++i)
//  		{
//  			cin >> a[i];
//  		}
//  	}
//  	void printh()
//  	{
//  		cout << int(log2(n)) + 1 << "\n";
//  	}
//  	void dfs(int x)
//  	{
//  		if (x * 2 <= n && a[x * 2])
//  		{
//  			dfs(x * 2);
//  		}
//  		if (x * 2 + 1 <= n && a[x * 2 + 1])
//  		{
//  			dfs(x * 2 + 1);
//  		}
//  		cout << a[x] << ' ';
//  	}
//  };
//  int main()
//  {
//  	solve s;
//  	s.input();
//  	s.printh();
//  	s.dfs(1);
//  	return 0;
//  }

// 2184
//  string a, b;
//  void dfs(int l1, int r1, int l2, int r2)
//  {
//  	int mid = b.find(a[l1]);
//  	if (mid > l2) //�����������
//  	{
//  		dfs(l1 + 1, l1 + mid - l2, l2, mid - 1);
//  	}
//  	if (mid < r2) //�����������
//  	{
//  		dfs(l1 + mid - l2 + 1, r1, mid + 1, r2);
//  	}
//  	cout << a[l1];
//  }
//  int main()
//  {
//  	cin >> a >> b;
//  	dfs(0, a.size() - 1, 0, b.size() - 1);
//  	return 0;
//  }

// 2186
// int mi(int zhishu)
// {
// 	int ans = 1;
// 	for (register int j = 1; j <= zhishu; ++j)
// 	{
// 		ans *= 2;
// 	}
// 	return ans;
// }
// int main()
// {
// 	int a[1010] = {0};
// 	int n, k, height,end;
// 	register int j;
// 	while (true)
// 	{
// 		cin >> n;
// 		if (n != 0)
// 		{
// 			cin >> k;
// 			height = int(log2(n)) + 1;
// 			if (k > height)
// 			{
// 				cout << "EMPTY";
// 			}
// 			else
// 			{
// 				end = mi(k) - 1;
// 				for (j = mi(k - 1); j <= end && j <= n; ++j)
// 				{
// 					cout << j << ' ';
// 				}
// 			}
// 			cout << "\n";
// 		}
// 		else
// 		{
// 			break;
// 		}
// 	}
// 	return 0;
// }

// 2195_����������
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int data, lc, rc;
//  } a[R];
//  void dfsmid(int pointer)
//  {
//  	if (a[pointer].lc)
//  	{
//  		dfsmid(a[pointer].lc);
//  	}
//  	cout << a[pointer].data << ' ';
//  	if (a[pointer].rc)
//  	{
//  		dfsmid(a[pointer].rc);
//  	}
//  }
//  void dfsaft(int pointer)
//  {
//  	if (a[pointer].lc)
//  	{
//  		dfsaft(a[pointer].lc);
//  	}
//  	if (a[pointer].rc)
//  	{
//  		dfsaft(a[pointer].rc);
//  	}
//  	cout << a[pointer].data << ' ';
//  }
//  int main()
//  {
//  	int n, pointer, x;
//  	cin >> n;
//  	register int j;
//  	cin >> a[1].data;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x;
//  		a[j].data = x;
//  		pointer = 1;
//  		while (true)
//  		{
//  			if (x < a[pointer].data)
//  			{
//  				if (!a[pointer].lc)
//  				{
//  					a[pointer].lc = j;
//  					break;
//  				}
//  				else
//  				{
//  					pointer = a[pointer].lc;
//  				}
//  			}
//  			else
//  			{
//  				if (!a[pointer].rc)
//  				{
//  					a[pointer].rc = j;
//  					break;
//  				}
//  				else
//  				{
//  					pointer = a[pointer].rc;
//  				}
//  			}
//  		}
//  	}
//  	dfsmid(1);
//  	cout << "\n";
//  	dfsaft(1);
//  	return 0;
//  }

// ����DP

// 2058
//  const int R = 810;
//  int maxdp[R][R], mindp[R][R], sum[R];
//  int main()
//  {
//  	int n, n2;
//  	memset(mindp, 0x3f, sizeof(mindp));
//  	memset(maxdp, -0x3f, sizeof(maxdp));
//  	//���룬����ǰ׺��
//  	cin >> n;
//  	n2 = n * 2;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> sum[j];
//  		sum[j + n] = sum[j];
//  	}
//  	for (register int j = 1; j <= n2; ++j)
//  	{
//  		mindp[j][j] = maxdp[j][j] = 0;
//  		sum[j] += sum[j - 1];
//  	}
//  	register int left, right, cut;
//  	for (register int len = 2; len <= n; ++len)
//  	{
//  		for (left = 1; left <= n2 - len + 1; ++left)
//  		{
//  			right = left + len - 1;
//  			for (cut = left; cut < right; ++cut)
//  			{
//  				//����Сֵ
//  				mindp[left][right] = min(mindp[left][right],
//  										 mindp[left][cut] + mindp[cut + 1][right] + sum[right] - sum[left - 1]);
//  				//�����ֵ
//  				maxdp[left][right] = max(maxdp[left][right],
//  										 maxdp[left][cut] + maxdp[cut + 1][right] + sum[right] - sum[left - 1]);
//  			}
//  		}
//  	}
//  	//����һ�ⲻͬ����εĳ����������1~n�е�����һ���㣬����Ҫ���
//  	int ans1 = INT_MAX, ans2 = INT_MIN;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		ans1 = min(ans1, mindp[j][j + n - 1]);
//  		ans2 = max(ans2, maxdp[j][j + n - 1]);
//  	}
//  	cout << ans1 << "\n"
//  		 << ans2;
//  	return 0;
//  }

// ״̬ѹ��DP

// ��ϣ

// 1915
//  using ull = unsigned long long;
//  const int R = 1e6 + 10, P = 131;
//  ull ha[R], p[R];
//  char s[R];
//  int ctod(char c)
//  {
//  	return c - 'a' + 1;
//  }
//  ull gethash(int l, int r)
//  {
//  	return ha[r] - ha[l - 1] * p[r - l + 1];
//  }
//  int main()
//  {
//  	scanf("%s", s + 1);
//  	register int j;
//  	p[0] = 1;
//  	int len = strlen(s + 1);
//  	for (j = 1; j <= len; ++j)
//  	{
//  		p[j] = p[j - 1] * P;
//  		ha[j] = ha[j - 1] * P + ctod(s[j]);
//  	}
//  	int m;
//  	scanf("%d", &m);
//  	int l1, r1, l2, r2;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
//  		if (gethash(l1, r1) == gethash(l2, r2))
//  		{
//  			printf("Yes\n");
//  		}
//  		else
//  		{
//  			printf("No\n");
//  		}
//  	}
//  	return 0;
//  }

// 2362
//  using ull = unsigned long long;
//  const int R = 4e5 + 10, B = 131;
//  char s[R];
//  ull h[R], b[R];
//  ull gethash(int left, int right)
//  {
//  	return h[right] - h[left - 1] * b[right - (left - 1)];
//  }
//  int main()
//  {
//  	register int j;
//  	b[0] = 1;
//  	for (j = 1; j <= 400000; ++j)
//  	{
//  		b[j] = b[j - 1] * B;
//  	}
//  	int len, sublen;
//  	while (scanf("%s", s + 1) != EOF)
//  	{
//  		len = strlen(s + 1);
//  		for (j = 1; j <= len; ++j)
//  		{
//  			h[j] = h[j - 1] * B + s[j];
//  		}
//  		for (sublen = 1; sublen <= len; ++sublen)
//  		{
//  			if (gethash(1, sublen) == gethash(len - sublen + 1, len))
//  			{
//  				printf("%d ", sublen);
//  			}
//  		}
//  		printf("\n");
//  	}
//  	return 0;
//  }

// 2363_ʹ��vector�洢
//  const int B = 1e6 + 3;
//  vector<int> a[B + 10];
//  int main()
//  {
//  	int n;
//  	scanf("%d", &n);
//  	register int i, j;
//  	char s[10];
//  	int x, num;
//  	bool b;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		scanf("%s%d", &s, &x);
//  		if (s[0] == 'a')
//  		{
//  			num = abs(x) % B;
//  			a[num].push_back(x);
//  		}
//  		else
//  		{
//  			num = abs(x) % B;
//  			b = false;
//  			for (j = 0; j < a[num].size(); ++j)
//  			{
//  				if (a[num][j] == x)
//  				{
//  					b = true;
//  					break;
//  				}
//  			}
//  			if (b)
//  			{
//  				printf("yes\n");
//  			}
//  			else
//  			{
//  				printf("no\n");
//  			}
//  		}
//  	}
//  	return 0;
//  }

// 2363_ʹ���ڽӱ�洢
//  const int B = 1e6 + 3;
//  struct Node
//  {
//  	int x, next;
//  } a[B + 10];
//  int tot, head[B + 10];
//  void add(int x)
//  {
//  	int num = abs(x) % B;
//  	++tot;
//  	a[tot].x = x;
//  	a[tot].next = head[num];
//  	head[num] = tot;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n; //��Ҫ�Ӷ�д�Ż�
//  	register int i, j;
//  	char s[10];
//  	int x, num;
//  	bool b;
//  	for (i = 1; i <= n; ++i)
//  	{
//  		cin >> s >> x;
//  		if (s[0] == 'a')
//  		{
//  			add(x);
//  		}
//  		else
//  		{
//  			num = abs(x) % B;
//  			b = false;
//  			for (j = head[num]; j; j = a[j].next)
//  			{
//  				if (a[j].x == x)
//  				{
//  					b = true;
//  					break;
//  				}
//  			}
//  			if (b)
//  			{
//  				cout << "yes\n";
//  			}
//  			else
//  			{
//  				cout << "no\n";
//  			}
//  		}
//  	}
//  	return 0;
//  }

// 2361_ʹ��getchar()����
// using ull = unsigned long long;
// const int P = 1e6 + 3, B = 131;
// struct Node
// {
// 	ull x;
// 	int next;
// } a[P + 10];
// int head[P + 10], tot;
// ull h[210];
// ull gethash(char s[], int len)
// {
// 	for (register int j = 1; j <= len; ++j)
// 	{
// 		h[j] = h[j - 1] * B + s[j];
// 	}
// 	return h[len];
// }
// void add(ull x)
// {
// 	int num = x % P;
// 	++tot;
// 	a[tot].x = x;
// 	a[tot].next = head[num];
// 	head[num] = tot;
// }
// int main()
// {
// 	int n, ctot;
// 	char t[10], name[210], c;
// 	ull temp;
// 	bool flag;
// 	register int j, i;
// 	scanf("%d", &n); //��Ϊ������getchar()������Ҫ��scanf
// 	for (j = 1; j <= n; ++j)
// 	{
// 		scanf("%s", t);
// 		ctot = 0;
// 		c = ' ';
// 		while (c != '\n')
// 		{
// 			++ctot;
// 			c = getchar();
// 			name[ctot] = c;
// 		}
// 		--ctot; //���з����㣬����Ҫ��1
// 		if (t[0] == 'a')
// 		{
// 			add(gethash(name, ctot));
// 		}
// 		else
// 		{
// 			temp = gethash(name, ctot);
// 			flag = false;
// 			for (i = head[temp % P]; i; i = a[i].next)
// 			{
// 				if (a[i].x == temp)
// 				{
// 					flag = true;
// 					break;
// 				}
// 			}
// 			if (flag)
// 			{
// 				printf("yes\n");
// 			}
// 			else
// 			{
// 				printf("no\n");
// 			}
// 		}
// 	}
// 	return 0;
// }

// 2361_ʹ��cin.getline()����
// using ull = unsigned long long;
// const int P = 1e6 + 3, B = 131;
// struct Node
// {
// 	ull x;
// 	int next;
// } a[P + 10];
// int head[P + 10], tot;
// ull gethash(char s[], int len)
// {
// 	ull ans = 0;
// 	for (register int j = 1; j <= len; ++j)
// 	{
// 		ans = ans * B + s[j];
// 	}
// 	return ans;
// }
// void add(ull x)
// {
// 	int num = x % P;
// 	++tot;
// 	a[tot].x = x;
// 	a[tot].next = head[num];
// 	head[num] = tot;
// }
// int main()
// {
// 	int n, len;
// 	char t[10], name[210], c;
// 	ull temp;
// 	bool flag;
// 	register int j, i;
// 	scanf("%d", &n);
// 	for (j = 1; j <= n; ++j)
// 	{
// 		scanf("%s", t);
// 		cin.getline(name + 1, 202);
// 		//��������ǰ�Ŀո���201���ַ�����������Ҫ��202
// 		//�����ԣ����ܼ�cin�Ķ�д�Ż�
// 		len = strlen(name + 1);
// 		if (t[0] == 'a')
// 		{
// 			add(gethash(name, len));
// 		}
// 		else
// 		{
// 			temp = gethash(name, len);
// 			flag = false;
// 			for (i = head[temp % P]; i; i = a[i].next)
// 			{
// 				if (a[i].x == temp)
// 				{
// 					flag = true;
// 					break;
// 				}
// 			}
// 			if (flag)
// 			{
// 				printf("yes\n");
// 			}
// 			else
// 			{
// 				printf("no\n");
// 			}
// 		}
// 	}
// 	return 0;
// }

// 2381_ʹ�ù�ϣ��
//  using ull = unsigned long long;
//  struct Node
//  {
//  	ull h;
//  	int cnt;
//  };
//  const int R = 1e6 + 10, B = 131, P = 1e6 + 3;
//  char s[R];
//  vector<Node> ht[P + 10];
//  ull gethash()
//  {
//  	ull h = 0;
//  	for (register int j = 1; s[j]; ++j)
//  	{
//  		h = h * B + s[j];
//  	}
//  	return h;
//  }
//  void add()
//  {
//  	ull h = gethash();
//  	int x = h % P, sz = ht[x].size();
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		if (h == ht[x][j].h)
//  		{
//  			++ht[x][j].cnt;
//  			return;
//  		}
//  	}
//  	ht[x].push_back({h, 1});
//  }
//  int find()
//  {
//  	ull h = gethash();
//  	int x = h % P, sz = ht[x].size();
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		if (h == ht[x][j].h)
//  		{
//  			return ht[x][j].cnt;
//  		}
//  	}
//  	return 0;
//  }
//  int main()
//  {
//  	int n, m;
//  	cin >> n;
//  	while (n--)
//  	{
//  		cin >> (s + 1);
//  		add();
//  	}
//  	cin >> m;
//  	while (m--)
//  	{
//  		cin >> (s + 1);
//  		cout << find() << "\n";
//  	}
//  	return 0;
//  }

// 2337
//  using ull = unsigned long long;
//  const int B = 131, R1 = 1e4 + 10, R2 = 1e6 + 10;
//  ull h1[R1], h2[R2], b[R2];
//  char s1[R1], s2[R2];
//  ull gethash(int l, int r)
//  {
//  	return h2[r] - h2[l - 1] * b[r - l + 1];
//  }
//  int main()
//  {
//  	int T, res, len;
//  	cin >> T;
//  	b[0] = 1;
//  	register int j;
//  	for (j = 1; j <= 1000000; ++j)
//  	{
//  		b[j] = b[j - 1] * B;
//  	}
//  	while (T--)
//  	{
//  		res = 0;
//  		cin >> (s1 + 1) >> (s2 + 1);
//  		for (j = 1; s1[j]; ++j)
//  		{
//  			h1[j] = h1[j - 1] * B + s1[j];
//  		}
//  		for (j = 1; s2[j]; ++j)
//  		{
//  			h2[j] = h2[j - 1] * B + s2[j];
//  		}
//  		len = strlen(s1 + 1);
//  		for (j = len; s2[j]; ++j) // jΪ�Ҷ˵�
//  		{
//  			if (h1[len] == gethash(j - len + 1, j))
//  			{
//  				++res;
//  			}
//  		}
//  		cout << res << "\n";
//  	}
//  	return 0;
//  }

// KMP

// 2391_ʹ��KMP
//  const int R = 1e6 + 10;
//  char s[R], p[R];
//  int pre[R];
//  int main()
//  {
//  	scanf("%s%s", s + 1, p + 1);
//  	register int i, j;
//  	pre[0] = pre[1] = 0;
//  	int lens = strlen(s + 1), lenp = strlen(p + 1);
//  	for (i = 1, j = 0; i < lenp; ++i) //��Ϊ��2��ʼƥ�䣬����i��ʼֵΪ1����ΪҪi+1��
//  	{
//  		while (j && p[i + 1] != p[j + 1])
//  		{
//  			j = pre[j];
//  		}
//  		if (p[i + 1] == p[j + 1])
//  		{
//  			++j;
//  		}
//  		pre[i + 1] = j;
//  	}
//  	for (i = 0, j = 0; i < lens; ++i)
//  	{
//  		while (j && s[i + 1] != p[j + 1])
//  		{
//  			j = pre[j];
//  		}
//  		if (s[i + 1] == p[j + 1])
//  		{
//  			++j;
//  		}
//  		if (j == lenp)
//  		{
//  			printf("%d ", i + 1 - lenp + 1);
//  		}
//  	}
//  	return 0;
//  }

// 2391_ʹ�ù�ϣ
// using ull = unsigned long long;
// const int R = 1e6 + 10, B = 131;
// char m[R], n[R];
// ull ha[R], hb[R], b[R];
// ull gethash(int left, int right)
// {
// 	return ha[right] - ha[left - 1] * b[right - left + 1];
// }
// int main()
// {
// 	scanf("%s%s", m + 1, n + 1);
// 	register int i, j;
// 	int lena = strlen(m + 1), lenb = strlen(n + 1);
// 	b[0] = 1;
// 	for (j = 1; j <= lena; ++j)
// 	{
// 		b[j] = b[j - 1] * B;
// 		ha[j] = ha[j - 1] * B + m[j];
// 	}
// 	for (j = 1; j <= lenb; ++j)
// 	{
// 		hb[j] = hb[j - 1] * B + n[j];
// 	}
// 	int left;
// 	for (j = lenb; j <= lena; ++j)
// 	{ // j����right
// 		left = j - lenb + 1;
// 		if (gethash(left, j) == hb[lenb])
// 		{
// 			printf("%d ", left);
// 		}
// 	}
// 	return 0;
// }

// 2360
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

// 2362_ʹ��KMP
//  char c[400010];
//  int pre[400010], sta[400010];
//  int main()
//  {
//  	register int i, j;
//  	int len;
//  	while (cin >> (c + 1))
//  	{
//  		sta[0] = 0;
//  		len = strlen(c + 1);
//  		for (i = 1, j = 0; i < len; ++i)
//  		{
//  			while (j && c[i + 1] != c[j + 1])
//  			{
//  				j = pre[j];
//  			}
//  			if (c[i + 1] == c[j + 1])
//  			{
//  				++j;
//  			}
//  			pre[i + 1] = j;
//  		}
//  		++sta[0];
//  		sta[sta[0]] = len;
//  		while (pre[len] != 0)
//  		{
//  			++sta[0];
//  			sta[sta[0]] = pre[len];
//  			len = pre[len];
//  		}
//  		for (j = sta[0]; j >= 1; --j)
//  		{
//  			cout << sta[j] << ' ';
//  		}
//  		cout << "\n";
//  	}
//  	return 0;
//  }

// Trie����AC�Զ���

// 2381_ʹ��Trie��
// const int R = 1e6 + 10;
// char s[R];
// int ch[R][30], cnt[R];
// int tot;
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
// 	++cnt[p];
// }
// int find()
// {
// 	int p = 0, x;
// 	for (register int j = 1; s[j]; ++j)
// 	{
// 		x = s[j] - 'a';
// 		if (!ch[p][x])
// 		{
// 			return 0;
// 		}
// 		p = ch[p][x];
// 	}
// 	return cnt[p];
// }
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
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

// 2359_ע�����������ʱ���������һ�εĽ����Ϊ���ս��
// const int R = 1e5 + 10;
// int ch[R][15], tot;
// bool cnt[R];
// bool add(char s[])
// {
// 	//�ȼ����û�о����ѽ��õĴ�����û�д����½��
// 	bool passP = false, creaNewP = false;
// 	int p = 0, x;
// 	for (register int i = 0; s[i]; ++i)
// 	{
// 		x = s[i] - '0';
// 		if (cnt[p])
// 		{
// 			passP = true;
// 		}
// 		if (!ch[p][x])
// 		{
// 			++tot;
// 			ch[p][x] = tot;
// 			creaNewP = true;
// 		}
// 		p = ch[p][x];
// 	}
// 	cnt[p] = true;
// 	if (passP || (!creaNewP))
// 	{
// 		return true;
// 	}
// 	else
// 	{
// 		return false;
// 	}
// }
// int main()
// {
// 	int n, m;
// 	char s[15];
// 	cin >> n;
// 	bool flag;
// 	while (n--)
// 	{
// 		tot = 0;
// 		memset(ch, 0, sizeof(ch));
// 		memset(cnt, 0, sizeof(cnt));
// 		flag = false;
// 		cin >> m;
// 		while (m--)
// 		{
// 			cin >> s;
// 			if (add(s)) //��������
// 			//��Ϊ�����˺ܶ���ַ��������дΪflag=add(s)���������һ�εķ���ֵ��Ϊ�������Ȼ���ǲ��Ե�
// 			{
// 				flag = true;
// 			}
// 		}
// 		if (flag) //�о����NO��û�о����YES
// 		{
// 			cout << "NO\n";
// 		}
// 		else
// 		{
// 			cout << "YES\n";
// 		}
// 	}
// 	return 0;
// }

// ��2382_AC�Զ���ģ����
//  #define memset(p) memset(p, 0, sizeof(p))
//  const int N = 1e4 + 10, MR = 1e6 + 10, ML = 55;
//  int child[N * ML][27], cnt[N * ML],
//  	pre[N * ML], tot;
//  char s[MR];
//  queue<int> que;
//  void init()
//  {
//  	memset(child);
//  	memset(cnt);
//  	memset(pre);
//  	tot = 0;
//  }
//  void add()
//  {
//  	int p = 0, x;
//  	for (register int j = 0; s[j]; ++j)
//  	{
//  		x = s[j] - 'a';
//  		if (!child[p][x])
//  		{
//  			++tot;
//  			child[p][x] = tot;
//  		}
//  		p = child[p][x];
//  	}
//  	++cnt[p];
//  }
//  void bfs()
//  {
//  	register int i, j;
//  	for (i = 0; i < 26; ++i)
//  	{
//  		if (child[0][i])
//  		{
//  			que.push(child[0][i]);
//  		}
//  	}
//  	char c;
//  	int from, to;
//  	while (!que.empty())
//  	{
//  		from = que.front();
//  		for (i = 0; i < 26; ++i)
//  		{
//  			if (child[from][i])
//  			{
//  				to = child[from][i];
//  				j = pre[from];
//  				while (j && !child[j][i])
//  				{
//  					j = pre[j];
//  				}
//  				if (child[j][i])
//  				{
//  					j = child[j][i];
//  				}
//  				pre[to] = j;
//  				que.push(to);
//  			}
//  		}
//  		que.pop();
//  	}
//  }
//  int solve()
//  {
//  	int res = 0, x, p;
//  	for (register int i = 0, j = 0; s[i]; ++i) //i,j�ֱ�����s[]�ı����Ͷ�trie�ı���
//  	{
//  		x = s[i] - 'a';
//  		while (j && !child[j][x])
//  		{
//  			j = pre[j];
//  		}
//  		if (child[j][x])
//  		{
//  			j = child[j][x];
//  		}
//  		/*���ܼ򵥵ؽ�res+=cnt[j]����Ϊ���ܻ�������������
//  		s1="aab"
//  		s2="ab"
//  		����="aab"
//  		���ֱ�Ӽ��ϣ���ô������s1ѭ���ͽ����ˣ���ʵ���ϻ���"ab"û�б�ƥ�䣬���Կ�����һ��ָ��p����ָ��pre[p]�������������ͳ�ƽ��*/
//  		p = j;
//  		while (p)
//  		{
//  			res += cnt[p];
//  			cnt[p] = 0;
//  			p = pre[p]; //ָ����һ������ͬǰ׺�����Ǻ�׺���������Ľ��
//  		}
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int T, n;
//  	cin >> T;
//  	while (T--)
//  	{
//  		cin >> n;
//  		while (n--)
//  		{
//  			cin >> s;
//  			add();
//  		}
//  		bfs(); //���pre����
//  		cin >> s;
//  		cout << solve() << "\n";
//  		init();
//  	}
//  	return 0;
//  }

// ��״����

// 2383
// const int R = 1e5 + 10;
// int a[R];
// int lowbit(int x) { return x & -x; }
// void add(int x, int k, int n)
// {
// 	for (register int j = x; j <= n; j += lowbit(j))
// 	{
// 		a[j] += k;
// 	}
// }
// int query(int x)
// {
// 	int res = 0;
// 	for (register int j = x; j > 0; j -= lowbit(j))
// 	{
// 		res += a[j];
// 	}
// 	return res;
// }
// int main()
// {
// 	int n, m;
// 	cin >> n >> m;
// 	register int j;
// 	int x, k;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> x;
// 		add(j, x, n);
// 	}
// 	char t;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> t >> x >> k;
// 		if (t == '1')
// 		{
// 			add(x, k, n);
// 		}
// 		else
// 		{
// 			cout << query(k) - query(x - 1) << "\n";
// 		}
// 	}
// 	return 0;
// }

// 2384
//  const int R = 3.2e4 + 10, N = 1.5e4 + 10;
//  int c[R], cnt[N];
//  int lowbit(int x)
//  {
//  	return x & -x;
//  }
//  void add(int x, int k, int n)
//  {
//  	for (register int j = x; j <= 32001; j += lowbit(j))
//  	{
//  		c[j] += k;
//  	}
//  }
//  int sum(int x)
//  {
//  	int res = 0;
//  	for (register int j = x; j > 0; j -= lowbit(j))
//  	{
//  		res += c[j];
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n;
//  	cin >> n;
//  	int x, y;
//  	for (register int j = 1; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		++x;
//  		++cnt[sum(x)];
//  		add(x, 1, n);
//  	}
//  	for (register int j = 0; j < n; ++j)
//  	{
//  		cout << cnt[j] << "\n";
//  	}
//  	return 0;
//  }

// 2385
//  const int R = 5e4 + 10;
//  int lp[R], rp[R], n;
//  int lowbit(int x)
//  {
//  	return x & -x;
//  }
//  void add(int x, int a[])
//  {
//  	for (register int j = x; j <= n; j += lowbit(j))
//  	{
//  		++a[j];
//  	}
//  }
//  int query(int x, int a[])
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
//  	int m;
//  	cin >> n >> m;
//  	register int j;
//  	char k;
//  	int l, r;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> k >> l >> r;
//  		if (k == '1')
//  		{
//  			add(l, lp);
//  			add(r, rp);
//  		}
//  		else
//  		{
//  			cout << query(r, lp) - query(l - 1, rp) << "\n";
//  			//�߶ε���˵�<=r���Ҷ˵�>=l������[l, r]��
//  		}
//  	}
//  	return 0;
//  }

// �߶���

// 2388_ʹ��һά����
//  using ll = long long;
//  const int R = 1e5 + 10;
//  ll sum[R << 2];								   // R*4
//  void update(int k, int l, int r, int p, int v) //����š���������䡢�޸�λ�ã������޸ģ��������ֵ���϶���
//  {
//  	if (l == p && r == p)
//  	{
//  		sum[k] += v;
//  		return;
//  	}
//  	int mid = (l + r) >> 1;
//  	if (p <= mid) //����������
//  	{
//  		update(k * 2, l, mid, p, v);
//  	}
//  	else //��Ϊ�ǵ����޸ģ����Բ����������Ͼ�������������
//  	{
//  		update(k * 2 + 1, mid + 1, r, p, v);
//  	}
//  	//�������ӽ�����¸����
//  	sum[k] = sum[k * 2] + sum[k * 2 + 1]; //��Ϊ����sum[k]+=v�ˣ�����������Ͳ���+=��
//  }
//  ll query(int k, int l, int r, int x, int y) // x��y��ʾҪ��ѯ�����䣬����ͬ��
//  {
//  	if (l >= x && r <= y)
//  	{
//  		return sum[k];
//  	}
//  	ll res = 0;
//  	int mid = (l + r) >> 1;
//  	if (x <= mid)
//  	{
//  		res += query(k * 2, l, mid, x, y);
//  	}
//  	if (y > mid)
//  	{
//  		res += query(k * 2 + 1, mid + 1, r, x, y);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, x, y;
//  	char t;
//  	cin >> n >> m;
//  	for (register int j = 1; j <= m; ++j)
//  	{
//  		cin >> t >> x >> y;
//  		if (t == '0') //�����޸�
//  		{
//  			update(1, 1, n, x, y);
//  		}
//  		else //�����ѯ
//  		{
//  			cout << query(1, 1, n, x, y) << "\n";
//  		}
//  	}
//  	return 0;
//  }

// 2388_ʹ�ýṹ��
//  using ll = long long;
//  const int R = 5e5 + 10;
//  struct Node
//  {
//  	int l, r;
//  	ll sum;
//  } a[R << 2];
//  void build(int k, int l, int r)
//  {
//  	a[k] = {l, r, 0};
//  	if (l == r)
//  	{
//  		return;
//  	}
//  	int mid = (l + r) >> 1;
//  	build(k << 1, l, mid);
//  	build(k << 1 | 1, mid + 1, r);
//  }
//  void update(int k, int p, int v)
//  {
//  	if (a[k].l == p && a[k].r == p)
//  	{
//  		a[k].sum += v;
//  		return;
//  	}
//  	int mid = (a[k].l + a[k].r) >> 1;
//  	if (p <= mid)
//  	{
//  		update(k << 1, p, v);
//  	}
//  	else
//  	{
//  		update(k << 1 | 1, p, v);
//  	}
//  	a[k].sum = a[k << 1].sum + a[k << 1 | 1].sum;
//  }
//  ll query(int k, int x, int y)
//  {
//  	if (a[k].l >= x && a[k].r <= y)
//  	{
//  		return a[k].sum;
//  	}
//  	ll res = 0;
//  	int mid = (a[k].l + a[k].r) >> 1;
//  	if (x <= mid)
//  	{
//  		res += query(k << 1, x, y);
//  	}
//  	if (y > mid)
//  	{
//  		res += query(k << 1 | 1, x, y);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, x, y;
//  	cin >> n >> m;
//  	build(1, 1, n);
//  	register int j;
//  	char t;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> t >> x >> y;
//  		if (t == '0')
//  		{
//  			update(1, x, y);
//  		}
//  		else
//  		{
//  			cout << query(1, x, y) << "\n";
//  		}
//  	}
//  	return 0;
//  }

// 2389
//  const int R = 2e5 + 10;
//  int a[R << 2];
//  void update(int k, int l, int r, int p, int v)
//  {
//  	if (l == p && r == p)
//  	{
//  		a[k] = v;
//  		return;
//  	}
//  	int mid = l + r >> 1;
//  	if (p <= mid)
//  	{
//  		update(k << 1, l, mid, p, v);
//  	}
//  	else
//  	{
//  		update(k << 1 | 1, mid + 1, r, p, v);
//  	}
//  	a[k] = max(a[k << 1], a[k << 1 | 1]);
//  }
//  int query(int k, int l, int r, int x, int y)
//  {
//  	if (l >= x && r <= y)
//  	{
//  		return a[k];
//  	}
//  	int mid = l + r >> 1, res = 0;
//  	if (x <= mid)
//  	{
//  		res = query(k << 1, l, mid, x, y);
//  	}
//  	if (y > mid)
//  	{
//  		res = max(res, query(k << 1 | 1, mid + 1, r, x, y));
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int m, p, x, ans = 0, tot = 0;
//  	cin >> m >> p; // m����ѯ�ʴ���������������󳤶�
//  	char c;
//  	for (register int j = 1; j <= m; ++j)
//  	{
//  		cin >> c >> x;
//  		if (c == 'A')
//  		{
//  			++tot;
//  			update(1, 1, m, tot, (ans + x) % p);
//  		}
//  		else
//  		{
//  			ans = query(1, 1, m, tot - x + 1, tot);
//  			cout << ans << "\n";
//  		}
//  	}
//  	return 0;
//  }

// 2390
//  using ll = long long;
//  const int R = 1e5 + 10;
//  int a[R];
//  ll sum[R << 2], add[R << 2];
//  void build(int k, int l, int r)
//  {
//  	if (l == r)
//  	{
//  		sum[k] = a[l];
//  		return;
//  	}
//  	int mid = l + r >> 1;
//  	build(k << 1, l, mid);
//  	build(k << 1 | 1, mid + 1, r);
//  	sum[k] = sum[k << 1] + sum[k << 1 | 1]; // pushup
//  }
//  void change(int k, int l, int r, int v)
//  {
//  	sum[k] += ll(v * (r - l + 1));
//  	add[k] += v;
//  }
//  void pushdown(int k, int l, int r)
//  {
//  	if (add[k])
//  	{
//  		int mid = l + r >> 1;
//  		change(k << 1, l, mid, add[k]);
//  		change(k << 1 | 1, mid + 1, r, add[k]);
//  		add[k] = 0;
//  	}
//  }
//  void update(int k, int l, int r, int x, int y, int v)
//  {
//  	if (l >= x && r <= y)
//  	{
//  		change(k, l, r, v);
//  		return;
//  	}
//  	pushdown(k, l, r);
//  	int mid = l + r >> 1;
//  	if (x <= mid)
//  	{
//  		update(k << 1, l, mid, x, y, v);
//  	}
//  	if (y > mid)
//  	{
//  		update(k << 1 | 1, mid + 1, r, x, y, v);
//  	}
//  	sum[k] = sum[k << 1] + sum[k << 1 | 1];
//  }
//  ll query(int k, int l, int r, int x, int y)
//  {
//  	if (l >= x && r <= y)
//  	{
//  		return sum[k];
//  	}
//  	ll res = 0;
//  	int mid = l + r >> 1;
//  	pushdown(k, l, r);
//  	if (x <= mid)
//  	{
//  		res += query(k << 1, l, mid, x, y);
//  	}
//  	if (y > mid)
//  	{
//  		res += query(k << 1 | 1, mid + 1, r, x, y);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, l, r, x;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	build(1, 1, n);
//  	char c;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> c >> l >> r;
//  		if (c == 'C')
//  		{
//  			cin >> x;
//  			update(1, 1, n, l, r, x);
//  		}
//  		else
//  		{
//  			cout << query(1, 1, n, l, r) << "\n";
//  		}
//  	}
//  	return 0;
//  }

// 2390_������û�
//  using ll = long long;
//  const int R = 1e5 + 10;
//  int a[R];
//  ll sum[R << 2], add[R << 2];
//  void build(int k, int l, int r)
//  {
//  	if (l == r)
//  	{
//  		sum[k] = a[l];
//  		return;
//  	}
//  	int mid = l + r >> 1;
//  	build(k << 1, l, mid);
//  	build(k << 1 | 1, mid + 1, r);
//  	sum[k] = sum[k << 1] + sum[k << 1 | 1]; // pushup
//  }
//  void update(int k, int l, int r, int x, int y, int v)
//  {
//  	if (l >= x && r <= y)
//  	{
//  		add[k] += v;
//  		return;
//  	}
//  	int mid = l + r >> 1;
//  	sum[k] += (min(r, y) - max(l, x) + 1) * v;
//  	if (x <= mid)
//  	{
//  		update(k << 1, l, mid, x, y, v);
//  	}
//  	if (y > mid)
//  	{
//  		update(k << 1 | 1, mid + 1, r, x, y, v);
//  	}
//  	// sum[k] = sum[k << 1] + sum[k << 1 | 1];
//  }
//  ll query(int k, int l, int r, int x, int y)
//  {
//  	if (l >= x && r <= y)
//  	{
//  		return sum[k] + (r - l + 1) * add[k];
//  	}
//  	ll res = (min(y, r) - max(l, x) + 1) * add[k];
//  	int mid = l + r >> 1;
//  	if (x <= mid)
//  	{
//  		res += query(k << 1, l, mid, x, y);
//  	}
//  	if (y > mid)
//  	{
//  		res += query(k << 1 | 1, mid + 1, r, x, y);
//  	}
//  	return res;
//  }
//  int main()
//  {
//  	int n, m, l, r, x;
//  	cin >> n >> m;
//  	register int j;
//  	for (j = 1; j <= n; ++j)
//  	{
//  		cin >> a[j];
//  	}
//  	build(1, 1, n);
//  	char c;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> c >> l >> r;
//  		if (c == 'C')
//  		{
//  			cin >> x;
//  			update(1, 1, n, l, r, x);
//  		}
//  		else
//  		{
//  			cout << query(1, 1, n, l, r) << "\n";
//  		}
//  	}
//  	return 0;
//  }

// ������������������ʽ������A*��IDA*

// 2429
//  int maxdep, a[1010], n;
//  inline int _abs(int x)
//  {
//  	return x < 0 ? -x : x;
//  }
//  bool dfs(int x, int step)
//  {
//  	if (step > maxdep)
//  		return false;
//  	if (x << (maxdep - step) < n) //ÿ��x��ȡ�ܴﵽ�����η���
//  		return false;
//  	if (x == n)
//  		return true;
//  	a[step] = x;
//  	for (register int j = 0; j <= step; ++j)
//  	{
//  		if (dfs(a[j] + x, step + 1))
//  			return true;
//  		if (dfs(_abs(a[j] - x), step + 1))
//  			return true;
//  	}
//  	return false;
//  }
//  int main()
//  {
//  	while (true)
//  	{
//  		cin >> n;
//  		if (!n)
//  			break;
//  		memset(a, 0, sizeof(a));
//  		maxdep = 0;
//  		while (!dfs(1, 0))
//  			++maxdep;
//  		cout << maxdep << "\n";
//  	}
//  	return 0;
//  }

// 2455
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
//  struct ASNode
//  {
//  	int point, guess, len;
//  	bool operator<(const ASNode &x) const
//  	{
//  		return guess > x.guess; //��ʱд��ʱ��������Ū���ˣ����´��˺ö��
//  	}
//  };
//  vector<Node> v[N], guess[N];
//  int f[N], cnt[N], dis[N], k;
//  bool b[N];
//  inline void dijkstra(int start)
//  {
//  	priority_queue<Node> q;
//  	memset(f, 0x3f, sizeof(f));
//  	f[start] = 0;
//  	q.push({start, 0});
//  	int from, to, sz;
//  	reg j;
//  	while (!q.empty())
//  	{
//  		from = q.top().point;
//  		b[from] = true;
//  		q.pop();
//  		sz = guess[from].size();
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = guess[from][j].point;
//  			if (!b[to] && f[from] + guess[from][j].len < f[to])
//  			{
//  				f[to] = f[from] + guess[from][j].len;
//  				q.push({to, f[to]});
//  			}
//  		}
//  	}
//  }
//  inline void astar(int start, int end)
//  {
//  	// point, guess���Ѿ��߹��ĳ���+Ԥ�Ƶ����յ㻹��Ҫ�ľ��룩, len���Ѿ��߹��ĳ��ȣ�
//  	priority_queue<ASNode> q;
//  	ASNode temp;
//  	memset(dis, 0x3f, sizeof(dis));
//  	dis[start] = 0;
//  	q.push({start, f[start], 0});
//  	int from, to, sz, len;
//  	reg j;
//  	while (!q.empty())
//  	{
//  		temp = q.top();
//  		from = temp.point;
//  		len = temp.len;
//  		q.pop();
//  		sz = v[from].size();
//  		++cnt[from];
//  		if (cnt[end] == k)
//  		{
//  			dis[end] = temp.len;
//  			return;
//  		}
//  		for (j = 0; j < sz; ++j)
//  		{
//  			to = v[from][j].point;
//  			if (cnt[to] < k) //��û�ҵ�k��·
//  			{
//  				dis[to] = len + v[from][j].len;
//  				q.push({to, dis[to] + f[to], dis[to]});
//  			}
//  		}
//  	}
//  }
//  int main()
//  {
//  	int n, m, a, b, x, y, len;
//  	cin >> n >> m >> a >> b >> k;
//  	reg j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y >> len;
//  		v[x].push_back({y, len});
//  		guess[y].push_back({x, len});
//  	}
//  	dijkstra(b); //���Ԥ��ֵ
//  	astar(a, b);
//  	// for (j = 1; j <= n; ++j)
//  	// {
//  	// 	cout << dis[j] << ' ';
//  	// }
//  	if (cnt[b] == k)
//  		cout << dis[b];
//  	else
//  		cout << "-1";
//  	return 0;
//  }

// 2456
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

// ����

// 2386_RMQģ����
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

// 2200_������LCAģ����
//  const int R = 5e5 + 10, K = 20;
//  vector<int> v[R];
//  int log2_[R], dep[R], f[R][K];
//  void dfs(int x, int fa)
//  {
//  	dep[x] = dep[fa] + 1;
//  	f[x][0] = fa;
//  	int sz = v[x].size(), to;
//  	for (register int j = 0; j < sz; ++j)
//  	{
//  		to = v[x][j];
//  		if (to != fa)
//  		{
//  			dfs(to, x);
//  		}
//  	}
//  }
//  inline int lca(int x, int y)
//  {
//  	if (dep[x] < dep[y])
//  	{
//  		swap(x, y); //��֤x�����>����y�����
//  	}
//  	while (dep[x] > dep[y])
//  	{
//  		x = f[x][log2_[dep[x] - dep[y]]];
//  	}
//  	if (x == y)
//  	{
//  		return x;
//  	}
//  	for (register int j = K - 1; j >= 0; --j)
//  	{
//  		if (f[x][j] != f[y][j])
//  		{
//  			x = f[x][j];
//  			y = f[y][j];
//  		}
//  	}
//  	return f[x][0];
//  }
//  int main()
//  {
//  	int n, m, root, x, y;
//  	register int i, j;
//  	cin >> n >> m >> root;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		cin >> x >> y;
//  		v[x].push_back(y);
//  		v[y].push_back(x);
//  	}
//  	log2_[1] = 0;
//  	for (j = 2; j <= n; ++j)
//  	{
//  		log2_[j] = log2_[j / 2] + 1;
//  	}
//  	dfs(root, 0);
//  	for (j = 1; j < K; ++j) // dfsʱ�Ѿ���j=0������������
//  	{
//  		for (i = 1; i <= n; ++i)
//  		{
//  			f[i][j] = f[f[i][j - 1]][j - 1];
//  		}
//  	}
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> x >> y;
//  		cout << lca(x, y) << "\n";
//  	}
//  	return 0;
//  }

// ����

// 2326
//  const int R = 5e5 + 10;
//  struct Node
//  {
//  	char sqrb;
//  	int x;
//  	bool operator<(const Node &a) const
//  	{
//  		if (x == a.x)
//  			return sqrb < a.sqrb;
//  		else
//  			return x < a.x;
//  	}
//  } a[R << 1];
//  class CStack
//  {
//  	Node sta[R];
//  	int _top = 0;
//  public:
//  	Node top() { return sta[_top]; }
//  	void pop() { --_top; }
//  	void push(Node x) { sta[++_top] = x; }
//  	int size() { return _top; }
//  } sta;
//  int main()
//  {
//  	int n, m;
//  	cin >> n >> m;
//  	int l, r, k = 0, ans = 0;
//  	register int j;
//  	for (j = 1; j <= m; ++j)
//  	{
//  		cin >> l >> r;
//  		a[++k] = {'[', l};
//  		a[++k] = {']', r};
//  	}
//  	sort(a + 1, a + k + 1);
//  	for (j = 1; j <= k; ++j)
//  	{
//  		if (a[j].sqrb == '[')
//  		{
//  			sta.push({'[', a[j].x});
//  		}
//  		else // a[j].sqrb==']'
//  		{
//  			if (sta.size() == 1) //û���ص�����
//  			{
//  				ans += a[j].x - sta.top().x + 1;
//  				sta.pop();
//  			}
//  			else
//  			{
//  				sta.pop();
//  			}
//  		}
//  	}
//  	cout << n - ans + 1;
//  	return 0;
//  }

// ��ɢ��

// 1764
// vector<int> a, b;
// const int M = 1e4 + 10;
// int res[M];
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	cout.tie(nullptr);
// 	int n, x;
// 	cin >> n;
// 	int j;
// 	for (j = 1; j <= n; ++j)
// 	{
// 		cin >> x;
// 		a.push_back(x);
// 		b.push_back(x);
// 	}
// 	sort(b.begin(), b.end());
// 	b.erase(unique(b.begin(), b.end()), b.end());
// 	for (j = 0; j < n; ++j)
// 	{
// 		x = lower_bound(b.begin(), b.end(), a[j]) - b.begin();
// 		++res[x];
// 	}
// 	for (j = 0; j < b.size(); ++j)
// 	{
// 		cout << b[j] << ' ' << res[j] << '\n';
// 	}
// 	return 0;
// }
