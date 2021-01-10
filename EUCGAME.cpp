#include <iostream>
using namespace std;

int main()
{
	int n, a, b, sum;

	cin >> n;

	while (n--)
	{
		cin >> a >> b;
		while (a != b)
		{
			if (a > b)
			{
				a -= b;
			}

			if (b > a)
			{
				b -= a;
			}
		}
		cout << a + b << "\n";
	}
}
