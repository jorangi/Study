//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Visitor
//{
//public:
//	void MedicalInsurance()
//	{
//		cout << "의료 보험을 판매하였습니다." << endl;
//	}
//	void BurglaryInsurance()
//	{
//		cout << "도난 보험을 판매하였습니다." << endl;
//	}
//	void FireAndFloodInsurance()
//	{
//		cout << "화재 및 홍수 보험을 판매하였습니다." << endl;
//	}
//};
//class Building
//{
//public:
//	virtual void accept(Visitor* v) = 0;
//};
//class House : public Building
//{
//public:
//	virtual void accept(Visitor* v)
//	{
//		v->MedicalInsurance();
//	}
//};
//class Bank : public Building
//{
//public:
//	virtual void accept(Visitor* v)
//	{
//		v->BurglaryInsurance();
//	}
//};
//class Cafe : public Building
//{
//public:
//	virtual void accept(Visitor* v)
//	{
//		v->FireAndFloodInsurance();
//	}
//};
//int main()
//{
//	Visitor* visitor = new Visitor();
//	Building* buildings[] = {new House(), new Bank(), new Cafe()};
//	for (auto building : buildings)
//	{
//		building->accept(visitor);
//	}
//}