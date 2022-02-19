#include<stdio.h>



//#include<stdlib.h>  //猜数字游戏
//#include<time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("****    1.play   0.exit    ****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	printf("****猜  数  字  游  戏****\n");
//	int a = rand() % 100 + 1;//0-100的随机数
//	int input ,i ,n = 0 ,b;
//	while (n < 1 || n>3)
//	{
//		printf("****难  度  选  择(1.简单  2.中等  3.难)****\n");
//		printf("请选择:");
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
//			printf("选择错误\n");
//			break;
//		}
//	}
//	for (i = 1; i <= b; i++)
//	{
//		printf("请输入你猜的数字:");
//		scanf("%d", &input);
//		if (input == a)
//		{
//			printf("猜对了\n");
//			break;
//		}
//		else if (input > a && (b - i) != 0)
//			printf("你输入的数字过大，还剩%d次机会\n", b - i);
//		else if (input < a && (b - i) != 0)
//			printf("你输入的数字过小，还剩%d次机会\n", b - i);
//		else printf("游戏结束，没有猜对\n");
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned)time(NULL));//拿时间戳来设置一个随机数的的起始点
//	do                          //设置一次即可所以放main内   time时间戳
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();  //猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}


//int main()  //九九乘法表
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


//int main()  //求1/1-1/2+1/3-1/4+.......-1/100
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


//int main()  //求100内9的个数
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
//	printf("9的个数为:%d", count);
//	return 0;
//}


//int main()  //打印素数
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


//int main()  //判断闰年
////1.能被4整除但不能被100整除    2.能被400整除
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


//int main()  //求最大公约数，辗转相除法
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