#define _CRT_SECURE_NO_WARNINGS 1
//1014
//���
//�����������ĺ�, ����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
//
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	int i;
//	int t=0, n=0;
//	float m=0;
//	double sum;
//	scanf("%d %d %d", &a, &b, &c);
//	for (i = 1; i <= a; i++)
//	{
//		t = t + i;
//	}
//	for (i = 1; i <= b; i++)
//	{
//		n = n + i*i;
//	}
//	for (i = 1; i <= c; i++)
//	{
//		m = m + 1.0 / i;
//	}
//	sum = t + n + m;
//	printf("%.2f\n", sum);
//	return 0;
//}

//1015
//��ӡ����ˮ�ɻ���

//��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ����
//���λ���������͵��ڸñ��� ���磺153��һ��ˮ�ɻ�������Ϊ153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3�� Output :
//#include<stdio.h>
//
//int check_number(int i)
//{
//	int a, b, c;
//	c = i;
//	a = i / 100;
//	i = i % 100;
//	b = i / 10;
//	i = i % 10;
//
//	if (c == a*a*a + b*b*b + i*i*i)
//		return c;
//	else
//		return -1;
//}
//
//int main()
//{
//	int i;
//	int result;
//	for (i = 100; i <= 999; i++)
//	{
//		result = check_number(i);
//		if (result != -1)
//			printf("%d\n", result);
//	}
//	return 0;
//}

//1016
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"�� 
//���磬6������Ϊ1��2��3����6 = 1 + 2 + 3�����6��"����"�� ������ҳ�N֮�ڵ��������������������ʽ��������ӣ�
//
//#include<stdio.h>
//
//int main()
//{
//	int n;
//	int i, j;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//				sum = sum + j;
//		}
//		if (sum == i)
//		{
//			printf("%d its factors are ", i);
//			for (j = 1; j < sum; j++)
//			{
//				if (sum % j == 0)
//					printf("%d ", j);
//			}	
//			printf("\n");
//		}
//		sum = 0;
//	}
//	return 0;
//}
//

//1017
//��һ�������У� 2 / 1   3 / 2   5 / 3   8 / 5   13 / 8   21 / 13......���������е�ǰN��֮�ͣ�������λС����

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	double fenzi = 2;
//	double fenmu = 1;
//	double temp = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum + fenzi / fenmu;
//		temp = fenzi;
//		fenzi = fenzi + fenmu;
//		fenmu = temp;
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}

//1018
/*1018: ������������
��Ŀ���� 
һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� 
���ڵ�N�����ʱ������ߣ������������ף� ������λС��*/
//                  δ���
//#include<stdio.h>
//
//int main()
//{
//	double m;
//	int n;
//	int i = 0;
//	double fantan;
//	double sum;
//	scanf("%lf %d", &m, &n);
//	fantan = m / 2;
//	sum = m;
//	for (i = 2; i <= n; i++)
//	{
//		sum = sum + 2*fantan;
//		fantan = fantan / 2;
//	}
//	
//	printf("%.2lf %.2lf\n", fantan,sum);
//	return 0;
//}

//1019
//���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ����
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� 
//����N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�������ӡ�

//#include<stdio.h>
//
//int main()
//{
//	int n;
//	int sum = 1;
//	int i;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//1022
//ѡ������

//#include<stdio.h>
//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int  begin, end;
//	int i, n;
//	int array[11] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		getchar();
//		array[i] = n;
//	}
//	
//	int left = 0;
//	int right = 9;
//	while (left < right)
//	{
//		begin = left;
//		end = right;
//
//		for (i = left; i <= right; i++)
//		{
//			if (array[begin] > array[i])
//				begin = i;
//			if (array[end] < array[i])
//				end = i;
//		}
//		Swap(&array[begin], &array[left]);
//		if (end == left)
//			end = right;
//		Swap(&array[end], &array[right]);
//		left++;
//		right--;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", array[i]);
//	}
//	return 0;
//}


