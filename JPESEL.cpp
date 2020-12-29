#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long int ile, pesel=0;
	cin >> ile;
	vector<int> tmp;

	for (int i = 0;i < ile;i++)
	{
		tmp.clear();
		int s = 0;
		cin >> pesel;

		while (pesel != 0)
		{
			tmp.push_back(pesel % 10);
			pesel /= 10;
		}

		int z = 0;
		vector<int> tmp1 = tmp;
		for (int j = tmp1.size() - 1;j >= 0;j--,z++)
		{
			tmp[z] = tmp1[j];
		}

		int licznik = 0;
		for (int j = 0; j < tmp.size(); j = j + 4)
		{
			if (j != 8)
			{
				s += tmp[j] * 1;
				s += tmp[j + 1] * 3;
				s += tmp[j + 2] * 7;
				s += tmp[j + 3] * 9;
			}
			else
			{
				s += tmp[j] * 1;
				s += tmp[j + 1] * 3;
				s += tmp[j + 2] * 1;
			}
		}
		
		if (s % 10 == 0)
			cout << "D"<<endl;
		else
			cout << "N"<<endl;
	}
	return 0;
}
