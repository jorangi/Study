////원본 객체가 무거운 대신 가끔 사용될 경우 사용하는 방법
////메모리상에 원본 객체를 유지하는 것이 낭비일 경우 사용한다.
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
//	virtual void action() override
//	{
//		if (subject == NULL)
//		{
//			subject = new RealSubject();
//		}
//		subject->action();
//		cout << "프록시 객체 액션" << endl;
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy();
//	sub->action();
//}