//1023
//Ԫ��֮��

//��һ��3��3����Խ���Ԫ��֮�͡�
//#include<stdio.h>
//
//int main()
//{
//	int i, j, n;
//	int array[3][3] = { 0 };
//	int main_sum = 0, sed_sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &n);
//			getchar();
//			array[i][j] = n;	
//		}
//	}
//	for (i = 0; i < 3; i++)
//		main_sum = main_sum + array[i][i];
//	for (i = 0, j = 2; i < 3 && j >= 0; i++, j--)
//		sed_sum = sed_sum + array[i][j];
//	printf("%d %d\n", main_sum, sed_sum);
//	return 0;
//}

//1024
//����һ�����źõ�9��Ԫ�ص����飬������һ����Ҫ��ԭ������Ĺ��ɽ������������С�
//#include<stdio.h>
//
//int main()
//{
//	int i, n, j = 0, m;
//	int array_ok[9];
//	int array_push[10];
//	int xulie;
//	int push;
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &n);
//		getchar(); 
//		array_ok[i] = n;
//	}
//	scanf("%d", &push);
//	xulie = array_ok[0] < array_ok[8] ? 1 : 0;
//
//	if (xulie == 1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (array_ok[j] < push)
//			{
//				array_push[i] = array_ok[j];
//				j++;
//			}
//			else
//			{
//				array_push[i] = push;
//				for (m = 0; m < 9 - i; m++)
//				{
//					array_push[i + 1 + m] = array_ok[j + m];
//				}
//				break;
//			}
//
//		}
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (array_ok[j] > push)
//			{
//				array_push[i] = array_ok[j];
//				j++;
//			}
//			else
//			{
//				array_push[i] = push;
//				for (m = 0; m < 9 - i; m++)
//				{
//					array_push[i + 1 + m] = array_ok[j + m];
//				}
//				break;
//			}
//
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d\n", array_push[i]);
//	return 0;
//}

//1025
//����10�����֣�Ȼ�����������
//#include<stdio.h>

//int main()
//{
//	int n;
//	int array[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		getchar();
//		array[i] = n;
//	}
//	for (int i = 9; i >= 0; i--)
//		printf("%d ", array[i]);
//	return 0;
//}
//1027

//#include<stdio.h>
//#include<math.h>
//
//double a, b, c, d, x1, x2, dr, xr, xv;//�궨������������еķ����о���ʹ�á�dr����d�ĸ���xr�������ʵ�����֣�xv��������������֡�
//
//double delta_is_greater_than_zero(double d)
//{
//	dr = sqrt(d);
//	x1 = (-b + dr) / (2 * a);
//	x2 = (-b - dr) / (2 * a);
//	printf("x1=%.3lf x2=%.3lf", x1, x2);
//}
//double delta_is_less_than_zero(double d)
//{
//	d = -d;
//	dr = sqrt(d);
//	xr = -b / (2 * a);
//	xv = dr / (2 * a);
//	printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi", xr, xv, xr, xv);
//}
//double delta_is_equal_to_zero(double d)
//{
//	dr = sqrt(d);
//	x2 = x1 = (-b + dr) / (2 * a);
//	printf("x1=%.3lf x2=%.3lf", x1, x2);
//}
//
//int main()
//{
//	scanf("%lf%lf%lf", &a, &b, &c);
//	d = b * b - 4 * a*c;
//	double delta_is_greater_than_zero(double d);
//	double delta_is_less_than_zero(double d);
//	double delta_is_equal_to_zero(double d);
//	if (d > 0)
//	{
//		delta_is_greater_than_zero(d);
//	}
//	else if (d < 0)
//	{
//		delta_is_less_than_zero(d);
//	}
//	else
//	{
//		delta_is_equal_to_zero(d);
//	}
//}


//1028
//дһ���ж������ĺ�����������������һ������������Ƿ�����������Ϣ��

