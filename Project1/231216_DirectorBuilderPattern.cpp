//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Data
//{
//private:
//	string name;
//	int age;
//
//public:
//	Data(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string getName()
//	{
//		return name;
//	}
//	int getAge()
//	{
//		return age;
//	}
//};
//class Builder
//{
//protected:
//	Data* data;
//public:
//	Builder(Data* data)
//	{
//		this->data = data;
//	}
//
//	virtual string head() { return ""; };
//	virtual string body() { return ""; };
//	virtual string foot() { return ""; };
//};
//class PlainTextBuilder : public Builder
//{
//public:
//	PlainTextBuilder(Data* data): Builder(data){}
//	virtual string head() override
//	{
//		return "";
//	}
//	virtual string body() override
//	{
//		string s = "Name : ";
//		s += data->getName();
//		s += ", Age : ";
//		
//		s += to_string(data->getAge());
//		return s;
//	}
//	virtual string foot() override
//	{
//		return "";
//	}
//};
//class JsonBuilder : public Builder
//{
//public:
//	JsonBuilder(Data* data) : Builder(data) {}
//	virtual string head() override
//	{
//		return "{\n";
//	}
//	virtual string body() override
//	{
//		string s = "\t\"Name\": ";
//		s += "\"" + data->getName() + "\", \n";
//		s += "\t\"Age\": ";
//		s += to_string(data->getAge());
//
//		return s;
//	}
//	virtual string foot() override
//	{
//		return "\n}";
//	}
//};
//class Director
//{
//private:
//	Builder* builder;
//public:
//	Director(Builder* builder)
//	{
//		this->builder = builder;
//	}
//	string build()
//	{
//		string s = builder->head();
//		s += builder->body();
//		s += builder->foot();
//
//		return s;
//	}
//};
//int main()
//{
//	Data* data = new Data("ȫ�浿", 23);
//	Builder* pBuilder = new PlainTextBuilder(data);
//	Director* director = new Director(pBuilder);
//	cout << director->build() << endl << endl;
//
//	Builder* jBuilder = new JsonBuilder(data);
//	director = new Director(jBuilder);
//	cout << director->build();
//}