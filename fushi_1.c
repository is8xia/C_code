#include<stdio.h>
int main()
{
	int n = 0;
	int j = 0;
	int o = 0;
	scanf("%d", &n);
	o = n / 2;
	j = o;
	if (n % 2 == 1)
		j += 1;
	printf("%d %d\n", j, o);

}


//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int m = i;
//		while (m)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			m /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	char ch1[10] = { 0 };
//	char ch2[10] = { 0 };
//	while (scanf("%s %s", &ch1, &ch2)!=EOF)
//	{
//		if (strcmp(ch1, "admin") == 0 && strcmp(ch2, "admin") == 0)
//			printf("成功!\n");
//		else
//			printf("失败!\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a1[100][100] = { 0 };
//	int a2[100][100] = { 0 };
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &a1[i][j]);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &a2[i][j]);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			if (a1[i][j] == a2[i][j])
//				count++;
//	printf("%.2f\n", 100.0 * count / (m * n));
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a[101] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 2; i <= n; i++)
//			a[i] = i;
//		int j = 0;
//		for (i = 2; i <= n; i++)
//			for (j = i + 1; j <= n; j++)
//				if (a[j] % i == 0)
//					a[j] = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (a[i] != 0)
//				printf("%d ", a[i]);
//			else count++;
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a[51] = { 0 };
//	int x = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &x);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (a[i] > x)
//			a[i + 1] = a[i];
//		else
//		{
//			a[i + 1] = x;
//			break;
//		}
//			
//	}
//	if (i < 0)
//		a[i + 1] = x;
//	for (i = 0; i < n + 1; i++)
//		printf("%d ", a[i]);
//	return 0;
//}


//int main()
//{
//	int s = 0;
//	int i = 0;
//	scanf("%d", &s);
//	int max = s;
//	int min = s;
//	float sum = (float)s;
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &s);
//		if (max < s)max = s;
//		if (min > s)min = s;
//		sum += s;
//	}
//	printf("平均分:%.2f", (sum - min - max) / 5.0);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("%d ", j);
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<math.h>
//int main()   //判断是否为素数
//{
//	int x = 0;
//	while (scanf("%d", &x) != EOF)
//	{
//		int m = (int)sqrt(x);
//		int i = 0;
//		for (i = 2; i <= m; i++)
//			if (x % i == 0)
//				break;
//		if (i == m + 1)
//			printf("%d为素数！\n", x);
//		else
//			printf("%d不为素数!\n", x);
//	}
//	return 0;
//}


//int my_min(int x, int y, int z)  //求最小值
//{
//	if (x > y)
//		x = y;
//	if (x > z)
//		x = z;
//	return x;
//}
//int main()
//{
//	int a[5] = { 0 };
//	int i = 0;
//	for(i=0;i<5;i++)
//	scanf("%d", &a[i]);
//	int min = my_min(a[0], a[1], a[2]);
//	min = my_min(a[3], a[4], min);
//	printf("min = %d\n", min);
//	return 0;
//}


//int main()   //输出菱形
//{
//	int n = 0;
//	int flag = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		flag = 0;
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= n - i; j++)
//				printf(" ");
//			for (j = 1; j <= 2 * i - 1; j++)
//				printf("%c", 'A' + flag);
//			printf("\n");
//			flag++;
//		}
//		for (i = 1; i <= n - 1; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf(" ");
//			for (j = 1; j <= 2 * (n - i) - 1; j++)
//				printf("%c", 'A' + flag);
//			printf("\n");
//			flag++;
//		}
//	}
//	return 0;
//}