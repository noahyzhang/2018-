#define _CRT_SECURE_NO_WARNINGS

//输入一个整数，将其转换成八进制数输出。
//
//输入 input
//输入包括一个整数N(0 <= N <= 100000)。
//
//输出 output
//可能有多组测试数据，对于每组数据，
//输出N的八进制表示数。
#if 0
#include<iostream>
#include<vector>
using namespace std;

void change(int n)
{
	int r;
	vector<int> v1;
	if (0 == n)
	{
		v1.push_back(n);
	}
	while (n != 0)
	{
		r = n % 8;
		v1.push_back(r);
		n = n / 8;
	}
	while(!v1.empty())
	{
		int temp = v1.back();
		v1.pop_back();
		cout << temp;
	}
	cout << endl;

}

int main()
{
	long int n;
	while (cin >> n)
	{
		change(n);
	}
	return 0;
}

#endif
//1501
//输入多行字符串，请按照原文本中的顺序输出其中最短和最长的字符串，如果最短和最长的字符串不止一个，请全部输出。
//输入 input
//输入包括多行字符串，字符串的长度len, (1 <= len <= 1000)。
//输出 output
//按照原文本中的顺序输出其中最短和最长的字符串，如果最短和最长的字符串不止一个，请全部输出。
#if 0

#include <stdio.h>
#include <string.h>
#define maxlen 1001
int main()
{
	char str[maxlen][maxlen];           //二维字符串 同时保存字符串序号及串内容 
	int len[maxlen];
	int i, j, max, min;
	i = max = min = 0;
	while (scanf("%s", str[i]) != EOF)      //注意退出输入时按两次Ctrl+Z
	{
		len[i] = strlen(str[i]);
		if (len[i] > len[max])
			max = i;
		if (len[i] < len[min])
			min = i;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (len[j] == len[min])
			printf("%s\n", str[j]);
	}
	for (j = 0; j < i; j++)
	{
		if (len[j] == len[max])
			printf("%s\n", str[j]);
	}
	return 0;
}

#endif


/*
解题思路：1.写一个求某一数字m的阶乘函数。
2.对于输入的n进行最大奇数和偶数的确定，确定方法：若n%2==0，则最大偶数为n，最大奇数为n-1；
若n%2！=0，则最大奇数为n，最大偶数为n-1；
3.然后根据题意+2阶乘累加。
*/

#if 0
#include<iostream>
using namespace std;

int factorial(int m) {  //
	if (m == 1)
		return 1;
	return m * factorial(m - 1);
}
int main() {
	int n;  //输入的整数
	int maxEven, maxOdd;  //存放最大偶数和奇数
	int sum1 = 0, sum2 = 0;  //存放阶乘和
	while (cin >> n) {
		if (n % 2 == 0) {
			maxEven = n;
			maxOdd = n - 1;
			for (int i = 2; i <= maxEven; i = i + 2) {
				sum1 += factorial(i);
			}
			for (int i = 1; i <= maxOdd; i = i + 2) {
				sum2 += factorial(i);
			}
			cout << sum2 << " " << sum1 << endl;
		}
		else {
			maxEven = n - 1;
			maxOdd = n;
			for (int i = 2; i <= maxEven; i = i + 2) {
				sum1 += factorial(i);
			}
			for (int i = 1; i <= maxOdd; i = i + 2) {
				sum2 += factorial(i);
			}
			cout << sum2 << " " << sum1 << endl;
		}
	}
	return 0;
}

#endif
#if 0

#include<stdio.h>
unsigned long long n;
unsigned long long y1;
unsigned long long y2;
unsigned long long a[20];
void init(int n)
{
	a[0] = 1;
	a[1] = 1;
	for (unsigned long long i = 2; i <= n; ++i)
	{
		a[i] = a[i - 1] * i;
	}
}
unsigned long long gety1()
{
	unsigned long long y1 = 0;
	for (int i = 1; i <= n; i += 2)
	{
		y1 += a[i];
	}
	return y1;
}
unsigned long long gety2()
{
	unsigned long long y2 = 0;
	for (int i = 2; i <= n; i += 2)
		y2 += a[i];
	return y2;
}
int main(int argc, char *argv[])
{
	// freopen("1179.in", "r", stdin);
	while (~scanf("%llu", &n))
	{
		init(n);
		printf("%llu %llu\n", gety1(), gety2());
	}
	return 0;
}

