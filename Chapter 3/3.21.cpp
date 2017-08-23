#include<iostream>
#include<vector>
#include<string>

using namespace std;

template <typename T>
void PrintSizeAndContents(const vector<T> v)
{
	cout << v.size() << "\n";
	vector<T>::iterator it;
	for (auto it = v.cbegin(); it != v.cend(); ++it)
	{
		cout << (*it);
	}
	cout << "\n";
	cout << "\n";
}

void PrintSizeAndContentsIntegerVector(const vector<int> v)
{
	cout << v.size() << "\n";
	vector<int>::iterator it;

	for (auto it = v.cbegin(); it != v.cend(); ++it)
	{
		cout << (*it);
	}
	cout << "\n";
	cout << "\n";
}

void PrintSizeAndContentsStringVector(const vector<string> v)
{
	cout << v.size() << "\n";
	vector<string>::iterator it;

	for (auto it = v.cbegin(); it != v.cend(); ++it)
	{
		cout << (*it);
	}
	cout << "\n";
	cout << "\n";
}

//int main()
//{
//	vector<int> v1;
//	PrintSizeAndContents(v1);
//
//	vector<int> v2(10);
//	PrintSizeAndContents(v2);
//
//	vector<int> v3(10, 42);
//	PrintSizeAndContents(v3);
//
//	vector<int> v4{ 10 };
//	PrintSizeAndContents(v4);
//
//	vector<int> v5{ 10,42 };
//	PrintSizeAndContents(v5);
//
//	vector<string> v6{ 10 };
//	PrintSizeAndContents(v6);
//
//	vector<string> v7 {10, "hi"};
//	PrintSizeAndContents(v7);
//
//	cin.get();
//
//	return 0;
//}