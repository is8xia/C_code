#include<stdio.h>

//int my_strlen(char* str)   //ָ���ȥָ������м�Ԫ�صĸ���
//{						  //���ַ�����
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
//	printf("%d`\n", sizeof(a = x + 10));   //��x+10����a������ʱshort�ͣ�ռ�����ֽ�
//	printf("%d\n", a);  //sizeof�ڲ��ı��ʽ���������㣬���Դ�ӡ���a==0
//	return 0;
//}


//int main()  //����λ��������ƶ�������ͳ��num�в���1�ĸ���
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
//	//int temp = 0 ���м������ʡ��
//
//	//a = a ^ b;  //���
//	//b = a ^ b;  //a��b������������a������a��b������ԭ��a������a��a������ԭ��b
//	//a = a ^ b;  //�����в��Ƽ�
//
//	/*a = a + b;  �Ӽ���-�������
//	b = a - b;
//	a = a - b;*/  
//	printf("after:a = %d b = %d\n", a, b);
//  return 0;
//}


//void bubble_sort(int arr[],int sz)  //ð������
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