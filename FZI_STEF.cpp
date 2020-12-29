#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ile, max=0;
	cin >> ile;
	int n;
	long long s = 0;
	for (int i = 0;i < ile;i++)
	{
		cin >> n;
		if (n>0)
		{
			s = s + n;
		}
		else if (i == ile - 1)
		{
			max = s;
		}
		else 
		{
			max = s;
			s = 0;
		}

	}
	cout << max;

	return 0;
}
