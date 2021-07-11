
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

/********** Main()  function **********/

int fact(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    f12r;
    int a, b;

    int p;
    cin >> p;
    int count = 0;
    int i = 0;
    int ans=0;
   while (ans!=p)
   {
       if (fact(i)<=p )
       {
           count++;
           ans = ans + fact(i);

       }
       i++;
       
   }
   

    cout << count << endl;

    return 0;
}