#include <bits/stdc++.h>

using namespace std;

class member
{
public:
	int num;
	int age;
	string name;
	bool operator==(const member& rMem)
	{
		if(this->age == rMem.age && this->name == rMem.name)
			return true;
		
		return false;
	}
	bool operator>(const member& rMem) // a > b?
	{
		if(this->age > rMem.age)
			return true;
		else if (this->age == rMem.age)
		{
			!this->compare(rMem);
		}
		else //this->age < rMem.age
			return false;
	}
	bool operator<(const member& rMem)
	// age가 작거나, age가 같지만 가입 순서가 더 큰경우
	{
		if(this->age < rMem.age)
			return true;
		else if (this->age == rMem.age)
		{
			this->compare(rMem);
		}
		else
			return false;
	}
	bool compare(const member& b)
	{
		return this->num < b.num; // 가입 순서가 작아야 true
	}
};



int main()
{
	/*cin, cout optimization*/
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; //member number, 1 <= n <= 100000
	cin >> n;
	member name_arr[100001];
	
	member input;
	//input name
	int age;
	string name;
	unsigned short arr_s = 0; // array size
	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		
		input.age = age;
		input.name = name;
		input.num = i;
		
		name_arr[i] = input;
		arr_s++;
	}
	
	sort(name_arr, name_arr + arr_s);
	
	//output
	for(int i = 0; i < arr_s ; i++)
	{
		cout << name_arr[i].age << ' ' << name_arr[i].name << '\n';
	}
	
	return 0;
}
// 오류뜸. 로직 에러 있는듯