#include <iostream>
using namespace std;

#pragma region withoutOCP
//enum animalType
//{
//	Lion,
//	Cat,
//	Dog
//};
//class Animal
//{
//public:
//	Animal(animalType type)
//	{
//		switch(type)
//		{
//		case Lion:
//			cout << "栏福贩" << endl;
//			break;
//		case Cat:
//			cout << "局克" << endl;
//			break;
//		case Dog:
//			cout << "港港" << endl;
//			break;
//		}
//	}
//};
//int main(void)
//{
//	Animal* lion = new Animal(Lion);
//	Animal* cat = new Animal(Cat);
//	Animal* dog = new Animal(Dog);
//}
#pragma endregion
#pragma region withOCP
//class Animal
//{
//public:
//	virtual void Say() = 0;
//};
//class Lion : Animal
//{
//public:
//	virtual void Say() { cout << "栏福贩" << endl; }
//};
//class Cat : Animal
//{
//public:
//	virtual void Say() { cout << "局克" << endl; }
//};
//class Dog : Animal
//{
//public:
//	virtual void Say() { cout << "港港" << endl; }
//};
//int main(void)
//{
//	Lion* lion = new Lion();
//	Cat* cat = new Cat();
//	Dog* dog = new Dog();
//	lion->Say();
//	cat->Say();
//	dog->Say();
//
//}
#pragma endregion