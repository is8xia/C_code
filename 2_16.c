#include<stdio.h>



//#include<stdlib.h>  //��������Ϸ
//#include<time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("****    1.play   0.exit    ****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	printf("****��  ��  ��  ��  Ϸ****\n");
//	int a = rand() % 100 + 1;//0-100�������
//	int input ,i ,n = 0 ,b;
//	while (n < 1 || n>3)
//	{
//		printf("****��  ��  ѡ  ��(1.��  2.�е�  3.��)****\n");
//		printf("��ѡ��:");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			b = 10;
//			break;
//		case 2:
//			b = 7;
//			break;
//		case 3:
//			b = 5;
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	for (i = 1; i <= b; i++)
//	{
//		printf("��������µ�����:");
//		scanf("%d", &input);
//		if (input == a)
//		{
//			printf("�¶���\n");
//			break;
//		}
//		else if (input > a && (b - i) != 0)
//			printf("����������ֹ��󣬻�ʣ%d�λ���\n", b - i);
//		else if (input < a && (b - i) != 0)
//			printf("����������ֹ�С����ʣ%d�λ���\n", b - i);
//		else printf("��Ϸ������û�в¶�\n");
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned)time(NULL));//��ʱ���������һ��������ĵ���ʼ��
//	do                          //����һ�μ������Է�main��   timeʱ���
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();  //��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}


//int main()  //�žų˷���
//{
//	int a;
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a = i * j;
//			printf("%d * %d = %d\t",j,i,a);
//		}
//		printf("\n");
//	}
//		
//	return 0;
//}


//int main()  //��1/1-1/2+1/3-1/4+.......-1/100
//{
//	float x = 1;
//	float count[3] = { 0 };
//	while ( x <= 100)
//	{
//		count[0] += 1 / x;
//		x++;
//		if(x<=100)
//		{
//			count[1] += 1 / x;
//			x++;
//		}
//	}
//	count[2] = count[0] - count[1];
//	printf("%f", count[2]);
//	return 0;
//}


//int main()  //��100��9�ĸ���
//{
//	int a;
//	int count = 0;
//	for (a = 1; a < 100; a++) 
//	{
//		if (a / 10 == 9)
//			count++;
//		if (a % 10 == 9)
//			count++;
//	}
//	printf("9�ĸ���Ϊ:%d", count);
//	return 0;
//}


//int main()  //��ӡ����
//{
//	int x;
//	int count = 0,i;
//	for (x = 101; x <= 200; x+=2)
//	{
//		for (i = 2; i < x; i++)
//		{
//			if (x % i == 0)break;
//		}
//		if (i == x)
//		{
//			printf("%d ", x);
//			count++;
//		}
//	}
//	printf("\np = %d", count);
//	return 0;
//}


//int main()  //�ж�����
////1.�ܱ�4���������ܱ�100����    2.�ܱ�400����
//{
//	int year;
//	int sum = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			sum++;
//		}
//	}
//	printf("\n%d", sum);
//	return 0;
//}


//int main()  //�����Լ����շת�����
//{
//	int n = 24;
//	int m = 16;
//	int r;
//	while (n % m)
//	{
//		r = n % m;
//		n = m;
//		m = r;
//	}
//	printf("%d", m);
//  return 0;
//}