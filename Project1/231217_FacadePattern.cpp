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
//		cout << "TV를 켰다." << endl;
//	}
//	void TurnOff()
//	{
//		cout << "TV를 껐다." << endl;
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
//		cout << this->MovieName << "을 시청했다." << endl;
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
//	WatchMovieFacade* facade = new WatchMovieFacade("콜라", "다만 악에서 구하소서");
//	facade->watch();
//}