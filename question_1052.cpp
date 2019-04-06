#define _CRT_SECURE_NO_WARNINGS 1
//1052   
//#include <stdio.h>
//
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	while (1)
//	{
//		if (c == 10)
//			break;
//		if (c >= 'a'&&c <= 'z')
//		{
//			printf("y");
//		}
//		else
//		{
//			printf("n");
//
//		}
//		scanf("%c", &c);
//	}
//	return 0;
//}


//1099
//奇数和偶数正在交战，在奇数的阵营里有偶数出现就被认为是间谍，反过来也一样。
//
//输入包含10行，请将其中的间谍数（与其他数奇偶性不同的那一个）找出来并输出。
//
//注意，间谍可能是奇数也可能是偶数

//#include<stdio.h>
//
//int main()
//{
//	int array[10] = { 0 };
//	int t;
//	int i;
//	int count = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &t);
//		getchar();
//		array[i] = t;
//		if (t % 2 == 0)
//			count++;
//		else
//			count--;
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		if (count>0 && array[i] % 2 != 0)
//			break;
//		else if (count < 0 && array[i] % 2 == 0)
//			break;
//	}
//	printf("%d", array[i]);
//	return 0;
//}



