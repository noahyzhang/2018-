#define _CRT_SECURE_NO_WARNINGS 1

//��һ��������λ��Ϊ�㣩�������Ҷ�������������һ�������Ǿͽ����֮Ϊ��������
//���磺����һ��10������56����56��65������56��������������õ�121��һ����������
//���磺����10������87��
//STEP1��87 + 78 = 165���������������� STEP2��165 + 561 = 726
//STEP3��726 + 627 = 1353����������������STEP4��1353 + 3531 = 4884
//�������һ����ָ������һ��N���Ƶļӷ���������������4���õ�������4884��
//дһ�����򣬸���һ��N��2 <= N <= 16��������M�������پ����������Եõ���������
//�����30�����ڣ�����30���������ܵõ����������������Impossible!��

//#include<stdio.h>
//#include<string.h>
//#define MAX 100
//
//
//int Is_Loop(char* temp)
//{
//	int size = strlen(temp);
//	for (int i = 0; i < size / 2; i++)
//	{
//		if (*(temp + i) != *(temp + size - 1 - i))
//			return 0;
//	}
//	return 1;
//}
//
//char* Get_contra_number(char* array)
//{
//	int size = strlen(array);
//	static char ntemp[MAX] = { 0 };
//	for (int i = 0; i < size; i++)
//	{
//		*(ntemp + i) = *(array + size - i - 1);
//	}
//	return ntemp;
//}
//
//char* Add(char* a, char* b, int radix)//������ӣ��漰�������⡣
//{
//	char temp[MAX] = { 0 };
//	int size = strlen(a);
//	int cur = 0;
//	int jinwei = 0;
//	int yushu = 0;
//	int j = 0;
//	if (radix <= 10)
//	{
//		for (int i = size - 1; i >= 0 ; i--)
//		{
//			cur = (int)(a[i] - '0') + (int)(b[i]-'0') + jinwei;
//			temp[j++] = (char)(cur % radix + '0');
//			jinwei = cur / radix;
//		}
//		if (jinwei == 1)
//			temp[j] = (char)(jinwei+'0');
//	}
//	else if (radix <= 16)
//	{
//		jinwei = 0;
//		for (int i = size - 1; i >= 0; i--)
//		{
//			int a1 = a[i] > '9' ? (int)(a[i] - 'A' + 10) : (int)(a[i] - '0');
//			int b1 = b[i] > '9' ? (int)(b[i] - 'A' + 10) : (int)(b[i] - '0');
//			cur = a1 + b1 + jinwei;	
//			yushu = cur%radix;
//			if (yushu > 9) yushu = yushu - 10;
//			temp[j++] = cur > 9 ? ((cur % radix) + 'A') : (char)(cur%radix + '0');
//			jinwei = cur / radix;
//		}
//		if (jinwei == 1)
//			temp[j] = (char)(jinwei+'0');
//	}
//	return Get_contra_number(temp);
//}
//
//int main()
//{
//	int radix;
//	int i;
//	char* contra;
//	char* result;
//	char array[MAX] = { 0 };
//	int size = 0;
//	scanf("%d%s", &radix, array);
//	result = array;
//	for (i = 0; i < 30; i++)
//	{
//		if (Is_Loop(result))
//		{
//			break;
//		}
//		else
//		{
//			contra = Get_contra_number(result);
//			size = strlen(contra);
//			memcpy(result, Add(result, contra, radix), size + 1);
//		}
//	}
//	if (Is_Loop(result))
//		printf("STEP=%d", i);
//	else
//		printf("Impossible!");
//	return 0;
//}





