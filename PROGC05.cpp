#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string ciag;
    while (getline(cin,ciag))
    {
        char brzydki=ciag[0];

        for (int i =2;i<ciag.size();i++)
        {
            if (ciag[i] != brzydki)
            {
                cout << ciag[i];
            }
        }
        cout << endl;
    }
    return 0;
}
