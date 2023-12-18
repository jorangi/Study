//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	cout << "2사이즈 vector 3초기화 : ";
//	vector<int> v(2, 3);
//	cout << "{ ";
//	for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 3리사이즈 1초기화 : ";
//	v.resize(3, 1);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 4 삽입 : ";
//	v.push_back(4);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 1위치에 7삽입 : ";
//	v.insert(v.begin()+1, 7);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 뒤에서 하나 삭제 : ";
//	v.pop_back();
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 3위치 삭제 : ";
//	v.erase(v.begin() + 3);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl << endl;
//
//	cout << "v 전부 비우기" <<endl;
//	while (!v.empty())
//	{
//		v.pop_back();
//	}
//	cout << "v의 크기 : " << v.size() << ", v.empty() : " << v.empty() << endl;
//}