
//����һ������x��һ��������n����������ʽ��ֵ��Ҫ��һ������2��������fact(n)����n�Ľ׳ˣ�mypow(x, n)����x��n���ݣ���xn����
//���������ķ���ֵ������double��
//x - x2 / 2!+ x3 / 3!+ ... + (-1)n - 1xn / n!
//���������4λС����
//���� input
//x n
//��� output
//���к�
#if 0
#include<iostream>
using namespace std;

double fact(double n)
{
	double temp = n;
	if ( n == 1)
		return 1;
	if (n == 2)
		return 2;
	for (int i = 2; i < n; i++)
	{
		temp *= i;
	}
	return temp;
}

 double mypow(double x, double n)
{
	double temp = x;
	for (int i = 2; i <= n; i++)
	{
		temp *= x;
	}
	return temp;
}


int main()
{
	double x;
	double n;
	double result = 0;
	cin >> x >> n;
	double r_x;
	double r_n;
	for (int i = 1; i <= n; i++)
	{
		r_x = mypow(x, i);
		r_n = fact(i);
		if (i % 2 == 0)
			result -= r_x / r_n;
		else
			result += r_x / r_n;
	}
	printf("%.4lf\n", result);
	return 0;
}
#endif


