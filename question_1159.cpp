//判断一个数是否为"水仙花数"，所谓"水仙花数"是指这样的一人数：其各位数字的立方和等于该数本身。
//例如：371是一个"水仙花数"，371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3.
//
//输入 input
//一个三位数
//
//输出 output
//1或者0(1代表此数为水仙花数, 0代表此数不是水仙花数)
#if 0
#include<iostream>
using namespace std;

int Water_flower(int ip)
{
	int bao = ip / 100;
	int shi = ip % 100 / 10;
	int ge = ip % 10;
	if (ip == bao * bao*bao + shi * shi*shi + ge * ge*ge)
		return 1;
	else
		return 0;
}

int main()
{
	int ip;
	int i;
	cin >> ip;
	i = Water_flower(ip);
	cout << i << endl;
	return 0;
}
#endif
