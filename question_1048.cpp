//定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
#if 0

#include<iostream>

using namespace std;

typedef struct Calendar
{
	int year;
	int month;
	int day;
}Calendar;

int Nor_Leap_year[13] = {0, 31,28,31,30,31,30, 31,31,30, 31,30,31 };

int Chick_Leap_year(int year)
{
	if (year % 4 == 0)
		if (year % 100 != 0)
		return 1;
	if (year % 400 == 0)
		return 1;
	return 0;
}

int Print_Day(Calendar* cal)
{
	int result = 0;
	for (int i = 1; i <= cal->month - 1; i++)
	{
		result = result + Nor_Leap_year[i];
	}
	if (cal->month > 2)
		if (Chick_Leap_year(cal->year))
		{
			result++;
		}
	result += cal->day;
	return result;
}

int main()
{
	Calendar cal;
	int result = 0;
	cin >> cal.year >> cal.month >> cal.day;
	result = Print_Day(&cal);
	cout << result << endl;
	return 0;
}
#endif