//��һ��ƽ�����������㣬��������ֱ��ԭ������ߵļнǵĴ�С��
//
//ע���нǵķ�Χ[0��180]�������㲻����Բ�ĳ��֡�PIȡ3.1415927��
//
//���� input
//�����ж�������
//ÿ���������ĸ�ʵ��x1, y1, x2, y2�ֱ��ʾ�����������, ��Щʵ���ķ�Χ��[-10000, 10000]��
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
//	int i;//Ҫ��i������forѭ������ 
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
//	int i;//Ҫ��i������forѭ������ 
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


/*������˼·ʵ�������õ����Ҷ������������������������ķ�����ֵ���ٸ��ݻ��ȹ�ʽ�������*/
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