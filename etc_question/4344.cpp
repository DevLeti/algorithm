#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int s; // student
    vector<int> score;
    int input;
    int sum;
    double average;
    int p; // person who got more score than average
    
    cout << fixed; // 소수점 고정
    cout.setprecision(3); // 소수점 나타낼 자리수
    for(int i = 0; i < n; i++)
    {
        score.clear();
        p = 0;
        sum = 0;
        average = 0;
        
        cin >> s;
        for(int j = 0; j < s; j++)
        {
            cin >> input;
            score.push_back(input);
            sum += input;
        }
        average = (double)sum / s;
        //cout << "average : " << average << endl;
        for(int j = 0; j < s; j++)
        {
            //cout << "score " << j+1 << ": " << score[j] << endl;
            if(score[j] > average)
            {
                p++;
            }
        }
        cout << ((double)p/s) * 100 << "%\n";
    }
    
    return 0;
}
// 2016KB, 4ms