#include <iostream>
#include <vector>
#include <string>

using namespace std;

string toInt(string time)
{
	string s;
	for (int i = 0; i < time.length(); i++)
	{
		if (i != 2)
		{
			s += time[i];
		}
	}
	return s;
}

int main()
{
	int n, bestTime = 100000,ti;
	string name, surname, time;
	vector<string> bestRunners;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> surname >> time;
		if (bestRunners.size() == 0 || bestTime > stoi(toInt(time)))
		{
			bestTime = stoi(toInt(time));
			bestRunners.clear();
			bestRunners.push_back(name + " " + surname);
		}
		else if (bestTime == stoi(toInt(time)))
		{
		bestRunners.push_back(name + " " + surname);
		}
	}

	for (int i = 0; i < bestRunners.size(); i++)
	{
		cout << bestRunners[i] << "\n";
	}
}
