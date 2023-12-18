//#include<iostream>
//#include<string>
//using namespace std;
//
//#pragma region StupidTrying
////class ProductBase
////{
////public:
////	virtual void Init() {};
////};
////class ModernChair : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "����� ��������" << endl;
////	}
////};
////class ModernSofa : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "����� ��������" << endl;
////	}
////};
////class ModernCoffeTable : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "����� Ŀ�����̺�������" << endl;
////	}
////};
////class VictoriaChair : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "���丮�ƽ� ��������" << endl;
////	}
////};
////class VictoriaSofa : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "���丮�ƽ� ��������" << endl;
////	}
////};
////class VictoriaCoffeTable : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "���丮�ƽ� Ŀ�����̺�������" << endl;
////	}
////};
////class ArtDecoChair : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "�Ƹ����ڽ� ��������" << endl;
////	}
////};
////class ArtDecoSofa : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "�Ƹ����ڽ� ��������" << endl;
////	}
////};
////class ArtDecoCoffeTable : public ProductBase
////{
////public:
////	virtual void Init() override
////	{
////		cout << "�Ƹ����ڽ� Ŀ�����̺�����" << endl;
////	}
////};
////
////class FactoryBase
////{
////public:
////	virtual ProductBase createOperate()
////	{
////		ProductBase* p = createProduct();
////		p->Init();
////		return *p;
////	}
////protected:
////	virtual ProductBase* createProduct() = 0;
////};
////class ModernChairFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new ModernChair();
////	}
////};
////class ModernSofaFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new ModernSofa();
////	}
////};
////class ModernCoffeTableFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new ModernCoffeTable();
////	}
////};
////class VictoriaChairFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new VictoriaChair();
////	}
////};
////class VictoriaSofaFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new VictoriaSofa();
////	}
////};
////class VictoriaCoffeTableFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new VictoriaCoffeTable();
////	}
////};
////class ArtDecoChairFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new ArtDecoChair();
////	}
////};
////class ArtDecoSofaFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new ArtDecoSofa();
////	}
////};
////class ArtDecoCoffeTableFactory : public FactoryBase
////{
////protected:
////	virtual ProductBase* createProduct() override
////	{
////		return new ArtDecoCoffeTable();
////	}
////};
////int main(void)
////{
////	FactoryBase* modernChairF = new ModernChairFactory();
////	FactoryBase* modernSofaF = new ModernSofaFactory();
////	FactoryBase* modernCoffeTableF = new ModernCoffeTableFactory();
////	FactoryBase* victoriaChairF = new VictoriaChairFactory();
////	FactoryBase* victoriaSofaF = new VictoriaSofaFactory();
////	FactoryBase* victoriaCoffeTableF = new VictoriaCoffeTableFactory();
////	FactoryBase* artdecoChairF = new ArtDecoChairFactory();
////	FactoryBase* artdecoSofaF = new ArtDecoSofaFactory();
////	FactoryBase* artdecoCoffeTableF = new ArtDecoCoffeTableFactory();
////
////	modernChairF->createOperate();
////	modernSofaF->createOperate();
////	modernCoffeTableF->createOperate();
////	victoriaChairF->createOperate();
////	victoriaSofaF->createOperate();
////	victoriaCoffeTableF->createOperate();
////	artdecoChairF->createOperate();
////	artdecoSofaF->createOperate();
////	artdecoCoffeTableF->createOperate();
////}
//#pragma endregion
//
//#pragma region AbstractFactory
//class ProductBase
//{
//public:
//	virtual void Init() {};
//};
//class Chair : public ProductBase
//{
//public:
//	virtual void Init() override
//	{
//		cout << "��������" << endl;
//	};
//};
//class ModernChair : public Chair
//{
//public:
//	virtual void Init() override
//	{
//		cout << "���ǳ ";
//		Chair::Init();
//	};
//};
//class VictoriaChair : public Chair
//{
//public:
//	virtual void Init() override
//	{
//		cout << "���丮��ǳ ";
//		Chair::Init();
//	};
//};
//class ArtDecoChair : public Chair
//{
//public:
//	virtual void Init() override
//	{
//		cout << "�Ƹ�����ǳ ";
//		Chair::Init();
//	};
//};
//
//class Sofa : public ProductBase
//{
//public:
//	virtual void Init() override
//	{
//		cout << "��������" << endl;
//	};
//};
//class ModernSofa : public Sofa
//{
//public:
//	virtual void Init() override
//	{
//		cout << "���ǳ ";
//		Sofa::Init();
//	};
//};
//class VictoriaSofa : public Sofa
//{
//public:
//	virtual void Init() override
//	{
//		cout << "���丮��ǳ ";
//		Sofa::Init();
//	};
//};
//class ArtDecoSofa : public Sofa
//{
//public:
//	virtual void Init() override
//	{
//		cout << "�Ƹ�����ǳ ";
//		Sofa::Init();
//	};
//};
//
//class CoffeTable : public ProductBase
//{
//public:
//	virtual void Init() override
//	{
//		cout << "Ŀ�����̺�������" << endl;
//	};
//};
//class ModernCoffeTable : public CoffeTable
//{
//public:
//	virtual void Init() override
//	{
//		cout << "���ǳ ";
//		CoffeTable::Init();
//	};
//};
//class VictoriaCoffeTable : public CoffeTable
//{
//public:
//	virtual void Init() override
//	{
//		cout << "���丮��ǳ ";
//		CoffeTable::Init();
//	};
//};
//class ArtDecoCoffeTable : public CoffeTable
//{
//public:
//	virtual void Init() override
//	{
//		cout << "�Ƹ�����ǳ ";
//		CoffeTable::Init();
//	};
//};
//
//class FactoryBase
//{
//public:
//	virtual ProductBase OperateChair()
//	{
//		ProductBase* p = createChair();
//		p->Init();
//		return *p;
//	}
//	virtual ProductBase OperateSofa()
//	{
//		ProductBase* p = createSofa();
//		p->Init();
//		return *p;
//	}
//	virtual ProductBase OperateCoffeTable()
//	{
//		ProductBase* p = createCoffeTable();
//		p->Init();
//		return *p;
//	}
//protected:
//	virtual ProductBase* createChair() = 0;
//	virtual ProductBase* createSofa() = 0;
//	virtual ProductBase* createCoffeTable() = 0;
//};
//class ModernFactory : public FactoryBase
//{
//protected:
//	virtual ProductBase* createChair() override
//	{
//		return new ModernChair();
//	}
//	virtual ProductBase* createSofa() override
//	{
//		return new ModernSofa();
//	}
//	virtual ProductBase* createCoffeTable() override
//	{
//		return new ModernCoffeTable();
//	}
//};
//class VictoriaFactory : public FactoryBase
//{
//protected:
//	virtual ProductBase* createChair() override
//	{
//		return new VictoriaChair();
//	}
//	virtual ProductBase* createSofa() override
//	{
//		return new VictoriaSofa();
//	}
//	virtual ProductBase* createCoffeTable() override
//	{
//		return new VictoriaCoffeTable();
//	}
//};
//class ArtDecoFactory : public FactoryBase
//{
//protected:
//	virtual ProductBase* createChair() override
//	{
//		return new ArtDecoChair();
//	}
//	virtual ProductBase* createSofa() override
//	{
//		return new ArtDecoSofa();
//	}
//	virtual ProductBase* createCoffeTable() override
//	{
//		return new ArtDecoCoffeTable();
//	}
//};
//
//int main(void)
//{
//	FactoryBase* AbstractFactory = new ModernFactory();
//	string n;
//	bool checkCorrect = false;
//	cin >> n;
//	while (!checkCorrect)
//	{
//		try
//		{
//			if (n == "modern")
//			{
//				checkCorrect = true;
//				AbstractFactory = new ModernFactory();
//				break;
//			}
//			else if (n == "victoria")
//			{
//				checkCorrect = true;
//				AbstractFactory = new VictoriaFactory();
//				break;
//			}
//			else if (n == "artdeco")
//			{
//				checkCorrect = true;
//				AbstractFactory = new ArtDecoFactory();
//				break;
//			}
//			else
//				checkCorrect = false;
//		}
//		catch (...)
//		{
//			checkCorrect = false;
//		}
//		cin.clear();
//		cin >> n;
//	}
//
//	AbstractFactory->OperateChair();
//	AbstractFactory->OperateSofa();
//	AbstractFactory->OperateCoffeTable();
//}
//#pragma endregion