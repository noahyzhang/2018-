#define _CRT_SECURE_NO_WARNINGS 1

//��M��С������԰�棬��Ʊ��1Ԫ������N��С������ǮΪ1Ԫ��K��С������ǮΪ2Ԫ����ƱԱû����Ǯ��
//����ЩС�����ж������Ŷӷ�����ʹ����ƱԱ�����ҵÿ���Ǯ��ע�⣺������һԪ��Ǯ��С����
//���ǵ�λ�û�����Ҳ����һ���µ��ŷ�����M<=10��
//1203
//����cantlan��

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int m, n, k, i, s = 1, t = 1, q = 1, t1 = 1, q1 = 1;
//	cin >> m >> n >> k;
//	for (i = 1; i <= m; i++)
//      s *= i;
//    for (i = 1; i <= n; i++)
//	   t *= i;
//  for (i = 1; i <= m - n; i++)
//	       q *= i;
// for (i = 1; i <= m - n - 1; i++)
//	        q1 *= i;
//  for (i = 1; i <= n + 1; i++)
//      t1 *= i;
//   cout << ((s / (q*t) - s / (q1*t1))*t*q) << endl;
//   return 0;
//	
//}


//1204
//��֪Ԫ�ش�С�������е���������x[]��y[]��
//��д��һ�����������������˴�֮���ľ���ֵ����С��һ�������������ľ���
//���� input
//��һ��Ϊ��������m, n(1��m, n��1000)���ֱ��������f[], g[]�ĳ��ȡ�
//�ڶ�����m��Ԫ�أ�Ϊ����f[]��
//��������n��Ԫ�أ�Ϊ����g[]��

//#include<iostream>
//using namespace std;
//
//int postive_1_2(int* m_f, int* n_g, int m, int n)
//{
//
//	int datum = 1002;
//	int count = m > n ? n : m;
//	int i = 0, j = 0;
//	int prev = 1002;
//	int result = 0;
//	while (i < count && j < count)
//	{
//		datum = n_g[j] - m_f[i];
//		if (datum == 0)
//			return datum;
//		if (abs(datum) < abs(prev))
//			result = abs(datum);
//		prev = datum;
//		if (datum > 0)
//			i++;
//		else
//			j++;
//	}
//	return result;
//}
////int negative_1_postive_2(int* m_f, int* n_g, int m, int n)
////{
////	
////}
////int postive_1_negative_2(int* m_f, int* n_g, int m, int n)
////{
////	
////}
////int negative_1_2(int* m_f, int* n_g, int m, int n)
////{
////	return 0;
////}
//
//
//int main()
//{
//	int m, n;
//	int i;
//	int t;
//	int distance;
//	int m_f[10001] = { 0 };
//	int n_g[10001] = { 0 };
//	cin >> m >> n;
//	if (m<1 || m>1000 || n<1 || n>1000)
//		return 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &t);
//		m_f[i] = t;
//		getchar();
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &t);
//		n_g[i] = t;
//		getchar();
//	}
//	//if (/*m_f[0] >= 0 && */n_g[0] >= 0)
//	//	distance = postive_1_2(m_f, n_g, m, n);
//	///*else if (m_f[0] < 0 && n_g[0] >= 0)
//	//	distance = negative_1_postive_2(m_f, n_g, m, n);*/
//	//else if (m_f[0] >= 0 && n_g[0] < 0)
//	//	distance = postive_1_negative_2(m_f, n_g, m, n);
//	//else if (m_f[0] < 0 && n_g[0] < 0)
//		distance = postive_1_2(m_f, n_g, m, n);
//	printf("%d\n", distance);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int postive_1_2(int* m_f, int* n_g, int m, int n)
//{
//	int i, j;
//	int datum;
//	int result = 999999;
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//		{
//			datum = n_g[j] - m_f[i];
//			if (datum == 0)
//				return datum;
//			if (abs(datum) < result)
//				result = abs(datum);
//		}
//	}
//	return result;
//}
//
//
//int main()
//{
//	int m, n;
//	int i;
//	int t;
//	int distance;
//	int m_f[10001] = { 0 };
//	int n_g[10001] = { 0 };
//	cin >> m >> n;
//	if (m<1 || m>1000 || n<1 || n>1000)
//		return 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &t);
//		m_f[i] = t;
//		getchar();
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &t);
//		n_g[i] = t;
//		getchar();
//	}
//	distance = postive_1_2(m_f, n_g, m, n);
//	printf("%d\n", distance);
//	return 0;
//}

