#define _CRT_SECURE_NO_WARNINGS 1
//编写程序，输入一个正整数n，求下列算式的值。要求定义和调用函数fact(k)计算k的阶乘，函数返回值的类型是double。
//
//1 + 1 / 2 + .... + 1 / n!
//
//输出保留5位小数。

//#include<stdio.h>
//
//double fact(int k)
//{
//	if (k == 0)
//		return 1;
//	if (k == 1)
//		return 1;
//	double sum = 1.0;
//	for (int i = 1; i <= k; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	double sum = 0.0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum + 1.0 / fact(i);
//	}
//	printf("sum=%.5lf", sum);
//	return 0;
//}