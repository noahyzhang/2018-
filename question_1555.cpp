//�������[a, b]�������������������ֽ⡣
//
//���� input
//������������a��b��
//
//��� output
//ÿ�����һ�����ķֽ⣬����k = a1 * a2*a3...(a1 <= a2 <= a3...��kҲ�Ǵ�С�����)(����ɿ�����)

#if 0

#include<iostream>

using namespace std;

void Prime_factor(int n)
{
	cout << n << "=";
	for (int i = 2; i <= n; i++)
	{
		while (n != i)
		{
			if (n%i == 0)
			{
				cout << i << "*";
				n = n / i;
			}
			else
				break;
		}
	}
	cout <<n<< endl;
}

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i ++)
		Prime_factor(i);
	return 0;
}

#endif