//#include<stdio.h>
//
//int IsPrime(int a)
//{
//	if (a == 1)
//		return 0;
//	for (int i = 2; i <= a / 2; i++)
//	{
//		if (a%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%s", IsPrime(a) == 1 ? "prime" : "not prime");
//	return 0;
//}


//1029
//дһ��������ʹ������һ����ά���飨��������ת�ã������л�����

//#include<stdio.h>
//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int i, j, k;
//	int array[3][3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &k);
//			getchar();
//			array[i][j] = k;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//			Swap(&array[i][j], &array[j][i]);
//		for (int k = 0; k < 3; k++)
//			printf("%d ", array[i][k]);
//		printf("\n");
//	}
//	return 0;
//}

//1030
//дһ������ʹ�����һ���ַ����������ţ�������������������������ַ�����

//#include<stdio.h>
//#include<string.h>
//
//void Swap(char* a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void reverse(char* str, int left, int right)
//{
//	if (left < right)
//	{
//		Swap(str + left, str + right);
//		reverse(str, left + 1, right - 1);
//	}
//}
//
//int main()
//{
//	char* str = NULL;
//	scanf("%s", str);
//	int size = strlen(str);
//	reverse(str, 0, size - 1);
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//
//void reverse()
//{
//	char p;
//	scanf("%c", &p);
//	if (p != 10)
//		reverse();	
//	else
//		return;
//	putchar(p);
//}
//
//int main()
//{
//	reverse();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//void Swap(char* a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void Reserve(char* array, int size)
//{
//	for (int i = 0; i < size/2; i++)
//	{
//		Swap(array + i, array + size - 1 - i);
//	}
//	printf("%s\n", array);
//}
//
//int main()
//{
//	char array[N];
//	scanf("%s", array);
//	int size = strlen(array);
//	Reserve(array, size);
//	return 0;
//}

//1031
//дһ�������������ַ�������

//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//void my_strcat(char* array1, char* array2)
//{
//	int size1 = strlen(array1);
//	int size2 = strlen(array2);
//	for (int i = 0; i < size2; i++)
//		*(array1 + size1 + i) = *(array2 + i);
//	printf("%s\n", array1);
//}
//
//int main()
//{
//
//	char array1[N] = { 0 };
//	char array2[N] = { 0 };
//	scanf("%s %s", array1,array2);
//	my_strcat(array1, array2);
//	return 0;
//}

//1032
//1032: ����Ԫ����ĸ
//                             ����δͨ��
//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//void move(char* array)
//{
//	char strend[N] = { 0 };
//	int i = 0, j = 0;
//	int size = strlen(array);
//	for (i = 0; i < size; i++)
//	{
//		if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'u' || array[i] == '0')
//		{
//			strend[j] = array[i];
//			j++;
//		}
//	}
//	printf("%s", strend);
//}
//
//int main()
//{
//	char array[N] = { 0 };
//	scanf("%s", array);
//	move(array);
//	return 0;
//}

//1033
//дһ����������һ����λ���֣�Ҫ��������ĸ������ַ�����ÿ�������ּ�ո�������1990��Ӧ���"1 9 9 0"��

//#include<stdio.h>
//#include<math.h>
//
//void func(int number)
//{
//	int a, b, c, d, temp;
//	a = number / 1000;
//	temp = number % 1000;
//	b = temp / 100;
//	temp = temp % 100;
//	c = temp / 10;
//	d = temp % 10;
//	for (int i = 3; i >= 0; i--)
//	{
//		a = number / (pow(10, i));
//		printf("%d ", a);
//		number = number % (int)(pow(10, i));
//	}
//}
//
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	func(number);
//	return 0;
//}

//1034
//��дһ��������ʵ�δ���һ���ַ�����ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ�����
//���������������ַ����Լ������������� ֻҪ����������ʲô��ʾ��Ϣ��

