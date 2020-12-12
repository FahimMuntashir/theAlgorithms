#include <bits/stdc++.h>

using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count += (n & 1);
        n = (n >> 1);
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        // check the numeber is even and less than b
        if ((i & 1) == 0 && i < b)
        {
            count += 2 * countSetBits(i) + 1;
            i++;
            continue;
        }
        count += countSetBits(i);
    }

    cout << count << endl;
}