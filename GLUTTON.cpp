#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int ilee(int s, int y)
{
	int r = y;
	while (y<s)
	{
		y = y + y*1;
	}
	y /= r;
	return y;
}

int main()
{
	int ile = 0, x=0,y=0,n=0;
	cin >> ile;
	for (int i =0;i<ile;i++)
	{
		vector<int> czas, r;
		cin >> x;
		cin >> y;
		for (int j = 0;j < x;j++)
		{
			cin >> n;
			czas.push_back(n);
			r.push_back(floor(86400/czas[j]));
		}
		int s = 0;
		for (int j = 0;j < r.size();j++)
		{
			s += r[j];
		}
		cout << ilee(s, y) << endl;
	}

	return 0;

}
