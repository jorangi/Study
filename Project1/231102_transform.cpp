//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<iostream>
//
//using namespace std;
//
//int main(void)
//{
//	vector<string> str = { "����", "�ٶ�", "�ϴ�", "��", "����" };
//	transform(str.begin(), str.end(), str.begin(), [](string i) {
//		string out;
//		if (i == "�ϴ�") out = "SKY";
//		else out = i;
//		return out;
//	});
//
//	for (auto iter : str)
//	{
//		cout << iter << endl;
//	}
//}