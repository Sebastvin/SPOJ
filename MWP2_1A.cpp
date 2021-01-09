#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int ile;
    cin >> ile;

    for (int j =0;j<ile;j++)
    {
        vector<int> liczby;
        int ile2;
        cin >> ile2;
        for (int i =0;i<ile2;i++)
        {
            int n;
            cin >> n;
            liczby.push_back(n);
        }

        vector<vector<int>> para;
        for (int i =0;i<liczby.size();i++)
        {
            int najwiecej = 0;
            for (int l = 0;l < liczby.size();l++)
            {
                if (liczby[l] == l + 1)
                {
                    najwiecej++;
                }
            }
            para.push_back(vector<int>());
            para[i].push_back(najwiecej);

            for (int l = 0;l < liczby.size();l++)
            {
                para[i].push_back(liczby[l]);
            }

            vector<int> kopia = liczby;
            for (int l = 0;l < liczby.size();l++)
            {
                if (l == 0)
                {
                    liczby[l] = kopia[liczby.size()-1];
                }
                else 
                {
                    liczby[l] = kopia[l-1];
                }
            }

        }

        int najmniej = para[0][0], wynik=0;
        for (int i=0;i<para.size();i++)
        {
            if (najmniej < para[i][0])
            {
                najmniej = para[i][0];
                wynik = i;
            }
        }

        for (int i=1;i<para[wynik].size();i++)
        {
            cout << para[wynik][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
