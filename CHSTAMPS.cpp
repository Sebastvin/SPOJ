#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string word;
    while (cin >> word)
    {
        for (int i = word.length() - 1;i >= 0;i--)
        {
            cout << word[i];
        }
        cout << endl;

    }


    cout << endl;
    return 0;
}
