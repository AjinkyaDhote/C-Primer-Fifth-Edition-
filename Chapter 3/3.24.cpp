#include<iostream>
#include<vector>
#include<string>

using namespace std;
int b[10];
int main()
{

	int a[10];
	vector<int> v;
	int num;
	while(cin >> num)
	{
		v.push_back(num);
	}

	vector<int>::iterator it1;
	vector<int>::iterator it2;

	//Print the sum of each pair of adjacent elements
	for (it1 = v.begin(); it1 != v.end() - 1; ++it1)
	{
		cout << *it1 + *(it1 + 1) << " ";

	}
	cout << "\n" << "\n";
	

	//Print the sum of elements in pair considering first and last and so on
	for (it1 = v.begin(), it2 = v.end() - 1; it1 <= it2; it1++, it2--)
	{
		cout << (*it1 + *it2) << " ";
	}
	cout << "\n" << "\n";


	cin.get();
	cin.get();
	return 0;
}