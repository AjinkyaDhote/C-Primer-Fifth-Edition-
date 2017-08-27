#include<iostream>
#include<string>

using namespace std;

int main()
{

	char s1[100];
	char s2[100];
	strcpy_s(s1, "Hello");
	strcpy_s(s2, "World");
		
	
	char s3[200];
	strcpy_s(s3, s1);	
	strcat_s(s3, 200, " ");
	strcat_s(s3, 200, s2);

	cout << s3;
	cin.get();
	return 0;
}