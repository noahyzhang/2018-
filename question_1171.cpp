//쳲���������
//1��1��2��3��5��8��13��21��34��55��89��������������Ϊ��쳲��������С���
//����ÿ�����ֶ��ǡ�쳲�����������
//
//���� input
//һ������N(N���ܴ���40)
//
//��� output
//��N����쳲�����������ɵġ�쳲��������С���
#if 0
#include<iostream>
using namespace std;

void fibonani(int n)
{
	int i = 1, j = 1, k = 0;
	
	for (int m = 1; m <= n; m++)
	{
		if (m == 1)
			cout << 1 << " ";
		else if (m == 2)
			cout << 1 << " ";
		else
		{
			k = i + j;
			i = j;
			j = k;
			cout << k << " ";
		}
	}
}

int main()
{
	int n;
	int array[41] = { 0 };
	cin >> n;
	fibonani(n);
	return 0;
}

#endif

//1172
//�������ɸ�����, �� - 1������������������е������
//
//���� input
//���ɸ����������� - 1������������
//
//��� output
//���е������

#if 0
#include<iostream>
using namespace std;

int main()
{
	int max = -9999;
	int number;
	cin >> number;
	while (number != -1)
	{
		if (max < number)
			max = number;
		cin >> number;
	}
	cout << max << endl;
	return 0;
}
#endif

