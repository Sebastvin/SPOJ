#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n, num, goodNum=0,counter=0;
	vector<int> nums;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		nums.push_back(num);
	}

	for (int i = 1; i < nums.size() - 1; i++)
	{
		goodNum = nums[i] + nums[i - 1];

		if (goodNum == nums[i + 1])
		{
			counter++;
		}

		goodNum = 0;
	}

	cout << counter;
}
