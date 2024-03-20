//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(const pair<int, string>& p1, const pair<int, string>& p2) {
//	return p1.first < p2.first;
//}
//int main(void)
//{
//	vector<pair<int, string>> s;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int age;
//		string name;
//		cin >> age >> name;
//		s.push_back({ age, name });
//	}
//	stable_sort(s.begin(), s.end(), compare);
//
//	for_each(s.begin(), s.end(), [](const pair<int, string>& s) {cout << s.first << ' ' << s.second << '\n'; });
//}