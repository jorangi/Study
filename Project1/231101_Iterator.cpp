#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

template<class InputIterator, class OutputIterator>

template
OutputIterator move(InputIterator first, InputIterator last, OutputIterator result)
{
	while (first != last)
	{
		*result = std::move(*first);
		++result;
		++first;
	}
	return result;
}