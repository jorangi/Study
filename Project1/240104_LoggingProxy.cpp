////���Ͻø� ���� �α��� �߰��� �� �ִ�. 
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
//		cout << "���� ��ü �׼�" << endl;
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
//		cout << "�α�" << endl;
//		subject->action();
//		cout << "���Ͻ� ��ü �׼�" << endl;
//		cout << "�α�" << endl;
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy(new RealSubject());
//	sub->action();
//}