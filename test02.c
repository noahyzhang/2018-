#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct Stduent
{
	char* num;
	char* name;
	int class1;
	int class2;
	int class3;
}Student;

void input(Student* s)
{
	s->num = (char*)malloc(100);
	s->name = (char*)malloc(100);
	scanf("%s %s %d %d %d", s->num, s->name, &(s->class1), &(s->class2), &(s->class3));
}

void print(Student* s)
{
	printf("%s,%s,%d,%d,%d\n", s->num, s->name, s->class1, s->class2, s->class3);
}

int main()
{
	int n;
	Student s;
	scanf("%d", &n);
	getchar();
	for (int i = 1; i <= n; i++)
	{
		input(&s);
		print(&s);
	}
	return 0;
}