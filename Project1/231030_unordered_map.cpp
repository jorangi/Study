//#include <iostream>
//#include <unordered_map>
//#include <cstring>
//
//using namespace std;
//
//int main(void)
//{
//	unordered_map<int, string> umap = { {0, "�ȳ�"}, {1, "�ϼ���"}, {2, "����"}};
//	umap.at(2) = "�ݰ�";
//	umap[3] = "���ϴ�";
//	for (int i = 0; i < umap.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i  << " : " << umap.bucket_size(i) << endl;
//	}
//	cout << "key 0�� " << umap.bucket(0) << "�� �ֽ��ϴ�."<<endl<<endl;
//
//	auto p = umap.equal_range(2);
//	cout << "first-key : " << p.first->first << " / first-value : " << p.first->second <<endl;
//	cout << "second-key : " << p.second->first << " / second-value : " << p.second->second << endl;
//
//	cout << endl;
//	cout<<"find 1 = " << umap.find(1)->first << " : " << umap.find(1)->second << endl;
//	umap.erase(2);
//	for (auto iter : umap)
//	{
//		cout << iter.first << " : " << iter.second << endl;
//	}
//}