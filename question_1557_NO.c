#define _CRT_SECURE_NO_WARNINGS 1
//给定n个十六进制正整数，输出它们对应的八进制数。
//#include<stdio.h>
//
//int main(){
//	int n;
//	int t;
//	int array[11] = { 0 };
//	int i = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%x", &t);
//		getchar();
//		array[i] = t;
//	}
//	for (i = 0; i < n; i++)
//		printf("%o\n", array[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//#define MAX 100001
//char charray_16[16][4] = { 
//{ '0','0','0','0' }, { '0', '0', '0', '1' }, { '0', '0', '1', '0' },{ '0', '0', '1', '1' }, 
//{ '0', '1', '0', '0' }, { '0', '1', '0', '1' }, { '0', '1', '1', '0' },{ '0', '1', '1', '1' }, 
//{ '1', '0', '0', '0' }, { '1', '0', '0', '1' }, { '1', '0', '1', '0' },{ '1', '0', '1', '1' }, 
//{ '1', '1', '0', '0' }, { '1', '1', '0', '1' }, { '1', '1', '1', '0' },{ '1', '1', '1', '1' }};
//
//char charray_8[8][3] = { 
//{ '0', '0', '0' }, { '0', '0', '1' }, { '0', '1', '0' },{ '0', '1', '1' }, 
//{ '1', '0', '0' }, { '1', '0', '1' }, { '1', '1', '0' }, { '1', '1', '1' }};
//
//void Swap(char* a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//char* change_16_2(char* array_1)
//{
//	char changearray[4 * MAX] = { 0 };
//	int size = strlen(array_1);
//	for (int i = 0; i < size; i++)
//	{
//		if (array_1[i] >= '0' && array_1[i] <= '9')
//		{
//			int number = (int)(array_1[i] - '0');
//			memcpy(changearray + 4 * i, charray_16[number - 1], 4);
//		}
//		else if (array_1[i] >= 'A'&& array_1[i] <= 'F')
//		{
//			int number = (int)(array_1[i] - 'A' + 10);
//			memcpy(changearray + 4 * i, charray_16[number - 1], 4);
//		}
//	}
//	for (int i = 0; i < (4 * size) / 2; i++)
//	{
//		Swap(&changearray[i], &changearray[4 * size - 1 - i]);
//	}
//	for (int i = 0; i < 4 * size + 2; i += 3)
//	{
//
//	}
//}
//
//int main()
//{
//	int n;
//	char array[MAX] = { 0 };
//	char* p_16_2 = NULL;
//	char* p_2_8 = NULL;
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", array);
//		getchar();
//		p_16_2 = change_16_2(array);
//		p_2_8 = change_2_8(array);
//		printf("%s\n", p_2_8);
//	}
//
//
//}