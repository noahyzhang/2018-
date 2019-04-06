
//N个人在一个水龙头前排队接水，假如每个人接水的时间为Ti，请找出这N个人排队的一种顺序，使得N个人的平均等待时间最小。
//
//输入 input
//有多组测试数据，每组测试数据两行，第一行为N(N <= 100)，第二行为N个人的打水时间
//
//输出 output
//对于每组数据输出平均最小等待时间，保留3位小数。

//用二维数组, a[n][2],
//a[i][0]中存放Ti, 在令a[i][1] = i;
//在把a[i][0]按从小到大的顺序排序, 当然a[i][1]中的内容也要跟着调换.
//输出时顺序输出a[i][0]的内容就行了,
//至于时间, 第一个为零, 第一个打水时间就是第二的等待时间, 前两个打水时间和就是第三个等待时间, ·····
//前九个打水时间和就是第十个等待时间,
//这十个等待时间相加除以10, 就是平均等待时间

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

void quick_Sort(int(*num)[2], int left, int right)
{
	if (left >= right)
		return;
	int i = left, j = right, x = num[i][0], y = num[i][1];
	while (i < j) {
		while (i < j && num[j][0] >= x)
			j--;
		if (i < j)
		{
			num[i++][0] = num[j][0];
			num[i++][1] = num[j][1];
		}

		while (i < j && num[i][0] <= x)
			i++;
		if (i < j)
		{
			num[j--][0] = num[i][0];
			num[j--][1] = num[i][1];
		}

	}
	num[i][0] = x;    
	num[i][1] = y;
	quick_Sort(num, left, i - 1);
	quick_Sort(num, i + 1, right);
}


double Func(int(*array)[2], int n)
{
	int time = 0;
	double total = 0;
	quick_Sort(array, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		time = 0;
		for (int j = 0; j < i; j++)
		{
			time += array[j][0];
		}
		total += time;
	}
	total /= n;
	return total;
}

int main()
{
	int array[101][2] = { 0 };
	int n;
	double result = 0;

	while (cin>>n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> array[i][0];
			array[i][1] = i;
		}
		if (n == 0)
			printf("%.3lf\n", 0);
		else
		{
			result = Func(array, n);
			printf("%.3lf\n", result);
		}

	}
	return 0;
}

#endif