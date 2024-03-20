//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(const string& s1, const string& s2)
//{
//	if (s1.length() != s2.length())
//		return s1.length() < s2.length();
//	else
//		return s1 < s2;
//}
//int main(void)
//{
//	vector<string> s;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string _s;
//		cin >> _s;
//		s.push_back(_s);
//	}
//	sort(s.begin(), s.end(), compare);
//	s.erase(unique(s.begin(), s.end()), s.end());
//
//	for_each(s.begin(), s.end(), [](const string& s) {cout << s << endl; });
//}