#endif

#include <stdio.h>
#if 0
//改成 unsigned long long就可以AC否则WA
//我看，在考试中，可以按照，int ->long long->大数处理
//这样的顺序来做题

long long fact(long long n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return fact(n - 1)*n;
}

int main()
{
	unsigned long long n;
	unsigned long long i, cnt;
	while (scanf("%lld", &n) != EOF)
	{
		i = 1;
		cnt = 0;
		while (i <= n)
		{
			cnt += fact(i);
			i += 2;
		}
		printf("%lld ", cnt);
		i = 2;
		cnt = 0;
		while (i <= n)
		{
			cnt += fact(i);
			i += 2;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}

#endif
#if 0
# include<stdio.h>
# include<string.h>
char s[100];
void find(int t)
{
	int d[8] = { 0 };
	int i = 0, count = 0;
	while (s[t])
	{
		d[i++] = s[t] % 2;
		s[t] = s[t] / 2;
	}
	for (i = 0; i < 8; i++)
	{
		if (d[i] == 1)
			count++;
	}
	if (count % 2 == 0)
		d[7] = 1;
	for (i = 7; i >= 0; i--)
		printf("%d", d[i]);
	printf("\n");
}
int main()
{
	int i, len;
	while (scanf("%s", s) != EOF)
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			find(i);
	}
	return 0;
}

#endif
#if 0
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
char s[110];
int main()
{
	//while (gets(s) != NULL)
	while(scanf("%s",s)!=EOF)
	{
		int len = strlen(s);
		int  s1[10];
		int ans = 0;
		for (int i = 0; i < len; i++)
		{
			memset(s1, 0, sizeof(s1));/***初始化的位置放错了*/
			int k = 0;
			ans = 0;
			int temp = (int)s[i];
			//printf("temp=%d\n",temp);
			while (temp != 0)
			{
				s1[k++] = (temp & 1);
				if (temp & 1 == 1)
					ans++;
				temp = temp / 2;
			}
			if (ans % 2 == 1)
				s1[7] = 0;
			else
				s1[7] = 1;
			for (int j = 7; j >= 0; j--)
				printf("%d", s1[j]);
			printf("\n");
		}
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int a[4][4];
	int i, j, flag = 1;
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 4; ++i) {
		for (j = i; j < 4; ++j) {
			if (a[i][j] != a[j][i]) {
				flag = 0;
			}
		}
	}
	if (flag) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}
#endif

#if 0
#include<stdio.h> 
int main()
{
	int a[101][101], m, i, j, t;
	while (scanf("%d", &m) != EOF)
	{
		t = 1;
		for (i = 1; i <= m; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &a[i][j]);
		for (i = 1; i <= m; i++)
			for (j = 1; j <= m; j++)
				if (a[i][j] != a[j][i])
					t = 0;
		if (t) printf("Yes!\n");
		else
			printf("No!\n");
	}
	return 0;
}
#endif

//#include<stdio.h>
//long long n;
//unsigned long long y1;
//unsigned long long y2;
//unsigned long long a[9999];
//void init(int n)
//{
//	a[0] = 1;
//	a[1] = 1;
//	for (unsigned long long i = 2; i <= n; ++i)
//	{
//		a[i] = a[i - 1] * i;
//	}
//}
//unsigned long long gety1()
//{
//	unsigned long long y1 = 0;
//	for (int i = 1; i <= n; i += 2)
//	{
//		y1 += a[i];
//	}
//	return y1;
//}
//unsigned long long gety2()
//{
//	unsigned long long y2 = 0;
//	for (int i = 2; i <= n; i += 2)
//		y2 += a[i];
//	return y2;
//}
//int main(int argc, char *argv[])
//{
//	while (scanf("%lld", &n) != EOF)
//	{
//		if (n < 0)
//			return 0;
//		init(n);
//		printf("%llu %llu\n", gety1(), gety2());
//	}
//	return 0;
//}
