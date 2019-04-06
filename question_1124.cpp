#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, a[100], b;
//	FILE *fp;
//	cin >> n;
//	fp = fopen("F:\\random.in.txt", "w");
//	if (fp == NULL)
//	{
//		printf("create file failed\n");
//		return -1;
//	}
//	fprintf(fp, "%d", n);
//	fprintf(fp, "\n");
//	cin >> a[0];
//	fprintf(fp, "%d", a[0]);
//	fprintf(fp, " ");
//	n--;
//	int aLen = 1;
//
//	while (n--)
//	{
//		cin >> b;
//		fprintf(fp, "%d", b);
//		fprintf(fp, " ");
//		int i = 0;
//		for (i = 0; i<aLen; i++)
//		{
//			if (b == a[i] || b<a[i]) break;
//		}
//		if (b<a[i])
//		{
//			for (int j = aLen - 1; j >= i; j--)
//			{
//				a[j + 1] = a[j];
//			}
//			a[i] = b;
//			aLen++;
//		}
//		else if (b>a[i]) {
//			a[aLen] = b;
//			aLen++;
//		}
//	}
//
//	FILE* pfw = fopen("F:\\random.out.txt", "w");
//	char ch;
//	if (NULL == pfw)
//	{
//		perror("open file test2.txt");
//	}
//
//	fprintf(pfw, "%d\n", aLen);
//	for (int j = 0; j<aLen; j++)
//	{
//		fprintf(pfw, "%d ", a[j]);
//	}
//
//	fscanf(pfw, "%d ", aLen);
//	printf("%d\n", aLen);
//	for (int j = 0; j < aLen; j++)
//	{
//		fscanf(pfw, "%d ", &a[j]);
//		if (j == aLen - 1)
//			printf("%d", a[j]);
//		else
//			printf("%d ", a[j]);
//	}
//	fclose(fp);
//	fclose(pfw);
//	return 0;
//}