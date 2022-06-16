#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> input_v;
	int input;
	for(int i = 0; i < 10 ; i ++)
	{
		cin >> input;
		input_v.push_back(input);
	}
	
	
	vector<bool> flag_mod(42, false); // [0] = 나머지 0, [1] = 나머지 1 ...
	//[41] = 나머지 41.
	
	int mod_pos;
	for(int i = 0 ; i < 10; i++)
	{
		mod_pos = input_v[i] % 42;
		flag_mod[mod_pos] = true;
	}
	
	int count_mod = 0;
	for(int i = 0; i < flag_mod.size(); i++)
	{
		if(flag_mod[i])
		{
			count_mod++;
		}
	}
	
	cout << count_mod;
	return 0;
}