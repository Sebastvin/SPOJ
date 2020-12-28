#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> pojLiczba(int cyfra)
{
    vector<int> liczby;
    do {
        int pojCyfra = cyfra % 10;
        liczby.push_back(pojCyfra);
        cyfra = cyfra / 10;
    } while (cyfra > 0);

    return liczby;
}

int reverseNum(int cyfra)
{
    int reverse =0, rem;
    do {
        int rem = cyfra % 10;
        reverse = reverse * 10 + rem;
        cyfra /=10;
    } while (cyfra > 0);

    return reverse;
}

vector<int> reverse(vector<int> tab)
{
    vector<int> reversed;

    for (int j = tab.size(); j > 0; j--)
    {
        reversed.push_back(tab[j - 1]);
    }

    return reversed;
}

bool isPalindrom(int num)
{
    vector<int> tab1 = pojLiczba(num);

    vector<int> tab2 = reverse(pojLiczba(num));

    if (tab1 == tab2)
        return true;
    else
        return false;
}

int main()
{
    int counter;
    int num, revNum;
    
    cin >> counter;

    for (int i = 0; i < counter; i++)
    {   
        int sum = 0;
        cin >> num;

        if (isPalindrom(num))
        {
            cout << num << " " << sum << endl;
        }
        else
        {
            for (;;)
            {
                sum++;
                revNum = reverseNum(num);
                num = num + reverseNum(num);

                if (isPalindrom(num))
                {
                    cout << num << " " << sum << endl;
                    break;
                }
            }
        }
    }
}
