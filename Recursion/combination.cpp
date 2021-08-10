
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

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

// normal way
int combinationNormal(int n, int r)
{

    int f = fact(n);

    int ans = f / (fact(r) * (fact(n - r)));
    return ans;
}

int combinationRecursion(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return combinationRecursion(n - 1, r - 1) + combinationRecursion(n - 1, r);
    }
}

/********** Main()  function **********/

int main()
{
    f12r;
    int n, r;
    cin >> n >> r;

    cout << combinationRecursion(n, r) << endl;

    return 0;
}