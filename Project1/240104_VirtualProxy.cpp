////���� ��ü�� ���ſ� ��� ���� ���� ��� ����ϴ� ���
////�޸𸮻� ���� ��ü�� �����ϴ� ���� ������ ��� ����Ѵ�.
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
//public:
//	virtual void action() override
//	{
//		if (subject == NULL)
//		{
//			subject = new RealSubject();
//		}
//		subject->action();
//		cout << "���Ͻ� ��ü �׼�" << endl;
//	}
//};
//int main(void)
//{
//	ISubject* sub = new Proxy();
//	sub->action();
//}