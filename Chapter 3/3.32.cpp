#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i;
	}

	int b[10];
	for (int i = 0; i < 10; ++i)
	{
		b[i] = a[i];
	}

	vector<int>v1;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
	}

	vector<int>v2(v1);
	
	return 0;
}