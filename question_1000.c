#define _CRT_SECURE_NO_WARNINGS 1
//����A + B��
//�������� a, b(0 <= a, b <= 10)
#if 0
#include<stdio.h>

int main()
{
	int a, b;
	
	//scanf()�������з���ֵ�ģ�a��b���ɹ����룬��ô����2�����ֻ��a�ɹ����룬��ô����1��
	//�����û�гɹ����룬����0������������󷵻�EOF��
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

