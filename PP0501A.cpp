#include <iostream>
using namespace std;

int nwd(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int n, a, b;

	cin >> n;

	while (n--)
	{
		cin >> a >> b;
		cout << nwd(a,b)<<endl;
	}
}
