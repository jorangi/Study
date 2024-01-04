//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Visitor
//{
//public:
//	void doForCity()
//	{
//		cout << "���� ��带 XML�� ��ȯ�ϴ� �ڵ�" << endl;
//	}
//	void doForIndustry()
//	{
//		cout << "��� ��带 XML�� ��ȯ�ϴ� �ڵ�" << endl;
//	}
//};
//class Node
//{
//public:
//	virtual void accept(Visitor* v) = 0;
//};
//class City : public Node
//{
//public:
//	virtual void accept(Visitor* v) override
//	{
//		v->doForCity();
//	}
//};
//class Industry : public Node
//{
//public:
//	virtual void accept(Visitor* v) override
//	{
//		v->doForIndustry();
//	}
//};
//int main()
//{
//	Visitor* visitor = new Visitor();
//	Node* nodes[2] = {new City(), new Industry()};
//	for (auto iter : nodes)
//	{
//		iter->accept(visitor);
//	}
//}