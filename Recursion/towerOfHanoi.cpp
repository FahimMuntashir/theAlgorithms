
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

void towerOfHanoi(int n, int a, int b, int c)
{
    if (n > 0)
    {
        towerOfHanoi(n - 1, a, c, b);
        cout << "moves from " << a << " to " << c << endl;
        towerOfHanoi(n - 1, b, a, c);
    }
}

void hanoi(int n, char src, char dst, char aux)
{
    if (n == 1)
        printf("Move disc from peg %c to peg %c\n", src, dst);
    else
    {
        hanoi(n - 1, src, aux, dst);
        hanoi(1, src, dst, aux);
        hanoi(n - 1, aux, dst, src);
    }
}

/********** Main()  function **********/

int main()
{
    f12r;
    cout << "enter the number of disks: " << endl;
    int n;
    cin >> n;
    towerOfHanoi(n, 1, 2, 3);

    hanoi(4, 'A', 'C', 'B');

    return 0;
}
