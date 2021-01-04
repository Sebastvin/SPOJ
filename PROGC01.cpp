#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> result;
	string tmp;
	while (getline(cin,tmp))
	{
		result.push_back(tmp);
	}
	cout << result.size();
	return 0;
}
