#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> input_v;
	string input;
	while(getline(cin, input))
	{
		input_v.push_back(input);
	}
	
	int sum;
	int a, b;
	for (int i = 0; i < input_v.size() ; i++)
	{
		a = (int)input_v[i].at(0) - '0';
		b = (int)input_v[i].at(2) - '0';
		sum = a+b;
		cout << sum << endl;
	}
	
	return 0;
}