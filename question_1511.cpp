//对于给定的正整数 n，计算其十进制形式下所有位置数字之和，并计算其平方的各位数字之和。
//
//输入 input
//每行输入数据包括一个正整数n(0 < n < 40000)，如果n = 0 表示输入结束，并不用计算。
//
//	输出 output
//	对于每个输入数据，计算其各位数字之和，以及其平方值的数字之和，输出在一行中，之间用一个空格分隔，但行末不要有空格。

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