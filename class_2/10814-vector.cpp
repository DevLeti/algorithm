#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*cin, cout optimization*/
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; //member number, 1 <= n <= 100000
	cin >> n;
	
	int age;
	string name;
	vector<vector<string>>name_v(201); //index = age, 1<=age<=200, [0] is not used.
	bool vector_used[201] = {false};
	//input name
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		name_v[age].push_back(name);
	}
	
	//나이 중복시 이름은 가입순 = push_back한 순서이므로 sort 불필요.
	
	//output
	for(int i = 0; i < 201; i++)
	{
		if(vector_used[i])
			continue;
		else
		{
			for(auto elem : name_v[i])
			{
				cout << i << ' ' << elem << '\n';
			}
		}
	}
	
	return 0;
}
//6872KB, 32ms