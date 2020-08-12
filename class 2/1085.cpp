#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, y; //hansu's position
	int w, h; //rectangle width, height;
	cin >> x >> y >> w >> h;
	
	/*	*************(w,h)
	**  *     | <-a *
	**  *  b  |   c *
	**  *-----h=====*
	**  *     | <- d*
	**  *************
	** (0,0)
	*/
	int a, b, c, d;
	a = h-y;
	b = x;
	c = w - x;
	d = y;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	
	sort(v.begin(), v.end());
	cout << v[0];
	return 0;
}