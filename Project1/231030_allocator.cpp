//#include <iostream>
//#include <cstring>
//#include <memory>
//
//using namespace std;
//
//int main(void)
//{
//	allocator<string> alloc;
//	const size_t size = 5;
//
//	auto begin = alloc.allocate(size);
//	auto end = begin + size;
//
//	//�Ҹ��ڰ� ���� ��� destroy(begin, end);
//
//	alloc.deallocate(begin, size);
//
//	return EXIT_SUCCESS;
//}