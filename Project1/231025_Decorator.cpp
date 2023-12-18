//#include <iostream>
//
//using namespace std;
//
//class Human
//{
//public:
//	virtual void PutOn() { cout << "����Դϴ�." << endl; };
//};
//class ClothesDecorator :public Human
//{
//private:
//	Human* decoratedHuman;
//public:
//	ClothesDecorator(Human* decoratedHuman)
//	{
//		this->decoratedHuman = decoratedHuman;
//	}
//	virtual void PutOn() override { decoratedHuman->PutOn(); };
//};
//class Sweater :public ClothesDecorator
//{
//public:
//	Sweater(Human* decoratedHuman) : ClothesDecorator(decoratedHuman) {};
//
//	virtual void PutOn() override
//	{
//		ClothesDecorator::PutOn();
//		cout << "������ ����" << endl;
//	};
//};
//class Raincoat :public ClothesDecorator
//{
//public:
//	Raincoat(Human* decoratedHuman) : ClothesDecorator(decoratedHuman) {};
//
//	virtual void PutOn() override
//	{
//		ClothesDecorator::PutOn();
//		cout << "��� ����" << endl;
//	};
//};
//int main(void)
//{
//	Human* human = new Human();
//	human->PutOn();
//	cout << endl;
//	Human* sweater = new Sweater(human);
//	sweater->PutOn();
//	cout << endl;
//	Human* raincoat = new Raincoat(human);
//	raincoat->PutOn();
//	cout << endl;
//
//	Human* sweaterWithRaincoat = new Raincoat(new Sweater(human));
//	sweaterWithRaincoat->PutOn();
//}