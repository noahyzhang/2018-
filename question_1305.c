//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void*p1, const void*p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int n, score[105], i;
//	double s, aver;
//	while (scanf("%d", &n) != EOF)
//	{
//
//		s = 0;
//		for (i = 0; i < n; i++)
//			scanf("%d", &score[i]);
//		qsort(score, n, sizeof(score[0]), cmp);
//		for (i = 1; i < n - 1; i++)
//			s = s + score[i];
//		aver = (double)s / (double)(n - 2.0);
//		printf("%.2lf\n", aver);
//	}
//	return 0;
//}