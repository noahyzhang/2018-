#define _CRT_SECURE_NO_WARNINGS 1

//1050
////ʮ�����������ڳ������ʱ����Ҫʹ�õ���һ�������ı�ʾ��ʽ��
////����0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F��16�����ţ�
////�ֱ��ʾʮ��������0��15��ʮ�����Ƶļ�����������16��1������ʮ������16��ʮ����������10��
////��ʮ���Ƶ�17��ʮ����������11���Դ����ƣ�ʮ���Ƶ�30��ʮ����������1E��
////����һ���Ǹ�������������ʾ��ʮ�����Ƶ���ʽ��
//#include<stdio.h>
//
//char exchange(int yushu)
//{
//	if (yushu >= 0 && yushu <= 9)
//	{
//		yushu = yushu + 48;
//	}
//	else if (yushu >= 10 && yushu <= 15)
//	{
//		yushu = yushu + 55;
//	}
//	return yushu;
//}
//
//void Swap(char* a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void ReverseArray(char* array, int size)
//{
//	int begin = 0;
//	int end = size - 1;
//	while (begin < end)
//	{
//		Swap(&array[begin], &array[end]);
//		begin++;
//		end--;
//	}
//}
//
//int main()
//{
//	unsigned int a;
//	int yushu;
//	int shang;
//	int i = 0;
//	char array[11] = { 0 };
//	scanf("%d", &a);
//	shang = a;
//	while (shang != 0)
//	{
//		yushu = shang % 16;
//		array[i] = exchange(yushu);
//		i++;
//		shang = shang / 16;
//	}
//	int size = sizeof(array) / sizeof(char);
//	ReverseArray(array, size);
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] != 0 || array[i] != '\0')
//			printf("%c", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//
//char array[17] = { '0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B','C', 'D','E','F','\0'};
//void change_10_to_16(int shang)
//{
//	if (shang / 16)
//		change_10_to_16(shang / 16);
//	printf("%c", array[shang % 16]);
//}
//
//int main()
//{
//	unsigned int a;
//	scanf("%d", &a);
//	change_10_to_16(a);
//	return 0;
//}