//斐波纳契数列
//1，1，2，3，5，8，13，21，34，55，89……这个数列则称为“斐波纳契数列”，
//其中每个数字都是“斐波纳契数”。
//
//输入 input
//一个整数N(N不能大于40)
//
//输出 output
//由N个“斐波纳契数”组成的“斐波纳契数列”。
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
//输入若干个整数, 以 - 1标记输入结束。输出其中的最大数
//
//输入 input
//若干个整数。（以 - 1标记输入结束）
//
//输出 output
//其中的最大数

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

