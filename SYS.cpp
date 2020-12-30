#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int ile = 0;
	cin >> ile;
	for (int i = 0;i < ile;i++)
	{	
		vector<int> v,b;
		int n = 0,r,n1=0;
		cin >> n;
		n1 = n;
		while (n != 0)
		{
			r = n % 16;
			if (r== 10)
				v.push_back('A');
			else if (r == 11)
				v.push_back('B');
			else if (r == 12)
				v.push_back('C');
			else if (r == 13)
				v.push_back('D');
			else if (r == 14)
				v.push_back('E');
			else if (r == 15)
				v.push_back('F');
			else
				v.push_back(r);
			n = n / 16;
		}

		int y = v.size()-1;
		b = v;
		for (int x =0;x<b.size();x++,y--)
		{
			v[x] = b[y];
		}
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] >= 10)
				cout << (char)v[j];
			else
				cout << v[j];
		}
		cout << " ";

		v.clear();b.clear();
		while (n1 != 0)
		{
			r = n1 % 11;
			if (r == 10)
			{
				v.push_back('A');
			}
			else
			{
				v.push_back(r);
			}
			
			n1 /= 11;
		}
		
		int p = v.size()-1;
		b = v;
		for (int l=0;l<b.size();l++,p--)
		{
			v[l] = b[p];
		}

		for (int j = 0;j < v.size();j++)
		{
			if (v[j] >= 10)
				cout << (char)v[j];
			else
				cout << v[j];
		}
		cout << endl;
	}
	return 0;
}
