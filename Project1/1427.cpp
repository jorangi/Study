//#include <iostream>
//#include <string>
//#define SWAP(x, y, temp) ((temp)=(x), (x)=(y), (y)=(temp))
//
//using namespace std;
//
//void QuickSort(int arr[], int left, int right)
//{
//	if (left >= right) 
//		return;
//	int temp;
//	int pivot = arr[(left + right) / 2];
//	int low = left, high = right;
//	while (low <= high)
//	{
//		while (arr[low] > pivot)
//		{
//			low++;
//		}
//		while (arr[high] < pivot)
//		{
//			high--;
//		}
//		if (low <= high)
//		{
//			SWAP(arr[low], arr[high], temp);
//			low++;
//			high--;
//		}
//	}
//	QuickSort(arr, low, right);
//	QuickSort(arr, left, high);
//}
//int main()
//{
//	int arr[10];
//	string s;
//	cin >> s;
//	int size = s.length();
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = s[i] - '0';
//	}
//	QuickSort(arr, 0, size - 1);
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//}