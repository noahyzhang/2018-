#define _CRT_SECURE_NO_WARNINGS 1
//��дһ����������a��b��c����ֵ������������ֵ��
#if 0
#include<stdio.h>

int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a > b)
		{
			if (c > a)
				printf("%d", c);
			else
				printf("%d", a);
		}
		else
		{
			if (c > b)
				printf("%d", c);
			else
				printf("%d", b);
		}
	}
	return 0;
}
#endif