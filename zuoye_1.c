#include<stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    long long s = age * 3.156e7;   //e为底数为10的科学计数法
    printf("%d", s);
    return 0;
}


//int main()
//{
//    double d = 0;
//    scanf("%lf", &d);
//    int n = (int)d;
//    printf("%d", n % 10);
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int sum = (a + b) % 100;
//    printf("%d", sum);
//}


//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 10; j <= 10000; j *= 10)
//            sum += (i / j) * (i % j);
//        if (sum == i)printf("%d ", sum);
//    }
//    return 0;
//}


//#define p 3.1415926
//int main()
//{
//    double r = 0;
//    double v = 0;
//    scanf("%lf", &r);
//    v = p * 4 / 3.0 * r * r * r;
//    printf("%.3lf", v);
//}


//int main()
//{
//    int weight = 0;
//    int heigh = 0;
//    double BMI = 0;
//    scanf("%d %d", &weight, &heigh);
//    BMI = weight / ((heigh / 100.0) * (heigh / 100.0));
//    printf("%.2lf", BMI);
//    return 0;
//}

              
//int main()   //CCHNCHN
//{
//	char a[8000] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%s", a);
//	for (i = 0; i < 8000; i++)
//	{
//		if (a[i] == 'C')
//		{
//			for(j=i;j<8000;j++)
//				if (a[j] == 'H')
//				{
//					for (k = j; k < 8000; k++)
//						if (a[k] == 'N')
//							sum++;
//				}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int a[100000] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &j);
//		a[j] = j;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (a[i] != 0)
//			printf("%d ", a[i]);
//	}
//	return 0;
//}


//int fib(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//int main() {  //求梯子次数
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", fib(n));
//    return 0;
//}


//long long my_gys(long long n, long long m)  //最大公约数
//{
//	long long temp = 0;
//	if (n < m) 
//	{
//		temp = n;
//		n = m;
//		m = temp;
//	}
//	while (n % m != 0)
//	{
//		temp = n % m;
//		n = m;
//		m = temp;
//	}
//	return m;
//}
//
//long long my_gbs(long long n, long long m)  //最小公倍数
//{
//	long long my_gys(long long n, long long m); 
//	long long temp;
//	temp = my_gys(n, m);
//	return (n * m / temp);
//}
//
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%ld %ld", &n, &m);
//	long long gys = my_gys(n, m);
//	long long gbs = my_gbs(n, m);
//	printf("%ld", gys + gbs);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}


//int main()   //金字塔
//{
//	int ch = 0;
//	ch = getchar();
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//			printf(" ");
//		for (j = 0; j <= i; j++)
//			printf("%c ", ch);
//		printf("\n");
//	}
//}