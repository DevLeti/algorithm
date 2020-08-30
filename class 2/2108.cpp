#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int n ; // 1 <= n <= 500,000
	cin >> n;
	
	//input
	vector<int> n_v;
	int in ; // -4000 <= in <= 4000
	for(int i = 0; i < n; i ++)
	{
		cin >> in;
		n_v.push_back(in);
	}
	
	//sort
	sort(n_v.begin(), n_v.end());

	//산술평균 구하기
	double ans1 = 0;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += n_v[i];
	}
	ans1 = (double)sum / n_v.size();
	// cout << float(ans1 - (int)ans1) << endl;
	if(ans1 >= 0)
	{
		if( double(ans1 - (int)ans1) > 0.5)
			{
				cout << (int) ans1 + 1 << "\n";
			}
			else
			{
				cout << (int) ans1 << "\n";
			}
	}
	else
	{
		if( double(ans1 - (int)ans1) < -0.5)
			{
				cout << (int) ans1 -1 << "\n";
			}
			else
			{
				cout << (int) ans1 << "\n";
			}
	}
	
	
	
	//중앙값
	cout << n_v[n_v.size() / 2] << "\n";
	
	//최빈값
	vector<int> max_used;
	int integer = n_v[0];
	if(n_v.size() == 1) //input size가 한개면 볼 필요도 없음
	{
		max_used.push_back(integer);
	}
	else
	{
		int used_count = 0;
		int max_count = 0;
		for(int i = 0; i < n_v.size(); i++)
			{
				// cout << "현재 integer = " << integer << endl;
				if(n_v[i] == integer)
				{
					used_count ++;
				}
				
				if ( n_v[i] != integer || i == n_v.size() - 1) // n_v[i] != integer, 새로운 수 등장시
				{
					if(used_count > max_count) // 새로운 최빈값?
					{
						// cout << "새로운 최빈값" << endl;
						// cout << integer << endl;
						max_used.clear(); //vec 초기화
						max_count = used_count; //max count 바꾸기
						max_used.push_back(integer); // 최빈값 넣기
					}
					else if(used_count == max_count) // 빈도수 같은 새로운 최빈값
					{
						// cout << "빈도수 같은 새로운 최빈값" << endl;
						// cout << integer << endl;
						max_used.push_back(integer); // 최빈값 넣기
					}
					integer = n_v[i]; // 세고 있는 숫자 바꾸기
					used_count = 1; // used_count 초기화
				}
			}
		sort(max_used.begin(), max_used.end());
	}
	
	// cout << "---" << endl;
	// for(int i = 0 ;i < max_used.size(); i++)
	// {
	// 	cout << max_used[i] << endl;
	// }
	// cout << "---" << endl;
	
	if(max_used.size() > 1)
	{
		cout << max_used[1] << "\n";
	}
	else
	{
		cout << max_used[0] << "\n";
	}
	
	// 범위
	int range = n_v[n_v.size() - 1] - n_v[0];
	if(range < 0)
	{
		cout << range * -1 << "\n";
	}
	else
	{
		cout << range << "\n";
	}
	
	return 0;
}
//5068kb, 228ms