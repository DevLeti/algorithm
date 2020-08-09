#include <bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	int sum = 0;
	for(int i = 0; i < 5; i++)
	{
		cin >> input;
		sum += input*input;
	}
	int ans = sum % 10;
	cout << ans;
}