//Fibonacci数列的递推公式为：Fn = Fn - 1 + Fn - 2，其中F1 = F2 = 1。
//
//当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。
#if 0
#include<iostream>

using namespace std;
#define M 10007
long int Fibonani(int n)
{
	int x = 1, y = 1, k;
	if (n == 1 || n == 2)
		return 1;
	for (int i = 2; i < n; i++)
	{
		k = (x + y) % M;
		x = y;
		y = k;
	}
	return k;
}

int main()
{
	long int result = 0;
	int n;
	cin >> n;
	result = Fibonani(n);
	cout << result << endl;
	return 0;
}
#endif

