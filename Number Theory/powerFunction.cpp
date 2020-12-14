#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll power(ll base, ll exp)
{

    if (exp == 0)
    {
        return 1;
    }

    if (exp % 2 == 0)
    {
        ll half = power(base, exp / 2);

        return half * half;
    }
    else
    {
        return power(base, exp - 1) * base;
    }
}

int main()
{
    int base, pow;
    cin >> base >> pow;
    cout << power(base, pow) << endl;
}