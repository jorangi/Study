//#include <iostream>
//#include <string>
//using namespace std;
//
//class Beverage
//{
//private:
//	string BeverageName;
//public:
//	Beverage(string name)
//	{
//		this->BeverageName = name;
//	}
//};
//class TV
//{
//public:
//	void TurnOn()
//	{
//		cout << "TV�� �״�." << endl;
//	}
//	void TurnOff()
//	{
//		cout << "TV�� ����." << endl;
//	}
//};
//class Movie
//{
//private:
//	string MovieName;
//public:
//	Movie(string name)
//	{
//		this->MovieName = name;
//	}
//	void WatchMovie()
//	{
//		cout << this->MovieName << "�� ��û�ߴ�." << endl;
//	}
//};
//class WatchMovieFacade
//{
//private:
//	Beverage* beverage;
//	TV* tv;
//	Movie* movie;
//public:
//	WatchMovieFacade(string bev, string movieName)
//	{
//		beverage = new Beverage(bev);
//		tv = new TV();
//		movie = new Movie(movieName);
//	}
//	void watch()
//	{
//		tv->TurnOn();
//		movie->WatchMovie();
//	}
//};
//int main()
//{
//	WatchMovieFacade* facade = new WatchMovieFacade("�ݶ�", "�ٸ� �ǿ��� ���ϼҼ�");
//	facade->watch();
//}