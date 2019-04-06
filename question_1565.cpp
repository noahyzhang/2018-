#define _CRT_SECURE_NO_WARNINGS 1


//������һ��n*n�Ļʹ�������ռ��������λ�ü���Χ�Ĺ�9�����ӣ���Щ���ӻʺ���ʹ��
//����������������ı��ϣ�ռ�õĸ��ӿ��ܲ���9��������Ȼ���ʺ�Ҳ���ṥ��������
//
//����֪���˹�����λ�ã�x, y��������λ�ڵ�x�е�y�У�x, y����ʼ�к���Ϊ1����
//���ʣ��ж����ַ�������n���ʺ�ʹ���ǲ��ܻ��๥����
//#include<stdio.h>
//#include<stdlib.h>
//#define  MAXSIZE 13 //�����⣿
//
//int n, row, col, count;
//int map[MAXSIZE][MAXSIZE] = { 0 };
//
//void InitMap()
//{
//	int i, j;
//	for (i = row-1; i <= row+1; i++)
//	{
//		for (j = col - 1; j <= col + 1; j++)
//			map[i][j] = -1;
//	}
//	count = 0;
//}
//
//int judge(int x, int y)
//{
//	int i, j;
//	for (i = x - 1, j = y - 1; i >= 1 && j >= 1; i--, j--)  //�����������������Σ�գ��ұ߳������������
//	{
//		if (map[i][j] == 1)
//			return 0;
//	}
//
//	for (i = x - 1, j = y + 1; i >= 1 && j <= n; i--, j++)
//	{
//		if (map[i][j] == 1)
//			return 0;
//	}
//
//	for (i = x - 1, j = y; i >= 1; i--)
//	{
//		if (map[i][j] == 1)
//			return 0;
//	}
//	return 1;
//}
//
//void countScheme(int row)
//{
//	if (row > n)
//	{
//		count++;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (map[row][i] == -1)
//			continue;
//		if (judge(row, i) == 1)
//		{
//			map[row][i] = 1;
//			countScheme(row + 1);
//			map[row][i] = 0;
//		}
//		else
//			continue;
//	}
//}
//
//int main()
//{
//	scanf("%d %d %d", &n, &row, &col);
//	InitMap();
//	countScheme(1);
//	printf("%d\n", count);
//	system("pause");
//}

//#include<iostream>
//using namespace std;
//int n;
//int queenPos[11];
//int cnt = 0;
//int x, y;
//void NQueen(int k)
//{
//	if (k == n)
//	{
//		int flag = 1;
//		for (int i = 0; i < n; i++)
//		{
//			if (i >= x - 2 && i <= x && queenPos[i] >= y - 2 && queenPos[i] <= y) //����ڹ����������� 
//				flag = 0;
//		}
//		if (flag)
//			cnt++;
//		return;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int j;
//		for (j = 0; j < k; j++)
//		{
//			if (queenPos[j] == i || abs(queenPos[j] - i) == abs(k - j))
//				break;  //λ�ó�ͻ 
//		}
//		if (j == k)
//		{
//			queenPos[k] = i;
//			NQueen(k + 1);
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	cin >> x >> y;
//	NQueen(0);
//	cout << cnt;
//	return 0;
//}



//#include <stdio.h>
//#define INF 1<<30
//#define MAXSIZE 13
//
//int n, x, y, ans;
//int palace[MAXSIZE][MAXSIZE];
//
//void init()
//{
//	int i, j;
//
//	for (i = 0; i < MAXSIZE; i++){
//		for (j = 0; j < MAXSIZE; j++){
//			palace[i][j] = 0;
//		}
//	}
//
//	for (i = x - 1; i <= x + 1; i++){
//		for (j = y - 1; j <= y + 1; j++){
//			palace[i][j] = INF;
//		}
//	}
//
//	ans = 0;
//}
//
//int judge(int row, int col)
//{
//	int i, j;
//	for (i = row - 1, j = col - 1; i >= 1 && j >= 1; i--, j--){
//		if (palace[i][j] == 1){
//			return 0;
//		}
//	}
//	for (i = row - 1, j = col + 1; i >= 1 && j <= n; i--, j++){
//		if (palace[i][j] == 1){
//			return 0;
//		}
//	}
//	for (i = row - 1, j = col; i >= 1; i--){
//		if (palace[i][j] == 1){
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//void countScheme(int r)
//{
//	if (r > n){
//		ans++;
//		return;
//	}
//	int i;
//
//	for (i = 1; i <= n; i++){
//		if (palace[r][i] == INF){
//			continue;
//		}
//		if (judge(r, i)){
//			palace[r][i] = 1;
//			countScheme(r + 1);
//			palace[r][i] = 0;
//		}
//		else{
//			continue;
//		}
//
//	}
//}
//
//int main()
//{
//
//	scanf("%d%d%d", &n, &x, &y);
//
//	init();
//	countScheme(1);
//
//	printf("%d", ans);
//
//	return 0;
//}


