#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;


// http://www.algorytm.org/geometria-obliczeniowa/wspolliniowosc-trzech-punktow.html


int main()
{
	
	int ile = 0,n;
	cin >> ile;
	for (int i=0;i<ile;i++)
	{
		int xa, ya, xb, yb, xc, yc;
		cin >> xa >> ya >> xb >> yb >> xc >> yc;
		if (xa*yb+ya*xc+xb*yc-xc*yb-xa*yc-ya*xb==0)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}

	}
	

	return 0;
}
