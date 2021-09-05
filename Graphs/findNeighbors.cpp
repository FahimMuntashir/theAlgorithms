
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

int main()
{
    f12r;

    int nodes, edges;
    cin >> nodes >> edges;

    int adj[100][100];

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
        {
            adj[i][j] = 0;
        }
    }

    for (int i = 1; i <= edges; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    // print
    // for (int i = 1; i <= nodes; i++)
    // {
    //     for (int j = 1; j <= nodes; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    // find neighbors

    int x;
    cin >> x;

    for (size_t i = 1; i <= nodes; i++)
    {
        cout << adj[x][i] << " ";
    }

    return 0;
}