//Fibonacci���еĵ��ƹ�ʽΪ��Fn = Fn - 1 + Fn - 2������F1 = F2 = 1��
//
//��n�Ƚϴ�ʱ��FnҲ�ǳ�������������֪����Fn����10007�������Ƕ��١�
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

