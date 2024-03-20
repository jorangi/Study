//#include <iostream>
//using namespace std;
//
//void MergeSort(int arr[], int left, int right)
//{
//    if (left >= right) return;
//    int mid = (left + right) / 2;
//    
//    MergeSort(arr, left, mid);
//    MergeSort(arr, mid + 1, right);
//    int i = left, j = mid + 1;
//    int k = 0;
//    int* merged = new int[right - left + 1];
//    while (i <= mid && j <= right)
//    {
//        if (arr[i] <= arr[j])
//        {
//            merged[k++] = arr[i++];
//        }
//        else
//        {
//            merged[k++] = arr[j++];
//        }
//    }
//    while (i <= mid)
//    {
//        merged[k++] = arr[i++];
//    }
//    while (j <= right)
//    {
//        merged[k++] = arr[j++];
//    }
//
//    for (int i = left; i <= right; i++) 
//    {
//        arr[i] = merged[i - left];
//    }
//}
//
//int main() {
//    int arr[] = { 3, 6, 1, 2, 7, 9, 8, 8, 4, 5 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    MergeSort(arr, 0, size - 1);
//    for (int i = 0; i < size; i++) {
//        cout << arr[i];
//    }
//    cout << endl;
//
//    return 0;
//}