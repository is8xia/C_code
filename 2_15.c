#include<stdio.h>
#include<string.h>
int main() //�������룬�������˳�
{
	int i;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�ַ����Աȣ����ܵ���д��password=="123456"
		{
			printf("��¼�ɹ�\n");
			break;
		}
	}
	if (i == 3)printf("���ξ������˳�����\n");
	return 0;
}


//#include<stdio.h> //����ͷ���м��ӡ�ַ���
//int main()
//{
//	char arr1[] = "welcome in!!!!!";
//	char arr2[] = "###############";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//���ַ�����������\0
//	//sz = strlen(arr1); ������\0
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


//int main()//����������һ�����±�
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
//			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
//			break;
//		}
//		else if (arr[mid] < x)low = mid + 1;
//		else high = mid - 1;
//	}
//	if (low > high)
//		printf("�Ҳ���");
//}


//int main()//��1��+2��+3��+......+n!
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


//int main()  //n�Ľ׳�
//{
//	int i, n;
//	int sum = 1;
//	printf("��������Ҫ��Ľ׳�����:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = i * sum;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}