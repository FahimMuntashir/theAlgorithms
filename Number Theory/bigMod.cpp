#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll bigMod(ll base, ll pow, ll mod)
{
    if (pow == 0)
    {
        return 1 % mod;
    }
    if (pow % 2 == 1)
    {
        int a = base % mod;
        int b = (bigMod(base, pow - 1, mod)) % mod;

        return (a * b) % mod;
    }
    else
    {
        int a = (bigMod(base, pow / 2, mod)) % mod;

        return (a * a) % mod;
    }
}

int main()
{
    ll base, pow, mod;

    cin >> base >> pow >> mod;

    cout << bigMod(base, pow, mod) << endl;
}