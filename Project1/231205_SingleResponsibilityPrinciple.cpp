//#include <iostream>
//using namespace std;

#pragma region with SRP
//class Mouse
//{
//public:
//	void OpenMouse()
//	{
//		cout << "���� ���ȴ�." << endl;
//	}
//	void CloseMouse()
//	{
//		cout << "���� �ݾҴ�." << endl;
//	}
//};
//class Nose
//{
//public:
//	void Breathe()
//	{
//		cout << "���� ����." << endl;
//	}
//	void HoldBreathe()
//	{
//		cout << "���� ���´�." << endl;
//	}
//};
//class Eyes
//{
//public:
//	void OpenEyes()
//	{
//		cout << "���� ����." << endl;
//	}
//	void CloseEyes()
//	{
//		cout << "���� ���Ҵ�." << endl;
//	}
//};
//class Head
//{
//public:
//	Eyes* eyes = new Eyes();
//	Nose* nose = new Nose();
//	Mouse* mouse = new Mouse();
//
//	void Headbanging()
//	{
//		cout << "�Ӹ��� ����" << endl;
//	}
//};
//class Arms
//{
//public:
//	void RaiseArms()
//	{
//		cout << "���� ���ø���." << endl;
//	}
//	void LowerArms()
//	{
//		cout << "���� ������." << endl;
//	}
//};
//class Legs
//{
//public:
//	void Stand()
//	{
//		cout << "������ ���ִ´�." << endl;
//	}
//	void Walk()
//	{
//		cout << "�ȴ´�." << endl;
//	}
//	void Run()
//	{
//		cout << "�ڴ�." << endl;
//	}
//};
//class Human
//{
//public:
//	Head* head = new Head();
//	Arms* arms = new Arms();
//	Legs* legs = new Legs();
//};
//int main(void)
//{
//	Human* human = new Human();
//	human->head->eyes->OpenEyes();
//	human->arms->RaiseArms();
//	human->legs->Run();
//}
#pragma endregion

#pragma region WithSRP
//class Human
//{
//public:
//
//	void OpenMouse()
//	{
//		cout << "���� ���ȴ�." << endl;
//	}
//	void CloseMouse()
//	{
//		cout << "���� �ݾҴ�." << endl;
//	}
//	void Breathe()
//	{
//		cout << "���� ����." << endl;
//	}
//	void HoldBreathe()
//	{
//		cout << "���� ���´�." << endl;
//	}
//	void OpenEyes()
//	{
//		cout << "���� ����." << endl;
//	}
//	void CloseEyes()
//	{
//		cout << "���� ���Ҵ�." << endl;
//	}
//	void Headbanging()
//	{
//		cout << "�Ӹ��� ����" << endl;
//	}
//	void RaiseArms()
//	{
//		cout << "���� ���ø���." << endl;
//	}
//	void LowerArms()
//	{
//		cout << "���� ������." << endl;
//	}
//	void Stand()
//	{
//		cout << "������ ���ִ´�." << endl;
//	}
//	void Walk()
//	{
//		cout << "�ȴ´�." << endl;
//	}
//	void Run()
//	{
//		cout << "�ڴ�." << endl;
//	}
//};
//int main(void)
//{
//	Human* human = new Human();
//	human->Breathe();
//	human->CloseEyes();
//}
#pragma endregion
