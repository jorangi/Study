//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class NaviStrategy
//{
//public:
//	virtual void move() {};
//};
//class Context
//{
//private:
//	NaviStrategy* Strategy;
//public:
//	void SetStrategy(NaviStrategy* st)
//	{
//		this->Strategy = st;
//	}
//	void move()
//	{
//		this->Strategy->move();
//	}
//};
//class ForCar : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "��Ÿ�� ���������" << endl;
//	}
//};
//class ForWalker : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "�ɾ ���������" << endl;
//	}
//};
//class ForPublicTransport : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "���߱���Ÿ�� ���������" << endl;
//	}
//};
//class ForBike : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "�����ŷ� ���������" << endl;
//	}
//};
//int main()
//{
//	Context* context = new Context();
//	context->SetStrategy(new ForCar());
//	context->move();
//}