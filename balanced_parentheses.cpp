#include<bits/stdc++.h>

using namespace std;


bool AreParanthesesBalanced(string exp)
{
    stack<char> st;
    
    
    for(int i=0; i<exp.size(); i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            st.push(exp[i]);
            continue;
        }
        if(st.empty())
            return false;
        char x = st.top();
        switch(exp[i])
        {
            case ')' :
                
                if(x!='(')
                    return false;
                break;
            case '}':
                if(x!='{')
                    return false;
                break;
            case ']' :
                if(x!='[')
                    return false;
                break;
            default: 
                break;
        }
        st.pop();
    }
    
    return st.empty();
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(AreParanthesesBalanced(s))
        {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}