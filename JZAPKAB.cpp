#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int index(char s, char tab[])
{
	for (int i = 0; i < 23; i++)
	{
		if (s == tab[i])
		{
			return i;
		}
	}
}


int main()
{
	int size, sum=0;
	string n;
	char letter [23] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'v', 'x', 'y', 'z'};
	vector<int> numLetter = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500 };
	
	
	cin >> n;
	size = n.length();
	vector<char> tmp(n.begin(), n.end());


	for (int i = 0; i < size; i++)
	{
		sum += numLetter[index(tmp[i], letter)];
	}

	cout << sum;
	sum = 0;
}
