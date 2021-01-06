#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool getParity(unsigned int n) 
{ 
    bool parity = 0; 
    while (n) 
    { 
        parity = !parity; 
        n     = n & (n - 1); 
    }      
    return parity; 
} 


int main()
{
    int t;
    cin>>t;
    
    int count= 1;
    while(t--)
    {
        cout<<"Case "<<count<<": ";
        ll n;
        cin>>n;
        int ans = getParity(n);
        
        if(ans)
        {
            cout<<"odd"<<endl;
        }else {
            cout<<"even"<<endl;
        }
        count++;
    }
}