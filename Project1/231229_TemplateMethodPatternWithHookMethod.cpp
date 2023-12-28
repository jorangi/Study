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
//		cout << "물 끓이기" << endl;
//	}
//	virtual void addCondiments() = 0;
//	virtual bool customerWantsCondiments() { return false; }
//	virtual void brew() = 0;
//	virtual void pourInCup()
//	{
//		cout << "잔에 따르기" << endl;
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
//		cout << "필터를 통해 커피 우려내기" << endl;
//	}
//	virtual bool customerWantsCondiments() override
//	{
//		string ans = "";
//		cout << "커피에 우유와 설탕을 추가 (y/n) : ";
//		cin >> ans;
//		return (strcmp(ans.c_str(), "y") == 0);
//
//	}
//	virtual void addCondiments() override
//	{
//		cout << "설탕과 우유 추가" << endl;
//	}
//};
//class Tea : public CaffeinBeverage
//{
//public:
//	virtual void addCondiments() override {};
//	virtual void brew() override
//	{
//		cout << "차를 우리기" << endl;
//	}
//};
//int main()
//{
//	CaffeinBeverage* coffee = new Coffee();
//	cout << "커피 만드는 중" << endl;
//	coffee->prepareRecipe();
//
//	cout << "--------------------------------------------------" << endl;
//	cout << "차를 만드는 중" << endl;
//	CaffeinBeverage* tea = new Tea();
//	tea->prepareRecipe();
//}