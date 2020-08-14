#include <bits/stdc++.h>
#define MAXSIZE 10000

using namespace std;

//함수 선언
void push(int input, int s[], int& sSize);
void pop(int s[], int& sSize);
void size(int sSize);
void empty(int sSize);
void top(int s[], int sSize);

int main()
{
	int n; //command number
	cin >> n;
	
	//stack, stack size
	int s[MAXSIZE];
	int sSize = 0;
	
	int completedN = 0; // completed command number
	string cmd; //input command
	int add_n; //input number for command "push"
	
	while(completedN < n)
	{
		cin >> cmd;
		if(cmd == "push")
		{
			cin >> add_n;
			push(add_n, s, sSize);
		}
		else if(cmd == "pop")
		{
			pop(s, sSize);
		}
		else if(cmd == "size")
		{
			size(sSize);
		}
		else if(cmd == "empty")
		{
			empty(sSize);
		}
		else if(cmd == "top")
		{
			top(s, sSize);
		}
		completedN++;
	}
	
	return 0;
}

//함수 구현
void push(int input, int s[], int& sSize)
{
	s[sSize] = input;
	sSize++;
}
void pop(int s[], int& sSize)
{
	//sSize == 0 이면 -1 출력, 아니면 pop
	if(sSize == 0)
		cout << -1 << endl;
	else
	{
		cout << s[sSize - 1] << endl;
		sSize--;
	}
}
void size(int sSize)
{
	cout << sSize << endl;
}
void empty(int sSize)
{
	if(sSize == 0)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}
void top(int s[], int sSize)
{
	if(sSize == 0)
		cout << -1 << endl;
	else
		cout << s[sSize - 1] << endl;
}

// 1988KB, 316ms