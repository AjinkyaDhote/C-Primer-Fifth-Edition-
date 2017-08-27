#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	string s1 = "How are you?";
	string s2 = "How are you?";
	string s3 = "I am fine";

	(s1 == s2) ? cout << "s1 and s2 are equal" << endl : cout << "s1 and s2 are not equal" << endl;

	(s1 == s3) ? cout << "s1 and s3 are equal" << endl : cout << "s1 and s3 are not equal" << endl;

	const char s4[] = { 'h','e','l','l','o','\0' };
	const char s5[] = { 'h','e','l','l','o','\0' };
	const char s6[] = { 'w','o','r','l','d' };

	if (strcmp(s4, s5) == 0)
		cout << "s4 and s5 are equal" << endl;
	else
		cout << "s4 and s5 are not equal" << endl;

	if (strcmp(s5, s6) == 0)
		cout << "s4 and s5 are equal" << endl;
	else
		cout << "s4 and s5 are not equal" << endl;

	cin.get();
	return 0;
}