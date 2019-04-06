#define _CRT_SECURE_NO_WARNINGS 1

//将输入的字符串压缩并统计，例如："aaabbbbcdd"，输出"a3b4c1d2"；
//输入 input
//第一行输入一个整数n(0<n<100)，表示接下来需要输入n行字符串；
//输出 output
//n行字符串转换后的字符串。

//#include<stdio.h>
//#include<string.h>
//int n;
//char array[1000] = { 0 };
//char new_array[1000] = { 0 };
//
//void exchange()
//{
//	int size = strlen(array);
//	char datum = array[0];
//	int count = 1;
//	int j = 0;
//	new_array[j] = datum;
//	j++;
//	for (int i = 1; i < size; i++)
//	{
//		if (datum == array[i])
//		{
//			count++;
//			continue;
//		}
//		else
//		{
//			datum = array[i];
//			new_array[j] = count + '0';
//			j++;
//			new_array[j] = datum;
//			j++;
//			count = 1;
//		}
//	}
//	new_array[j] = count + '0';
//}
//
//
//int main()
//{
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", array);
//		for (int i = 0; i < 1000; i++)
//			new_array[i] = 0;
//		exchange();
//		printf("%s\n", new_array);
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	unsigned int n;
//	cin >> n;
//	if (0 == n)
//		return 0;
//	vector<int> ids;
//	int t;
//	for (int i = 0; i<n; i++){
//		cin >> t;
//		ids.push_back(t);
//	}
//	vector<int>::iterator iter;
//	sort(ids.begin(), ids.end());
//
//	iter = unique(ids.begin(), ids.end());
//
//	if (iter != ids.end())
//		ids.erase(iter, ids.end());
//
//	cout << ids.size() << endl;
//	for (iter = ids.begin(); iter != ids.end(); iter++)
//		cout << (*iter) << " ";
//}


