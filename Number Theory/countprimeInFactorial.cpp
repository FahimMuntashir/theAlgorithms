#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll get_count(ll n, ll p)
{
    ll count = 0;

    for (ll i = p; i <= n; i *= p)
    {
        count += (n / i);
    }

    return count;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << get_count(n, p) << endl;
}