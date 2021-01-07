#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, start, x, counter = 0, left = 0, right = 0, l=0, r=0;
	string s;

	cin >> n >> s;

	start = (s.length() / 2);
	x = start;
	left = x;
	right = x;
	l = x;
	r = x;

	for (int i = 0; i < s.length(); i++)
	{
		left = l;
		right = r;

		if (start != -1)
		{
			for (int j = 0; j < start; j++)
			{
				cout << ".";
			}

			if (left != 0)
			{
				left = left - counter - 1;

				for (int k = 0; k<counter; k++)
				{	
					left++;
					cout << s[left];
				}
			}

			cout << s[x];

			if (right != 0)
			{
				for (int k = 0; k < counter; k++)
				{
					right++;
					cout << s[right];
				}
			}

			for (int j = 0; j < start; j++)
			{
				cout << ".";
			}
	
			start--;
			counter++;
			cout << endl;
		}
	}
}
