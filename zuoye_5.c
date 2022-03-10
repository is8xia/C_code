#include<stdio.h>



//int my_max(int a[], int n)
//{
//	int i = 0;
//	int maxnum = 0;
//	for (i = 0; i < n; i++)
//	{
//		int max = 0;
//		int j = 0;
//		for (j = i; j < n; j++)
//		{
//			max += a[j];
//			if (max > maxnum)
//				maxnum = max;
//		}
//	}
//	return maxnum;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	int max = my_max(a, 10);
//	printf("%d\n", max);
//	return 0;
//}


//int is_num(int n)
//{
//	while (n)
//	{
//	if (n % 10 > 1)
//		return 0;
//	else
//		n /= 10;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2;; i++)
//	{
//		if (is_num(i * n))
//		{
//			m = i * n;
//			printf("%d\n", m);
//			break;
//		}
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char a[100] = { 0 };
//	int b[5] = { 0 };
//	gets(a);
//	int sz = strlen(a);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] >= 'a' && a[i] <= 'z')
//			b[0]++;
//		else if (a[i] >= 'A' && a[i] <= 'Z')
//			b[1]++;
//		else if (a[i] == ' ')
//			b[2]++;
//		else if (a[i] >= '0' && a[i] <= '9')
//			b[3]++;
//		else b[4]++;
//	}
//	printf("%d %d %d %d %d", b[0], b[1], b[2], b[3], b[4]);
//	return 0;
//}


//#define m 10
//int main()
//{
//	int A[m] = { 0 };
//	int B[m] = { 0 };
//	int i = 0;
//	for (i = 0; i < m; i++)
//		scanf("%d", &A[i]);
//	for (i = 0; i < m; i++)
//		scanf("%d", &B[i]);
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			if (A[i] == B[j])
//			{
//				printf("%d ", A[i]);
//				break;
//			}
//	}
//	return 0;
//}


