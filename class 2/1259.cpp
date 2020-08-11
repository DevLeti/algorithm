#include <bits/stdc++.h>

using namespace std;

int main()
{
	int input;
	
	string input_s;
	bool result;
	while(true)
	{
		cin >> input;
		result = true;
		if(input == 0) // exit
			break;
		
		input_s = to_string(input);
		/*
		생각해보니 홀수, 짝수 상관없음.
		홀수는 가운데 수가 의미가 없기 때문(자기 자신이 대칭이므로)
		*/
		for(int i = 0; i < input_s.length(); i++)
		{
			if(input_s.at(i) == input_s.at(input_s.length() - 1 - i))
			{
				continue;
			}
			else
			{
				result = false;
				break;
			}
		}
		
		result ? cout << "yes" : cout << "no";
		cout << endl;
	}
	return 0;
}