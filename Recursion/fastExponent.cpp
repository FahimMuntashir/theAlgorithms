
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

int powerOfExp(int n, int pow)
{

    if (pow == 0)
    {
        return 1;
    }
    if (pow % 2 == 0)
    {
        return powerOfExp(n * n, pow / 2);
    }
    else
    {
        return n * powerOfExp(n * n, (pow - 1) / 2);
    }
}

/********** Main()  function **********/

int main()
{
    f12r;
    int num, pow;
    cin >> num >> pow;

    cout << powerOfExp(num, pow) << endl;

    return 0;
}