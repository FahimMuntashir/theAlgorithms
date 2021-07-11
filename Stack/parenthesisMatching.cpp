
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

int isBanlanced(string s)
{
    int len = s.size();
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            if (st.empty())
            {
                return 0;
            }
            
            st.pop();
        }
        else
        {
            continue;
        }
    }

    if (st.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    f12r;

    // string s = "((((a+b))+(a-b)))";
    string s = ")()()(";
    // cin>>s;

    if (isBanlanced(s))
    {
        cout<<"balanced parenthesis"<<endl;
    }else {
        cout<<"Not balanced"<<endl;
    }
    

   

    return 0;
}