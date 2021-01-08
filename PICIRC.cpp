#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, b, r, n;
    cin >> a >> b >> r;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int x, y;
        cin >> x >> y;
        int wynik = 0;
        wynik = (x - a) * (x - a) + (y - b) * (y - b);
        if (wynik == (r * r))
        {
            cout << "E" << endl;
        }
        else if (wynik <(r * r))
        {
            cout << "I" << endl;
        }
        else
        {
            cout << "O" << endl;
        }
    }
    cout << endl;
    return 0;
}
