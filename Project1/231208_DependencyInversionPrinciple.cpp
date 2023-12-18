//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Toy
//{
//public:
//	virtual string ToString() = 0;
//};
//class Robot : public Toy
//{
//public:
//	virtual string ToString() override
//	{
//		return "Robot";
//	}
//};
//class Lego : public Toy
//{
//	virtual string ToString() override
//	{
//		return "Lego";
//	}
//};
//class Kid
//{
//private:
//	Toy* toy;
//public:
//	void SetToy(Toy* t)
//	{
//		toy = t;
//	}
//	void Play()
//	{
//		cout << "The Kid plays " << toy->ToString() << "." << endl;
//	}
//};
//int main(void)
//{
//	Kid kid;
//	Toy* r = new Robot();
//	Toy* l = new Lego();
//	kid.SetToy(r);
//	kid.Play();
//	kid.SetToy(l);
//	kid.Play();
//}