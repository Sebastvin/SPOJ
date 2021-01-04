#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
string t;
vector<int> num;
vector<int> test;

int main()
{
	cin >> n;
	string day;
	int  index, tmp, finalDay;
	vector<string> tab = {"Pn", "Wt", "Sr", "Cz", "Pt", "So", "Nd"};

	while (n--)
	{
		cin >> day >> index;

		for (int i = 0; i < tab.size(); i++)
		{
			if (day == tab[i])
			{
				tmp = i;
			}
		}

		finalDay = tmp + index;

		for (;;)
		{
			if (finalDay > 6)
			{
				finalDay = finalDay - 7;
			}

			if (finalDay <= 6)
			{
				break;
			}
		}

		cout << tab[finalDay] << endl;
	}
}
