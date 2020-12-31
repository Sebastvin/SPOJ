#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,half;
	string str;

	cin >> n;
	while (n--)
	{
		cin >> str;
		half = str.length()/2;

		for (int i = 0; i < half; i++)
		{
			cout << str[i];
		}

		cout << "\n";
	}
}
