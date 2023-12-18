//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Hamburger
//{
//private:
//	int Bun = 0;
//	int Patty = 0;
//	int Tomato = 0;
//	int Lettuce = 0;
//	int Pickle = 0;
//
//public:
//	Hamburger(int b, int p, int t, int l, int pk)
//	{
//		Bun = b;
//		Patty = p;
//		Tomato = t;
//		Lettuce = l;
//		Pickle = pk;
//	}
//	string ToString()
//	{
//		string s = "Bun : ";
//		s += Bun + '0';
//		s += ", Patty : ";
//		s += Patty + '0';
//		s += ", Tomato : ";
//		s += Tomato + '0';
//		s += ", Lettuce : ";
//		s += Lettuce + '0';
//		s += ", Pickle : ";
//		s += Pickle + '0';
//
//		return s;
//	}
//};
//
//class HamburgerBuilder
//{
//private:
//	int bun = 0;
//	int patty = 0;
//	int tomato = 0;
//	int lettuce = 0;
//	int pickle = 0;
//
//public:
//	HamburgerBuilder* Bun(int i)
//	{
//		bun = i;
//		return this;
//	}
//	HamburgerBuilder* Patty(int i)
//	{
//		patty = i;
//		return this;
//	}
//	HamburgerBuilder* Tomato(int i)
//	{
//		tomato = i;
//		return this;
//	}
//	HamburgerBuilder* Lettuce(int i)
//	{
//		lettuce = i;
//		return this;
//	}
//	HamburgerBuilder* Pickle(int i)
//	{
//		pickle = i;
//		return this;
//	}
//
//	Hamburger* build()
//	{
//		return new Hamburger(bun, patty, tomato, lettuce, pickle);
//	}
//};
//
//int main()
//{
//	Hamburger* TripplePattyBurger = (new HamburgerBuilder())
//		->Bun(2)
//		->Lettuce(1)
//		->Patty(3)
//		->Pickle(4)
//		->Tomato(3)
//		->build();
//
//	cout << TripplePattyBurger->ToString();
//}