//#include<stdio.h>
//#include<string.h>
//#define N 1000
//
//void func(char* array)
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	int size = strlen(array);
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] >= 'a')
//		{
//			if (array[i] <= 'z')
//				a++;
//		}
//		if (array[i] >= 'A')
//		{
//			if (array[i] <= 'Z')
//				a++;
//		}
//	}
//	
//	for (int i = 0; i < size; i++)
//	{
//
//		if (array[i] >= '0')
//		{
//			if (array[i] <= '9')
//				b++;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] == 32)
//			c++;
//	}
//	d = size - a - b - c;
//	printf("%d %d %d %d", a, b, c, d);
//}
//
//
//
//int main()
//{
//	char array[N] = { 0 };
//	char p;
//	int i = 0;
//	scanf("%c", &p);
//	while (p != 10)
//	{
//		array[i] = p;
//		i++;
//		scanf("%c", &p);
//	}
//	func(array);
//	free(array);
//	return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int letter, digit, space, others;
//
//int main()
//{
//	void count(char[]);
//	char text[80];
//	gets(text);
//	letter = 0;
//	digit = 0;
//	space = 0;
//	others = 0;
//	count(text);
//	printf("%d %d %d %d\n", letter, digit, space, others);
//	return 0;
//}
//void count(char str[])
//{
//	int i;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= 'a')
//		{
//			if (str[i] <= 'z')
//				letter++;
//		}
//		if (str[i] >= 'A')
//		{
//			if (str[i] <= 'Z')
//				letter++;
//		}
//	}
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= '0')
//		{
//			if(str[i] <= '9')
//				digit++;
//		 }
//			
//	}
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		 if (str[i] == 32)
//			space++;
//	}
//	others = strlen(str) - letter - digit - space;
//}



//1035
//����һ�����εĺ꣬ʹ����������ֵ��������д������������������Ϊʹ�ú�ʱ��ʵ�Ρ�����ѽ����������ֵ��

//#include<stdio.h>
//
//#define swap(a,b)a = a + b;b = a - b;a = a - b;
//
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	swap(a, b);
//	printf("%d %d", a, b);
//	return 0;
//}

//1036
//��������������������������������ô��εĺ���ʵ�֣������

//#include<stdio.h>
//
//#define yushu(a,b)a=a%b
//
//int main()
//{ 
//	int a, b;
//	scanf("%d %d", &a, &b);
//	yushu(a, b);
//	printf("%d", a);
//	return 0;
//}

//1037
//���������=SQRT(S*(S-a)*(S-b)*(S-c)) ����S=(a+b+c)/2��a��b��cΪ�����ε����ߡ�
//�����������εĺ꣬һ��������area�� ��һ����������S�� д�����ڳ������ô�ʵ�εĺ����������area��

//#include<stdio.h>
//#include<math.h>
//
//#define s(a,b,c) (a+b+c)/2
//#define area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
//
//int main()
//{
//	float x, y, z;
//	scanf("%f%f%f", &x, &y, &z);
//	printf("%.3f", area(x, y, z, s(x, y, z)));
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//#define s(a,b,c) (a+b+c)/2
//#define area(a, b, c, s) sqrt(s*(s-a)*(s-b)*(s-c))
//
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.3lf", area(a, b, c, s(a, b, c)));
//	return 0;
//}

//1038
//�����year������һ���꣬���б������Ƿ����ꡣ
//��ʾ���������Զ���ΪLEAP_YEAR���β�Ϊy���ȶ�������ʽΪ #define LEAP_YEAR(y) ��������Ƶ��ַ�����

//#include<stdio.h>
//
//#define LEAP_YEAR(y) (((y%4==0 && y%100!=0)||(y%100==0))?'L':'N')
//
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	printf("%c", LEAP_YEAR(y));
//	return 0;
//}

