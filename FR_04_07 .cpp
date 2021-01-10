#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int NWD(int a, int b)
{
	int c;

	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int isFree(vector<int> tabX, vector<int> tabY, int xX, int yY)
{
	for (int i = 0; i < tabX.size(); i++)
	{
		if (tabX[i] == xX && tabY[i] == yY)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int n, xX, yY,tr, seat;
	vector<int> x = {0};
	vector<int> y = {0};

	cin >> n;

	while (n--)
	{
		cin >> xX >> yY;
		seat = NWD(abs(xX), abs(yY));
		tr = isFree(x, y, xX, yY);
		if (tr == 1 || seat != 1)
		{
			cout << "NIE" << endl;
		}
		else
		{
			cout << "TAK" << endl;
		}
		x.push_back(xX);
		y.push_back(yY);
	}
}
