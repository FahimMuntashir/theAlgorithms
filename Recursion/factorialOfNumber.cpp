
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include<bits/stdc++.h>
 
using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD     1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

int factorialOfNumber(int n){
    if (n==0)
    {
        return 1;
    }else {
        return factorialOfNumber(n-1)*n;
    }
    
}

/********** Main()  function **********/

int main()
{
    f12r;      
    int n;
    cin>>n;

    cout<<factorialOfNumber(n)<<endl;    
 
    return 0;
}