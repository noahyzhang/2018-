//
//����һ���ַ�, �����еĴ�д���Сд������Ϊ��д��ԭ�����
//
//���� input
//�����ַ���(������100����)�Իس���ʾ�������
//
//��� output
//�����еĴ�д �����Ӧ��Сд������Ϊ��д��ԭ�����
#if 0
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int len = str.size();
	for (int i = 0; i < len; i++)
	{
		if(str[i] >= 'A')
			if (str[i] <= 'Z')
			{
				str[i] += 32;
			}
	}
	cout << str << endl;
	return 0;
}

#endif