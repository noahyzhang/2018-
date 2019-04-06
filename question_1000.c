#define _CRT_SECURE_NO_WARNINGS 1
//计算A + B。
//两个整数 a, b(0 <= a, b <= 10)
#if 0
#include<stdio.h>

int main()
{
	int a, b;
	
	//scanf()函数是有返回值的，a和b都成功读入，那么返回2；如果只有a成功读入，那么返回1；
	//如果都没有成功读入，返回0；如果遇到错误返回EOF。
	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d", a + b);
	return 0;
}
#endif
//int main()
//{
//	int a, b;
//	int t;
//	t = scanf("%d %d", &a, &b); // 1 2
//	printf("%d\n", t);          // 2
//	getchar();
//	t = scanf("%d %d", &a, &b); // 1 a
//	printf("%d\n", t);          // 1
//	getchar();
//	t = scanf("%d %d", &a, &b); // a b
//	printf("%d\n", t);          // 0
//	t = scanf("%d %d", &a, &b); // ctrl+z
//	printf("%d\n", t);          // -1
//}

