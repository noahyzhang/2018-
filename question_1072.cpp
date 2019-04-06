//输入 input
//输入由一系列字符串组成。只有小写字母{ A，B,..., Z }字符将被用来作为输入。
//文件结束的输入将被终止。
//输出 output
//输出是一个整数，大于或等于0，小于或等于83681。

//首先, 我们先不考虑序列不合法的情况, 那么对于一个n位的序列, 其位置可能达到s = C(26, 1) + C(26, 2) + … + C(26, n), 
//我们算出s的值, 然后再减掉不合法的序列以及大于给定序列的其他序列的情况.假设给定序列是abcd, n = 4, 
//那么我们减掉所有以a以后字母开头的序列个数, 即C(25, 4), 现在我们剩下的就是以a开头的不合法序列和大于abcd但小于axyz的合法序列,
//对于第二位, 我们减掉以b以后字母为第二位的序列, 即C(24, 3), 现在剩下的是以ab开头的不合法序列和大于abcd但小于abyz的合法序列, 以此类推即可.
//例：bc = C(26, 1) + C（26, 2） - C（26 - 2, 2） - C(26 - 3, 1) = 52
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