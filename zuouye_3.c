#include<stdio.h>



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				if (i == j || j == 0 || i == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//}


//int main()  //空心正方形
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//}
//int main()  //正斜线
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (j == i || j + i == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()  //正斜线
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//				printf(" ");
//			printf("*");
//			for (j = 0; j < i; j++)
//				printf(" ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()  //反斜线
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//				printf(" ");
//			printf("*");
//			for (j = 0; j < n - i; j++)
//				printf(" ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()  //剑型图案
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//				printf("  ");
//			for (j = 0; j <= i; j++)
//				printf("*");
//			printf("\n");
//		}
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//				printf("  ");
//			for (j = 0; j < n - i + 1; j++)
//				printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n + 1 - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()   //菱形
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		//上半
//		for (i = 0; i < n+1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//				printf(" ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		//下半
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//				printf(" ");
//			for (j = i; j < n; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()   //翻转金字塔
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//				printf(" ");
//			for (j = i; j < n; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()   //金字塔
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i - 1; j++)
//				printf(" ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()  //带空格直角三角形
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = n-1; j > i; j--)
//				printf("  ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()  //翻转直角三角形
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = n; j > i; j--)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()  //直角三角形
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()   //正方形
//{
//	int len = 0;
//	while (scanf("%d", &len) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < len; i++)
//		{
//			for (j = 0; j < len; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//}


//int main()  //*行
//{
//	int len = 0;
//	while (scanf("%d", &len) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < len; i++)
//			printf("*");
//		printf("\n");
//	}
//}


//int main()   //计算器
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf + %.4lf = %.4lf\n", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf - %.4lf = %.4lf\n", n1, n2, n1 - n2);
//			break;
//		case '/':
//			if (n2 == 0.0)
//				printf("n2不能为0\n");
//			else
//			printf("%.4lf / %.4lf = %.4lf\n", n1, n2, n1 / n2);
//			break;
//		case '*':
//			printf("%.4lf * %.4lf = %.4lf\n", n1, n2, n1 * n2);
//			break;
//		default :
//			printf("不合法\n");
//			break;
//		}
//	}
//	return 0;
//}


//int main()  //某年某月的天数
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d%d", &year, &month) != EOF)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			switch (month)
//			{
//			case 1: case 3: case 5: case 7:
//			case 8: case 10: case 12:
//				printf("31天\n");
//				break;
//			case 2:
//				printf("29天\n");
//				break;
//			default:
//				printf("30天\n");
//				break;
//			}
//		}
//		else
//		{
//			switch (month)
//			{
//			case 1: case 3: case 5: case 7:
//			case 8: case 10: case 12:
//				printf("31天\n");
//				break;
//			case 2:
//				printf("28天\n");
//				break;
//			default:
//				printf("30天\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}


//#include<math.h>  //求一元二次方程解
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//			printf("不为一元二次方程\n");
//		else
//		{
//			double disc = b * b - 4 * a * c;
//			if (disc == 0)
//			printf("x1 = x2 = %.2lf\n",(-b + sqrt(disc)) / (2 * a));
//			else if (disc > 0.0)
//			printf("x1 = %.2lf;x2 = %.2lf\n",(-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
//			else
//			{
//				double s = -b / (2 * a);
//				double x = sqrt(-disc) / (2 * a);
//				printf("x1 = %.2lf - %.2lfi;x2 = %.2lf + %.2lfi", s, x, s, x);
//			}
//		}
//	}
//	return 0;
//}


//int main()   //BMI肥胖测试
//{
//	int h = 0;
//	int w = 0;
//	double BMI = 0;
//	while (scanf("%d%d", &w, &h) != EOF)
//	{
//		BMI = w / (h * h / 100.0 / 100.0);
//		if (BMI < 18.5)
//			printf("偏瘦\n");
//		else if (BMI >= 18.5 && BMI <= 23.9)
//			printf("正常\n");
//		else if (BMI > 23.9 && BMI <= 27.9)
//			printf("过重\n");
//		else
//			printf("肥胖\n");
//	}
//}


//int main()  //判断三角形
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//				printf("等边");
//			else if(a == b || b == c || a == c)
//				printf("等腰");
//			printf("三角形\n");
//		}
//		else printf("不为三角形\n");
//	}
//}


//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)printf("1\n");
//		else if (t == 0)printf("0.5\n");
//		else printf("0\n");
//	}
//	return 0;
//}