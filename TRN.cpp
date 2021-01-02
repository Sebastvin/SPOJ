#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
	

int main()
{
	int l = 0;
	int m = 0;
	int n = 0;
	cin >> m >> n;
	vector<vector<int>> t;
	for (int i =0;i<m;i++)
	{
		t.push_back(vector<int>());
		for (int j=0;j<n;j++)
		{
			cin >> l;
			t[i].push_back(l);
		}
	}
	cout << endl;
	for (int i = 0;i < n;i++)
	{	
		for (int j = 0;j < m;j++)
		{
			cout << t[j][i]<<" ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;

}
