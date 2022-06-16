#include <bits/stdc++.h>

using namespace std;

int main()
{
	string input;
	cin >> input;

	//convert lower to upper letter	
	for (int i = 0 ; i < input.length() ; i++)
	{
		if((int) input[i] > 91)
		{
			input[i] = (char)((int)input[i] - 32);
		}
	}

	//alphabet used count vector
	vector<int> alphabet_used(128, 0);
	
	//count +
	for (int i = 0; i < input.length() ; i++)
	{
		alphabet_used[(int)input[i]] += 1;
	}

	//check max_count
	int max_count = -1;
	int max_index = -1;

	bool same_flag = false;
	for (int i = 0; i < alphabet_used.size(); i++)
	{
		if(max_count < alphabet_used[i])
		{
			max_count = alphabet_used[i];
			max_index = i;
			same_flag = false;
		}

		else if (max_count == alphabet_used[i] && alphabet_used[i] != 0)
		{
			same_flag = true;
		}
	}
	
	//print
	if(same_flag)
	{
		cout << '?';
	}
	else
	{
		cout << (char) max_index;
	}

	return 0;
}
