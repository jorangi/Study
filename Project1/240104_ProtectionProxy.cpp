////���ٿ� ������ �ξ� Ư�� Ŭ���̾�Ʈ�� ������ ����ϰ� ���� �� �ִ�
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
//		cout << "���� ��ü �׼�" << endl;
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
//			cout << "���Ͻ� ��ü �׼�" << endl;
//		}
//		else
//		{
//			cout << "������ ����Ǿ����ϴ�." << endl;
//		}
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy(new RealSubject(), false);
//	sub->action();
//}