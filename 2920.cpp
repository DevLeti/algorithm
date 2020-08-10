#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> melody(9, 0); // [0]은 안씀. 매칭하기 위해서.
	
	int input;
	for(int i = 1; i < 9; i++)
	{
		cin >> input;
		melody[i] = input;
	}
	
	//confirmation.
	//start with 1? ascending flag on.
	//start with 8? descending flag on.
	//else? MUST mixed.
	
	bool asc_flag = false;
	bool des_flag = false;
	switch(melody[1])
	{
		case 1:
			asc_flag = true;
			break;
		case 8:
			des_flag = true;
			break;
		default:
			cout << "mixed";
			return 0;
	}
	
	if(asc_flag)
	{
		for(int i = 1; i < 9; i++)
		{
			if(melody[i] != i)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "ascending";
		return 0;
	}
	
	else if(des_flag)
	{
		int j ;
		for(int i = 1; i < 9; i++)
		{
			j = 9 - i;
			if(melody[i] != j)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
		return 0;
	}
	
	return 0;
}