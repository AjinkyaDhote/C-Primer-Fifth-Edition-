#include<iostream>
using namespace std;

int main()
{
	const char ca[] = { 'h', 'e', 'l','l','o' };
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}

	cin.get();
	return 0;
}

//ca is not a null terminated string so when we assign cp to ca and try to 
//print the elements it points to it will go on incrementing in the memory
//till it finds a null character which is not what we want.
// To avoid this we have to add a null terminator while intializing ca