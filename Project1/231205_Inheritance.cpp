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
//		cout << "¼Ò¸®¸¦ ³½´Ù : ";
//	}
//	void Fly()
//	{
//		cout << "³¯°í ÀÖ´Ù." << endl;
//	}
//};
//class Sparrow : public Ave
//{
//public:
//	void Say()
//	{
//		Ave::Say();
//		cout << "Â±Â±" << endl;
//	}
//};
//class Penguin : public Ave
//{
//public:
//	void Say()
//	{
//		Ave::Say();
//		cout << "²Ï¾×" << endl;
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