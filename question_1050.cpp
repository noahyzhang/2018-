
//��N��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ����Ӽ�������N��ѧ�������ݣ�
//Ҫ���ӡ��3�ſε���ƽ���ɼ����Լ���߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���
//
//���� input
//ѧ������Nռһ��ÿ��ѧ����ѧ�š����������Ƴɼ�ռһ�У��ո�ֿ���
//
//��� output
//���ſε�ƽ���ɼ� ��߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���
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