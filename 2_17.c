#include<stdio.h>
//int febo(int n)  //求第n个斐波那契数，方法1
//{
//	if (n <= 2)return 1;
//	if(n > 2)
//	return febo(n - 1) + febo(n - 2);
//}
int febo(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int p = febo(n);
	printf("第%d个斐波那契数为:%d", n, p);
	return 0;
}


//int JC(int n)  //求n的阶乘
//{
//	if (n <= 1)return 1;
//	return n * JC(n - 1);
//}
//int main()
//{
//	int n = 4;
//	int sum = JC(n);
//	printf("sum = %d", sum);
//	return 0;
//}


//int my_strlen(char* str) //所以用指针接受首元素地址，str为&a[0],*str为a[0]
//{
//	if (*str != '\0')
//	{
//
//		return 1+my_strlen(str+1);
//	}
//	return 0;
//}
//int main()
//{
//	char a[] = "welcome in";
//	int len = my_strlen(a); //a是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//	printf("%d", len);
//	return 0;
//}


//void print(int x)  //函数递归，大事化小
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);  //显然4最好打印,其次3,然后2,最后1，即划分print(1),2,3,4
//}
//int main()  //将无符号数按位打印出来
//{
//	unsigned int x = 1234;
//	print(x);
//	return 0;
//}


//#include"add.h" //自己定义的是""，调用系统自带的为<>
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int sum;
//	sum = add(x, y);  //函数调用
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数返回字符个数,即结果为4321
//	return 0;           
//}


//void Add(int* num)  //传址调用
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//int two_search(int arr[], int x, int sz)
//{              //本质上arr是指针故sizeof(arr) / sizeof(arr[0])相当于4(8)/4=1(2)
//	int high = sz - 1;      //指针类型为4个或8个字节   int为4个字节
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] == x)
//		{
//			printf("该元素数组下标为:%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > x)high = mid - 1;
//		else low = mid + 1;
//	}
//	if (low > high)printf("找不到该元素\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组传参的时候仅仅传的是首元素地址,不是整个数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 5;
//	two_search(arr,x,sz);
//	return 0;
//}


//void judge(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("%d是闰年", year);
//	else printf("%d不是闰年", year);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	judge(year);
//	return 0;
//}


//#include<math.h>  //函数判断素数
//void judge(int x)
//{
//	int i;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			printf("%d不为素数", x);
//			break;
//		}
//	}
//	if (i > sqrt(x))printf("%d为素数", x);
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	judge(x);
//	return 0;
//}