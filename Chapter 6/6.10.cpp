#include<iostream>
#include<assert.h>
using namespace std;

void swap( int *p, int *q )
{
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;
}



int main()
{
	int a = 10;
	int b = 20;

	cout << "Before Swap" << endl;
	cout << "a = " << a << endl << "b = " << b << endl;

	swap( &a, &b );

	cout << "After Swap" << endl;
	cout << "a = " << a << endl << "b = " << b << endl;

	return 0;
}