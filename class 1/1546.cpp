#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin >> size;
	
	vector<double> score_v;
	int score;
	int max_score = 0;
	for(int i = 0; i < size ; i++)
	{
		cin >> score;
		score_v.push_back(score);
		
		max_score < score ? max_score = score : max_score = max_score;
	}
	
	double sum = 0;
	for(int i = 0; i < size; i ++)
	{
		score_v[i] = (score_v[i] / max_score) * 100;
		sum += score_v[i];
	}
	
	cout << sum / size;
	return 0;
}