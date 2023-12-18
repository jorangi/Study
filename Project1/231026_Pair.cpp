//#include <iostream>
//#include <utility>
//
//using namespace std;
//
//int main(void)
//{
//	pair<int, double> p1;
//	p1.first = 4;
//	p1.second = 3;
//
//	cout << "p1의 first : " << p1.first << endl;
//	cout << "p1의 second : " << p1.second << endl;
//
//	cout << endl;
//
//	pair<int, string> p2 = make_pair(3, "가나다라마바사");
//
//	cout << "p2의 first : " << p2.first << endl;
//	cout << "p2의 second : " << p2.second << endl;
//
//	cout << endl;
//
//	pair<int, double> p3(p1);
//
//	p3.second = 4.3;
//	cout << "p3의 first : " << p3.first << endl;
//	cout << "p3의 second : " << p3.second << endl;
//
//	cout << endl;
//
//	cout << "p1과 p3의 대소 비교 : " << (p1 > p3 ? "p1이 더 크다." : "p3이 더 크다") << endl;
//
//	return 0;
//}