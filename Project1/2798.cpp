//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int n, m;
//	int arr[100];
//	cin >> n >> m;
//	for (int  i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int max = -1;
//	for (int i = 0; i < n-2; i++)
//	{
//		for (int j = i+1; j < n - 1; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				int result = arr[i] + arr[j] + arr[k];
//				if (result <= m && result > max) max = result;
//			}
//		}
//	}
//	cout << max;
//}