
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



void fun1(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun1(n - 1);
    }
}


void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);

        cout << n << endl;
    }
}
/********** Main()  function **********/

int main()
{
    f12r;

    int n = 5;
    fun1(n);    

    cout<<endl;

    fun2(n);
    return 0;
}