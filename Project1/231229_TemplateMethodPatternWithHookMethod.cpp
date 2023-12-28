//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class CaffeinBeverage
//{
//public:
//	virtual void boilWater()
//	{
//		cout << "�� ���̱�" << endl;
//	}
//	virtual void addCondiments() = 0;
//	virtual bool customerWantsCondiments() { return false; }
//	virtual void brew() = 0;
//	virtual void pourInCup()
//	{
//		cout << "�ܿ� ������" << endl;
//	}
//	const void prepareRecipe() 
//	{
//		boilWater();
//		brew();
//		pourInCup();
//		if(customerWantsCondiments())
//			addCondiments();
//	}
//};
//class Coffee : public CaffeinBeverage
//{
//public:
//	virtual void brew() override
//	{
//		cout << "���͸� ���� Ŀ�� �������" << endl;
//	}
//	virtual bool customerWantsCondiments() override
//	{
//		string ans = "";
//		cout << "Ŀ�ǿ� ������ ������ �߰� (y/n) : ";
//		cin >> ans;
//		return (strcmp(ans.c_str(), "y") == 0);
//
//	}
//	virtual void addCondiments() override
//	{
//		cout << "������ ���� �߰�" << endl;
//	}
//};
//class Tea : public CaffeinBeverage
//{
//public:
//	virtual void addCondiments() override {};
//	virtual void brew() override
//	{
//		cout << "���� �츮��" << endl;
//	}
//};
//int main()
//{
//	CaffeinBeverage* coffee = new Coffee();
//	cout << "Ŀ�� ����� ��" << endl;
//	coffee->prepareRecipe();
//
//	cout << "--------------------------------------------------" << endl;
//	cout << "���� ����� ��" << endl;
//	CaffeinBeverage* tea = new Tea();
//	tea->prepareRecipe();
//}