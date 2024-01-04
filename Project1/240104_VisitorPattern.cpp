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
//		cout << "�Ƿ� ������ �Ǹ��Ͽ����ϴ�." << endl;
//	}
//	void BurglaryInsurance()
//	{
//		cout << "���� ������ �Ǹ��Ͽ����ϴ�." << endl;
//	}
//	void FireAndFloodInsurance()
//	{
//		cout << "ȭ�� �� ȫ�� ������ �Ǹ��Ͽ����ϴ�." << endl;
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