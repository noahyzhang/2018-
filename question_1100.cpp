#define _CRT_SECURE_NO_WARNINGS 1

//多多是一只小菜鸟，都说笨鸟先飞，多多也想来个菜鸟先飞。于是它从0点出发，
//一开始的飞行速度为1m / s，每过一个单位时间多多的飞行速度比上一个单位时间的飞行速度快2m / s，
//问n（0<n<10 ^ 5）个单位时间之后多多飞了多远 ?
//输入 input
//
//	先输入一个整数T表示有几组数据。每组数据输入一个n，表示多多飞行的时间。
//	输出 output
//	输出多多飞行了多远，因为数字很大，所以对10000取模。

//#include<stdio.h>
//
//int main()
//{
//	int k, t = 0;
//	long long int n;
//	int s;
//	long long int array[100000] = { 0 };
//	int i;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		scanf("%d", &n);
//		getchar();
//		s = (n*n) % 10000;
//		array[i] = s;
//	}
//	for (i = 0; i < k; i++)
//		printf("%d\n", array[i]);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long t, n, a = 0, i;
//	cin >> t;
//	while (cin >> n)
//	{
//		int sum = 0, d = 1, j;
//		for (i = 1; i <= n; i++)
//		{
//			sum = (sum + d) % 10000; //一开始就对它取模  这样就不会溢出了
//			d++;
//			d++;
//			if (i == n)
//			{
//				cout << sum << endl;
//				break;
//			}
//		}
//		a++;
//		if (a == t)
//			break;
//	}
//	return 0;
//}
  
//正解
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int k, i;
//	long n;
//	long long int array[10000] = { 0 };
//	cin >> k;
//	getchar();
//	for (i = 0; i < k; i++)
//	{
//		scanf("%ld", &n);
//		getchar();
//		long long int sum = 0;
//		int d = 1;
//		for (int j = 0; j < n; j++)
//		{
//			sum = (sum + d) % 10000;
//			d += 2;
//		}
//		array[i] = sum;
//	}
//	for (i = 0; i < k; i++)
//		printf("%lld\n", array[i]);
//	return 0;
//}
//输入一个字符串, 数出其中的字母的个数.

//#include<stdio.h>
//
//
//int  main()
//{
//	char n = '0';
//	int count = 0;
//	scanf("%c", &n);
//	while (n != 10)
//	{
		/*if (n >= 'a')
		{
			if(n<='z')
				count++;
		}

		if (n >= 'A')
		{
			if(n<='Z')
				count++;
		}*/
//		scanf("%c", &n);
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//	char array[100] = { 0 };
//	scanf("%s", array);
//	int size = sizeof(array) / sizeof(array[0]);
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] >= 'a')
//		{
//			if (array[i] <= 'z')
//				count++;
//		}
//
//		if (array[i] >= 'A')
//		{
//			if (array[i] <= 'Z')
//				count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	return 0;
//}