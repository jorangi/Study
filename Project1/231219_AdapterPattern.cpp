//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//#pragma region xmljson
////using namespace std;
////
////class XMLData
////{
////private:
////	string data;
////public:
////	XMLData(map<string, string> data[])
////	{
////		string s;
////
////		for (int i = 0; i < data->size(); i++)
////		{
////			s += "<data>\n";
////			for_each(data[i].begin(), data[i].end(), [&s](pair<string, string> m) {
////				s += "\t<";
////				s += m.first;
////				s += ">";
////				s += m.second;
////				s += "</";
////				s += m.first;
////				s += ">";
////				s += '\n';
////				});
////			s += '\n';
////			s += "</data>";
////			s += '\n';
////
////		}
////		this->data = s;
////	}
////	string ToString()
////	{
////		return this->data;
////	}
////};
////class JsonData
////{
////private:
////	string data;
////public:
////	JsonData(map<string, string> data[])
////	{
////		string s;
////		s += "{\"data\":[\n";
////
////		for (int i = 0; i < data->size(); i++)
////		{
////			auto& d = data[i];
////			s += " { ";
////			for_each(data[i].begin(), data[i].end(), [&s, d](pair<string, string> m) {
////				s += " \"";
////				s += m.first;
////				s += "\":\"";
////				s += m.second;
////				s += "\"";
////				s += ",";
////				});
////			
////			if (i == data->size()-1) s += " }\n";
////			else s += " },\n";
////		}
////		s += "]}";
////		this->data = s;
////	}
////	string ToString()
////	{
////		return this->data;
////	}
////};
////
////int main()
////{
////	map<string, string> data[3] =
////	{
////		{{"이름", "유비"}, {"소속", "촉나라"}, {"무기", "쌍검"}},
////		{{"이름", "관우"}, {"소속", "촉나라"}, {"무기", "청룡언월도"}},
////		{{"이름", "장비"}, {"소속", "촉나라"}, {"무기", "장팔사모"}}
////	};
////	XMLData* xmlData = new XMLData(data);
////	JsonData* jsonData = new JsonData(data);
////
////	cout << xmlData->ToString() << endl;
////	cout << jsonData->ToString() << endl;
////}
//#pragma endregion
//
//class A
//{
//public:
//	virtual void doSomething(){}
//};
//class B
//{
//public:
//	int i;
//	B(int i)
//	{
//		this->i = i;
//	}
//	void Run() { cout << i << endl; }
//};
//class AtoB : A
//{
//private: 
//	B* b = NULL;
//public:
//	AtoB(B* b)
//	{
//		this->b = b;
//	}
//	virtual void doSomething() override { b->Run(); }
//};
//
//int main()
//{
//	B* b = new B(10);
//	AtoB* atb = new AtoB(b);
//	atb->doSomething();
//}