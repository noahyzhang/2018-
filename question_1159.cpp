//�ж�һ�����Ƿ�Ϊ"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָ������һ���������λ���ֵ������͵��ڸ�������
//���磺371��һ��"ˮ�ɻ���"��371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3.
//
//���� input
//һ����λ��
//
//��� output
//1����0(1�������Ϊˮ�ɻ���, 0�����������ˮ�ɻ���)
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
