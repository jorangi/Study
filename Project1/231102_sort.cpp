//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//template <typename T>
//bool compare(T a, T b)
//{
//	return a > b;
//};
//
//class student
//{
//public:
//	int score;
//	string name;
//	student(string n, int s)
//	{
//		score = s;
//		name = n;
//	};
//};
//int main(void)
//{
//	int arr[10] = { 3, 1, 5, 7, 2, 4, 9, 1, 6, 2 };
//	sort(arr, arr + 10, compare<int>);
//
//	for (auto i : arr)
//	{
//		cout << i << endl;
//	}
//
//	string s[5] = { "감나무", "배나무", "사과나무", "등나무", "너도밤나무" };
//	sort(s, s + 5);
//	sort(s, s + 5, compare<string>);
//	for (auto i : s)
//	{
//		cout << i << endl;
//	}
//}