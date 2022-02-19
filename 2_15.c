#include<stdio.h>
#include<string.h>
int main() //输入密码，错三次退出
{
	int i;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//字符串对比，不能单纯写成password=="123456"
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i == 3)printf("三次均错误，退出程序\n");
	return 0;
}


//#include<stdio.h> //从两头往中间打印字符串
//int main()
//{
//	char arr1[] = "welcome in!!!!!";
//	char arr2[] = "###############";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//求字符串长，包含\0
//	//sz = strlen(arr1); 不包含\0
//	int low = 0, high = sz - 2;
//	while (low <= high)
//	{
//		arr2[low] = arr1[low];
//		arr2[high] = arr1[high];
//		printf("%s\n", arr2);
//		low++;
//		high--;
//	}
//	return 0;
//}


//int main()//再数组内找一个数下标
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int x = 3, i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int low = 0, high = sz - 1, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (arr[mid] == x)
//		{
//			printf("找到了，下标为:%d", mid);
//			break;
//		}
//		else if (arr[mid] < x)low = mid + 1;
//		else high = mid - 1;
//	}
//	if (low > high)
//		printf("找不到");
//}


//int main()//求1！+2！+3！+......+n!
//{
//	int i, j, n = 1, sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n = 1;
//		for (j = 1; j <= i; j++)
//		{
//			n = n * j;
//		}
//		sum = sum + n;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}


//int main()  //n的阶乘
//{
//	int i, n;
//	int sum = 1;
//	printf("请输入需要求的阶乘项数:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = i * sum;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}