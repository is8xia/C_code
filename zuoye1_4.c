#include<stdio.h>
//int main()
//{
//	char a[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf(" %c", &a[i][j]); //%c前面加空格消除\n等空白字符
//	//行相等
//	for (i = 0; i < 3; i++)
//	{
//		if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
//		{
//			if (a[i][0] == 'k')
//			{
//				printf("KiKi wins!\n");
//				return 0;
//			}
//			if (a[i][0] == 'b')
//			{
//				printf("BoBo wins!\n");
//				return 0;
//			}
//		}
//	}
//	//列相等
//	for (i = 0; i < 3; i++)
//	{
//		if (a[0][i] == a[1][i] && a[1][i] == a[2][i])
//		{
//			if (a[0][i] == 'k')
//			{
//				printf("KiKi wins!\n");
//				return 0;
//			}
//		    if (a[0][i] == 'b')
//			{
//				printf("BoBo wins!\n");
//				return 0;
//			}
//		}
//
//	}
//	//主对角线相等
//	if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
//	{
//		if (a[0][0] == 'k')
//		{
//			printf("KiKi wins!\n");
//			return 0;
//		}
//		if (a[0][0] == 'b')
//		{
//			printf("BoBo wins!\n");
//			return 0;
//		}
//	}
//	//副对角线相等
//	if (a[0][2] == a[1][1] && a[1][1] == a[2][0])
//	{
//		if (a[1][1] == 'k')
//		{
//			printf("KiKi wins!\n");
//			return 0;
//		}
//		if (a[1][1] == 'b')
//		{
//			printf("BoBo wins!\n");
//			return 0;
//		}
//	}
//	printf("No winner!\n");
//	return 0;
//}


//int main()  //杨辉三角
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[30][30] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//				a[i][j] = 1;
//			else
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()  //矩阵初等变换
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int a[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			scanf("%d", &a[i][j]);
//	int k = 0;
//	scanf("%d", &k);
//	char t = 0;
//	int x = 0;
//	int y = 0;
//	int temp = 0;
//	for (i = 0; i < k; i++)
//	{
//		scanf(" %c %d %d", &t, &x, &y);  //%c前空格可消除\n、空格等看不见字符
//		//换行
//		if (t == 'r')
//		{
//			for (j = 0; j < m; j++)
//			{
//				temp = a[x - 1][j];
//				a[x - 1][j] = a[y - 1][j];
//				a[y - 1][j] = temp;
//			}
//		}
//		//换列
//		if (t == 'c')
//		{
//			for (j = 0; j < n; j++)
//			{
//				temp = a[j][x - 1];
//				a[j][x - 1] = a[j][y - 1];
//				a[j][y - 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//int main()   //矩阵转至
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	int a[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &num);
//			a[j][i] = num;
//		}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//			printf("%d ", a[j][i]);
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int a[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//			if (i > j && a[i][j] != 0)
//			{
//				printf("no\n");
//				return 0;
//			}
//		}
//	printf("yes\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int a[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			if (i > j && a[i][j] != 0)
//			{
//				printf("no\n");
//				return 0;
//			}
//		}
//	printf("yes\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	for (i = 1; i <= n * m; i++)   //边输入边打印也可以，等全部输入完才打印结果才显示
//	{
//		scanf("%d", &num);
//		printf("%d ", num);
//		if (i % m == 0)
//			printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n ; i++)
//		for (j = 0; j < m; j++)
//			scanf("%d", &arr[i][j]);
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	printf("%d", arr[x - 1][y - 1]);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arr3[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] > arr2[j])
//			arr3[k++] = arr2[j++];
//		else
//			arr3[k++] = arr1[i++];
//	}
//	if (i == n)
//	{
//		while (j < m)
//			arr3[k++] = arr2[j++];
//	}
//	else
//	{
//		while (i < n)
//			arr3[k++] = arr1[i++];
//	} 
//	for (i = 0; i < k; i++)
//		printf("%d ", arr3[i]);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				int k = 0;
//				for (k = j; k < n - 1; k++)
//					a[k] = a[k + 1];
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int del = 0;
//	scanf("%d", &del);
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (del != arr[i])
//		{
//			arr[k] = arr[i];
//			printf("%d ", arr[k++]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x[2] = { 0 };
//	int i = 0;
//	int flag1 = 1;
//	int flag2 = 1;
//	scanf("%d", &x[0]);
//	for (i = 0; i < n-1; i++)
//	{
//		scanf("%d", &x[1]);
//		if (x[0] >= x[1] && flag2 < 2)
//			flag1++;
//		if (x[0] < x[1] && flag1 < 2)
//			flag2++;
//		if (flag2 > 2 && flag1 > 2)
//			break;
//		x[0] = x[1];
//	}
//	if (flag1 == n || flag2 == n)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//
//
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int i = 0;
//	int positive = 0;
//	int negative = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &x);
//		if (x > 0)
//			positive++;
//		if (x < 0)
//			negative++;
//	}
//	printf("positive:%d\nnegative:%d\n", positive, negative);
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 9; i >= 0; i--)
//		printf("%d ", a[i]);
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int number = 0;
//	int x = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &x);
//			if (x > 0)
//				number += x;
//		}
//	}
//	printf("sum = %d", number);
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char a[10] = { 0 };
//	char b[10] = { 0 };
//	scanf("%s %s", a, b);
//	if (strcmp(a, b) == 0)
//		printf("same\n");
//	else
//		printf("diffent\n");
//	return 0;
//}