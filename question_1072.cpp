//���� input
//������һϵ���ַ�����ɡ�ֻ��Сд��ĸ{ A��B,..., Z }�ַ�����������Ϊ���롣
//�ļ����������뽫����ֹ��
//��� output
//�����һ�����������ڻ����0��С�ڻ����83681��

//����, �����Ȳ��������в��Ϸ������, ��ô����һ��nλ������, ��λ�ÿ��ܴﵽs = C(26, 1) + C(26, 2) + �� + C(26, n), 
//�������s��ֵ, Ȼ���ټ������Ϸ��������Լ����ڸ������е��������е����.�������������abcd, n = 4, 
//��ô���Ǽ���������a�Ժ���ĸ��ͷ�����и���, ��C(25, 4), ��������ʣ�µľ�����a��ͷ�Ĳ��Ϸ����кʹ���abcd��С��axyz�ĺϷ�����,
//���ڵڶ�λ, ���Ǽ�����b�Ժ���ĸΪ�ڶ�λ������, ��C(24, 3), ����ʣ�µ�����ab��ͷ�Ĳ��Ϸ����кʹ���abcd��С��abyz�ĺϷ�����, �Դ����Ƽ���.
//����bc = C(26, 1) + C��26, 2�� - C��26 - 2, 2�� - C(26 - 3, 1) = 52
#if 0
#include<iostream>
#include<string>
#include<deque>
using namespace std;

long int paili(int m, int n)
{
	long int result = m;
	for (int i = 2; i <= n; i++)
	{
		result = result*(--m);
		result = result / i;
	}
	return result;
}

int Chick_Str(string str)
{
	int len = str.size();
	if (len < 0)
	{
		return 0;
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (str[j] < str[i])
			{
				return 0;
			}
		}
	}
	return 1;
}

int StringToInt(string str)
{
	int length = str.length();
	if (length == 1)
		return str[0] - 'a' + 1;
	long int sum = 0;
	deque<char> d1;
	for (int i = 1; i <= length; i++)
	{
		sum = sum + paili(26, i);
		d1.push_back(str[i - 1]);
	}
	for (int i = 1; i <= length; i++)
	{
		int temp = d1.front() - 'a' + 1;
		d1.pop_front();
		sum = sum - paili(26 - temp, length - i +1);
	}

	return sum;

}
int main()
{
	string str;
	while (getline(cin, str))
	{
		if (1 == Chick_Str(str))
		{
			cout << StringToInt(str) << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}

#endif