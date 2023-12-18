//#include <iostream>
//using namespace std;

#pragma region with SRP
//class Mouse
//{
//public:
//	void OpenMouse()
//	{
//		cout << "ÀÔÀ» ¹ú·È´Ù." << endl;
//	}
//	void CloseMouse()
//	{
//		cout << "ÀÔÀ» ´Ý¾Ò´Ù." << endl;
//	}
//};
//class Nose
//{
//public:
//	void Breathe()
//	{
//		cout << "¼ûÀ» ½®´Ù." << endl;
//	}
//	void HoldBreathe()
//	{
//		cout << "¼ûÀ» Âü´Â´Ù." << endl;
//	}
//};
//class Eyes
//{
//public:
//	void OpenEyes()
//	{
//		cout << "´«À» ¶¹´Ù." << endl;
//	}
//	void CloseEyes()
//	{
//		cout << "´«À» °¨¾Ò´Ù." << endl;
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
//		cout << "¸Ó¸®¸¦ Èçµç´Ù" << endl;
//	}
//};
//class Arms
//{
//public:
//	void RaiseArms()
//	{
//		cout << "ÆÈÀ» µé¾î¿Ã¸°´Ù." << endl;
//	}
//	void LowerArms()
//	{
//		cout << "ÆÈÀ» ³»¸°´Ù." << endl;
//	}
//};
//class Legs
//{
//public:
//	void Stand()
//	{
//		cout << "°¡¸¸È÷ ¼­ÀÖ´Â´Ù." << endl;
//	}
//	void Walk()
//	{
//		cout << "°È´Â´Ù." << endl;
//	}
//	void Run()
//	{
//		cout << "¶Ú´Ù." << endl;
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
//		cout << "ÀÔÀ» ¹ú·È´Ù." << endl;
//	}
//	void CloseMouse()
//	{
//		cout << "ÀÔÀ» ´Ý¾Ò´Ù." << endl;
//	}
//	void Breathe()
//	{
//		cout << "¼ûÀ» ½®´Ù." << endl;
//	}
//	void HoldBreathe()
//	{
//		cout << "¼ûÀ» Âü´Â´Ù." << endl;
//	}
//	void OpenEyes()
//	{
//		cout << "´«À» ¶¹´Ù." << endl;
//	}
//	void CloseEyes()
//	{
//		cout << "´«À» °¨¾Ò´Ù." << endl;
//	}
//	void Headbanging()
//	{
//		cout << "¸Ó¸®¸¦ Èçµç´Ù" << endl;
//	}
//	void RaiseArms()
//	{
//		cout << "ÆÈÀ» µé¾î¿Ã¸°´Ù." << endl;
//	}
//	void LowerArms()
//	{
//		cout << "ÆÈÀ» ³»¸°´Ù." << endl;
//	}
//	void Stand()
//	{
//		cout << "°¡¸¸È÷ ¼­ÀÖ´Â´Ù." << endl;
//	}
//	void Walk()
//	{
//		cout << "°È´Â´Ù." << endl;
//	}
//	void Run()
//	{
//		cout << "¶Ú´Ù." << endl;
//	}
//};
//int main(void)
//{
//	Human* human = new Human();
//	human->Breathe();
//	human->CloseEyes();
//}
#pragma endregion
