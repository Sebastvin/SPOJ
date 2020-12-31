#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int ile = 0;
	cin >> ile;
	for (int i =0;i<ile;i++)
	{
		int ucz = 0, wynik=0;
		cin >> ucz;
		vector<int> w;

		for (int j = 0;j < ucz;j++)
		{
			cin >> wynik;
			w.push_back(wynik);
		}

		int r = w[0];
		for (int j = 0;j < w.size();j++)
		{
			if (w[j] > r)
			{
				r = w[j];
			}
		}

		for (int j = 0;j < w.size();j++)
		{
			if (r == w[j])
			{
				cout << r << " ";
				w.erase(w.begin()+j);
				j--;
			}
		}

		/* MNIEJSZE */
		while (w.size()>0)
		{
			int r = w[0];
			for (int j = 0;j < w.size();j++)
			{
				if (w[j] < r)
				{
					r = w[j];
				}
			}

			for (int j = 0;j < w.size();j++)
			{
				if (r == w[j])
				{
					cout << r << " ";
					w.erase(w.begin() + j);
					j--;
				}
			}
		}

		cout << endl;
	}

	return 0;

}
