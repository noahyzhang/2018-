//在一个平面内有两个点，求两个点分别和原点的连线的夹角的大小。
//
//注：夹角的范围[0，180]，两个点不会在圆心出现。PI取3.1415927。
//
//输入 input
//输入有多组数据
//每组数据有四个实数x1, y1, x2, y2分别表示两个点的坐标, 这些实数的范围是[-10000, 10000]。
#define _CRT_SECURE_NO_WARNINGS 1



//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//	int a[1010] = { 0 };
//	int i = 0;
//	while (~scanf("%d", &a[i]))
//	{
//		i++;
//		if (a[i] == a[i - 1])
//			break;
//	}
//	int j = 0;
//	for (; j < i - 1; j++)
//	{
//		if (a[j] > a[j + 1])
//		{
//			cout << "NO";
//			break;
//		}
//	}
//	if (j >= i - 1)
//		cout << "YES";
//	return 0;
//}



//#include<stdio.h>
//int Find(int n, int a[], int key)
//{
//	int index = -1;
//	int i;//要把i定义在for循环外面 
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == key)
//		{
//			index = i + 1;
//			break;
//		}
//	}
//	return index;
//}
//int main()
//{
//	int n, a;
//	int i;//要把i定义在for循环外面 
//	int aa[1000];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &aa[i]);
//	}
//	scanf("%d", &a);
//	printf("%d\n", Find(n, aa, a));
//	return 0;
//}


/*这道题的思路实际上运用到余弦定理，利用向量来做，再求它的反三角值，再根据弧度公式进行求解*/
//1070
//#include<iostream>
//#include<cmath>
//using namespace std;
//#define PI 3.1415927;
//int main()
//{
//	double x1, x2, y1, y2;
//	double a, b, c;
//	while (cin >> x1 >> y1 >> x2 >> y2)
//	{
//			a = x1 * x2 + y1 * y2;
//			b = sqrt(x1*x1 + y1 * y1)*sqrt(x2*x2 + y2 * y2);
//			c = acos(a / b) / PI;
//			c *= 180;
//			printf("%0.2lf\n", c);
//	}
//	return 0;
//}