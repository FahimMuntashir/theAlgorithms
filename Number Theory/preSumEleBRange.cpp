#include <bits/stdc++.h>

using namespace std;

void preSumEleInRange(vector<int> vec, int f[])
{
    for (int i = 0; i < vec.size(); i++)
    {
        f[vec[i]]++;
    }
    // f[0] = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        f[i] = f[i] + f[i - 1];
    }
}

int main()
{

    vector<int> v{5, 4, 7, 9, 10, 0, 1, 5, 9, 2, 1};
    int f[100];
    preSumEleInRange(v, f);

    int l, r;
    cin >> l >> r;

    if (l > 0)
    {
        cout << f[r] - f[l - 1] << endl;
    }
    else
    {
        cout << f[r] << endl;
    }

    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<f[i]<< " ";
    // }
    // cout<<endl;
}