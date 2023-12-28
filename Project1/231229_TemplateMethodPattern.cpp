//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Higher
//{
//public:
//	void print(int n)
//	{
//		cout << n << endl;
//	}
//	virtual int calc(int n1, int n2)=0;
//};
//class LowerA : public Higher
//{
//public:
//	virtual int calc(int n1, int n2) override
//	{
//		return n1 + n2;
//	}
//};
//class LowerB : public Higher
//{
//public:
//	virtual int calc(int n1, int n2) override
//	{
//		return n1 * n2;
//	}
//};
//int main()
//{
//	Higher* a = new LowerA();
//	a->print(a->calc(5, 4));
//	Higher* b = new LowerB();
//	b->print(b->calc(5, 4));
//}