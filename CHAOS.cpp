#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

bool palindrome(int first, int second)
{
	vector<int> v1, v2;
	
	for (int i =0;i<2;i++)
	{
		v1.push_back(first % 10);
		first /= 10;
	}

	for (int i = 0;i < 2;i++)
	{
		v2.push_back(second % 10);
		second /= 10;
	}

	int j = v2.size()-1;
	for (int i = 0;i < v1.size();i++,j--)
	{
		if (v1[i] != v2[j])
			return false;
	}
	return true;
}

int main()
{
	int ile = 0;
	cin >> ile;
	cin.ignore();
	for(int j=0;j<ile;j++)
	{
		string t;
		int first=0, second=0;
		getline(cin,t);

		for (int i = 0;i < 2;i++)
		{
			first = first * 10 + t[i]-48;

			if (t[i] - 48 == 0)
			{
				first *= 10;
			}
		}

		for (int i = 3;i < 5;i++)
		{
			second = second * 10 + t[i]-48;
		}

		while (true)
		{
			second += 1;
			if (second == 60)
			{
				second = 0;
				first += 1;
				if (first == 24)
				{
					first = 0;
				}
			}

			if (first == 0 && second == 0)
			{
				cout << "00:00" << endl;
				break;
			}
			else if (second == 0)
			{
				continue;
			}
			else if (first == 0)
			{
				cout << "00:";
				switch (second)
				{
					case 1:
						cout << "01";
						break;
					case 2:
						cout << "02";
						break;
					case 3:
						cout << "03";
						break;
					case 4:
						cout << "04";
						break;
					case 5:
						cout << "05";
						break;
					case 6:
						cout << "06";
						break;
					case 7:
						cout << "07";
						break;
					case 8:
						cout << "08";
						break;
					case 9:
						cout << "09";
						break;
				}
				cout << endl;
				break;
			}
			else if (second!=0)
			{
				if (palindrome(first, second))
				{
					cout << first << ":" << second << endl;
					break;
				}

			}
			
		}

	}
	return 0;

}
