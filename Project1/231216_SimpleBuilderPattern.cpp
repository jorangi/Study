//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Hamburger
//{
//private:
//	string name = "Hamburger";
//	int Bun = 0;
//	int Patty = 0;
//	int Cheese = 0;
//	int Pickle = 0;
//	int Lettuce = 0;
//	int Tomato = 0;
//
//	Hamburger(string Name = "Hamburger", int bun = 2, int patty = 1, int cheese = 0, int pickle = 0, int lettuce = 0, int tomato = 0)
//	{
//		name = Name;
//		Bun = bun;
//		Patty = patty;
//		Cheese = cheese;
//		Pickle = pickle;
//		Lettuce = lettuce;
//		Tomato = tomato;
//	}
//
//public:
//	string ToString()
//	{
//		string s = name;
//		s += " Bun : ";
//		s += Bun + '0';
//		s += ", Patty : ";
//		s += Patty + '0';
//		s += ", Cheese : ";
//		s += Cheese + '0';
//		s += ", Pickle : ";
//		s += Pickle + '0';
//		s += ", Lettuce : ";
//		s += Lettuce + '0';
//		s += ", Tomato : ";
//		s += Tomato + '0';
//		return s;
//	}
//	static class Builder {
//	private:
//		string name;
//		int bun;
//		int patty;
//		int cheese;
//		int pickle;
//		int lettuce;
//		int tomato;
//
//	public:
//		Builder(string name)
//		{
//			this->name = name;
//			this->bun = 2;
//			this->patty = 1;
//		}
//		Builder* Name(string name)
//		{
//			this->name = name;
//			return this;
//		}
//		Builder* Bun(int bun)
//		{
//			this->bun = bun;
//			return this;
//		}
//		Builder* Patty(int patty)
//		{
//			this->patty = patty;
//			return this;
//		}
//		Builder* Cheese(int cheese)
//		{
//			this->cheese = cheese;
//			return this;
//		}
//		Builder* Pickle(int pickle)
//		{
//			this->pickle = pickle;
//			return this;
//		}
//		Builder* Lettuce(int lettuce)
//		{
//			this->lettuce = lettuce;
//			return this;
//		}
//		Builder* Tomato(int tomato)
//		{
//			this->tomato = tomato;
//			return this;
//		}
//
//		Hamburger* build()
//		{
//			Hamburger* result = new Hamburger(name, bun, patty, cheese, pickle, lettuce, tomato);
//			return result;
//		}
//	};
//};
//
//int main()
//{
//	Hamburger* TripplePattyCheeseBurger = (new Hamburger::Builder("TrippleCheeseBurger"))->
//		Patty(3)->
//		Cheese(3)->
//		Pickle(3)->
//		Lettuce(2)->
//		Tomato(2)->
//		build();
//
//	cout << TripplePattyCheeseBurger->ToString();
//}