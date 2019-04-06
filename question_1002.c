#define _CRT_SECURE_NO_WARNINGS 1

//要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．
//例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。请编一程序，
//用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，’C’、’h’、’i’、’n’、’a’，经过运算，
//使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。

//#include<stdio.h>
//int main()
//{
//	char array[100] = { '\0' };
//	int i = 0;
//	if (scanf("%s", array) != EOF)
//	{
//		while (array[i] != '\0')
//		{
//			*(array + i) = *(array + i) + 4;
//			i++;
//		}
//	}
//	printf("%s\n", array);
//	return 0;
//}

//设圆半径r，圆柱高h 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 
//用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。 PI＝3.14

//#include<stdio.h>
//
//int main()
//{
//	float PI = 3.14;
//	double r, h;
//	scanf("%lf %lf", &r, &h);
//	double c1 = 2 * PI*r;
//	double Sa = PI*r*r;
//	double Sb = 4 * PI*r*r;
//	double Va = 4.0 / 3 * PI*r*r*r;
//	double Vb = PI*r*r*h-0.005;
//	printf("C1=%2.2f\n", c1);
//	printf("Sa=%2.2f\n",Sa);
//	printf("Sb=%2.2f\n", Sb);
//	printf("Va=%2.2f\n", Va); //浮点数运算一定不是  4/3。切记
//	printf("Vb=%2.2f\n", Vb);
//	return 0;
//}


//1008
//给出一个不多于5位的整数，
//要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321, 应输出123

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char array[6] = { '\0' };
//	int bit = 0;
//	int i = 0;
//	scanf("%s", array);
//	bit = strlen(array);
//	printf("%d\n", bit);
//	for (; i < bit - 1; i++)
//		printf("%c ", array[i]);
//	printf("%c\n", array[bit - 1]);
//	for (i = bit - 1; i >= 0; i--)
//		printf("%c", array[i]);
//	return 0;
//}

//1009
//企业发放的奖金根据利润提成。利润低于或等于100000元的，奖金可提10%;
//利润高于100000元，低于200000元（100000<I≤200000）时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5%;
//200000<I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
//	400000<I≤600000元时，高于400000元的部分按3％提成；600000<I≤1000000时，高于600000元的部分按1.5%提成；
//	I>1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I, 求应发奖金总数。

//#include<stdio.h>
//
//int main()
//{
//	long int I;
//	int a;
//	long int money;
//	scanf("%d", &I);
//	if (I <= 100000)
//		a = 1;
//	else if (I <= 200000)
//		a = 2;
//	else if (I <= 400000)
//		a = 3;
//	else if (I <= 600000)
//		a = 4;
//	else if (I <= 1000000)
//		a = 5;
//	else
//		a = 6;
//	switch (a)
//	{
//		case 1:
//		{
//			  money = 0.1*I;
//			  break;
//		}
//		case 2:
//		{
//				  money = 100000 * 0.1 + (I - 100000)*0.75;
//				  break;
//		}
//		case 3:
//		{
//				  money = 100000 * 0.1 + 100000 * 0.75 + (I - 200000)*0.05;
//				  break;
//		}
//		case 4:
//		{
//				  money = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + (I - 400000)*0.03;
//				  break;
//		}
//		case 5:
//		{
//				  money = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000)*0.015;
//				  break;
//		}
//		case 6:
//		{
//				  money = 100000 * 0.1 + 100000 * 0.75 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000)*0.01;
//				  break;
//		}
//		default:
//			break;
//	}
//	printf("%ld", money);
//	return 0;
//}

//1012
//求Sn = a + aa + aaa + … + aa…aaa（有n个a）之值，其中a是一个数字。
//例如：2 + 22 + 222 + 2222 + 22222（n = 5），n由键盘输入。

//#include<stdio.h>
//
//int main()
//{
//	long int Sn = 0;
//	int a = 2;
//	int i = 1;
//	int n = 0;
//	scanf("%d", &n);
//	Sn = a;
//	while (i < n)
//	{
//		a = a * 10 + 2;
//		Sn = Sn + a;
//		i++;
//	}
//	printf("%d\n", Sn);
//	return 0;
//}