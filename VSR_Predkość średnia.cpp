#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n,a,b;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        cout << (2 * (a * b)) / (a + b) << "\n";
    }
}
