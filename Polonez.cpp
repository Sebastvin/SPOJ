#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int n;
vector<int> tab;
string name;
int man=0;
int girl=0;
int x = 0;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        tab.push_back(n);
    }

    for (int i = 0; i < tab.size(); i++)
    {
        for (int j = 0; j < tab[i]; j++)
        {
            cin >> name;

            if (name[name.length() - 1] == 'a')
            {
                girl++;
            }
            else
            {
                man++;
            }

        }
    }

    if (man > girl)
    {
        cout << girl;
    }
    else
    {
        cout << man;
    }
}
