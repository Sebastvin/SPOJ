#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int ile = 0, n=0;
	cin >> ile;
	for (int i =0;i<ile;i++)
	{
		int ile2 = 0;
		cin >> ile2;
		vector<int> tab,tab2;
		for (int j = 0;j < ile2;j++)
		{
			cin >> n;
			tab.push_back(n);
		}

		tab2 = tab;
		for (int j = 0;j < tab.size();j++)
		{
			if (j + 1 > tab.size()-1)
			{
				tab[j] = tab2[0];
			}
			else
			{
				tab[j] = tab2[j + 1];
			}

		}

		for (int j = 0;j < tab.size();j++)
		{
			cout << tab[j] << " ";
		}
		cout << endl;
	}

	return 0;

}
