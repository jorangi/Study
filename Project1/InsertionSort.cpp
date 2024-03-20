//#include <iostream>
//#include<stdio.h>
//using namespace std;
//
//void InsertionSort(int arr[], int size)
//{
//	int j, key;
//	for (int i = 1; i < size; i++)
//	{
//		key = arr[i];
//
//		for (j = i - 1; j >= 0 && arr[j] > key; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = key;
//	}
//}
//int main()
//{
//	int arr[] = {3, 2, 9, 8, 1, 2, 4};
//	int size = sizeof(arr) / sizeof(int);
//	InsertionSort(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//}