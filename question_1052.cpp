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
//������ż�����ڽ�ս������������Ӫ����ż�����־ͱ���Ϊ�Ǽ����������Ҳһ����
//
//�������10�У��뽫���еļ����������������ż�Բ�ͬ����һ�����ҳ����������
//
//ע�⣬�������������Ҳ������ż��

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



