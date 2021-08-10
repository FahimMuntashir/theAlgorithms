
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


double seriesOfExpansion(int x, int n){
    static double power=1, fact = 1;

    double result;

    if (n==0)
    {
        return 1;
    }else {
        result = seriesOfExpansion(x, n-1);
        power*= x;
        fact *= n;
        return result + (power/fact);
    }
    
}
/********** Main()  function **********/

int main()
{
    f12r;      
    int x,n;
    cin>>x>>n;
    cout<<seriesOfExpansion(x,n)<<endl;    
 
    return 0;
}