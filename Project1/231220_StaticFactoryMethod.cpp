//#include <iostream>
//#include <random>
//#include <ctime>
//#include <string>
//#include <map>
//
//using namespace std;
//
////class Book
////{
////private:
////	string title;
////	Book(string s) { title = s; };
////public:
////	static Book* titleOf(string s)
////	{
////		return new Book(s);
////	}
////	string GetTitle()
////	{
////		return title;
////	}
////};
////int main()
////{
////	Book* littlePrince = Book::titleOf("LittlePrince");
////	cout << littlePrince->GetTitle() << endl;
////}
//
////class Lotto
////{
////private:
////	int LottoNumber[6];
////	Lotto()
////	{
////		srand((unsigned int)time(NULL));
////		for (int i = 0; i < 6; i++)
////		{
////			LottoNumber[i] = rand()%45+1;
////		}
////	}
////	Lotto(int nums[])
////	{
////		for (int i = 0; i < 6; i++)
////		{
////			LottoNumber[i] = nums[i];
////		}
////	}
////
////public:
////	static Lotto* LottoAuto()
////	{
////		return new Lotto();
////	}
////	static Lotto* LottoManual(int nums[])
////	{
////		return new Lotto(nums);
////	}
////};
////
////int main()
////{
////	Lotto* lottoAuto = Lotto::LottoAuto();
////	int manual[6] = {40, 20, 30, 10, 15, 18 };
////	Lotto* lottoManual = Lotto::LottoManual(manual);
////}
//
////class LottoNumber
////{
////private:
////	static const int MIN_NUM = 1;
////	static const int MAX_NUM = 45;
////	static map<int, LottoNumber*> lottoNumberCache;
////
////	static void InitializeCache()
////	{
////		for (int i = MIN_NUM; i < MAX_NUM; i++)
////		{
////			lottoNumberCache[i] = new LottoNumber(i);
////		}
////	}
////	int number;
////	LottoNumber(int number)
////	{
////		this->number = number;
////	}
////public:
////	static LottoNumber* of(int number)
////	{
////		if (lottoNumberCache.empty())
////		{
////			InitializeCache();
////		}
////		return lottoNumberCache[number];
////	}
////	int getNumber() const
////	{
////		return number;
////	}
////};
////map<int, LottoNumber*> LottoNumber::lottoNumberCache;
////int main()
////{
////	LottoNumber* number = LottoNumber::of(50);
////	cout << number->getNumber() << endl;
////}
//
////class Level;
////class Basic;
////class Intermediate;
////class Advanced;
////
////class Level
////{
////public:
////	static Level* of(int score);
////};
////class Basic : public Level
////{
////public:
////	Basic()
////	{
////		cout << "베이직" << endl;
////	}
////}; 
////class Intermediate : public Level
////{
////public:
////	Intermediate()
////	{
////		cout << "인터미디에이트" << endl;
////	}
////};
////class Advanced : public Level
////{
////public:
////	Advanced()
////	{
////		cout << "어드밴스드" << endl;
////	}
////};
////
////Level* Level::of(int score)
////{
////	if (score < 50)
////	{
////		return new Basic();
////	}
////	else if (score < 80)
////	{
////		return new Intermediate();
////	}
////	else
////	{
////		return new Advanced();
////	}
////}
////
////int main()
////{
////	Level* l = Level::of(70);
////}
//
//class Car
//{
//private:
//	string name;
//	int position;
//public:
//	string getName()
//	{
//		return name;
//	}
//	int getPosition()
//	{
//		return position;
//	}
//	Car(string name, int position)
//	{
//		this->name = name;
//		this->position = position;
//	}
//};
//class CarDTO
//{
//private:
//	string name;
//	int position;
//
//	CarDTO(string name, int position)
//	{
//		this->name = name;
//		this->position = position;
//	}
//public:
//	static CarDTO* from(Car car)
//	{
//		return new CarDTO(car.getName(), car.getPosition());
//	}
//	string getName()
//	{
//		return name;
//	}
//	int getPosition()
//	{
//		return position;
//	}
//	void Print()
//	{
//		cout << "Car : " << getName() << ", " << getPosition() << endl;
//	}
//};
//
//int main()
//{
//	Car* car = new Car("G80", 2);
//	CarDTO* carDTO = CarDTO::from(*car);
//	carDTO->Print();
//}