#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h; //hour
	int m; //minute
	
	cin >> h >> m;
	
	m -= 45; //minute - 45
	if(m < 0) //if minute goes minus
	{
		m += 60; // +45 to make original, +15 with hour - 1.
		h -= 1;
		if(h < 0)
		{
			h += 24; // if hour goes minus
		}
	}
	
	cout << h << " " << m;
	return 0;
}