//������N��ѧ�������ݼ�¼��ÿ����¼����ѧ�š����������Ƴɼ��� ��дһ������input, 
//��������һ��ѧ�������ݼ�¼�� ��дһ������print, ��ӡһ��ѧ�������ݼ�¼��
//��������������������������ȡN����¼���룬�ٰ�Ҫ������� N < 100
//
//	���� input
//	ѧ������Nռһ�� ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У��ո�ֿ���
//
//	��� output
//	ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У����ŷֿ���
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


