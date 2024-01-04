////접근에 제한을 두어 특정 클라이언트만 접근을 허용하게 만들 수 있다
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
//	bool accese;
//public:
//	Proxy(RealSubject* sub, bool acc)
//	{
//		this->subject = sub;
//		this->accese = acc;
//	}
//	virtual void action() override
//	{
//		if (accese)
//		{
//			subject->action();
//			cout << "프록시 객체 액션" << endl;
//		}
//		else
//		{
//			cout << "접근이 불허되었습니다." << endl;
//		}
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy(new RealSubject(), false);
//	sub->action();
//}