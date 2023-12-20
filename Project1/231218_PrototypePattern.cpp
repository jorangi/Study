//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Employees
//{
//private:
//	vector<string> empList;
//
//public:
//	Employees() { LoadData(); };
//	Employees(vector<string> list)
//	{
//		this->empList = list;
//	}
//	void LoadData()
//	{
//		empList.push_back("Ann");
//		empList.push_back("David");
//		empList.push_back("John");
//		empList.push_back("Methew");
//	}
//	void AddData(string s)
//	{
//		empList.push_back(s);
//	}
//	Employees* clone()
//	{
//		vector<string> temp;
//		for_each(empList.begin(), empList.end(), [&temp](const string& s) {temp.push_back(s); });
//		return new Employees(temp);
//	}
//	string ToString()
//	{
//		string str;
//		for_each(empList.begin(), empList.end(), [&str](const string& s) {str += s; str += " "; });
//		return str;
//	}
//};
//
//int main()
//{
//	Employees* emp1 = new Employees();
//	Employees* emp2 = emp1->clone();
//	emp1->AddData("Eric");
//	cout << "emp1 : " << emp1->ToString() << endl;
//	cout << "emp2 : " << emp2->ToString() << endl;
//}