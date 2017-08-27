#include<iostream>

using namespace std;

int main()
{
	int a[5];

	for (int *b = begin(a), *e = end(a); b < e; b++)
	{
		*b = 0;
	}

	for (const auto &i : a)
	{
		cout << i << " ";
	}

	cin.get();
	return 0;
}