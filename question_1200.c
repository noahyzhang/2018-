
#define _CRT_SECURE_NO_WARNINGS 1
//设有n个人围坐一圈并按顺时针方向从1到n编号，从第1个人开始进行1到m的报数，报数到第个m人，
//此人出圈，再从他的下一个人重新开始1到m的报数，如此进行下去直到所剩下一人为止。
#include<stdio.h>
#include<stdlib.h>



//int cicle_out(int** p,int n,int m)
//{
//	int* temp = *p;
//	int i = 0;
//	int prev;
//	int cur;
//
//	while (1)
//	{
//		prev = *(temp + 1);
//		while (i / 3 == 0)
//		{
//			if (*temp == 0)
//				i++;
//			temp++;
//		}
//		if (*temp == prev && *temp == 0)
//			break;
//		*(temp + i) = 1;
//		if (i == n)
//			i = 0;
//	}
//	return prev;
//}
//
//int main()
//{
//	int n, m;
//	int win;
//	scanf("%d %d", &n, &m);
//	int* p = (int*)malloc(n*sizeof(int));
//	for (int i = 1; i <= n; i++)
//	{
//		*(p + i) = i;
//	}
//	win = cicle_out(&p, n, m);
//	printf("%d\n", win);
//	return 0;
//}
//
//typedef struct List
//{
//	int data;
//	struct List* next;
//}List;
//
//InitList(List** list)
//{
//	*list = NULL;
//}
//
//void PushList(List** list, int data)
//{
//	List* temp = NULL;
//	List* cur = NULL;
//	temp = (List*)malloc(sizeof(List));
//	temp->data = data;
//	temp->next = NULL;
//
//	if (*list == NULL)
//		*list = temp;
//	else
//	{
//		cur = *list;
//		while (cur->next != NULL)
//			cur = cur->next;
//		cur->next = temp;
//	}
//}
//
//
//void deletNode_2(List** list, List* d_node)
//{
//	List* temp = *list;
//	if (*list == d_node)
//	{
//		if ((*list)->next->next == d_node)
//		{
//			*list = d_node->next;
//			(*list)->next = *list;
//		}
//		else
//		{
//			List* p = temp;
//			while (p->next != *list)
//				p = p->next;
//			p->next = d_node->next;
//			*list = d_node->next;
//		}
//	}
//	else if ((*list)->next == d_node)
//	{
//		if ((*list)->next->next == *list)
//			(*list)->next = *list;
//		else
//			(*list)->next = d_node->next;
//	}
//	else
//	{
//		while (temp->next != d_node)
//			temp = temp->next;
//
//		temp->next = d_node->next;
//		
//	}
//	if ((*list)->next == (*list))
//		(*list)->next = NULL;
//	free(d_node);
//	d_node = NULL;
//
//}
//
//
//int main()
//{
//	int n,m;
//	List* list = NULL;
//	List* temp = NULL;
//	List* end = NULL;
//	List* cur = NULL;
//	List* ptemp = NULL;
//	int i = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{	
//		InitList(&list);
//
//		for (i = 1; i <= n; i++)
//			PushList(&list, i);
//
//		end = list;
//		while (end->next != NULL)
//			end = end->next;
//		end->next = list;
//
//		cur = list;
//		while (list->next != NULL)
//		{
//			i = 1;
//			temp = list;
//			while (i % m != 0)
//			{
//				temp = temp->next;
//				i++;
//			}
//			ptemp = temp->next;
//			deletNode_2(&list, temp);
//			list = ptemp;
//		}
//
//		printf("%d\n", list->data);
//	}
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0, m = 0;
//	int *arr = NULL;
//	int num = 0;
//	int count = 0;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		arr = (int*)malloc(n * sizeof(int));
//		for (int i = 0; i < n; i++)
//		{
//			arr[i] = i + 1;
//		}
//
//		num = n;
//		count = -1;
//		while (num > 1)
//		{
//			int i = 0;
//			while (i < m)
//			{
//				if (count == n - 1)
//					count = 0;
//				else
//					count++;
//				if (arr[count]) i++;
//			}
//			arr[count] = 0;
//			num--;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i])
//			{
//				printf("%d\n", arr[i]);
//				break;
//			}
//		}
//		free(arr);
//
//	}
//	system("pause");
//	return 0;
//}

