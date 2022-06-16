#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testCaseNum;
	cin >> testCaseNum;

	int input;
	int max = -1000000;
	int min = 1000000;
	for(int i = 0; i < testCaseNum ; i++)
	{
		cin >> input;
		if(max < input)
		{
			max = input;
		}
		
		if(min > input)
		{
			min = input;
		}
	}
	
	cout << min << ' ' << max;
	return 0;
}