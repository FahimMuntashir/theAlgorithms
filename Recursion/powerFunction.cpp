
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


int powerOfNumber(int n, int power){
    if (power==0)
    {
        return 1;
    }else {
        return powerOfNumber(n,power-1)*n;
    }
    
}

/********** Main()  function **********/

int main()
{
    f12r;      
    int n,power;
    cin>>n>>power;
    cout<<powerOfNumber(n,power)<<endl;    
 
    return 0;
}