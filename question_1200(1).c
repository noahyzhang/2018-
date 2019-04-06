#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0, m = 0;
//	int num = 0;
//	int *arr = NULL;
//	int count = 0;
//	scanf("%d%d", &n, &m);
//	arr = (int*)malloc(n*sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	num = n;
//
//	while (num > 1)
//	{
//		int i = 0;
//		while (i < m)
//		{
//			if (count == n)
//				count = 1;
//			else
//				count++;
//			if (arr[count - 1]) i++;
//		}
//		arr[count - 1] = 0;
//		num--;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i])
//		{
//			printf("%d", arr[i]);
//			break;
//		}
//	}
//
//	free(arr);
//	return 0;
//}
