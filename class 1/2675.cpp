#include <bits/stdc++.h>

using namespace std;

int main()
{
	int case_count;
	cin >> case_count;
	
	int repeat_count;
	string repeat_string;
	for(int i = 0; i < case_count; i++)
	{
		cin >> repeat_count;
		cin >> repeat_string;
		
		for(int k = 0; k < repeat_string.length(); k++)
		{
			for(int j = 0; j < repeat_count; j++)
			{
				cout << repeat_string.at(k);
			}
		}
		cout << endl;
	}
	
	
	return 0;
}