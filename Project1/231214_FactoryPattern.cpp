//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class ProductBase
//{
//private:
//	string GetTasty()
//	{
//		return tasty;
//	}
//protected:
//	void SetTasty(string t)
//	{
//		tasty = t;
//	}
//public:
//	string tasty;
//	virtual void Init()
//	{
//		cout << "Its tasty is " << GetTasty() << "!!" << endl;
//	}
//};
//class SpicyPotato : public ProductBase
//{
//public:
//	virtual void Init() override
//	{
//		SetTasty("¸Ê´Ù");
//		ProductBase::Init();
//	}
//};
//
//class SweetChocoCookie : public ProductBase
//{
//public:
//	virtual void Init() override
//	{
//		SetTasty("´Þ´Ù");
//		ProductBase::Init();
//	}
//};
//
//class FactoryBase
//{
//protected:
//	virtual ProductBase* createProduct()=0;
//public:
//	virtual ProductBase createOperation()
//	{
//		ProductBase* p = createProduct();
//		p->Init();
//		return *p;
//	}
//};
//
//class SpicyPotatoFactory : public FactoryBase
//{
//protected:
//	virtual ProductBase* createProduct() override
//	{
//		SpicyPotato* p = new SpicyPotato();
//		return p;
//	}
//};
//
//class SweetChocoCookieFactory : public FactoryBase
//{
//protected:
//	virtual ProductBase* createProduct() override
//	{
//		SweetChocoCookie* p = new SweetChocoCookie();
//		return p;
//	}
//};
//
//int main()
//{
//	FactoryBase* spicyFactory = new SpicyPotatoFactory();
//	FactoryBase* sweetFactory = new SweetChocoCookieFactory();
//	
//	ProductBase products[5];
//	products[0] = spicyFactory->createOperation();
//	products[1] = spicyFactory->createOperation();
//	products[2] = sweetFactory->createOperation();
//	products[3] = sweetFactory->createOperation();
//	products[4] = spicyFactory->createOperation();
//}