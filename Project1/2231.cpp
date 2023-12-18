//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main(void)
//{
//	int x;
//	cin >> x;
//	int arr[7];
//
//	for (int i = 0; i < x; i++)
//	{
//		int sum = x - i;
//		int y = i;
//		for (int j = 6; j > 0; j--)
//		{
//			arr[6 - j] = y / pow(10, j);
//			sum -= arr[6 - j];
//			y -= arr[6 - j] * pow(10, j);
//		}
//		arr[6] = y;
//		sum -= arr[6];
//
//		if (sum == 0)
//		{
//			cout << i;
//			return 0;
//		}
//	}
//	cout << 0;
//}