#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testCaseNum;
	cin >> testCaseNum;
	
	int add_score = 0;
	int score_sum = 0;
	string OX;
	for (int i = 0 ; i < testCaseNum; i++)
	{
		cin >> OX;
		for(int j = 0; j < OX.length(); j++)
		{
			if(OX.at(j) == 'O')
			{
				add_score++;
				score_sum += add_score;
			}
			else
			{
				add_score = 0;
			}
		}
		cout << score_sum << endl;
		score_sum = 0;
		add_score = 0;
	}
	return 0;
}