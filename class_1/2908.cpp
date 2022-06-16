#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	string b;
	
	cin >> a >> b;
	
	reverse(begin(a), end(a));
	reverse(begin(b), end(b));
	int rev_a = stoi(a);
	int rev_b = stoi(b);
	
	rev_a < rev_b ? cout << rev_b : cout << rev_a;
	
	return 0;
}