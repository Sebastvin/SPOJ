#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    while (cin>>a>>b>>c)
    {
        if (a+b>c && b+c>a && c+a>b)
        {
            if (a * a + b * b == c * c)
            {
                cout << "prostokatny" << endl;
            }
            else if (a*a+b*b>c*c)
            {
                cout << "ostrokatny" << endl;
            }
            else
            {
                cout << "rozwartokatny" << endl;
            }
        }
        else
        {
            cout << "brak"<<endl;
        }
    }

    cout << endl;
    return 0;
}