//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int a[4] = { 0 };
//	for (i = 200; i < 3000; i++)
//	{
//		int j = i;
//		int p = 0;
//		while (j)
//		{
//			a[p++] = j % 10;
//			j /= 10;
//		}
//		if (i < 1000)
//		{
//			if (a[0] == a[2] && (a[0] == k || a[1] == k))
//				printf("%d ", i);
//		}
//		else
//		{
//			if (a[0] == a[3] && a[1] == a[2] && (a[0] == k || a[1] == k))
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a[] = { 5,4,3,7,2,9,1,2 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int m = 1;
//		int j = 0;
//		for (j = 1; j <= a[i]; j++)
//		{
//			m *= j;
//		}
//		sum += m;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int a[] = { -5,2,-3,4,-8,-9,1,3,-10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int begin = 0;
//	int end = 0;
//	int temp = 0;
//	for (k = 0; k < sz; k++)
//	{
//		i = k;
//		while (a[i] < 0)
//			i++;
//		begin = i;
//		while (a[i] >= 0)
//			i++;
//		end = i;
//		if (end > sz - 1)
//			break;
//		temp = a[end];
//		for (j = end; j > begin; j--)
//			a[j] = a[j - 1];
//		a[begin] = temp;
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ",a[i]);
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char a[100] = { 0 };
//	char b[100] = { 0 };
//	int i = 0;
//	int k = 1;
//	scanf("%s", a);
//	int sz = (int)strlen(a);
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 0;
//		if (i == 0)
//			b[i] = a[i];
//		else
//		{
//			int j = 0;
//			for (j = 0; j < k; j++)
//				if (a[i] != b[j])
//					flag++;
//			if (flag == k)
//				b[k++] = a[i];
//		}
//	}
//	b[k] = '\0';
//	printf("%s", b);
//	return 0;
//}


//int my_sum(int a[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int maxsum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		for (j = i; j < n; j++)
//		{
//			sum += a[j];
//			if (sum > maxsum)
//				maxsum = sum;
//		}
//	}
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	int sum = my_sum(a,10);
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int m = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			m *= j;
//		sum += m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int num = 0;
//	for (i = 3; i <= n; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			num = i;
//	}
//	printf("%d", num);	
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	for (i = m; i <= n; i++)
//	{
//		int num = 0;
//		int k = i;
//		while (k)
//		{
//			num = num + (k % 10) * (k % 10) * (k % 10);
//			k = k / 10;
//		}
//		if (num == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdlib.h>
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Lnode,*Linklist;
//int main()
//{
//	Linklist head = (Linklist)malloc(sizeof(Lnode));
//	head->next = NULL;
//	Lnode* q = head;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int x = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		Lnode* p = (Lnode*)malloc(sizeof(Lnode));
//		p->data = x;
//		p->next = NULL;
//		q->next = p;
//		q = p;
//	}
//	Lnode* p = head->next;
//	Lnode* pre = head;
//	scanf("%d", &x);
//	while (p != NULL)
//	{
//		if (p->data == x)
//		{
//			pre->next = p -> next;
//			free(p);
//			p = pre->next;
//			n--;
//		}
//		else
//		{
//			pre = p;
//			p = p->next;
//		}
//	}
//	p = head->next;
//	printf("%d\n", n);
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	return 0;
//}


//int main()
//{
//	int a[1001] = { 0 };
//	int i = 0;
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		a[num] = num;
//	}
//	for (i = 0; i < 1001; i++)
//		if (a[i] != 0)
//			printf("%d ", a[i]);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 1000; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//int my_max(a, b, c)
//{
//	if (a < b)
//		a = b;
//	if (a < c)
//		a = c;
//	return a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	float max1 = (float)my_max(a + b, b, c);
//	float max2 = (float)my_max(a, b + c, c);
//	float max3 = (float)my_max(a, b, b + c);
//	float m = max1 / (max2 + max3);
//	printf("%.2f", m);
//	return 0;
//}


//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	switch (score/10)
//	{
//	case 10: case 9:
//		printf("A\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	case 5: case 4: case 3:
//	case 2: case 1: case 0:
//		printf("E\n");
//		break;
//	default:
//		printf("F\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	char a[8000] = { 0 };  //CCHNCHN
//	scanf("%s", a);
//	//统计chn个数
//	long long c = 0;
//	long long ch = 0;
//	long long chn = 0;
//	char* p = a;
//	while (*p)
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch += c;
//		else if (*p == 'N')
//			chn += ch;
//		p++;
//	}
//	printf("%lld\n", chn);
//	return 0;
//}


//int main()
//{
//	int	n = 0;
//	scanf("%d", &n);
//	int a[100001] = { 0 };
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf(" %d", &k);
//		a[k] = k;
//	}
//	for (i = 0; i < 100001; i++)
//	{
//		if (a[i] != 0)
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//int taijie(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return taijie(n - 1) + taijie(n - 2);
//}
//int main()  //本质就是斐波那契数列
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = taijie(n);
//	printf("%d\n", sum);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	while (n)
//	{
//		int m = n % 10;
//		if (m % 2 == 1)
//			m = 1;
//		else
//			m = 0;
//		sum += m * (int)pow(10, i);  //pow(10,i)  10的i次方
//		i++;
//		n /= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld", &n, &m);
//	long long n1 = n;
//	long long m1 = m;
//	//最大公约数
//	long long temp = 0;
//	while (n1 % m1)   //若n1%m1为0即m1为n和m的最大公约数
//	{
//		temp = n1 % m1;
//		n1 = m1;
//		m1 = temp;
//	}
//	long long max = m;
//	//最小公倍数为  n * m / max
//	long long min = n * m / max;
//	printf("%lld\n", max + min);
//	return 0;
//}


//int main()
//{
//	int h = 0;
//	int m = 0;
//	long k = 0;
//	scanf("%d:%d%ld", &h, &m, &k);
//	h += k / 60; 
//	m += k % 60;
//	if (m > 60)
//	{
//		h += m / 60;
//		m = m % 60;
//	}
//	h = h % 24;
//	printf("%02d:%02d", h, m);
//	return 0;
//}


//int main()
//{
//	long num = 0;
//	scanf("%ld", &num);
//	long sum = 0;
//	while (num)
//	{
//		sum += num;
//		num--;
//	}
//	printf("%ld\n", sum);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int a[40] = { 0 };
//	int i = 0;
//	while (num)
//	{
//		a[i] = num % 6;
//		num = num / 6;
//		i++;
//	}
//	int k = 0;
//	for (k = i-1; k >= 0; k--)
//		printf("%ld", a[k]);
//	return 0;
//}