////프록시를 통해 로깅을 추가할 수 있다. 
//#include <iostream>
//using namespace std;
//
//class ISubject
//{
//public:
//	virtual void action() = 0;
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
//		cout << "로깅" << endl;
//		subject->action();
//		cout << "프록시 객체 액션" << endl;
//		cout << "로깅" << endl;
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy(new RealSubject());
//	sub->action();
//}