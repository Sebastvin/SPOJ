#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	string t;

	while (getline(cin, t))
	{
		for (int i = 0;i < t.size();i++)
		{
			if (t[i] == ' ')
			{
				cout << " ";
			}
			else
			{
				cout << (char)((int)t[i]+3);
			}
		}
		cout << endl;
	}
	return 0;

}
