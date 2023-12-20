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
//		cout << "차타고 세계속으로" << endl;
//	}
//};
//class ForWalker : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "걸어서 세계속으로" << endl;
//	}
//};
//class ForPublicTransport : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "대중교통타고 세계속으로" << endl;
//	}
//};
//class ForBike : public NaviStrategy
//{
//public:
//	void move()
//	{
//		cout << "자전거로 세계속으로" << endl;
//	}
//};
//int main()
//{
//	Context* context = new Context();
//	context->SetStrategy(new ForCar());
//	context->move();
//}