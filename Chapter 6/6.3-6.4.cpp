#include<iostream>
#include<assert.h>
using namespace std;

long long int fact(long long int val)
{
	assert(val >= 0);
	int ans = 1;
	while (val > 1)
	{
		ans *= val;
		val--;
	}
	return ans;
}

int main()
{
	long long int num;
	cin >> num;
	cout << fact(num) << endl;
	cin.get();
	cin.get();
	return 0;
}