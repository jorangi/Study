//#include <iostream>
//#define _CRT_SECURE_NO_WARNINGS
//#define MAX_SIZE 1000001
//using namespace std;
//
//int arr[MAX_SIZE];	
//void Divide(int*, int, int);
//void MergeSort(int*, int, int);
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	int* a = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	Divide(a, 0, n - 1);
//	for (int i = 0; i < n; i++)
//		cout << a[i] << '\n';
//	return 0;
//}
//
//void Divide(int* a, int start, int end)
//{
//	if (start < end)
//	{
//		int mid = (start + end) / 2;
//		Divide(a, start, mid);
//		Divide(a, mid + 1, end);
//		MergeSort(a, start, end);
//	}
//}
//void MergeSort(int* a, int start, int end)
//{
//	int mid = (start + end) / 2;
//	int i = start, j = mid + 1, k = start;
//
//	while (i <= mid && j <= end)
//	{
//		if (a[i] < a[j])
//			arr[k++] = a[i++];
//		else
//			arr[k++] = a[j++];
//	}
//	while (i <= mid)
//		arr[k++] = a[i++];
//	while (j <= end)
//		arr[k++] = a[j++];
//
//	for (int i = start; i <= end; i++) a[i] = arr[i];
//}