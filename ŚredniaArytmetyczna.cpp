#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, length, num, x, sum;
	double avg = 0.0, min= 10000.0, distance;
	vector<int> tab;

	cin >> n;
	while (n--)
	{
		sum = 0;
		avg = 0.0;
		min = 10000.0;

		cin >> length;

		for (int i = 0; i < length; i++)
		{
			cin >> num;
			tab.push_back(num);
			sum += tab[i];
		}

		avg = static_cast<double>(sum) / static_cast<double>(length);
		
		for (int i = 0; i < tab.size(); i++)
		{
			distance = abs(avg - tab[i]);

			if (min > distance)
			{
				min = distance;
				x = i;
			}
		}
		
		cout << tab[x] << '\n';
		tab.clear();
	}
}
