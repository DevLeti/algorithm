#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int mult_abc;
	cin >> a >> b >> c;
	mult_abc = a*b*c;
	
	string mult = to_string(mult_abc);
	vector<int> used_count(10,0); // size = 10, define 0 each int
	
	int integer_pos;
	for(int i = 0; i < mult.length() ; i++)
	{
		integer_pos = (int) (mult.at(i) - '0');
		used_count[integer_pos] += 1;
	}
	
	for(int i = 0; i < used_count.size(); i++)
	{
		cout << used_count[i];
		if(i != used_count.size() - 1)
		{
			cout << endl;
		}
	}
}