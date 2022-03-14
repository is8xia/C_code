#include<stdio.h>
int main()
{
	int a[] = { 1,4,6,2,4,3,5,7,3,4,8,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = sz - 1;
	while (i < j)
	{
		while (a[i] % 2 == 1)i++;
		while (a[j] % 2 == 0)j--;
		if (i < j)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		
	}
	for (i = 0; i < sz; i++)
		printf("%d  ",a[i]);
	return 0;
}


//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 0;
//		int temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			n++;
//			temp /= 10;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += (int)pow(temp % 10, n);  //pow(a,b)即a的b次方
//			temp /= 10;
//		}
//		if (i == sum)
//			printf("%d  ",i);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	while (n--)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<assert.h>
//#include<string.h>
//void fun(char* str)
//{
//	assert(str);
//	int sz = strlen(str);
//	char* left = str;
//	char* right = str + sz - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a[256] = { 0 };
//	scanf("%s", a);
//	fun(a);
//	printf("%s", a);
//	return 0;
//}


//#include<string.h>
//void fun(char a[],int sz)
//{
//	int i = 0;
//	while (i <= sz-1)
//	{
//		char temp = a[i];
//		a[i] = a[sz - 1];
//		a[sz - 1] = temp;
//		i++;
//		sz--;
//	}
//	printf("%s", a);
//}
//int main()
//{
//	char a[256] = { 0 };
//	scanf("%s", a);
//	int sz = (int)strlen(a);
//	fun(a,sz);
//	return 0;
//}


//int fact(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//		sum *= i;
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//		sum += fact(i);
//	printf("%d\n", sum);
//	return 0;
//}


//void fact(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//	int sum = 1;
//		for (j = 1; j <= i; j++)
//			sum = sum * j;
//	printf("%d! = %d", i, sum);
//	printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fact(n);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int x = a;
//	int y = b;
//	int temp = 0;
//	while (a % b != 0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("最小公倍数:%d\n最大公约数:%d", b,x*y/b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int x = 0;
//	double y = 0;
//	double z = 0.01;
//	for (i = 0; i < 30; i++)
//	{
//		x += 100000;
//		y += z;
//		z *= 2;
//	}
//	printf("%d\n%lf", x, y);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y < x; y++)
//			printf("     ");
//		for (y = x; y <= 9; y++)
//			printf("%5d", x * y);
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//			printf("%5d", x * y);
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= 9; y++)
//		{
//			if (x == 1)
//				printf("%5d", y);
//			else
//				printf("%5d", x * y);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ten = 0;
//	int five = 0;
//	int one = 0;
//	for (ten = 1; ten < 10; ten++)
//		for (five = 1; five < 18; five++)
//			for (one = 1; one <= 85; one++)
//				if ((five + ten + one) == 50 && (five * 5 + ten * 10 + one) == 100)
//					printf("ten = %d  five = %d  one = %d\n", ten, five, one);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0; x < 98; x++)
//		for (y = 0; y < 98; y++)
//			if ((x + y) == 98 && (x * 2 + y * 4) == 386)
//				printf("ji = %d  tu = %d\n", x, y);
//	return 0;
//}


//int main()
//{
//	int man = 0;
//	int woman = 0;
//	int child = 0;
//	int money = 50;
//	for (man = 0; man < 17; man++)
//		for (woman = 0; woman <= 25; woman++)
//			for (child = 0; child <= 30; child++)
//				if ((man + woman + child) == 30 && (man * 3 + woman * 2 + child) == 50)
//					printf("man = %d  woman = %d  child = %d\n", man, woman, child);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &x);
//	while (x != 0)
//	{
//		if (x > 0)
//		{
//			sum += x;
//			i++;
//		}
//		scanf("%d", &x);
//	}
//	printf("%d\n%d", sum, i);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &x);
//	while (x > 0)
//	{
//		sum += x;
//		scanf("%d", &x);
//		i++;
//	}
//	printf("sum = %d\ni = %d", sum,i);
//	return 0;
//}