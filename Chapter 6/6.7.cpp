#include<iostream>
#include<assert.h>
using namespace std;


int count()
{
	static int num = 0;	
	return num++;
}


int main()
{
	for (int i = 0; i < 101; ++i)
	{
		cout << count() << " ";
	}

	cin.get();
	cin.get();
	return 0;
}