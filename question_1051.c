#define _CRT_SECURE_NO_WARNINGS 1
//已有a、b两个链表，每个链表中的结点包括学好、成绩。要求把两个链表合并，按学号升序排列。
//第一行，a、b两个链表元素的数量N、M, 用空格隔开。 接下来N行是a的数据 然后M行是b的数据 每行数据由学号和成绩两部分组成

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef struct Node
//{
//	int _number;
//	int _score;
//	struct Node* _next;
//}Node, *pList;
//
//void InitList(pList* list)
//{
//	*list = NULL;
//}
//
//void PushBackList(pList* list, int number, int score)
//{
//	Node* temp = NULL;
//	Node* cur = NULL;
//	assert(list);
//	temp = (Node*)malloc(sizeof(Node));
//	if (temp == NULL)
//	{
//		assert(0);
//		return;
//	}
//	temp->_number = number;
//	temp->_score = score;
//	temp->_next = NULL;
//
//	if (*list == NULL)
//	{
//		*list = temp;
//	}
//	else
//	{
//		cur = *list;
//		while (cur->_next != NULL)
//			cur = cur->_next;
//
//		cur->_next = temp;
//	}
//}
//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////void SortList(pList* list)
////{
////	assert(list);
//	//pList cur = *list;
//	//pList left = *list;
//	//pList temp = *list;
//	//pList right = (*list)->_next;
////
//	/*while (temp != NULL)
//	{
//		while (right != NULL)
//		{
//			if (left->_number > right->_number)
//				cur = left;
//			right = right->_next;
//		}
//		Swap(&cur->_number, &temp->_number);
//		Swap(&cur->_score, &temp->_score);
//
//		right = temp->_next;
//		temp = temp->_next;
//	}*/
////}
//
//void SortList(pList* list)
//{
//	assert(list);
//	pList cur = *list;
//	pList temp = *list;
//
//	while (temp != NULL)
//	{
//		cur = temp->_next;
//		while (cur != NULL)
//		{
//			if(temp->_number > cur->_number)
//			{
//				Swap(&cur->_number, &temp->_number);
//				Swap(&cur->_score, &temp->_score);
//			}
//			cur = cur->_next;
//		}
//		temp = temp->_next;
//	}
//}
//
//
//pList Merge2List(pList* list1, pList* list2)
//{
//	pList plist3;
//	pList temp = NULL;
//	assert(list1);
//	assert(list2);
//
//	SortList(list1);
//	SortList(list2);
//	InitList(&plist3);
//
//	while (*list1 != NULL && *list2 != NULL)
//	{
//		if ((*list1)->_number < (*list2)->_number)
//		{
//			PushBackList(&plist3, (*list1)->_number, (*list1)->_score);
//			(*list1) = (*list1)->_next;
//		}
//		else
//		{
//			PushBackList(&plist3, (*list2)->_number, (*list2)->_score);
//			(*list2) = (*list2)->_next;
//		}
//	}
//	temp = plist3;
//	while (temp->_next != NULL)
//		temp = temp->_next;
//
//	if (*list1 == NULL)
//		temp->_next = *list2;
//	if (*list2 == NULL)
//		temp->_next = *list1;
//
//	return plist3;
//}
//
//void PrintList(pList list)
//{
//	pList temp = list;
//	while (temp != NULL)
//	{
//		printf("%d %d\n", temp->_number, temp->_score);
//		temp = temp->_next;
//	}
//}
//
//int main()
//{
//	int n, m;
//	int number, score;
//	int i;
//	pList list1, list2;
//	pList plist3 = NULL;
//	InitList(&list1);
//	InitList(&list2);
//	scanf("%d %d", &n, &m);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d", &number, &score);
//		getchar();
//		PushBackList(&list1, number, score);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d %d", &number, &score);
//		getchar();
//		PushBackList(&list2, number, score);
//	}
//	plist3 = Merge2List(&list1, &list2);
//	PrintList(plist3);
//	return 0;
//}



