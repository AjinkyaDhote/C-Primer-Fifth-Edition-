#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> v(10);
	vector<int>::iterator it;
	for (int i = 0; i != 10; ++i)
	{
		cin >> v[i];
	}

	for (auto it = v.begin(); it != v.end(); ++it)
	{
		
		(*it) = (*it) * 2;
	}

	for (auto &elem : v)
	{
		cout << elem << endl;
	}

	cin.get();
	cin.get();
	return 0;
}