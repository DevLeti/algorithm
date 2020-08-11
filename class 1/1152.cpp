#include <bits/stdc++.h>
using namespace std;

int word_count(string a);
int main()
{
	string input;
	getline(cin, input);
	
	while(input.find(" ") == 0)
	{
		input = input.substr(1,input.length()); //앞 공백 제거
	}
	
	int ans = word_count(input);
	cout << ans;
    
    return 0;
}

int word_count(string input)
{
	int count = 0;
	bool new_word_detected = true;
	for(int i = 0; i < input.length(); i++)
	{
		char input_char = input.at(i);
		if(input_char >= 65 && input_char <= 90) // upper
		{
			if(new_word_detected)
			{
				new_word_detected = false;
				count++;
			}
			else
			{
				continue;
			}
		}
		else if(input_char >= 97 && input_char <= 122) // lower
		{
			if(new_word_detected)
			{
				new_word_detected = false;
				count++;
			}
			else
			{
				continue;
			}
		}
		else if(input_char == 32) // space
		{
			new_word_detected = true;
		}
	}
	return count;
}