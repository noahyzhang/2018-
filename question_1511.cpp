//���ڸ����������� n��������ʮ������ʽ������λ������֮�ͣ���������ƽ���ĸ�λ����֮�͡�
//
//���� input
//ÿ���������ݰ���һ��������n(0 < n < 40000)�����n = 0 ��ʾ��������������ü��㡣
//
//	��� output
//	����ÿ���������ݣ��������λ����֮�ͣ��Լ���ƽ��ֵ������֮�ͣ������һ���У�֮����һ���ո�ָ�������ĩ��Ҫ�пո�

#if 0

#include<iostream>

using namespace std;

void Print(int number)
{
	int n = number, r = 0, temp;
	while (n != 0)
	{
		temp = n % 10;
		r += temp;
		n = n / 10;
	}
	cout << r;
}

int main()
{
	int number;
	cin >> number;
	while (number != 0)
	{	
		Print(number);
		cout << " ";
		Print(number*number);
		cout << endl;
		cin >> number;
	}
	return 0;
}

#endif