//#include<vector>
//#include<algorithm>
//#include<cstring>
//#include<iostream>
//
//using namespace std;
//
//int main(void)
//{
//	vector<string> str = { "±¸¸§", "¹Ù¶÷", "ÇÏ´Ã", "¶¥", "³ª¹«" };
//	transform(str.begin(), str.end(), str.begin(), [](string i) {
//		string out;
//		if (i == "ÇÏ´Ã") out = "SKY";
//		else out = i;
//		return out;
//	});
//
//	for (auto iter : str)
//	{
//		cout << iter << endl;
//	}
//}