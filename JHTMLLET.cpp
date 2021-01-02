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
			if (t[i] == '<')
			{
				for (int j = i;j < t.size();j++)
				{
					if (t[j] == '>')
					{
						cout << t[j];
						i = j;
						break;
					}

					cout << (char)toupper(t[j]);
				}
			}
			else
			{
				cout << t[i];
			}
		}
		cout << endl;
	}
	return 0;

}
