//求出区间[a, b]中所有整数的质因数分解。
//
//输入 input
//输入两个整数a，b。
//
//输出 output
//每行输出一个数的分解，形如k = a1 * a2*a3...(a1 <= a2 <= a3...，k也是从小到大的)(具体可看样例)

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