#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef struct Student
//{
//	char number[20];
//	char name[20];
//	int class1;
//	int class2;
//	int class3;
//	struct Student* next;
//}Student;
//
//void Push(Student** head, char* number, char* name, int class1, int class2, int class3)
//{
//	assert(head);
//	Student* temp = NULL;
//	Student* cur = NULL;
//	int i = 0;
//	temp = (Student*)malloc(sizeof(Student));
//	if (!temp)
//	{
//		assert(0);
//		return;
//	}
//
//	int namesize = sizeof(name) / sizeof(char);
//	int numbersize = sizeof(number) / sizeof(char);
//	for (i = 0; i <= numbersize; i++)
//		temp->number[i] = number[i];
//
//	for (i = 0; i <= namesize; i++)
//		temp->name[i] = name[i];
//
//	temp->class1 = class1;
//	temp->class2 = class2;
//	temp->class3 = class3;
//	temp->next = NULL;
//
//	if (*head == NULL)
//		*head = temp;
//	else
//	{
//		cur = *head;
//		while (cur->next != NULL)
//			cur = cur->next;
//		cur->next = temp;
//	}
//}
//
//int PrintClass1(Student* head)
//{
//	assert(head);
//	Student* temp = head;
//	int size = 0;
//	int result = 0;
//	while (temp != NULL)
//	{
//		result = result + temp->class1;
//		size++;
//		temp = temp->next;
//	}
//	return result / size;
//}
//
//int PrintClass2(Student* head)
//{
//	assert(head);
//	Student* temp = head;
//	int size = 0;
//	int result = 0;
//	while (temp != NULL)
//	{
//		result = result + temp->class2;
//		size++;
//		temp = temp->next;
//	}
//	return result / size;
//}
//
//int PrintClass3(Student* head)
//{
//	assert(head);
//	Student* temp = head;
//	int size = 0;
//	int result = 0;
//	while (temp != NULL)
//	{
//		result = result + temp->class3;
//		size++;
//		temp = temp->next;
//	}
//	return result / size;
//}
//
//Student* PrintStudent(Student* head)
//{
//	assert(head);
//	Student* temp = head;
//	Student* amp = NULL;
//	int prev = 0;
//	int result = 0;
//	while (temp != NULL)
//	{
//		prev = temp->class1 + temp->class2 + temp->class3;
//		if (prev > result)
//		{
//			result = prev;
//			amp = temp;
//		}
//		temp = temp->next;
//	}
//	return amp;
//}
//
//int main()
//{
//	int n, i = 0;
//	Student* head = NULL;
//	char number[20] = { 0 };
//	char name[20] = { 0 };
//	int class1 = 0;
//	int class2 = 0;
//	int class3 = 0;
//	int a, b, c;
//	Student* temp = NULL;
//	scanf("%d", &n);
//	while (i < n)
//	{
//		scanf("%s", number);
//		getchar();
//		scanf("%s", name);
//		getchar();
//		scanf("%d", &class1);
//		getchar();
//		scanf("%d", &class2);
//		getchar();
//		scanf("%d", &class3);
//		getchar();
//		Push(&head, number, name, class1, class2, class3);
//		i++;
//	}
//	a = PrintClass1(head);
//	b = PrintClass2(head);
//	c = PrintClass3(head);
//	printf("%d %d %d\n", a, b, c);
//	temp = PrintStudent(head);
//	printf("%s %s %d %d %d\n", temp->number, temp->name, temp->class1, temp->class2, temp->class3);
//	return 0;
//}