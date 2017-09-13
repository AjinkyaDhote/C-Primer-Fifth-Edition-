#include<iostream>
#include<assert.h>
using namespace std;

double absvalue(double val)
{
	return abs(val);
}

int main()
{
	double num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << "Absolute Value " << abs(num) << endl;
	cin.get();
	cin.get();
	return 0;

}