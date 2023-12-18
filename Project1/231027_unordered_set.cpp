//#include <unordered_set>
//#include <iostream>
//
//using namespace std;
//int main(void)
//{
//	unordered_set<int> uset = { 1, 2, 3};
//	for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i << " : " << uset.bucket_size(i) << endl;
//	}
//	uset.emplace(4);
//	uset.emplace(5);
//	uset.emplace(6);
//	uset.emplace(7);
//	uset.emplace(8);
//	uset.emplace(9);
//	for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i << " : " << uset.bucket_size(i) << endl;
//	}
//
//	/*cout << uset.max_bucket_count() << endl;
//	cout << uset.key_eq()("A", "A") << endl;*/
//	/*for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i << " : " << uset.bucket_size(i) << endl;
//	}
//	uset.reserve(9);
//
//	cout << endl;
//	for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i << " : " << uset.bucket_size(i) << endl;
//	}
//	cout << endl;
//	uset.rehash(127);
//	for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i << " : " << uset.bucket_size(i) << endl;
//	}*/
//	/*unordered_set<string> uset = {"Paris", "New York", "Tokyo", "Seoul", "London"};
//	unordered_set<string>::hasher hash = uset.hash_function();
//	cout << uset.bucket_count() << endl;
//	uset.rehash(9);
//	cout << endl;
//	cout << uset.bucket_count() << endl;
//	for (auto iter : uset)
//	{
//		cout << iter << endl;
//	}
//	uset.reserve(128);
//	for (auto iter : uset)
//	{
//		cout << iter << endl;
//	}*/
//	/*cout << "size : " << uset.size() << endl;
//	cout << "load_factor : " << uset.load_factor() << endl;
//	cout << "max_load_factor : " << uset.max_load_factor() << endl;
//	cout << "max_bucket_count : " << uset.bucket_count() << endl << endl;
//	
//	uset.max_load_factor(0.5);
//	cout << "set max_load_factor by 0.5" << endl << endl;
//	cout << "size : " << uset.size() << endl;
//	cout << "load_factor : " << uset.load_factor() << endl;
//	cout << "max_load_factor : " << uset.max_load_factor() << endl;
//	cout << "max_bucket_count : " << uset.bucket_count() << endl;*/
//
//	/*cout << uset.bucket_count() << endl;
//
//	for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket Size #" << i << " : "<< uset.bucket_size(i) << endl;
//	}
//
//	cout << uset.bucket("blue") << endl;*/
//	/*for (int i = 0; i < uset.bucket_count(); i++)
//	{
//		cout << "Bucket #" << i << " : "<< uset.bucket() << endl;
//	}*/
//	/*unordered_set<int>::hasher hash = uset.hash_function();
//	
//	cout << endl;
//
//	for (unordered_set<int>::iterator i = uset.equal_range(40).first; i != uset.end(); i++)
//	{
//		cout << "equal_range(20) #" << *i << " : " << endl;
//	}
//	uset.reserve(3);
//	cout << "reserve" << endl;
//	for (auto iter : uset)
//	{
//		cout << iter << endl;
//	}*/
//}