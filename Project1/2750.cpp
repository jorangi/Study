//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int m[1000];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (m[i] > m[j])
//			{
//				int temp = m[i];
//				m[i] = m[j];
//				m[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << m[i] << endl;
//	}
//}