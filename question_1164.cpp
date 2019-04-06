//
//输入一串字符, 将其中的大写变成小写，若不为大写则原样输出
//
//输入 input
//任意字符串(长度在100以内)以回车表示输入结束
//
//输出 output
//将其中的大写 输出相应的小写，若不为大写则原样输出
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