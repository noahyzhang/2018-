#define _CRT_SECURE_NO_WARNINGS 1

//1050
////十六进制数是在程序设计时经常要使用到的一种整数的表示方式。
////它有0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F共16个符号，
////分别表示十进制数的0至15。十六进制的计数方法是满16进1，所以十进制数16在十六进制中是10，
////而十进制的17在十六进制中是11，以此类推，十进制的30在十六进制中是1E。
////给出一个非负整数，将它表示成十六进制的形式。
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