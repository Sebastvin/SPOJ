#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool funkcja(vector<int>z,int i )
{
	for (int j = 0;j < z.size();j++)
	{
		if (z[j] == i)
			return true;
			
	}
	return false;
}

int main()
{
		string sms;

		while (getline(cin, sms))
		{
			string r;
			vector<int> z;

			for (int i = 0;i < sms.size();i++)
			{
				if (sms[i] == ' ')
				{
					r.push_back(toupper(sms[i + 1]));
					z.push_back(i + 1);
				}
				else
				{
					if (!funkcja(z, i))
					{
						r.push_back(sms[i]);
					}

				}
			}
			cout << r << endl;
		}

}
