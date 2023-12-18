//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	//W = true, B = false
//	int n, m;
//	bool chess[2][8][8];
//
//	bool temp = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			for (int k = 0; k < 8; k++)
//			{
//				chess[i][j][k] = temp;
//				temp = !temp;
//			}
//			temp = !temp;
//		}
//		temp = !temp;
//	}
//	bool board[50][50];
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			char c;
//			cin >> c;
//			board[i][j] = (c == 'W');
//		}
//	}
//	int cnt = 64;
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < n - 7; j++)
//		{
//			for (int k = 0; k < m - 7; k++)
//			{
//				int cnt2 = 0;
//
//				for (int y = 0; y < 8; y++)
//				{
//					for (int x = 0; x < 8; x++)
//					{
//						if (chess[i][y][x] != board[y+j][x+k])
//						{
//							cnt2++;
//						}
//					}
//				}
//				cnt = min(cnt, cnt2);
//			}
//		}
//	}
//	cout << cnt;
//}