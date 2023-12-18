//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int posX[15];
//int result = 0;
//int result2 = 0;
//
//int n;
//int board[15];
//
//void PlaceTheQueen(int n, int y, int arr[])
//{
//	if (n == 1)
//		result++;
//
//	for (int i = 0; i < n; i++)
//	{
//		bool skip = false;
//		arr[y] = i;
//
//		for (int j = 0; j < y; j++)
//		{
//			if (i == arr[j] || abs(arr[j] - i) == abs(j - y))
//			{
//				skip = true;
//				break;
//			}
//		}
//		if (skip) continue;
//		if (y < n - 1) PlaceTheQueen(n, y + 1, arr);
//		else result++;
//	}
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	
//	for (int x = 0; x < n; x++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			posX[i] = -1;
//		}
//		posX[0] = x;
//		PlaceTheQueen(n, 1, posX);
//	}
//	cout << result;
//}