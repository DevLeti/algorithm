#include <bits/stdc++.h>

using namespace std;

int main()
{
	int case_count;
	cin >> case_count;
	
	vector<string> words;
	string input;
	
	int max_word_size = 0; //뒤에 쓰임.
	for(int i = 0; i < case_count; i++)
	{
		cin >> input;
		words.push_back(input);
		if(max_word_size < input.length())
		{
			max_word_size = input.length();
		}
	}
	
	/*
	string의 <, >는 사전순이다.
	*/
	sort(words.begin(), words.end());
	
	/*
	unique : 중복되는 값을 뒤로 밀어버림.
			 return값은 중복되는 값의 index.
	erase : 범위 시작 ~ 범위 끝 까지 원소 삭제.
	*/
	words.erase(unique(words.begin(), words.end()), words.end());
	
	
	/*
	
	여기 복잡도가 O(n^2)인데 줄일 방법이 없을까..?
	
	*/
	for(int i = 1; i < max_word_size + 1; i++)
	{
		for(auto elem : words)
		{
			if(elem.length() == i)
			{
				cout << elem << endl;
			}
		}
	}
	
	//memory : 4492kb, time : 828ms
	return 0;
}