//#include <iostream>
//using namespace std;
//
//class ISubject
//{
//public:
//	virtual void action()=0;
//};
//class RealSubject : public ISubject
//{
//public:
//	virtual void action() override
//	{
//		cout << "원본 객체 액션" << endl;
//	}
//};
//class Proxy : public ISubject
//{
//private:
//	RealSubject* subject;
//public:
//	Proxy(RealSubject* sub)
//	{
//		this->subject = sub;
//	}
//	virtual void action() override
//	{
//		subject->action();
//		cout << "프록시 객체 액션" << endl;
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy(new RealSubject());
//	sub->action();
//}