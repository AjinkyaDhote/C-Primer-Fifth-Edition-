#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> v;
	string word;
	vector<string>::iterator it;
	while (cin >> word)
	{
		v.push_back(word);
	}

	for (it = v.begin(); it != v.end() && !it->empty(); ++it)
	{
		for (auto &c : *it)
		{
			c = toupper(c);
		}
	}

	for (auto &elem : v)
	{
		if (elem.empty())
			cout << endl;
		else
			cout << elem << " ";
	}

	cin.get();
	cin.get();
	return 0;
}