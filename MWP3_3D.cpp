#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	const double pi = acos(-1.0);
	long long ile = 0;
	cin >> ile;
	for (int i=0;i<ile;i++)
	{
		long long srednica, osoby;
		cin >> srednica >> osoby;
		
		if (osoby % 2 == 0)
		{
			double wynik = 2 * pi * (srednica / 2) / osoby;
			cout << fixed << setprecision(3) << wynik << " ";

			cout << osoby / 2 << endl;
		}
		else
		{
			double wynik = pi * (srednica / 2) / osoby;
			cout << fixed<<setprecision(3) << wynik << " ";

			cout << osoby<< endl;
		}


	}
	

	return 0;
}
