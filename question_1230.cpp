#define _CRT_SECURE_NO_WARNINGS 1

//1230
//一个数与另一个数如果含有相同数字和个数的字符，则称两数相关。
//现有一堆乱七八糟的整数，里面可能充满了彼此相关的数，请你用一下手段，自动地将其剔除。

//别人写的，正确。。。。。
//#include <iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstring>
//#include<algorithm>
//int zhuanhuan(int n);
//using namespace std;
//
//int zhuanhuan(int n)
//{
//	int a[10] = { 0 };
//	int i;
//	while (n >= 10)
//	{
//		a[n % 10]++;
//		n = n / 10;
//	}
//	a[n]++;
//	int s = 0;
//	for (i = 0; i<9; i++)
//	{
//		if (a[i] != 0)
//		{
//			while (a[i]--)
//			{
//				s *= 10;
//				s += i;
//			}
//		}
//	}
//	return s;
//}

//int main()
//{
//	int a[1001];
//	int n, i, j;
//	int f;
//	while (scanf("%d", &n), n != 0)
//	{
//		f = 0;
//		int f1;
//		int f2;
//		for (i = 0; i<n; i++)
//			scanf("%d", &a[i]);
//		for (i = 0; i<n; i++)
//		{
//			f2 = zhuanhuan(a[i]);
//			f1 = 0;
//			if (a[i] >= 0)
//			{
//				for (j = i + 1; j<n; j++)
//				{
//					if (f2 == zhuanhuan(a[j]))
//					{
//						f1 = 1;
//						a[j] = -1;
//					}
//				}
//				if (f1 == 1)
//					a[i] = -1;
//			}
//		}
//		sort(a, a + n);
//		if (a[n - 1] == -1)
//			printf("None\n");
//		else
//		{
//			for (i = 0; i<n; i++)
//			{
//				if (a[i] >= 0)
//				{
//					if (f == 0)
//					{
//						f = 1;
//						printf("%d", a[i]);
//					}
//					else
//						printf(" %d", a[i]);
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//自己写的额，没有写完。。。。。。。
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//int array[1001] = { 0 };
//
//
//
//void exchange()
//{
//	int i, j;
//	char char_array[100] = { 0 };
//	int size = sizeof(array) / sizeof(int);
//	int number_array[10] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		
//	}
//	for (j = 0; number_array[j] != '\0'; j++)
//	{
//
//	}
//}
//
//
//void print()
//{
//	int size = sizeof(array) / sizeof(int);
//	for (int i = 0; i < size; i++)
//		printf("%d ", array[i]);
//	printf("\n");
//}
//
//void empty()
//{
//	int size = sizeof(array) / sizeof(int);
//	for (int i = 0; i < size + 1; i++)
//		array[i] = '\0';
//}
//
//
//
//int main()
//{
//	int i, j;
//	int n;
//	int number;
//	while (n != 0)
//	{
//		scanf("%d", n);
//		getchar();
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &number);
//			getchar();
//			array[i] = number;
//		}
//		exchange();
//		print();
//		empty();
//	}
//	return 0;
//}
//
