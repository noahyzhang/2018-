#define _CRT_SECURE_NO_WARNINGS 1

//1232: 十->二进制转换
//题目描述 description
//将十进制整数转换成二进制数
//
//输入 input
//输入数据中含有不多于50个整数n（ - 2 ^ 16＜n＜2 ^ 16）。
//
//输出 output
//对于每个n，以11位的宽度右对齐输出n值，然后输出“-->”，再然后输出二进制数。每个整数n的输出，独立占一行。


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, temp, k = 1;
//	string s;
//	while (cin >> n)
//	{
//		if (k>50)
//			return 0;
//		int a[170000] = { 0 }, i = 0;
//		long long int count = 0;
//		cout.width(11);
//		if (n == 0)
//			cout << 0 << "-->" << 0 << endl;
//		else if (n>0)
//		{
//			temp = n;
//			while (n != 0)
//			{
//				a[i] = n % 2;
//				n = n / 2;
//				i++;
//			}
//			for (int j = i - 1; j >= 0; j--)
//				count = count * 10 + a[j];
//			cout << temp << "-->" << count << endl;
//		}
//		else if (n<0)
//		{
//			temp = n;
//			n = -n;
//			while (n != 0)
//			{
//				a[i] = n % 2;
//				n = n / 2;
//				i++;
//			}
//			for (int j = i - 1; j >= 0; j--)
//				count = count * 10 + a[j];
//			cout << temp << "-->" << -count << endl;
//		}
//		k++;
//	}
//	return 0;
//}




//#include <string>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int num = 0;
//	while (cin >> num)
//	{
//		string sBinary;
//		int temp = abs(num);
//		if (temp == 0)
//		{
//			cout << "          0-->0\n";
//			continue;
//		}
//		while (temp)
//		{
//			if (temp & 0x01)
//				sBinary += '1';
//			else
//				sBinary += '0';
//			temp >>= 1;
//		}
//		reverse(sBinary.begin(), sBinary.end());
//		cout.width(11);
//		cout << num << (num > 0 ? "-->" : "-->-") << sBinary << endl;
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//void exchange(int number)
//{
//	if (number == 0)
//		return;
//	exchange(number / 2);
//	cout << number % 2;
//}
//
//int main()
//{
//	int i, j;
//	int n;
//	int number;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &number);
//		if (number > 0)
//			cout << number << "-->";
//		else
//		{
//			number = -number;
//			cout << number << "-->-";
//		}
//		exchange(number);
//		cout << endl;
//	}
//	return 0;
//}