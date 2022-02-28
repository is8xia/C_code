#include<stdio.h>
//int main()
//{
//	char a[100] = { 0 };
//	int ch = 0;
//	int i = 0;
//	char temp;
//	while ((ch = getchar()) != '$')
//	{
//		a[i] = ch;
//		i++;   //记录字符个数
//	}
//	for (ch = 0; ch < i / 2; ch++)
//	{
//		temp = a[ch];
//		a[ch] = a[i - ch - 1];
//		a[i - ch - 1] = temp;
//	}
//	for (ch = 0; ch < i; ch++)
//		printf("%c",a[ch]);
//	return 0;
//}


//int main()
//{
//	int cow[21] = { 1,1,1,1 };
//	int i = 0;
//	for (i = 4; i <= 20; i++)
//		cow[i] = cow[i - 3] + cow[i - 1];
//	printf("%d", cow[20]);
//	return 0;
//}


//int main()
//{
//	int ch;
//	int i = 0;
//	while (i < 3)
//	{
//		printf("请输入口令:");
//		scanf("%d", &ch);
//		if (ch != 123456)
//			printf("口令错误，请重新输入\n");
//		else
//		{
//			printf("口令验证通过\n");
//			break;
//		}
//		i++;
//	}
//	if (i == 3)
//		printf("该账号异常，将锁定24小时\n");
//}


//int main()
//{
//	char ch[100] = { 0 };
//	int a[100] = { 1,0 };
//	gets(ch);
//	int k = 1;
//	int j = 0;
//	int i = 1;
//	while (ch[i] != '\0')
//	{
//		//判断是否有相同
//		for (j = 0; j < k; j++)
//			if (ch[j] == ch[i])
//			{
//				a[j]++;
//				break;
//			}
//		//若无相同
//		if (j == k)
//		{
//			a[j]++;
//			ch[k] = ch[i];
//			k++;
//		}
//		i++;
//	}
//	for (j = 0; j < k; j++)
//		printf("%c ", ch[j]);
//	printf("\n");
//	for (j = 0; j < k; j++)
//		printf("%d ", a[j]);
//	printf("\n");
//	return 0;
//}


//#define N 3
//int judge_symmetry(int n,int a[N][N])
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < i; j++)
//		{
//			if (a[i][j] != a[j][i])
//				return 0;
//		}
//	return 1;
//}
//int main()
//{
//	int a[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	int flag = judge_symmetry(N,a);
//	if (flag == 1)printf("%d阶方针对称\n", N);
//	else printf("%d阶方针不对称\n", N);
//	return 0;
//}


//int main()   //打印10*10的方阵
//{
//	int a[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if ((i + j) == 9)a[i][j] = 2;
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	double a = 0;
//	double b = 0;
//	scanf("%lf %lf", &a, &b);
//	printf("并联电阻为:%.2lf\n", (a * b) / (a + b));
//	printf("串联电阻为:%.2lf\n", a + b);
//}


//int main()  //求单词个数
//{
//	char ch[100] = { 0 };
//	gets(ch);
//	int m = 0;
//	int i = 0;
//	while (ch[i] != '\0')
//	{
//		if (ch[i] == ' ')m++;
//		i++;
//	}
//	printf("单词的个数为%d", m + 1);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//在%c前加上空格，会消除前面所有的空白字符，然后读取一个字符
//	//即都不用getchar()去吸收\n
//	//或者在%c后面加上\n也能取到相同作用
//	while (scanf(" %c",&ch) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("%c是字母！\n", ch);
//		else
//			printf("%c不是字母！\n", ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("%c是字母！\n", ch);
//		else
//			printf("%c不是字母！\n", ch);
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	char a[10] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] == ch)
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if(i==10)
//			printf("Consonant\n");
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	while (~scanf("%d %d %d", &n1, &n2, &n3))
//	{
//		int max = n1 > n2?n1:n2;
//		max = max > n3 ? max : n3;
//		printf("max = %d\n", max);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 140)printf("Genius\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a[100] = { 0 };
//	int flag = 0;
//	gets(a);
//	int i = 0;
//	while (a[i] != '\0')
//	{
//		if (a[i] == 'A')flag++;
//		if (a[i] == 'B')flag--;
//		i++;
//	}
//	if (flag > 0)printf("A\n");
//	else if (flag < 0)printf("B\n");
//	else printf("E\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int j = 0;
//	int temp = 0;
//	int tag = 0;
//	for (i = 0; i < n-1; i++)  //n个元素,排序n-1趟
//	{
//		tag = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				tag = 1;
//			}
//		}
//		if (tag == 0)break;
//	}
//	for (i = n-1; i >= n - 5; i--)
//		printf("%d ", a[i]);
//	return 0;
//}


//int main()
//{
//	double v = 0;
//	int m = 0;
//	int d = 0;
//	int temp = 0;
//	scanf("%lf %d %d %d", &v, &m, &d, &temp);
//	if (m == 11 && d == 11)
//		v *= 0.7;
//	if (m == 12 && d == 12)
//		v *= 0.8;
//	if (temp == 1)v -= 50;
//	if (v < 0)v = 0;
//	printf("%.2lf\n", v);
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	//%x输入十六进制  %o输入八进制
//	scanf("%x %o", &a, &b);//不管输入是几进制，电脑中存储的都是二进制
//	sum = a + b;           //所以直接可以相加  
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	while ((scanf("%d %d %d", &n, &h, &m)))
//	{
//		k = m / h;
//		if (m % h != 0)k++;
//		printf("%d\n", n - k);
//	}
//	return 0;
//}


//int main()
//{
//	int second = 0;
//	scanf("%d", &second);
//	int a[3] = { 0 };
//	int i = 0;
//	for (i = 2; i >= 0; i--)
//	{
//		a[i] = second % 60;
//		second = second / 60;
//	}
//	for (i = 0; i < 3; i++)
//		printf("%d ", a[i]);
//	return 0;
//}