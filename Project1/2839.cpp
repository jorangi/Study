//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int f = n / 5;
//	int t = 0;
//	int result = 0;
//	do
//	{
//		t = (n - f * 5) / 3;
//		if (f * 5 + t * 3 == n)
//		{
//			result = f + t;
//			break;
//		}
//		else if(f > 0)
//		{
//			f--;
//		}
//		else
//		{
//			result = -1;
//			break;
//		}
//	} while (true);
//	cout << result;
//}