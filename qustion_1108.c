#define _CRT_SECURE_NO_WARNINGS 1
//输入一个正整数n (1≤ n ≤6),再输入一个n 行n列的矩阵，找出该矩阵中绝对值最大的元素以及它的行下标和列下标。

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	int array[7][7] = { 0 };
//	int max = -9999;
//	int x, y;
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &array[i][j]);
//			getchar();
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (array[i][j]>max)
//			{
//				max = array[i][j]; 
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d %d\n", max, x+1, y+1);
//	return 0;
//}