//1039
//��������ʵ���ĸ�ʽ����������һ�����һ��ʵ����
//��һ�����������ʵ������һ�����������ʵ����ʵ����"6.2f"��ʽ�����
//#include<stdio.h>
//
//int main()
//{
//	float n;
//	scanf("%f", &n);
//	printf("%6.2f\n", n);
//	printf("%6.2f %6.2f\n", n, n);
//	printf("%6.2f %6.2f %6.2f\n", n, n, n);
//	return 0;
//}

//1040
//�ֱ��ú����ʹ��εĺ꣬�����������ҳ���������
//#include<stdio.h>
//
//#define max(a,b,c) a=a>b?a:b;a=a>c?a:c;
//
//int Max(float a,float b,float c)
//{
//	a = a>b ? a : b;
//	a = a>c ? a : c;
//	return a;
//}
//
//int main()
//{
//	float a, b, c, d;
//	scanf("%f %f %f", &a, &b, &c);
//	d = Max(a, b, c);
//	printf("%.3f\n", d);
//	max(a, b, c);
//	printf("%.3f", a);
//	return 0;
//}

//1041
//����һ�е籨���֣�����ĸ�������һ��ĸ���硯a����ɡ�b��������z����ɡ��ᡯ�����ַ����䣩��

//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//void func(char* array)
//{
//	int size = strlen(array);
//	for (int i = 0; i < size; i++)
//	{
//		if ((array[i] >= 'a'&&array[i] <= 'z') || (array[i] >= 'A'&&array[i] <= 'Z'))
//			array[i] += 1;
//		printf("%c", array[i]);
//	}
//}
//
//int main()
//{
//	char p;
//	int j = 0;
//	char array[N] = { 0 };
//	p = getchar();
//	while (p != 10)
//	{
//		array[j] = p;
//		j++;
//		p = getchar();
//	}
//	func(array);
//	return 0;
//}

//1042
//������������������С�����˳�������
//#include<stdio.h>
//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int i, j;
//	int array[3];
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", array + i);
//		getchar();
//	}
//	for (i = 0; i < 3; i++)
//	for (j = 0; j < 3-i-1;j++)
//	if (array[j] > array[j + 1])
//		Swap(array + j, array + j + 1);
//	for (i = 0; i < 3; i++)
//		printf("%d ", array[i]);
//	return 0;
//}

//1043
//���������ַ���������С�����˳�����
//
//#include<stdio.h>
//#include<string.h>
//#define N 100
//
//int main()
//{
//	char array1[N] = { 0 };
//	char array2[N] = { 0 };
//	char array3[N] = { 0 };
//	int i = 0, j = 0, k = 0;
//	scanf("%s", array1);
//	scanf("%s", array2);
//	scanf("%s", array3);
//
//	i = strcmp(array1, array2);
//	j = strcmp(array1, array3);
//	k = strcmp(array2, array3);
//	if (i < 0)
//	{
//		if (j < 0)
//		{
//			if (k < 0)
//				printf("%s\n%s\n%s\n", array1, array2, array3);
//			else
//				printf("%s\n%s\n%s\n", array1, array3, array2);
//		}
//		else
//		{
//				printf("%s\n%s\n%s\n", array3, array1, array2);
//		}
//	}
//	else 
//	{
//		if (j < 0)
//		{
//				printf("%s\n%s\n%s\n", array2, array1, array3);
//		}
//		else
//		{
//			if (k < 0)
//				printf("%s\n%s\n%s\n", array2, array3, array1);
//			else
//				printf("%s\n%s\n%s\n", array3, array2, array1);
//		}
//	}
//	return 0;
//}

//1046
//��n��Χ��һȦ��˳���źš��ӵ�1���˿�ʼ��������1��3��������
//������3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ��


