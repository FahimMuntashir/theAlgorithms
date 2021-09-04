
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <iostream>
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
    // f12r;

    int node, edge;
    cout << "enter the number of nodes: ";
    cin >> node;
    cout.flush();
    cout << "enter the number of edges: ";
    cin >> edge;
    cout.flush();

    int adj[100][100];

    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            adj[i][j] = 0;
        }
    }

    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    // print the adjacency matrix

    cout << "diplay :" << endl;

    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

/* 
5 7
1 2
1 3
1 4
2 3
3 4
5 4
5 3
 */