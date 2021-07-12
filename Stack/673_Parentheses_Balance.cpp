
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

bool ArePair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    return false;
}

int isBalanced(string s)
{

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(i);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty() || ArePair(st.top(), s[i]))
            {
                return 0;
            }
            else
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
        return 0;
}

int main()
{
    f12r;

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (isBalanced(s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}