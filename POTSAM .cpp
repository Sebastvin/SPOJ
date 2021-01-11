#include <iostream>
using namespace std;

int main()
{
	int n, k, sum=0;

	for (int i = 0; i < 2; i++)
	{
		cin >> n >> k;
		sum += n * k;
	}

	cout << sum;
}