//
//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//int n, x, y;
//int cnt = 0;
//
//bool issafe(vector<int> &pos, int row) {
//	for (int i = 0; i < row; i++) {
//		if (pos[i] == pos[row] || abs(pos[i] - pos[row]) == abs(i - row)) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void dfs(vector<int> &pos, int row) {
//	if (row == n) {
//		cnt++;
//		return;
//	}
//	for (pos[row] = 0; pos[row] < n; pos[row]++) {
//		if ((pos[row] == y - 2 || pos[row] == y - 1 || pos[row] == y) && (row == x - 2 || row == x - 1 || row == x))
//			continue;
//		if (issafe(pos, row)) {
//			dfs(pos, row + 1);
//		}
//	}
//}
//
//int main(){
//	cin >> n >> x >> y;
//	vector<int> pos(n);
//	dfs(pos, 0);
//	cout << cnt;
//	return 0;
//}


//#include<stdio.h>
//int map[20][20];
//struct Pos
//{
//	int yos;   //��ƫ����
//	int xos;   //��ƫ����
//};
//
//struct Pos pos[3] = { { -1, -1 }, { -1, 0 }, { -1, 1 } };
//
//void check_king_domain(int x, int y, int n)
//{
//	int i, j;
//	x--;
//	y--;
//	if (x == 0 && y == 0)
//	{
//		map[x + 1][y] = 1;
//		map[x + 1][y + 1] = 1;
//		map[x][y + 1] = 1;
//	}
//	else if (x == n - 1 && y == 0)
//	{
//		map[x - 1][y] = 1;
//		map[x - 1][y + 1] = 1;
//		map[x][y + 1] = 1;
//	}
//	else if (x == 0 && y == n - 1)
//	{
//		map[x][y - 1] = 1;
//		map[x + 1][y - 1] = 1;
//		map[x + 1][y] = 1;
//	}
//	else if (x == n - 1 && y == n - 1)
//	{
//		map[x - 1][y] = 1;
//		map[x - 1][y - 1] = 1;
//		map[x][y - 1] = 1;
//	}
//	else if (y == 0)
//	{
//		for (i = x - 1; i <= x + 1; i++)
//			map[i][y+1] = 1;
//		map[x - 1][y] = 1;
//		map[x + 1][y] = 1;
//	}
//	else if (y == n-1)
//	{
//		for (i = x - 1; i <= x + 1; i++)
//			map[i][y - 1] = 1;
//		map[x - 1][y] = 1;
//		map[x + 1][y] = 1;
//	}
//	else if (x == 0)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//			map[x+1][j] = 1;
//		map[x][y-1] = 1;
//		map[x][y+1] = 1;
//	}
//	else if (x == n-1)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//			map[x-1][j] = 1;
//		map[x][y-1] = 1;
//		map[x][y+1] = 1;
//	}
//	else
//	{
//		for (i = x - 1; i <= x + 1; i++)
//		{
//			for (j = y - 1; j <= y + 1; j++)
//				map[i][j] = 1;
//		}
//	}
//}
//
//
//int chech_empress_damain(int x, int y, int n)
//{
//	int ret = 1;
//	int nr, nc;
//	if (map[x][y] == 1)
//		return 0;
//	if (x == 0)
//		return 1;
//	for (int i = 0; i < 3 && ret; i++)
//	{
//		nr = x;
//		nc = y;
//		while (nr >= 0 && nc >= 0 )
//		{
//			if (map[nr][nc] == 2 || map[nr][nc] == 1)
//			{
//				ret = 0;
//				break;
//			}
//			nr = nr + pos[i].yos;
//			nc = nc + pos[i].xos;
//		}
//	}
//	return ret;
//}
//
//int count = 0;
//
//void Find(int row, int n)
//{
//	if (row == n)
//	{
//		count++;
//	}
//	else
//	{
//		for (int col = 0; col < n; col++)
//		{
//			if (chech_empress_damain(row, col, n))
//			{
//				map[row][col] = 2;
//				Find(row + 1, n);
//				map[row][col] = 0;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int n, x, y;
//	scanf("%d %d %d",&n, &x, &y);
//	check_king_domain(x, y, n);
//	Find(0,n);
//	printf("%d\n", count);
//	return 0;
//}