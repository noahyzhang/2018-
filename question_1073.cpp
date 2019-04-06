
//N������һ��ˮ��ͷǰ�Ŷӽ�ˮ������ÿ���˽�ˮ��ʱ��ΪTi�����ҳ���N�����Ŷӵ�һ��˳��ʹ��N���˵�ƽ���ȴ�ʱ����С��
//
//���� input
//�ж���������ݣ�ÿ������������У���һ��ΪN(N <= 100)���ڶ���ΪN���˵Ĵ�ˮʱ��
//
//��� output
//����ÿ���������ƽ����С�ȴ�ʱ�䣬����3λС����

//�ö�ά����, a[n][2],
//a[i][0]�д��Ti, ����a[i][1] = i;
//�ڰ�a[i][0]����С�����˳������, ��Ȼa[i][1]�е�����ҲҪ���ŵ���.
//���ʱ˳�����a[i][0]�����ݾ�����,
//����ʱ��, ��һ��Ϊ��, ��һ����ˮʱ����ǵڶ��ĵȴ�ʱ��, ǰ������ˮʱ��;��ǵ������ȴ�ʱ��, ����������
//ǰ�Ÿ���ˮʱ��;��ǵ�ʮ���ȴ�ʱ��,
//��ʮ���ȴ�ʱ����ӳ���10, ����ƽ���ȴ�ʱ��

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

void quick_Sort(int(*num)[2], int left, int right)
{
	if (left >= right)
		return;
	int i = left, j = right, x = num[i][0], y = num[i][1];
	while (i < j) {
		while (i < j && num[j][0] >= x)
			j--;
		if (i < j)
		{
			num[i++][0] = num[j][0];
			num[i++][1] = num[j][1];
		}

		while (i < j && num[i][0] <= x)
			i++;
		if (i < j)
		{
			num[j--][0] = num[i][0];
			num[j--][1] = num[i][1];
		}

	}
	num[i][0] = x;    
	num[i][1] = y;
	quick_Sort(num, left, i - 1);
	quick_Sort(num, i + 1, right);
}


double Func(int(*array)[2], int n)
{
	int time = 0;
	double total = 0;
	quick_Sort(array, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		time = 0;
		for (int j = 0; j < i; j++)
		{
			time += array[j][0];
		}
		total += time;
	}
	total /= n;
	return total;
}

int main()
{
	int array[101][2] = { 0 };
	int n;
	double result = 0;

	while (cin>>n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> array[i][0];
			array[i][1] = i;
		}
		if (n == 0)
			printf("%.3lf\n", 0);
		else
		{
			result = Func(array, n);
			printf("%.3lf\n", result);
		}

	}
	return 0;
}

#endif