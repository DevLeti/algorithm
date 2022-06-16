#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int ehang = 1;
	for(int i = 0; i < k; i++)
	{
		ehang *= (n-i);
	}
	for(int i = k; i > 0; i--)
	{
		ehang /= i;
	}
	cout << ehang;
	return 0;
}