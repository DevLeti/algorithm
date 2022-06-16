#include <bits/stdc++.h>

using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	int input_size;
	
	cin >> input_size;
	
	ll gen_hash = 0;
    ll m = 1234567891;
	ll r = 1;
	
	char input;
	for(int i = 0; i < input_size; i++)
	{
	    cin >> input;
	    gen_hash += (input - 'a' + 1) * r;
	    gen_hash %= m;
	    r *= 31;
	    r %= m;
	}
	
	cout << gen_hash;
	return 0;
}

//1984KB, 0ms