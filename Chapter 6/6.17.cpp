#include<iostream>
#include<string>
using namespace std;

//This function just checks each character but does not
//operate on the original string so a const is passed.
bool ContainsCapital( const string &s ) 
{
	for ( auto &c : s )
	{
		if ( isupper( c ) )
		{
			return true;
		}		
	}

	return false;
}

//This function makes changes to the original string 
//due to which it does not take in constant parameter.
void ToLower( string &s )
{
	for ( auto &c : s )
	{
		c = tolower( c );
	}
}


int main()
{
	string temp = "Hello World";	

	if ( ContainsCapital( temp ) )
	{
		cout << temp << " ";
		cout << "String contains capital Letters." << endl;		
	}
	else
	{
		cout << temp << " ";
		cout << "String does not contain capital Letters." << endl;
	}

	ToLower( temp );
	
	if ( ContainsCapital( temp ) )
	{
		cout << temp << " ";
		cout << "String contains capital Letters" << endl;
	}
	else
	{
		cout << temp << " ";
		cout << "String does not contain capital Letters." << endl;
	}

	cin.get();
	return 0;
}