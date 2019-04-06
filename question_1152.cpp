#define _CRT_SECURE_NO_WARNINGS 1

//1152
//解一元二次方程ax ^ 2 + bx + c = 0的解。
//#include<iostream>
//#include <iomanip>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//	float a, b, c, x1,x2, temp;
//	cin >> a >> b >> c;
//	temp = b*b - 4 * a*c;
//	if (a == 0)
//		x1 = x2 = -c / b;
//	if (temp > 0)
//	{
//		x1 = (-b + sqrt(temp)) / 2 * a;
//		x2 = (-b - sqrt(temp)) / 2 * a;
//		cout << setiosflags(ios::fixed) << setprecision(2);
//		cout << x1 <<' '<< x2 << endl;
//	}
//	else if (temp == 0)
//	{
//		x1 = x2 = (-b) / 2 * a;
//		cout << setiosflags(ios::fixed) << setprecision(2);
//		cout << x1 << ' ' << x2 << endl;
//	}
//	else
//		return 0;
//	
//	return 0;
//}

//1153
//编一个程序，输入一个字符串，将组成字符串的所有非英文字母的字符删除后输出。
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char old_array[81] = { 0 };
//	char new_array[81] = { 0 };
//	cin >> old_array;
//	int size = strlen(old_array);
//	int j = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if ((*(old_array + i) >= 'a' && *(old_array + i) <= 'z')
//			|| (*(old_array + i) >= 'A'&&*(old_array + i) <= 'Z'))
//		{
//			new_array[j] = *(old_array + i);
//			j++;
//		}
//		else
//			continue;
//	}
//	cout << new_array << endl;
//	return 0;
//}

//1154
//有4个互不相同的数字，输出由其中三个不重复数字组成的排列。 

//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//}