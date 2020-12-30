#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int ile = 0;
	cin >> ile;
	for (int i = 0;i < ile;i++)
	{
		int n = 0;
		int x = 0;
		int y = 0;
		cin >> n;
		cin >> x;
		cin >> y;
		for (int j = 2;j < n;j++)
		{
			if (j % x == 0 && j % y != 0)
			{
				cout << j << " ";
			}
		}

	}
	return 0;

}
