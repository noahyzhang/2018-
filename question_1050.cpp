
//有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，从键盘输入N个学生的数据，
//要求打印出3门课的总平均成绩，以及最高分的学生的数据（包括学号、姓名、3门课成绩）
//
//输入 input
//学生数量N占一行每个学生的学号、姓名、三科成绩占一行，空格分开。
//
//输出 output
//各门课的平均成绩 最高分的学生的数据（包括学号、姓名、3门课成绩）
#if 0
#include<iostream>
#include<string>
using namespace std;
int ac1, ac2, ac3, highscore;

typedef struct Stduent
{
	string num;
	string name;
	int class1;
	int class2;
	int class3;
}Student;

Student highstduent;
void input(Student* s)
{
	cin >> s->num >> s->name >> s->class1 >> s->class2 >> s->class3;
}

void averagescore(Student* s)
{
	ac1 += s->class1, ac2 += s->class2, ac3 += s->class3;
	if (highscore < s->class1 + s->class2 + s->class3)
	{
		highscore = s->class1 + s->class2 + s->class3;
		highstduent.num = s->num;
		highstduent.name = s->name;
		highstduent.class1 = s->class1;
		highstduent.class2 = s->class2;
		highstduent.class3 = s->class3;
	}
}

void print(Student* s,int n)
{
	ac1 = ac1 / n;
	ac2 = ac2 / n;
	ac3 = ac3 / n;
	cout << ac1 << " " << ac2 << " " << ac3<<endl;
	cout << highstduent.num << " " << highstduent.name << " " << highstduent.class1 << " " << highstduent.class2 << " " << highstduent.class3 << endl;
}

int main()
{
	int n;
	Student s;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		input(&s);
		averagescore(&s);	
	}
	print(&s, n);
	return 0;
}
#endif