#include <bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	int max_num = 0;
	int max_pos = 0;
	for(int i = 0; i < 9; i ++)
	{
		cin >> input;
		if(max_num < input)
		{
			max_num = input; max_pos = i + 1;
		}
	}
	cout << max_num << endl << max_pos;
	return 0;
}