#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> pos(26, -1);
	//index = alphabet. [0] = a, [1] = b... , pos = first displayed position
	
	string input;
	cin >> input;
	
	
	int displayed_position;
	int displayed_alphabet;
	int vector_pos;
	for(int i = 0; i < input.length(); i++)
	{
		displayed_position = i;
		displayed_alphabet = input.at(i);
		vector_pos = (int) displayed_alphabet - 'a';
		if(pos[vector_pos] == -1)
		{
			pos[vector_pos] = displayed_position;
		}
	}
	
	for(int i = 0; i < pos.size() ; i++)
	{
		cout << pos[i] << " ";
	}
	return 0;
}