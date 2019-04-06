//已知三位整数x和y满足x + y = 1333，其中x的个位数是y的百位数，y的个位数是x的百位数，它们的十位数一样。求满足这样条件的x和y。
//
//输入 input
//输出 output
//419 + 914 = 1333
//......
//按X从小到大输出，每个等式一行
//
//#include<stdio.h>
//
//int main()
//{
//	int ge1, shi1, bai1, ge2, shi2, bai2;
//	for (int i = 100; i <= 999; i++)
//	{
//		ge1 = i % 10; shi1 = i / 10 % 10; bai1 = i / 100;
//		for (int j = 101; i <= 999; j++)
//		{
//			ge2 = j % 10; shi2 = j / 10 % 10; bai2 = j / 100;
//			if (i + j == 1333 && ge1 == bai2 && ge2 == bai1 && shi1 == shi2)
//			{
//				printf("%d + %d = 1333\n", i, j);
//			}
//		}
//	}
//}