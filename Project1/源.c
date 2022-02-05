#include<stdio.h>
#include<math.h>
//int main()
//{
//	printf_s("%.8f\n", 1 + 2 * sqrt(3) / (5 - 0.1));
//
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}
//int main()
//{
//	const double pi = acos(-0.1);
//	double r, h, s1, s2, s;
//	scanf_s("%1f%1f", &r, &h);
//	s1 = pi * r * r;
//	s2 = 2 * pi * r * h;
//	s = s1 + s2;
//	printf("A=%.3f\n",s);
//	return 0;
//
//}
//
//int main()
//{
//	int a, b, t;
//	scanf_s("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("%d\n%d", a, b);
//	return 0;
//}
//int main()
//{
//	int m, n, a, b;//m是总数，n是总腿数，a为鸡，b为兔。
//	scanf_s("%d%d", &m, &n);
//	a = (4*m - n) / 2;
//	b = (n - 2*m)/2;
//	if (n % 2 == 1 || a < 0 || b < 0)
//		printf("no answer");
//	else
//		printf("%d\n%d", a, b);
//	return 0;
//}
//int main()
//{
//	int a, b, c,t;
//	scanf_s("%d%d%d", &a, &b, &c );//a=4,b=1,c=3
//	if (a > b)
//	{t = b; b = a; a = t;}//a=1,b=4
//	if (a > c)
//	{t = c; c = a; a = t;}//c=3,a=1
//	if(b>c)
//	{t = c; c = b; b = t;}//c=4,b=3
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	//int a, b;
//	/*scanf_s("%d%d",&a, & b);*/
//	printf("");
//
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	double m;
//	scanf_s("%d%d%d", &a, &b, &c);
//	m = (a + b + c) / 3;
//	printf("%.3f", m);
//	return 0;
//}
//int main()
//{
//	float f;
//	scanf_s("%f", &f);
//	printf("%.3f\n", 5 * (f - 32) / 9);
//	return 0;
//}
//int main()
//{
//	int n,b,A;
//	b = 1;
//	A = 0;
//	scanf_s("%d", &n);
//	for (b = 1; b <= n;b++)
//	{
//		A = A + b;
//	}
//	printf("%d", A);
//	return 0;
//}
//double pi=3.1415926;
//int main()
//{
//	double n, ret;
//	scanf_s("%f", &n);
//	double sin(double n);
//	ret = sin(n);
//	printf("%1f", ret);
//	return 0;
//}
int main()
{
	int close = 95;
	double a;
	long double b;
	scanf_s("%f", &a);
	if (300 <= a * close)
		b = a * 95 * 0.85;
	printf("%f", b);
	

	
	return 0;
}