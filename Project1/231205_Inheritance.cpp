//#include <iostream>
//using namespace std;
//
//class Ave
//{
//protected:
//	const int wings = 2;
//public:
//	void Say()
//	{
//		cout << "�Ҹ��� ���� : ";
//	}
//	void Fly()
//	{
//		cout << "���� �ִ�." << endl;
//	}
//};
//class Sparrow : public Ave
//{
//public:
//	void Say()
//	{
//		Ave::Say();
//		cout << "±±" << endl;
//	}
//};
//class Penguin : public Ave
//{
//public:
//	void Say()
//	{
//		Ave::Say();
//		cout << "�Ͼ�" << endl;
//	}
//	void Fly()
//	{
//		return;
//	}
//};
//int main(void)
//{
//	Sparrow* sparrow = new Sparrow();
//	Penguin* penguin = new Penguin();
//
//	sparrow->Say();
//	sparrow->Fly();
//	penguin->Say();
//	penguin->Fly();
//}