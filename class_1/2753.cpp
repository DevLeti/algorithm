#include <bits/stdc++.h>

using namespace std;

int main()
{
	int y; // year
	cin >> y;
	
	if(y % 400 == 0)
	{
		cout << 1;
		return 0;
	}
	else
	{
		if(y % 4 == 0 && y % 100 != 0)
		{
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}