
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double eps = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

ll ascending(ll number)
{
    int sorted = 0;
    int digits = 10;
    int sortedDigits = 1;
    bool first = true;

    while (number > 0)
    {
        int digit = number % 10;

        if (!first)
        {

            int tmp = sorted;
            int toDivide = 1;
            for (int i = 0; i < sortedDigits; i++)
            {
                int tmpDigit = tmp % 10;
                if (digit >= tmpDigit)
                {
                    sorted = sorted / toDivide * toDivide * 10 + digit * toDivide + sorted % toDivide;
                    break;
                }
                else if (i == sortedDigits - 1)
                {
                    sorted = digit * digits + sorted;
                }
                tmp /= 10;
                toDivide *= 10;
            }
            digits *= 10;
            sortedDigits += 1;
        }
        else
        {
            sorted = digit;
        }

        first = false;
        number = number / 10;
    }

    return sorted;
}

/********** Main()  function **********/

int main()
{
    f12r;
    int n;
    cin >> n;
    cout << ascending(n) << endl;

    return 0;
}
