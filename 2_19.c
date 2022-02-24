#include<stdio.h>

//int my_strlen(char* str)   //指针减去指针等于中间元素的个数
//{						  //求字符串长
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//		end++;
//	return end - start;
//}
//int main()
//{
//	char a[] = "bit";
//	int len = my_strlen(a);
//	printf("%d", len);
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = a;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		*(p++) = 0;
//		printf("%d\t", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	short a = 0;
//	int x = 5;
//	printf("%d`\n", sizeof(a = x + 10));   //把x+10赋给a，所以时short型，占两个字节
//	printf("%d\n", a);  //sizeof内部的表达式不参与运算，所以打印结果a==0
//	return 0;
//}


//int main()  //利用位运算符和移动操作符统计num中补码1的个数
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before:a = %d b = %d\n", a, b);
//	//int temp = 0 用中间变量最省事
//
//	//a = a ^ b;  //异或法
//	//b = a ^ b;  //a和b的异或产生密码a，密码a和b异或产生原来a，密码a和a异或产生原来b
//	//a = a ^ b;  //工作中不推荐
//
//	/*a = a + b;  加减法-可能溢出
//	b = a - b;
//	a = a - b;*/  
//	printf("after:a = %d b = %d\n", a, b);
//  return 0;
//}


//void bubble_sort(int arr[],int sz)  //冒泡排序
//{
//	int i = 0, j = 0;
//	int flag = 0;
//	int temp;
//	for (i = 0; i < sz - 1; i++)
//	{
//		flag = 0;
//		for (j = sz -1; j > i; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//				flag = 1;
//			}
//		}
//			
//		if (flag == 0)break;
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//		
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}