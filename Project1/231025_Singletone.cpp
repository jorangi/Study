//#include <iostream>
//using namespace std;
//
//static class GameManager
//{
//private:
//	GameManager() {}
//	GameManager(const GameManager& ref) = delete;
//	GameManager& operator=(const GameManager& ref) = delete;
//public:
//	static GameManager& Inst()
//	{
//		static GameManager Inst;
//		return Inst;
//	}
//	int AnyNumber = 23;
//	void SayHello()
//	{
//		cout << "¾È³çÇÏ¼¼¿ä!!" << endl;
//	}
//};
//void TestSingleton(void)
//{
//	cout << GameManager::Inst().AnyNumber << endl;
//}
//class Test
//{
//public:
//	Test(int val)
//	{
//		GameManager::Inst().AnyNumber = val;
//	}
//};
//int main(void)
//{
//	TestSingleton();
//	GameManager::Inst().SayHello();
//	Test* t = new Test(10);
//	TestSingleton();
//}