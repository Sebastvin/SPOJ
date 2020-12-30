#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << " ";
	}
}

int main()
{
	int n, a, size;
	vector<int> tab;
	cin >> n;
	while (n--)
	{
		cin >> size;
		for (int i = 0; i < size; i++)
		{
			cin >> a;
			tab.push_back(a);
		}

		reverse(tab.begin(), tab.end());
		display(tab);
		cout << "\n";
		tab.clear();
	}
}
