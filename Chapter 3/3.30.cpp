#include<iostream>
using namespace std;

int main()
{
	constexpr size_t array_size = 10;
	int ia[array_size];
	///Trying to index the out of range element. Also array index starts with 0
	//for (size_t ix = 1; ix <= array_size; ++ix) 
	//{
	//	ia[ix] = ix; 
	//}

	///Correct loop
	for (size_t ix = 0; ix < array_size; ++ix)
	{
		ia[ix] = ix;
	}

	return 0;
}