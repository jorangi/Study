//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	cout << "2������ vector 3�ʱ�ȭ : ";
//	vector<int> v(2, 3);
//	cout << "{ ";
//	for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 3�������� 1�ʱ�ȭ : ";
//	v.resize(3, 1);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 4 ���� : ";
//	v.push_back(4);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 1��ġ�� 7���� : ";
//	v.insert(v.begin()+1, 7);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector �ڿ��� �ϳ� ���� : ";
//	v.pop_back();
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl;
//
//	cout << endl << "vector 3��ġ ���� : ";
//	v.erase(v.begin() + 3);
//	cout << "{ ";
//	for (int iter : v)
//	{
//		cout << iter << " ";
//	}
//	cout << "}" << endl << endl;
//
//	cout << "v ���� ����" <<endl;
//	while (!v.empty())
//	{
//		v.pop_back();
//	}
//	cout << "v�� ũ�� : " << v.size() << ", v.empty() : " << v.empty() << endl;
//}