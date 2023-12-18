//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int fn()
//{
//	int static i = 1;
//	return i++;
//}
//int main(void)
//{
//	vector<int> v(5);
//	generate(v.begin(), v.end(), fn);
//	for (auto i : v)
//	{
//		cout << i << endl;
//	}
//	generate(v.begin(), v.end(), []() {return fn(); });
//
//	for (auto i : v)
//	{
//		cout << i << endl;
//	}
//}