//#include<stdio.h>
//#define N 100
//
//int main()
//{
//	int n;
//	int i, j;
//	int prev;
//	int flag = 0;
//	char array[N] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		array[i] = i+1;
//
//	j = 1;
//	i = 0;
//	while (i < n)
//	{
//		if (j == 3 && array[i] != -1)
//		{
//			j = 1;
//			array[i] = -1;
//	
//		}
//		if (array[i] != -1 && j != 3)
//		{
//			if (flag == 1 && prev == array[i])
//			{
//				break;
//			}
//			flag = 1;
//			j++;
//			prev = array[i];
//		}	
//		i++;
//		if (i == n)
//			i = 0;
//	}
//	printf("%d", prev);
//	return 0;
//}

//1047
//��һ�ַ���������n���ַ���дһ�����������ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ�����

//#include<stdio.h>
//#define N 100
//
//int main()
//{
//	int n, m;
//	int j = 0;
//	char array[N];
//	char str[N] = { 0 };
//	scanf("%d %s %d", &n, array, &m);
//	for (int i = m - 1; i < n; i++)
//	{
//		str[j++] = array[i];
//	}
//	printf("%s", str);
//	return 0;
//}

//1048
//����һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ��죬ע���������⡣

//#include<stdio.h>
//
//int mouth_1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int mouth_2[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//typedef struct Calendar
//{
//	int year;
//	int mouth;
//	int day;
//}Calendar;
//
//int check_Leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	Calendar cal;
//	int i;
//	int result = 0;
//	scanf("%d %d %d", &cal.year, &cal.mouth, &cal.day);
//	i = check_Leap(cal.day);
//	if (i = 0)
//	{
//		for (int j = 0; j < cal.mouth-1; j++)
//			result += mouth_1[j];
//		result += cal.day;
//	}
//	else
//	{
//		for (int j = 0; j < cal.mouth - 1; j++)
//			result += mouth_2[j];
//		result += cal.day;
//	}
//	printf("%d\n", result);
//	return 0;
//}

//1049
//������N��ѧ�������ݼ�¼��ÿ����¼����ѧ�š����������Ƴɼ��� ��дһ������input,��������һ��ѧ�������ݼ�¼�� 
//��дһ������print,��ӡһ��ѧ�������ݼ�¼�� ��������������������������ȡN����¼���룬�ٰ�Ҫ������� N<100

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//typedef struct Student
//{
//	char ID[20];
//	char name[20];
//	int class1;
//	int class2;
//	int class3;
//	struct student* next;
//}Student;
//
//
//void input(Student** head, char* ID, char* name, int class1, int class2, int class3)
//{
//	int i;
//	Student* temp = NULL;
//	temp = (Student*)malloc(sizeof(Student));
//	int size1 = strlen(ID);
//	int size2 = strlen(name);
//	for (i = 0; i < size1; i++)
//		*(temp->ID + i) = *(ID + i);
//	*(temp->ID + size1) = '\0';
//
//	for (i = 0; i < size2; i++)
//		*(temp->name + i) = *(name + i);
//	*(temp->name + size2) = '\0';
//	temp->class1 = class1;
//	temp->class2 = class2;
//	temp->class3 = class3;
//	temp->next = NULL;
//
//	if (*head == NULL)
//		*head = temp;
//	else
//	{
//		Student* pcur = *head;
//		while (pcur->next != NULL)
//			pcur = pcur->next;
//		pcur->next = temp;
//	}
//}
//
//void print(Student* head, int n)
//{
//	Student* temp = head;
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s %s %d %d %d", temp->ID, temp->name, temp->class1, temp->class2, temp->class3);
//		temp = temp->next;
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n;
//	char ID[20] = { 0 };
//	char name[20] = { 0 };
//	int class1, class2, class3;
//	scanf("%d", &n);
//	Student* student = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %d %d", ID, name, &class1, &class2, &class3);
//		getchar();
//		input(&student, ID, name, class1, class2, class3);
//	}
//	print(student, n);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	double a, b;
//	int i, j;
//	for (i = 1; i*2.3 < 82.3; i++)
//	{
//		for (j = 1; j*1.9 + i * 2.3 < 82.3; j++)
//			if (i < j)
//			{
//				if ((2.3*i + 1.9*j) >= 82.3 - 0.000001)
//				{
//					if (((2.3*i + 1.9*j) <= 82.3 + 0.000001))
//					{
//						printf("%d\n", i);
//						break;
//					}
//
//				}
//			}
//	}
//	return 0;
//}

