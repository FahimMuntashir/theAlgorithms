
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

bool arePair(char opening, char closing)
{

    if (opening == '(' && closing == ')')
    {
        return true;
    }
    else if (opening == '{' && closing == '}')
    {
        return true;
    }
    else if (opening == '[' && closing == ']')
    {
        return true;
    }

    else
        return false;
}

int main()
{
    f12r;
    stack<char> st;

    string s = "()()()()";
    // string s = "{[(())]}";


    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty() || !arePair(st.top(), s[i]))
            {
                cout << "not balanced" << endl;
                return 0;
            }

            else
            {
                st.pop();
            }
        }
    }

    if (st.empty())
    {
        cout << "balenced" << endl;
    }
    else
    {
        cout << "Not balenced" << endl;
    }

    return 0;
}