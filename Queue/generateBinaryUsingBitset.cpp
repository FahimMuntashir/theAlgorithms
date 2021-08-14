
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


vector<string> generateBinaryBitset(int n){
    vector<string> res;

    for (int i = 1; i <= n; i++)
    {
        bitset<8> bs(i);
        res.push_back(bs.to_string());

    }
    return res;
    
}

/********** Main()  function **********/

int main()
{
    f12r;      

    int n;
    cin>>n;

    vector<string> vec;
    vec  = generateBinaryBitset(n);       


    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
 
    return 0;
}