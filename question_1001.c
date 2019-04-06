#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，输入a、b、c三个值，输出其中最大值。
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