#include<iostream>
#include<vector>

using namespace std;

bool CompareArrays(int a[], int b[],int asize, int bsize)
{	
	if (asize != bsize)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < asize; i++)
		{
			if (a[i] != b[i])
			{
				return false;
			}
		}		
	}

	return true;
}


int main()
{	
	int a[10];
	int b[10];

	vector<int> avec(10);
	vector<int> bvec(10);

	for (int i = 0; i < 10; ++i)
	{
		a[i] = i;
		b[i] = i;
		avec[i] = i;
		bvec[i] = i;
	}	

	int asize = sizeof(a) / sizeof(a[0]);
	int bsize = sizeof(b) / sizeof(b[0]);
	
	bool result = CompareArrays(a,b,asize,bsize);
	
	(result == true) ? cout << "Arrays are equal" << endl : cout << "Arrays are not equal" << endl;

	
	if (avec == bvec)
		cout << "Vectors are equal" << endl;
	else
		cout << "Vectors are not equal" << endl;
	
	cin.get();
	return 0;
}

//Note : We can use std::equal also for comparision of elements