#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int i;
    string ciag;
    while (getline(cin, ciag))
    {
        int first = 0, second = 0;
        string warunek;

        i = 0;
        while (true)
        {
            if (ciag[i]==' ')
            {
                break;
            }
            else
            {
                first *= 10;
            }

            first += ciag[i] - '0';
            i++;
        }

        warunek.push_back(ciag[i+1]);
        warunek.push_back(ciag[i+2]);

        i += 4;
        while (true)
        {
            if (i == ciag.size())
            {
                break;
            }
            else
            {
                second *= 10;
            }

            second += ciag[i] - '0';
            i++;
        }
        if (warunek == "==")
        {
            if (first == second)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (warunek == "<=")
        {
            if (first <= second)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            if (first >= second)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }


    return 0;
}
