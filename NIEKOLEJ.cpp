#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int n = 0, k =0;
	cin >> n;
	cin >> k;
	vector<int> v, vc;
	for (int i = 0;i < n;i++)
	{
		int liczba = 0;
		cin >> liczba;
		v.push_back(liczba);
	}
	vc = v;
	for (int i = 0;i < v.size();i++)
	{
		if (i - k + 1 < 0)
		{
			v[i] = vc[v.size() -abs(i-k+1)];
		}
		else
		{
			v[i] = vc[i - k + 1];
		}
	}

	for (int i =0;i<v.size();i++)
	{
		cout << v[i]<< " ";
	}
	return 0;

}