#if 0

#include<stdio.h>
#include<malloc.h>
typedef struct student
{
	int a;
	int b;
	struct student *next;
} STU;

void change(STU *a, STU *b)
{
	a->next = b->next;
	b->next = a;
}
int main()
{
	int m, n;
	scanf("%d%d", &n, &m);
	int i, j, k, l;
	i = n;
	j = m;
	STU *q1, *q2, head1, head2, *p;
	q1 = &head1;
	q2 = &head2;
	while (i--)
	{
		p = (STU*)malloc(sizeof(STU));
		scanf("%d %d", &p->a, &p->b);
		q1->next = p;
		q1 = q1->next;
	}
	while (j--)
	{
		p = (STU*)malloc(sizeof(STU));
		scanf("%d %d", &p->a, &p->b);
		q2->next = p;
		q2 = q2->next;
	}
	q1->next = head2.next;
	STU *x, *y;
	for (x = head1.next; x != NULL; x = x->next)
		for (y = x; y != NULL; y = y->next)
			if (x->a > y->a)
			{
				int temp;
				temp = x->a;
				x->a = y->a;
				y->a = temp;
				temp = x->b;
				x->b = y->b;
				y->b = temp;
			}
	STU *g;
	g = head1.next;
	while (g != NULL)
	{
		printf("%d ", g->a);
		printf("%d\n", g->b);
		g = g->next;
	}
	return 0;
}

#endif


//#include<stdio.h>
//#include<malloc.h>
//#define NULL 0
//#define LEN sizeof(struct student)
//struct student
//{
//	long num;
//	float score;
//	struct student *next;
//};
//int n, sum = 0;
//struct student lista, listb;
//struct student *creat(void)
//{
//	struct student *head;
//	struct student *p1, *p2;
//	n = 0;
//	p1 = p2 = (struct student*)malloc(LEN);
//	printf("input number &scores of student:\n");
//	printf("if number is 0,stop inputing.\n");
//	scanf("%ld,%f", &p1->num, &p1->score);
//	head = NULL;
//	while (p1->num != 0)
//	{
//		n++;
//		if (n == 1)head = p1;
//		else p2->next = p1;
//		p2 = p1;
//		p1 = (struct student*)malloc(LEN);
//		scanf("%ld,%f", &p1->num, &p1->score);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//int print(struct student *head)
//{
//	struct student *p;
//	printf("\nNow ,These %d records are:\n", n);
//	p = head;
//	if (head != NULL)
//		do {
//			printf("%ld,%5.1f\n", p->num, p->score);
//			p = p->next;
//		} while (p != NULL);
//}
//
//struct student *insert(struct student *ah, struct student *bh)
//{
//	struct student *pa1, *pa2, *pb1, *pb2;
//	pa2 = pa1 = ah;
//	pb2 = pb1 = bh;
//
//	do
//	{
//		while ((pb1->num) > (pa1->num) && (pa1->next != NULL))
//		{
//			pa2 = pa1;
//			pa1 = pa1->next;
//		}
//		if ((pb1->num) <= (pa1->num))
//		{
//			if (ah == pa1)ah = pb1;
//			else
//				pa2->next = pb1;
//			pb1 = pb1->next;
//			pb2->next = pa1;
//			pa2 = pb2;
//			pb2 = pb1;
//
//		}
//	} while ((pa1->next != NULL) || (pa1 == NULL && pb1 != NULL));
//	if ((pb1 != NULL) && (pb1->num > pa1->num) && (pa1->next == NULL))
//		pa1->next = pb1;
//	return ah;
//}
//int main()
//{
//	struct student *ahead, *bhead, *abh;
//	long del_num;
//	printf("input list a:\n");
//	ahead = creat();
//	sum = sum + n;
//	printf("input list b:\n");
//	bhead = creat();
//	sum = sum + n;
//	abh = insert(ahead, bhead);
//	print(abh);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int b[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//int main() {
//	int y, m, d, sum, dd, ddd, num, i;
//	while (scanf("%d-%d-%d", &y, &m, &d) != EOF)
//	{
//		sum = dd = ddd = 0;
//		if (y >= 2013 && m >= 3 && d >= 9 || y > 2013)
//			break;
//		else
//		{
//			num = 0;
//			if (y == 2013)
//			{
//				for (i = 0; i < m; i++)
//					dd += a[i];
//				dd += d;
//				num = 68 - dd;
//				printf("%d\n", num);
//			}
//			else
//			{
//				num = 0;
//				for (i = 0; i < m; i++)
//				{
//					if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//					{
//						sum += b[i];
//						num = 366 - sum;
//					}
//					else
//					{
//						sum += a[i];
//						num = 365 - sum;
//					}
//				}
//				num -= d;
//				for (i = 2012; i > y; i--)
//				{
//					if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//						ddd += 366;
//					else
//						ddd += 365;
//				}
//				num += ddd + 68;
//				printf("%d\n", num);
//			}
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//char num[1100];
//int main()
//{
//	int len;
//	int i, j, sum;
//	while (scanf("%s", num) != EOF)
//	{
//		len = strlen(num);
//		sum = 0;
//		if (num[0] == '-')
//			j = 1;
//		else
//			j = 0;
//		for (i = j; i < len; i++)
//			sum += num[i] - '0';
//		if (j == 1)
//			printf("%d\n", sum*-1);
//		else
//			printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//
//int main()
//{
//	char a[101] = { 0 }, max;
//	int length, i;
//	while (gets(a))    //用于多次输入字符串
//	{
//		length = sizeof(a) / sizeof(a[0]);
//		max = a[0];
//		for (i = 0; i < length; i++)
//		{
//			if (max < a[i])
//			{
//				max = a[i];
//			}
//		}
//		for (int j = 0; j < length; j++)
//		{
//			printf("%c", a[j]);
//			if (max == a[j])
//			{
//				printf("%s", "(max)");
//				//cout << "(max)";
//			}
//		}
//		for (int h = 0; h < length; h++)
//			a[h] = 0;
//
//	}
//	return 0;
//}


