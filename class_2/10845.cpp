#include <bits/stdc++.h>
#define MAXSIZE 10000

using namespace std;

//queue, queue's length
int q[MAXSIZE] = {0};
int len = 0;

//설명.
//push 1, push 2 했다 했을때
//
//  back   front 입니다.
//[   2,     1   ]
// 위에서 아래로 최신
// 1 | front
// 2 V back
// 

//input cmd size
int n;

//function
void push(int x);
void pop();
void size();
void empty();
void front();
void back();

int main() {
	cin >> n;
	
	string cmd;
	int x;
	for(int i = 0; i<n; i++){
		cin >> cmd;
		if(cmd == "push"){
			cin >> x;
			push(x);
		}
		else if(cmd == "pop"){
			pop();
		}
		else if(cmd == "size"){
			size();
		}
		else if(cmd == "empty"){
			empty();
		}
		else if(cmd == "front"){
			front();
		}
		else if(cmd == "back"){
			back();
		}
	}
	return 0;
}

void push(int x){
	int temp;
	for(int i = len ; i > 0; i--)
	{
		q[i] = q[i - 1];
	}
	q[0] = x;
	len++;
}

void pop(){
	if(len != 0){
		cout << q[len - 1] << "\n";
		len--;
	}
	else{ // len == 0, empty
		cout << "-1\n";
	}
}

void size(){
	cout << len << "\n";
}

void empty(){
	(len == 0) ? cout << "1\n" : cout << "0\n";
}

void front(){
	if(len != 0){
		cout << q[len-1] << "\n";
	}
	else { // empty
		cout << "-1\n";
	}
}

void back(){
	if(len != 0) {
		cout << q[0] << "\n";
	}
	else {
		cout << "-1\n";
	}
}

//2028KB, 308ms