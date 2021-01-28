#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; //number of people
	int k; //start point == first killed person
	
	
	cin >> n >> k;
	
	vector<bool>isKilled(5001 , false);
	
	int m = k; //kill Kth person
	int killed = 0;
	cout << '<';
	while(killed < n)
	{
		cout << k;
		isKilled[k] = true;
		killed += 1;
		for(int i = 0; i < m; i++)
		{
			if(k + 1 > n)
			{
				k -= n;
				k ++;
			}
			else
			{
				k ++;
			}
			
			if(isKilled[k] && killed != n)
			{
				i--;
			}
			
		}
		
		
		if(killed != n)
		{
			cout << ", ";
		}
	}
	cout << '>';
	return 0;
}

//1984KB, 468ms