#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, num;
    long long sum = 0;
    long long max = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        sum += num;
        if (sum > max)
        {
           max=sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << max<<endl;
}
