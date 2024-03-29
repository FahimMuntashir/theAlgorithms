
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

vector<string> generateBinary(int n)
{

    queue<string> qu;
    vector<string> res;

    qu.push("1");

    for (int i = 1; i <= n; i++)
    {
        string temp = qu.front();
        res.push_back(temp);
        qu.pop();
        qu.push(temp + "0");
        qu.push(temp + "1");
    }

    return res;
}

/********** Main()  function **********/

int main()
{
    f12r;
    int n;
    cin >> n;

    vector<string> vec;

    vec = generateBinary(n);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;

    return 0;
}