//#include<stdio.h>
//
//#define SIZE 601
//void main()
//{
//	char str[SIZE];
//	char ch;
//	char *p = "(max)", *pstr, *qstr;
//	int i, tag;
//
//	while (scanf("%s", str) != EOF)
//	{
//		tag = 0;
//		i = 0;
//		ch = str[0];
//		while (str[i] != '\0')               //查找其中的最大元素，并且赋值给ch
//		{
//			if (ch < str[i])
//				ch = str[i];
//			i++;
//		}
//
//		pstr = str;                        //qstr和pstr都指向str的第一个元素
//		qstr = pstr;
//
//		while (*pstr != '\0')                //如果pstr还没有遍历str中所有的元素
//		{
//
//			i = 0;
//			while (p[i] != '\0')            //如果(max)还没全部插进去
//			{
//
//				while (*pstr != ch)           //如果pstr没有指向最大的元素
//				{
//					if (*pstr == '\0')
//					{
//						tag = 1;
//						break;
//					}
//					else
//						pstr++;
//				}
//				if (tag == 1)
//					break;
//				while (*qstr != '\0') qstr++;  //qstr指到末尾
//				while ((pstr + i) < qstr)
//				{
//					*(qstr + 1) = *qstr;
//					qstr--;             //pstr+i前面的元素都后移一个位置
//				}
//				*(pstr + 1 + i) = p[i++];    //多出来的一个位置插入p指向的字符
//			}
//			if (tag == 1)
//				break;
//			pstr += 6;                  //移动到下一个元素
//		}
//
//		printf("%s\n", str);         //输出结果
//
//	}
//}