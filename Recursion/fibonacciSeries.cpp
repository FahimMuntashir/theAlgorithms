
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


// time complexity = 2 power n
int fibonacciSRecursion(int n){
    if (n<=1)
    {
        return n;
    }else {
        return fibonacciSRecursion(n-2)+fibonacciSRecursion(n-1);
    }
    
}


// time complexity = O(n)
int fibonacciSeries(int n){
    int first = 0, second = 1;
    int sum;

    for (int i = 2; i <= n; i++)
    {
        sum  = first+second;
        first = second;
        second = sum;
    }
    return sum;
    
}

/********** Main()  function **********/

int main()
{
    f12r;      
    int n;
    cin>>n;
    cout<<fibonacciSeries(n)<<endl;    
    cout<<fibonacciSRecursion(n)<<endl;    
 
    return 0;
}