//#include<cstdio>
//#include<cstring>
//#include<cmath>
//
//int main()
//{
//	double p = 2.30, y = 1.90;
//	for (int i = 1; i <= 40; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if (fabs((i*y + j * p) - 82.3) <= 0.00001)
//			{
//				if (j < i)
//				{
//					printf("%d\n", j);
//				}
//			}
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i, j, tmp, n, flag, a[100][2];
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d %d", &a[i][0], &a[i][1]);
//			tmp = a[i][1];
//			flag = a[i][0];
//			j = i - 1;
//			while (j >= 0)
//			{
//				if (a[j][1] > tmp)
//				{
//					a[j + 1][1] = a[j][1];
//					a[j + 1][0] = a[j][0];
//					j--;
//				}
//			}
//			while (a[j][1] == tmp)
//			{
//				if (a[j][0] > flag)
//				{
//					a[j + 1][0] = a[j][0];
//					a[j + 1][1] = a[j][1];
//					j--;
//				}
//			}
//			a[j + 1][1] = tmp;
//			a[j + 1][0] = flag;
//		}
//		for (i = 0; i < n; i++)
//			printf("%d %d\n", a[i][0], a[i][1]);
//	}
//	return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct student
//{
//	int number;
//	int score;
//};
//
//int main()
//{
//	struct student students[101];
//	int n, i, j;
//	struct student temp;
//
//	while (scanf("%d", &n) != EOF)
//	{
//		//��������
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d%d", &students[i].number, &students[i].score);
//		}
//
//		//ð������
//		for (i = 0; i < n - 1; i++)
//		{
//			for (j = 0; j < n - i - 1; j++)
//			{
//				if (students[j].score > students[j + 1].score)
//				{
//					temp = students[j];
//					students[j] = students[j + 1];
//					students[j + 1] = temp;
//				}
//				else if (students[j].score == students[j + 1].score)
//				{
//					if (students[j].number > students[j + 1].number)
//					{
//						temp = students[j];
//						students[j] = students[j + 1];
//						students[j + 1] = temp;
//					}
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("%d %d\n", students[i].number, students[i].score);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[188888];
//	char z;
//	int i = 0;
//	while (z = getchar())
//	{
//		if (z == '}')
//		{
//			a[i] = '}';
//			a[++i] = '\0';
//			break;
//		}
//
//		a[i] = z;
//		i++;
//	}
//	int n;
//	n = strlen(a);
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == '/')
//		{
//			if (a[i + 1] == '/')
//			{
//				while (a[i] != '\n')
//				{
//					i++;
//				}
//			}
//			else if (a[i + 1] == '*')
//			{
//				while (1)
//				{
//					i++;
//					if (a[i - 2] == '*')
//					{
//						if ((a[i - 1] == '/'))
//							break;
//					}
//				}
//			}
//		}
//
//		printf("%c", a[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//char s[500][2000];
//int main()
//{
//	int n = 0, l, flag, i, j;
//	while (gets(s[n]))
//		n++;
//	for (flag = i = 0; i < n; i++)
//	{
//		l = strlen(s[i]);
//		for (j = 0; j < l; j++)
//		{
//			if (!flag&&s[i][j] == '/'&&s[i][j + 1] == '/')
//				break;
//			else if (s[i][j] == '/'&&s[i][j + 1] == '*')
//				flag = 1;
//			else if (!flag)
//				printf("%c", s[i][j]);
//			else if (s[i][j] == '*'&&s[i][j + 1] == '/')
//				flag = 0, j++;
//		}
//		if (!flag)
//			puts("");
//	}
//}
