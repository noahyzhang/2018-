//现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。 编写一个函数input, 
//用来输入一个学生的数据记录。 编写一个函数print, 打印一个学生的数据记录。
//在主函数调用这两个函数，读取N条记录输入，再按要求输出。 N < 100
//
//	输入 input
//	学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
//
//	输出 output
//	每个学生的学号、姓名、三科成绩占一行，逗号分开。
#if 0
#include<iostream>
#include<string>
using namespace std;

typedef struct Stduent
{
	string num;
	string name;
	int class1;
	int class2;
	int class3;
}Student;

void input(Student* s)
{
	cin >> s->num >> s->name >> s->class1 >> s->class2 >> s->class3;
}

void print(Student* s)
{
	cout << s->num << "," << s->name << "," << s->class1 << "," << s->class2 << "," << s->class3 << endl;
}

int main()
{
	int n;
	Student s;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		input(&s);
		print(&s);
	}
	return 0;
}
#endif


